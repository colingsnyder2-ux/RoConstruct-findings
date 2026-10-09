// roc 2010-06 0047cc70  unit: VCContent::?$CComObject  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0047cc70
//
// 0047cc70  8b442408             mov eax, dword ptr [esp + 8]
// 0047cc74  8b08                 mov ecx, dword ptr [eax]
// 0047cc76  3b0dc8b9a000         cmp ecx, dword ptr [0xa0b9c8]
// 0047cc7c  7532                 jne 0x47ccb0
// 0047cc7e  8b5004               mov edx, dword ptr [eax + 4]
// 0047cc81  3b15ccb9a000         cmp edx, dword ptr [0xa0b9cc]
// 0047cc87  7527                 jne 0x47ccb0
// 0047cc89  8b4808               mov ecx, dword ptr [eax + 8]
// 0047cc8c  3b0dd0b9a000         cmp ecx, dword ptr [0xa0b9d0]
// 0047cc92  751c                 jne 0x47ccb0
// 0047cc94  8b500c               mov edx, dword ptr [eax + 0xc]
// 0047cc97  3b15d4b9a000         cmp edx, dword ptr [0xa0b9d4]
// 0047cc9d  7511                 jne 0x47ccb0
// 0047cc9f  b801000000           mov eax, 1
// 0047cca4  33c9                 xor ecx, ecx
// 0047cca6  85c0                 test eax, eax
// 0047cca8  0f94c1               sete cl
// 0047ccab  8bc1                 mov eax, ecx
// 0047ccad  c20800               ret 8
// 0047ccb0  33c0                 xor eax, eax
// 0047ccb2  33c9                 xor ecx, ecx
// 0047ccb4  85c0                 test eax, eax
// 0047ccb6  0f94c1               sete cl
// 0047ccb9  8bc1                 mov eax, ecx
// 0047ccbb  c20800               ret 8
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
