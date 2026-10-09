// roc 2010-06 00455f10  unit: VCWorkspace::?$CComObject  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00455f10
//
// 00455f10  8b442408             mov eax, dword ptr [esp + 8]
// 00455f14  8b08                 mov ecx, dword ptr [eax]
// 00455f16  3b0de8b9a000         cmp ecx, dword ptr [0xa0b9e8]
// 00455f1c  7532                 jne 0x455f50
// 00455f1e  8b5004               mov edx, dword ptr [eax + 4]
// 00455f21  3b15ecb9a000         cmp edx, dword ptr [0xa0b9ec]
// 00455f27  7527                 jne 0x455f50
// 00455f29  8b4808               mov ecx, dword ptr [eax + 8]
// 00455f2c  3b0df0b9a000         cmp ecx, dword ptr [0xa0b9f0]
// 00455f32  751c                 jne 0x455f50
// 00455f34  8b500c               mov edx, dword ptr [eax + 0xc]
// 00455f37  3b15f4b9a000         cmp edx, dword ptr [0xa0b9f4]
// 00455f3d  7511                 jne 0x455f50
// 00455f3f  b801000000           mov eax, 1
// 00455f44  33c9                 xor ecx, ecx
// 00455f46  85c0                 test eax, eax
// 00455f48  0f94c1               sete cl
// 00455f4b  8bc1                 mov eax, ecx
// 00455f4d  c20800               ret 8
// 00455f50  33c0                 xor eax, eax
// 00455f52  33c9                 xor ecx, ecx
// 00455f54  85c0                 test eax, eax
// 00455f56  0f94c1               sete cl
// 00455f59  8bc1                 mov eax, ecx
// 00455f5b  c20800               ret 8
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
