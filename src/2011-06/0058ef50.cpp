// from server: 79% by atomic.potato
struct Job {
    char pad0[0x68];
    int* begin;
    int* end;
    int getIndex(int);
    int method(int);
};

int Job::method(int a) {
    int idx = *reinterpret_cast<int*>(getIndex(a));
    if (idx < 0)
        return 0;
    if ((unsigned)idx >= (unsigned)((end - begin)))
        return 0;
    return begin[idx];
}
