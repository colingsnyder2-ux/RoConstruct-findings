// from server: 58% by atomic.potato
extern char G;
char* func_0081c470();

extern "C" void* __stdcall func_007f3c3e(char*);

struct CXTPReportControlCReportDropTarget
{
    void sub_81f180(char*);
};

void CXTPReportControlCReportDropTarget::sub_81f180(char* p)
{
    char* r = func_0081c470();
    void* o = func_007f3c3e(r);
    if (o)
    {
        int* v = *(int**)o;
        int (__stdcall *fn)(void*, int, int, int);
        fn = (int (__stdcall *)(void*, int, int, int))v[0x254 / 4];
        fn(o, 0, -1, -1);
    }
}
