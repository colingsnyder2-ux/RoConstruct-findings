// roc 2011-06 0045b4f0  unit: VCRoblox3D::?$CComObject  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0045b4f0
//
// 0045b4f0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0045b4f4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0045b4f8  8b542404             mov edx, dword ptr [esp + 4]
// 0045b4fc  50                   push eax
// 0045b4fd  51                   push ecx
// 0045b4fe  6888e2a600           push 0xa6e288
// 0045b503  52                   push edx
// 0045b504  e8b7b2faff           call 0x4067c0
// 0045b509  c20c00               ret 0xc
// copied from an identical function in another client (function ?sub_404880@ns_ROCX000016@@YGHHHH@Z)

namespace ns_ROCX000016 {
extern "C" int __stdcall sub_4022a0(int, void*, int, int);

extern int G_784f68;

int __stdcall sub_404880(int a1, int a2, int a3)
{
    return sub_4022a0(a1, &G_784f68, a2, a3);
}
}
