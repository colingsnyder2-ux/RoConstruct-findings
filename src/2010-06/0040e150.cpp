// roc 2010-06 0040e150  unit: VCBrowserViewExternal::?$CComObjectNoLock  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0040e150
//
// 0040e150  8b442408             mov eax, dword ptr [esp + 8]
// 0040e154  8b08                 mov ecx, dword ptr [eax]
// 0040e156  3b0d08baa000         cmp ecx, dword ptr [0xa0ba08]
// 0040e15c  7532                 jne 0x40e190
// 0040e15e  8b5004               mov edx, dword ptr [eax + 4]
// 0040e161  3b150cbaa000         cmp edx, dword ptr [0xa0ba0c]
// 0040e167  7527                 jne 0x40e190
// 0040e169  8b4808               mov ecx, dword ptr [eax + 8]
// 0040e16c  3b0d10baa000         cmp ecx, dword ptr [0xa0ba10]
// 0040e172  751c                 jne 0x40e190
// 0040e174  8b500c               mov edx, dword ptr [eax + 0xc]
// 0040e177  3b1514baa000         cmp edx, dword ptr [0xa0ba14]
// 0040e17d  7511                 jne 0x40e190
// 0040e17f  b801000000           mov eax, 1
// 0040e184  33c9                 xor ecx, ecx
// 0040e186  85c0                 test eax, eax
// 0040e188  0f94c1               sete cl
// 0040e18b  8bc1                 mov eax, ecx
// 0040e18d  c20800               ret 8
// 0040e190  33c0                 xor eax, eax
// 0040e192  33c9                 xor ecx, ecx
// 0040e194  85c0                 test eax, eax
// 0040e196  0f94c1               sete cl
// 0040e199  8bc1                 mov eax, ecx
// 0040e19b  c20800               ret 8
// copied from an identical function in another client (function ?f@S_func_0040b570@ns_ROCX00001c@ns_ROCX000065@@QAEHHPBH@Z)

namespace ns_ROCX00001c {
extern char G;

extern int G1_VALUE;
extern int G2_VALUE;
extern char G3_OBJ;
extern int __cdecl G4_func_00b20df0(int);
void fn_ROCX00001c()
{
    G4_func_00b20df0(G1_VALUE);
    G2_VALUE = (int)&G3_OBJ;
}
}
