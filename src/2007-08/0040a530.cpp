// from server: 100% by colin
// roc 2007-08 0040a530  unit: VCApp::?$CComAggObject  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040a530
//
// 0040a530  8b442404             mov eax, dword ptr [esp + 4]
// 0040a534  8b0d44ae8b00         mov ecx, dword ptr [0x8bae44]
// 0040a53a  6a00                 push 0
// 0040a53c  50                   push eax
// 0040a53d  6a6e                 push 0x6e
// 0040a53f  51                   push ecx
// 0040a540  e84bcaffff           call 0x406f90
// 0040a545  c20400               ret 4

extern "C" int __stdcall sub_406F90(int, int, int, int);

int g_8bae44;

int __stdcall sub_40A530(int a1)
{
    return sub_406F90(g_8bae44, 0x6e, a1, 0);
}
