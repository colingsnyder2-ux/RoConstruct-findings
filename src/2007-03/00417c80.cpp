// roc 2007-03 00417c80  unit: seg_00410000  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00417c80
//
// 00417c80  8b442404             mov eax, dword ptr [esp + 4]
// 00417c84  8b0d5c538b00         mov ecx, dword ptr [0x8b535c]
// 00417c8a  6a00                 push 0
// 00417c8c  50                   push eax
// 00417c8d  6a74                 push 0x74
// 00417c8f  51                   push ecx
// 00417c90  e85bf1feff           call 0x406df0
// 00417c95  c20400               ret 4
// copied from an identical function in another client (function ?sub_412860@ns_ROCX000000@@YGHH@Z)

namespace ns_ROCX000000 {
extern "C" int __stdcall sub_406f90(int, int, int, int);

int g_8bae44;

int __stdcall sub_412860(int a1)
{
    return sub_406f90(g_8bae44, 0x74, a1, 0);
}
}
