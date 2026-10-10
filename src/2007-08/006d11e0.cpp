// from server: 77% by colin
struct CXTPReportInplaceControl
{
    char pad0[4];
    int field4;
    int field8;
    int fieldC;
    int field10;
    char pad14[16];
    void SetControl(int* p);
};

extern "C" int __stdcall InterlockedIncrement(int* p);

extern "C" void __stdcall sub_6301E4(int);

void CXTPReportInplaceControl::SetControl(int* p)
{
    if (field8 != 0)
    {
        sub_6301E4(field8);
        field8 = 0;
    }
    if (p != 0)
    {
        field10 = p[4];
        field4 = p[1];
        field8 = p[2];
        fieldC = p[3];
        InterlockedIncrement((int*)(field8 + 4));
        *(int*)((char*)this + 0x14) = *(int*)((char*)p + 0x14);
        *(int*)((char*)this + 0x18) = *(int*)((char*)p + 0x18);
        *(int*)((char*)this + 0x1C) = *(int*)((char*)p + 0x1C);
        *(int*)((char*)this + 0x20) = *(int*)((char*)p + 0x20);
    }
    else
    {
        field10 = 0;
        field4 = 0;
        field8 = 0;
        fieldC = 0;
    }
}
