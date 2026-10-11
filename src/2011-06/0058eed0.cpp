// from server: 79% by atomic.potato
struct W4ThreadPoolConfig {
    char pad0[0x68];
    int* begin;
    int* end;
    int getIndex(int);
    int getValue(int);
};

int W4ThreadPoolConfig::getValue(int index) {
    int* p = (int*)getIndex(index);
    int v = *p;
    if (v < 0)
        return 0;
    int count = (int)(((char*)end - (char*)begin) >> 2);
    if ((unsigned)v >= (unsigned)count)
        return 0;
    return begin[v];
}
