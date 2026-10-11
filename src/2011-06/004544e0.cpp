// from server: 77% by atomic.potato
struct CRenderSettingsW4MaterialQualityEnumDesc {
    char pad0[0x68];
    int* begin;
    int* end;
    int lookup(int) const;
};

extern "C" int* __stdcall sub_453DB0(int);

int CRenderSettingsW4MaterialQualityEnumDesc::lookup(int a) const {
    int* p = sub_453DB0(a);
    int v = *p;
    if (v < 0) return 0;
    int n = (int)((end - begin) >> 2);
    if ((unsigned)v >= (unsigned)n) return 0;
    return begin[v];
}
