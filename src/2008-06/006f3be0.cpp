// roc 2008-06 006f3be0  unit: CXTPControls  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f3be0
//
// 006f3be0  8b442404             mov eax, dword ptr [esp + 4]
// 006f3be4  6a00                 push 0
// 006f3be6  6a00                 push 0
// 006f3be8  50                   push eax
// 006f3be9  6a00                 push 0
// 006f3beb  e830e0ffff           call 0x6f1c20
// 006f3bf0  c20400               ret 4
// copied from an identical function in another client (function ?sub_0067c5e0@ns_ROCX000031@@YGHH@Z)

namespace ns_ROCX000031 {
extern "C" int __stdcall sub_0067a6c0(int, int, int, int);

int __stdcall sub_0067c5e0(int arg)
{
    return sub_0067a6c0(0, arg, 0, 0);
}
}
