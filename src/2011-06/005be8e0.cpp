// from server: 79% by atomic.potato
struct W4NormalIdEnumDesc {
    char pad0[0x68];
    int* begin;
    int* end;
    int* lookup(int) const;
    int get(int) const;
};

int W4NormalIdEnumDesc::get(int value) const {
    int idx = *lookup(value);
    if (idx < 0)
        return 0;
    int count = (int)(end - begin);
    if ((unsigned)idx >= (unsigned)count)
        return 0;
    return begin[idx];
}
