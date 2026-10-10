// from server: 73% by colin
struct VCXTPReportRows_CXTPHeapObjectT
{
    char pad0[0x20];
    void* p20;
    char pad24[4];
    int idx28;
    char pad2c[4];
    void* p30;
    int count34;
    void Advance(int* p);
};

extern "C" void __stdcall sub_0062ff20();

void VCXTPReportRows_CXTPHeapObjectT::Advance(int* p)
{
    int v = *p - 1;
    void* q = p20;
    void* r = *(void**)((char*)q + 0xa0);
    void** vt = *(void***)r;
    void (__stdcall *fn)(int) = (void (__stdcall *)(int))vt[0x5c / 4];
    fn(v);

    int i = idx28;
    if (i < 0 || i >= count34)
    {
        sub_0062ff20();
        return;
    }

    int* arr = (int*)p30;
    int lim = arr[i * 2 + 1] - 1;
    if (v < lim)
    {
        *p = *p + 1;
        return;
    }

    if (i >= count34 - 1)
    {
        *p = 0;
        return;
    }

    i = i + 1;
    idx28 = i;
    if (i < 0 || i >= count34)
    {
        sub_0062ff20();
        return;
    }

    *p = arr[i * 2] + 1;
}
