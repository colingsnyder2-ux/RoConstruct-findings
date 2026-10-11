// from server: 65% by atomic.potato
struct CRenderSettings {
    char pad_0000[0x68];
    int* begin;
    int* end;
    int getQualityLevel(int index);
};

extern "C" int* __stdcall sub_453D20(int* p);

int CRenderSettings::getQualityLevel(int index)
{
    int* p = sub_453D20(&index);
    int v = *p;
    if (v < 0)
        return 0;
    int count = (int)(end - begin);
    if ((unsigned int)v >= (unsigned int)count)
        return 0;
    return begin[v];
}
