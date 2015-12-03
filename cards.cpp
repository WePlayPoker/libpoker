#include "cards.h"

namespace poker {
  
  card::card(const card_suit_t suit, const card_value_t value)
    : suit(suit), value(value) {
  }

  const card_suit_t card::get_suit() {
    return this->suit;
  }

  const card_value_t card::get_value() {
    return this->value;
  }

}
