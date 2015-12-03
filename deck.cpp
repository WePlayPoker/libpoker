#include "deck.h"
#include "card.h"

#include <memory>
#include <cstdint>
#include <ctime>

namespace poker {

  deck::deck() {
    int8_t count = 0;
    for (int i = TWO; i != JOKER_VALUE; ++i) {
      for (int j = HEARTS; j != JOKER_SUIT; ++j) {
        this->cards[count++] = std::unique_ptr<card>(new card(j, i));
      }
    }

    srand(time(NULL));
  }

  card deck::draw() {
    int8_t random_card = rand() % 52 + 1; //1-52 cards
    //moves pointer ownership to hand
    //thus, there are duplicate copies in hand
    //these built-in move semantics are
    //why I used a unique_ptr
    return this->cards[random_card - 1]; //-1 for indexing
  }
}
