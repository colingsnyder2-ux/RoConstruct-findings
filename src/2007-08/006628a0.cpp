// from server: 44% by colin
struct CXTPReportRecordItemText {
    void construct(double);
    char pad[0x80];
    double value;
};

extern "C" {
    void __stdcall sub_77ddb8(void*);
    void __stdcall sub_77d434(void*, void*);
    void __cdecl sub_630d23(void*);
    void __cdecl sub_653f40();
}

extern unsigned char g_8c87f4;
extern unsigned char g_8c87f0[];
extern void* g_7c9104;

void CXTPReportRecordItemText::construct(double d)
{
    sub_653f40();
    value = d;
    *(void**)this = &g_7c9104;
    if (!(g_8c87f4 & 1)) {
        g_8c87f4 |= 1;
        sub_77ddb8(g_8c87f0);
        sub_630d23((void*)0x77cbd0);
    }
    sub_77d434(g_8c87f0, (char*)this + 0x40);
}
