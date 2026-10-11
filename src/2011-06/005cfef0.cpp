// from server: 81% by atomic.potato
struct W4VisualStyleEnumDesc {
    char pad0[0x68];
    int* begin;
    int* end;
    int get(int index);
};

extern "C" int* __cdecl sub_5c7600(int);

int W4VisualStyleEnumDesc::get(int index) {
    int* p = sub_5c7600(index);
    int v = *p;
    if (v < 0)
        return 0;
    if ((unsigned)v >= (unsigned)((end - begin) >> 2))
        return 0;
    return begin[v];
}
