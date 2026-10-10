// from server: 70% by colin
struct VCXTPReportRows_CXTPHeapObjectT
{
    char pad_0000[0x20];
    int field_20;
    int field_24;
    int field_28;
    char pad_002c[0x08];
    int field_34;

    void func_00663f40(int);
};

extern "C" void __fastcall sub_0062ff20();
extern "C" void __fastcall sub_006301e4();
extern "C" void __fastcall sub_006ffab0(void*, int, int);

void VCXTPReportRows_CXTPHeapObjectT::func_00663f40(int arg)
{
    int i = field_28 - 1;
    if (i >= 0)
    {
        do
        {
            if (i < 0 || i >= field_28)
            {
                sub_0062ff20();
            }
            int* p = (int*)((char*)field_24 + i * 4);
            int obj = *p;
            if (arg == 0)
            {
                *(int*)(obj + 0x5c) = 0;
                *(int*)(obj + 0x28) = -1;
            }
            sub_006301e4();
            i--;
        } while (i >= 0);
    }
    sub_006ffab0((char*)this + 0x20, 0, -1);
    int v = field_34;
    if (v != 0)
    {
        sub_006301e4();
        field_34 = 0;
    }
}
