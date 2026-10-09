// roc 2009-06 0040e9c0  unit: UIEnumConnections::V?$CComEnum::?$CComObject  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0040e9c0
//
// 0040e9c0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0040e9c4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0040e9c8  8b542404             mov edx, dword ptr [esp + 4]
// 0040e9cc  50                   push eax
// 0040e9cd  51                   push ecx
// 0040e9ce  68f4e08a00           push 0x8ae0f4
// 0040e9d3  52                   push edx
// 0040e9d4  e84775ffff           call 0x405f20
// 0040e9d9  c20c00               ret 0xc
// copied from an identical function in another client (function ?sub_404880@ns_ROCX000078@@YGHHHH@Z)

namespace ns_ROCX000078 {
extern "C" int __stdcall sub_4022a0(int, void*, int, int);

extern int G_784f68;

int __stdcall sub_404880(int a1, int a2, int a3)
{
    return sub_4022a0(a1, &G_784f68, a2, a3);
}
}
