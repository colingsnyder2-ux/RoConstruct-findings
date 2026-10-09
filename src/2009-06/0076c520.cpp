// roc 2009-06 0076c520  unit: CXTPControls  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0076c520
//
// 0076c520  8b442404             mov eax, dword ptr [esp + 4]
// 0076c524  6a00                 push 0
// 0076c526  6a00                 push 0
// 0076c528  50                   push eax
// 0076c529  6a00                 push 0
// 0076c52b  e830e0ffff           call 0x76a560
// 0076c530  c20400               ret 4
// copied from an identical function in another client (function ?sub_0067c5e0@ns_ROCX00002c@@YGHH@Z)

namespace ns_ROCX00002c {
extern "C" int __stdcall sub_0067a6c0(int, int, int, int);

int __stdcall sub_0067c5e0(int arg)
{
    return sub_0067a6c0(0, arg, 0, 0);
}
}
