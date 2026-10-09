// roc 2007-03 0040acb0  unit: seg_00400000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0040acb0
//
// 0040acb0  8b442404             mov eax, dword ptr [esp + 4]
// 0040acb4  8b0d5c538b00         mov ecx, dword ptr [0x8b535c]
// 0040acba  6a00                 push 0
// 0040acbc  50                   push eax
// 0040acbd  6a6e                 push 0x6e
// 0040acbf  51                   push ecx
// 0040acc0  e82bc1ffff           call 0x406df0
// 0040acc5  c20400               ret 4
// copied from an identical function in another client (function ?sub_40A530@ns_ROCX000000@@YGHH@Z)

namespace ns_ROCX000000 {
extern "C" int __stdcall sub_406F90(int, int, int, int);

int g_8bae44;

int __stdcall sub_40A530(int a1)
{
    return sub_406F90(g_8bae44, 0x6e, a1, 0);
}
}
