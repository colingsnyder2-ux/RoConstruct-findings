// from server: 77% by atomic.potato
struct CRenderSettings {
    char pad0[0x68];
    int* begin;
    int* end;
    int* getIndex(int);
    int getValue(int);
};

int CRenderSettings::getValue(int idx) {
    int i = *getIndex(idx);
    if (i < 0)
        return 0;
    if ((unsigned)i >= (unsigned)((end - begin) >> 2))
        return 0;
    return begin[i];
}
