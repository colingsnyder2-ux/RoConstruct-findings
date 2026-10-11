// from server: 79% by atomic.potato
struct CRenderSettings {
    char pad0[0x68];
    int* begin;
    int* end;
    int lookup(int);
};

struct Helper {
    int* get(int);
};

int CRenderSettings::lookup(int idx) {
    int* p = ((Helper*)this)->get(idx);
    int v = *p;
    if (v < 0) return 0;
    int count = (int)(end - begin);
    if ((unsigned)v >= (unsigned)count) return 0;
    return begin[v];
}
