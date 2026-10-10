// from server: 38% by colin
struct CInstanceExplorer
{
    void* vtable;
    int field_4;
    int field_8;
    int field_c;
    int field_10;
    unsigned long field_14;
    int field_18;

    CInstanceExplorer();
};

extern "C" unsigned long __stdcall GetCurrentThreadId();
extern "C" int __cdecl sub_00433A50();

CInstanceExplorer::CInstanceExplorer()
{
    vtable = (void*)0x787f54;
    field_8 = 0;
    field_c = 0;
    field_10 = 0;
    field_14 = GetCurrentThreadId();
    field_18 = sub_00433A50();
}
