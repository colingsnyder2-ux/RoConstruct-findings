// roc 2007-03 00407190  unit: seg_00400000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00407190
//
// 00407190  8b442404             mov eax, dword ptr [esp + 4]
// 00407194  8b0d5c538b00         mov ecx, dword ptr [0x8b535c]
// 0040719a  6a00                 push 0
// 0040719c  50                   push eax
// 0040719d  6a6a                 push 0x6a
// 0040719f  51                   push ecx
// 004071a0  e84bfcffff           call 0x406df0
// 004071a5  c20400               ret 4
// copied from an identical function in another client (function ?fn_ROCX00001e@ns_ROCX00001e@@YGXH@Z)

namespace ns_ROCX00001e {
extern int G;

void __stdcall sub_406f90(int, int, int, int);

void __stdcall fn_ROCX00001e(int a)
{
    sub_406f90(G, 0x6a, a, 0);
}
}
