// from server: 65% by colin
// roc 2007-08 006616c0  unit: VCXTPReportRecords::?$CXTPHeapObjectT  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006616c0
//
// 006616c0  83794000             cmp dword ptr [ecx + 0x40], 0
// 006616c4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006616c8  7514                 jne 0x6616de
// 006616ca  ff1598dd7700         call dword ptr [0x77dd98]
// 006616d0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006616d4  50                   push eax
// 006616d5  ff156cd57700         call dword ptr [0x77d56c]
// 006616db  c20800               ret 8
// 006616de  ff1598dd7700         call dword ptr [0x77dd98]
// 006616e4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006616e8  50                   push eax
// 006616e9  ff15b8dc7700         call dword ptr [0x77dcb8]
// 006616ef  c20800               ret 8

struct VCXTPReportRecords_CXTPHeapObjectT
{
    int field_0x40;
    void method(int a, int b);
};

extern "C" void __stdcall sub_77DD98();
extern "C" void __stdcall sub_77D56C(int);
extern "C" void __stdcall sub_77DCB8(int);

void VCXTPReportRecords_CXTPHeapObjectT::method(int a, int b)
{
    if (field_0x40 == 0)
    {
        sub_77DD98();
        sub_77D56C(a);
    }
    else
    {
        sub_77DD98();
        sub_77DCB8(a);
    }
}
