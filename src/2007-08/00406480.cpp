// from server: 57% by colin
// roc 2007-08 00406480  unit: VCWorkspace::?$CComObject  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00406480
//
// 00406480  8b442418             mov eax, dword ptr [esp + 0x18]
// 00406484  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00406488  8b542410             mov edx, dword ptr [esp + 0x10]
// 0040648c  50                   push eax
// 0040648d  8b442410             mov eax, dword ptr [esp + 0x10]
// 00406491  51                   push ecx
// 00406492  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00406496  52                   push edx
// 00406497  50                   push eax
// 00406498  51                   push ecx
// 00406499  b9e40d8800           mov ecx, 0x880de4
// 0040649e  e87df8ffff           call 0x405d20
// 004064a3  c21800               ret 0x18

struct VCWorkspaceCComObject {
    int __stdcall f(int, int, int, int, int, int);
};

int __stdcall VCWorkspaceCComObject::f(int a, int b, int c, int d, int e, int f)
{
    extern int __stdcall sub_405D20(int, int, int, int, int, int);
    return sub_405D20(a, b, c, d, e, f);
}
