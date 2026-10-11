// from server: 67% by atomic.potato
struct CXTPReportColumn {
    char pad[0x24];
    int field24;
    int getWidth(int);
};

extern "C" int (__stdcall *g_pfn98ddb4)(void*, void*);
extern "C" int (__stdcall *g_pfn98de80)(void*, int);
extern "C" int (__stdcall *g_pfn98b16c)(int, int, int);

int CXTPReportColumn::getWidth(int a)
{
    int local;
    int r1 = g_pfn98ddb4(&field24, &local);
    int r2 = g_pfn98de80(&field24, r1);
    int v = *(int*)((char*)this + 8);
    g_pfn98b16c(v, r2, a);
    return local;
}
