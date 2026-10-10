// from server: 2% by colin
struct CXTPReportGroupRow_Batch
{
    char pad0[0x20];
    unsigned int field20;
    char pad24[0x15c];
    int field180;
    char pad184[0x18];
    int field19c;
    char pad1a0[0x8c];
    int field22c;
    char pad230[0x1c0 - 0x230 + 0x1c0];

    int Method(int arg);
};

extern "C" __declspec(dllimport) unsigned int __stdcall InterlockedIncrement(volatile unsigned int *);
extern "C" __declspec(dllimport) int __stdcall UpdateWindow(void *);

extern "C" int __stdcall sub_6301E4(int);
extern "C" int __stdcall sub_656810();
extern "C" int __stdcall sub_656830();
extern "C" int __stdcall sub_657410();
extern "C" int __stdcall sub_657AD0();
extern "C" int __stdcall sub_657C20();
extern "C" int __stdcall sub_65A6D0();
extern "C" int __stdcall sub_663C50();

int CXTPReportGroupRow_Batch::Method(int arg)
{
    return 0;
}
