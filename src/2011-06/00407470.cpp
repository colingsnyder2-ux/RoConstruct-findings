// roc 2011-06 00407470  unit: VCApp::?$CComObject  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00407470
//
// 00407470  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00407474  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00407478  8b542404             mov edx, dword ptr [esp + 4]
// 0040747c  50                   push eax
// 0040747d  51                   push ecx
// 0040747e  6848baa500           push 0xa5ba48
// 00407483  52                   push edx
// 00407484  e837f3ffff           call 0x4067c0
// 00407489  c20c00               ret 0xc
// copied from an identical function in another client (function ?sub_404880@ns_ROCX000016@@YGHHHH@Z)

namespace ns_ROCX000016 {
extern "C" int __stdcall sub_4022a0(int, void*, int, int);

extern int G_784f68;

int __stdcall sub_404880(int a1, int a2, int a3)
{
    return sub_4022a0(a1, &G_784f68, a2, a3);
}
}
