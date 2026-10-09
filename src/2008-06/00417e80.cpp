// roc 2008-06 00417e80  unit: VCLuaFunction::?$CComObject  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00417e80
//
// 00417e80  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00417e84  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00417e88  8b542404             mov edx, dword ptr [esp + 4]
// 00417e8c  50                   push eax
// 00417e8d  51                   push ecx
// 00417e8e  6814ec8000           push 0x80ec14
// 00417e93  52                   push edx
// 00417e94  e8e7a3feff           call 0x402280
// 00417e99  c20c00               ret 0xc
// copied from an identical function in another client (function ?sub_404880@ns_ROCX000023@@YGHHHH@Z)

namespace ns_ROCX000023 {
extern "C" int __stdcall sub_4022a0(int, void*, int, int);

extern int G_784f68;

int __stdcall sub_404880(int a1, int a2, int a3)
{
    return sub_4022a0(a1, &G_784f68, a2, a3);
}
}
