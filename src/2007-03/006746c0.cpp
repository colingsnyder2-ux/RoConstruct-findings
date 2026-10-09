// roc 2007-03 006746c0  unit: seg_00670000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006746c0
//
// 006746c0  8b442404             mov eax, dword ptr [esp + 4]
// 006746c4  6a00                 push 0
// 006746c6  6a00                 push 0
// 006746c8  50                   push eax
// 006746c9  6a00                 push 0
// 006746cb  e8e0e0ffff           call 0x6727b0
// 006746d0  c20400               ret 4
// copied from an identical function in another client (function ?sub_0067c5e0@ns_ROCX000004@@YGHH@Z)

namespace ns_ROCX000004 {
extern "C" int __stdcall sub_0067a6c0(int, int, int, int);

int __stdcall sub_0067c5e0(int arg)
{
    return sub_0067a6c0(0, arg, 0, 0);
}
}
