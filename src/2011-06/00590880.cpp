// from server: 79% by atomic.potato
struct EThrottle {
    char pad0[0x68];
    int* begin;
    int* end;
    int getType(int);
};

struct Helper {
    int* get(int idx);
};

int EThrottle::getType(int idx) {
    int v = *((Helper*)this)->get(idx);
    if (v < 0) return 0;
    if ((unsigned)v >= (unsigned)((end - begin))) return 0;
    return begin[v];
}
