// from server: 100% by king_originala
// roc 2008-06 00416a30  unit: VCContent::?$CComObject  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00416a30
//
// 00416a30  8b442418             mov eax, dword ptr [esp + 0x18]
// 00416a34  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00416a38  8b542410             mov edx, dword ptr [esp + 0x10]
// 00416a3c  50                   push eax
// 00416a3d  8b442410             mov eax, dword ptr [esp + 0x10]
// 00416a41  51                   push ecx
// 00416a42  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00416a46  52                   push edx
// 00416a47  50                   push eax
// 00416a48  51                   push ecx
// 00416a49  b988c19200           mov ecx, 0x92c188
// 00416a4e  e83de7feff           call 0x405190
// 00416a53  c21800               ret 0x18

struct S
{
    int f(int, int, int, int, int);
};

int __stdcall sub_416a30(int unused, int a, int b, int c, int d, int e)
{
    return reinterpret_cast<S*>(0x92c188)->f(a, b, c, d, e);
}
