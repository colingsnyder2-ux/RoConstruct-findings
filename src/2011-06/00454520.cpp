// from server: 79% by atomic.potato
struct S {
    char pad[0x68];
    int* arr;
    int* arrEnd;
    int* lookup(int idx);
    int get(int idx);
};

int S::get(int idx) {
    int v = *lookup(idx);
    if (v < 0)
        return 0;
    if ((unsigned)v >= (unsigned)(arrEnd - arr))
        return 0;
    return arr[v];
}
