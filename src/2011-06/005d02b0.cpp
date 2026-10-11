// from server: 77% by atomic.potato
struct RBX_DialogRoot_W4DialogTone_EnumDesc {
    char pad_000[0x68];
    int* begin;
    int* end;
    int get(int);
};

extern int* __stdcall sub_005ca060(int);

int RBX_DialogRoot_W4DialogTone_EnumDesc::get(int a) {
    int* p = sub_005ca060(a);
    int v = *p;
    if (v < 0) return 0;
    if ((unsigned)v >= (unsigned)((end - begin) >> 2)) return 0;
    return begin[v];
}
