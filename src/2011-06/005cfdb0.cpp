// from server: 79% by atomic.potato
struct KeyframeSequence {
    char pad0[0x68];
    int* begin;
    int* end;
    int* getIndex(int) const;
    int getValue(int) const;
};

int KeyframeSequence::getValue(int index) const {
    int i = *getIndex(index);
    if (i < 0)
        return 0;
    if ((unsigned)i >= (unsigned)(end - begin))
        return 0;
    return begin[i];
}
