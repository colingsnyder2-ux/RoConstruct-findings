// from server: 100% by king_originala
// roc 2008-06 004102c0  unit: VCBrowserViewExternal::?$CComObject  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004102c0
//
// 004102c0  8b442418             mov eax, dword ptr [esp + 0x18]
// 004102c4  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004102c8  8b542410             mov edx, dword ptr [esp + 0x10]
// 004102cc  50                   push eax
// 004102cd  8b442410             mov eax, dword ptr [esp + 0x10]
// 004102d1  51                   push ecx
// 004102d2  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004102d6  52                   push edx
// 004102d7  50                   push eax
// 004102d8  51                   push ecx
// 004102d9  b944b79200           mov ecx, 0x92b744
// 004102de  e8ad4effff           call 0x405190
// 004102e3  c21800               ret 0x18

struct S {
    int forward(int a, int b, int c, int d, int e);
};

extern S globalObject;

int __stdcall dispatch(int unused, int a, int b, int c, int d, int e)
{
    return globalObject.forward(a, b, c, d, e);
}
