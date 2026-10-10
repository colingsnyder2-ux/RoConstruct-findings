// from server: 42% by colin
extern "C" {
    typedef unsigned int DWORD;
    typedef unsigned char BYTE;

    extern DWORD G_8b5188;
    extern DWORD G_8c87fc;
    extern BYTE G_8c87f8;

    void __stdcall sub_77ddb8(void*);
    void __stdcall sub_77d434(void*);
    void __cdecl sub_630d23(void*);
    void __cdecl sub_653f40();
}

struct CXTPReportRecordItemText
{
    void construct(DWORD a, DWORD b, DWORD c);
};

void CXTPReportRecordItemText::construct(DWORD a, DWORD b, DWORD c)
{
    sub_653f40();

    *(DWORD*)((char*)this + 0x7c) = a;
    *(DWORD*)((char*)this + 0x80) = b;
    *(DWORD*)((char*)this + 0x84) = c;
    *(DWORD*)this = 0x7c93cc;

    if (!(G_8c87fc & 1))
    {
        G_8c87fc |= 1;
        sub_77ddb8(&G_8c87f8);
        sub_630d23((void*)0x77cbe0);
    }

    sub_77d434((void*)0x8c87f8);
}
