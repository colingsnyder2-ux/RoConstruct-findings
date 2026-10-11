// from server: 63% by atomic.potato
struct CRenderSettings {
    char pad0[0x68];
    int* begin;
    int* end;
    int get(int);
};

extern "C" int* __stdcall sub_453C90(int*);

int CRenderSettings::get(int index)
{
    int* p = sub_453C90(&index);
    int v = *p;
    if (v < 0)
        return 0;
    int count = (int)((end - begin) >> 2);
    if ((unsigned)v >= (unsigned)count)
        return 0;
    return begin[v];
}
