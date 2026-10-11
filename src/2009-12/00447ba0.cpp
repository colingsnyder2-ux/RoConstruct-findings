// from server: 60% by atomic.potato
struct CRenderSettings {
    char pad0[0xb0];
    int* begin;
    int* end;
    int getIndex(int);
    int getValue(int);
};

extern "C" void __stdcall _invalid_parameter_noinfo();

int CRenderSettings::getValue(int idx) {
    int* p = (int*)getIndex(idx);
    int i = *p;
    if (i < 0)
        return 0;
    if ((unsigned)i >= (unsigned)((end - begin) >> 2))
        return 0;
    if ((unsigned)i >= (unsigned)((end - begin) >> 2))
        _invalid_parameter_noinfo();
    return begin[i];
}
