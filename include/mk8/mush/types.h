#ifndef _MUSH_TYPES_H
#define _MUSH_TYPES_H

namespace mush {

class EGrandPrixID {
  public:
    enum GrandPrixID {
        MUSHROOM = 0,
        SHELL,
        FLOWER,
        BANANA,
        STAR,
        LEAF,
        SPECIAL,
        THUNDER,
        DLC02,
        DLC03,
        DLC04,
        DLC05,
    };

    GrandPrixID id;

  public:
    EGrandPrixID(GrandPrixID id) {
        this->id = id;
    }

    inline GrandPrixID operator*() {
        return this->id;
    }

    inline bool isDLC() {
        return this->id >= DLC02;
    }

    bool operator==(const EGrandPrixID& rhs) const {
        return (id == rhs.id);
    }
};

class ECourseID {
  public:
    int id;

  public:
    ECourseID(int id) {
        this->id = id;
    }

    inline int operator*() {
        return this->id;
    }

    bool operator==(const ECourseID& rhs) const {
        return (id == rhs.id);
    }
};

} // namespace mush

#endif
