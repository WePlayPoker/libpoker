#ifndef __CARDS_H__
#define __CARDS_H__

namespace poker {
  typedef enum {
    HEARTS,
    DIAMONDS,
    SPADES,
    CLUBS,
    JOKER_SUIT
  } card_suit_t;

  typedef enum {
    TWO, THREE, FOUR,
    FIVE, SIX, SEVEN,
    EIGHT, NINE, TEN,
    JACK, QUEEN, KING,
    ACE, JOKER_VALUE
  } card_value_t;

  class card {
  private:
    const card_suit_t suit;
    const card_value_t value;
  public:
    card(const card_suit_t, const card_value_t);
    const card_suit_t get_suit();
    const card_value_t get_value();
  };

}
#endif
