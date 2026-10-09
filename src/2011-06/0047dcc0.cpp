// roc 2011-06 0047dcc0  unit: VCRobloxPlayer::?$CComObjectNoLock  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0047dcc0
//
// 0047dcc0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0047dcc4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0047dcc8  8b542404             mov edx, dword ptr [esp + 4]
// 0047dccc  50                   push eax
// 0047dccd  51                   push ecx
// 0047dcce  68f014a700           push 0xa714f0
// 0047dcd3  52                   push edx
// 0047dcd4  e8e78af8ff           call 0x4067c0
// 0047dcd9  c20c00               ret 0xc
// copied from an identical function in another client (function ?sub_404880@ns_ROCX000016@@YGHHHH@Z)

namespace ns_ROCX000016 {
extern "C" int __stdcall sub_4022a0(int, void*, int, int);

extern int G_784f68;

int __stdcall sub_404880(int a1, int a2, int a3)
{
    return sub_4022a0(a1, &G_784f68, a2, a3);
}
}
