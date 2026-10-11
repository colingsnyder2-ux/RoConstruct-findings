// from server: 81% by atomic.potato
struct TextServiceW4YAlignmentEnumDesc {
    char pad0[0x68];
    int* begin;
    int* end;
    int lookup(int);
};

extern "C" int* __cdecl sub_5c33a0(int);

int TextServiceW4YAlignmentEnumDesc::lookup(int a) {
    int* p = sub_5c33a0(a);
    int v = *p;
    if (v < 0)
        return 0;
    if ((unsigned int)v >= (unsigned int)((end - begin) >> 2))
        return 0;
    return begin[v];
}
