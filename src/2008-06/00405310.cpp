// from server: 100% by king_originala
// roc 2008-06 00405310  unit: VCWorkspace::?$CComObject  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00405310
//
// 00405310  8b442418             mov eax, dword ptr [esp + 0x18]
// 00405314  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00405318  8b542410             mov edx, dword ptr [esp + 0x10]
// 0040531c  50                   push eax
// 0040531d  8b442410             mov eax, dword ptr [esp + 0x10]
// 00405321  51                   push ecx
// 00405322  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00405326  52                   push edx
// 00405327  50                   push eax
// 00405328  51                   push ecx
// 00405329  b954879200           mov ecx, 0x928754
// 0040532e  e85dfeffff           call 0x405190
// 00405333  c21800               ret 0x18

struct S {
    int forward(int a, int b, int c, int d, int e);
};

int __stdcall dispatch(void* unused, int a, int b, int c, int d, int e)
{
    return reinterpret_cast<S*>(0x928754)->forward(a, b, c, d, e);
}
