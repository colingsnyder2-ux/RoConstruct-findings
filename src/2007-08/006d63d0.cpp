// from server: 65% by colin
struct CXTPReportGroupRow
{
    char pad0[0x20];
    void* field20;
    char pad24[0xcc - 0x24];
    int fieldcc;
    void Func(int, int);
};

extern "C" int __stdcall sub_656140(void*, int);
extern "C" void __stdcall sub_65a750(void*, int);

void CXTPReportGroupRow::Func(int a, int b)
{
    void* p = field20;
    if (p == 0)
        return;

    int v = *(int*)((char*)p + 0xcc);
    int esi = v;
    int t = esi + 1;
    esi = (t == 0) ? 0 : v;

    int r = sub_656140(p, esi);
    int diff = esi - r;
    if (diff < 0)
    {
        esi = 0;
    }
    else
    {
        p = field20;
        int r2 = sub_656140(p, esi);
        esi = esi - r2;
    }

    void* q = field20;
    void* ecx = *(void**)((char*)q + 0xa0);
    int (*fn)(void*, int, int, int) = *(int (**)(void*, int, int, int))((*(char**)ecx) + 0x5c);
    int res = fn(ecx, esi, a, b);
    sub_65a750(field20, res);
}
