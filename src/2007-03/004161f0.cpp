// roc 2007-03 004161f0  unit: seg_00410000  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004161f0
//
// 004161f0  8b442408             mov eax, dword ptr [esp + 8]
// 004161f4  8b08                 mov ecx, dword ptr [eax]
// 004161f6  3b0d40f17800         cmp ecx, dword ptr [0x78f140]
// 004161fc  7532                 jne 0x416230
// 004161fe  8b5004               mov edx, dword ptr [eax + 4]
// 00416201  3b1544f17800         cmp edx, dword ptr [0x78f144]
// 00416207  7527                 jne 0x416230
// 00416209  8b4808               mov ecx, dword ptr [eax + 8]
// 0041620c  3b0d48f17800         cmp ecx, dword ptr [0x78f148]
// 00416212  751c                 jne 0x416230
// 00416214  8b500c               mov edx, dword ptr [eax + 0xc]
// 00416217  3b154cf17800         cmp edx, dword ptr [0x78f14c]
// 0041621d  7511                 jne 0x416230
// 0041621f  b801000000           mov eax, 1
// 00416224  33c9                 xor ecx, ecx
// 00416226  85c0                 test eax, eax
// 00416228  0f94c1               sete cl
// 0041622b  8bc1                 mov eax, ecx
// 0041622d  c20800               ret 8
// 00416230  33c0                 xor eax, eax
// 00416232  33c9                 xor ecx, ecx
// 00416234  85c0                 test eax, eax
// 00416236  0f94c1               sete cl
// 00416239  8bc1                 mov eax, ecx
// 0041623b  c20800               ret 8
// copied from an identical function in another client (function ?f@S_func_0040b570@ns_ROCX00001c@@QAEHHPBH@Z)

namespace ns_ROCX00001c {
struct S_func_0040b570 {
    int f(int b, const int* a);
};

extern int g_790240;
extern int g_790244;
extern int g_790248;
extern int g_79024c;

int S_func_0040b570::f(int b, const int* a)
{
    int eq = (a[0] == g_790240) &&
             (a[1] == g_790244) &&
             (a[2] == g_790248) &&
             (a[3] == g_79024c);
    return !eq;
}
}
