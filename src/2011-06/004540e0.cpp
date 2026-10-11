// from server: 77% by atomic.potato
struct CRenderSettings {
    char pad_0[0x68];
    int* begin;
    int* end;
    int* lookup(int);
    int get(int);
};

int CRenderSettings::get(int index) {
    int v = *lookup(index);
    if (v < 0)
        return 0;
    if ((unsigned)v >= (unsigned)((end - begin) >> 2))
        return 0;
    return begin[v];
}
