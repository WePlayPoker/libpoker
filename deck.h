#ifndef __DECK_H_
#define __DECK_H_

#include "cards.h"

namespace poker {

  class deck {
  private:
    unique_ptr<card> cards[52];
  public:
    deck();
    card draw();
  };

}

#endif
