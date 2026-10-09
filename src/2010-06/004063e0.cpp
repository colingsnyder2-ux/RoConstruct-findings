// roc 2010-06 004063e0  unit: VCApp::?$CComObject  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004063e0
//
// 004063e0  8b442408             mov eax, dword ptr [esp + 8]
// 004063e4  8b08                 mov ecx, dword ptr [eax]
// 004063e6  3b0df8b9a000         cmp ecx, dword ptr [0xa0b9f8]
// 004063ec  7532                 jne 0x406420
// 004063ee  8b5004               mov edx, dword ptr [eax + 4]
// 004063f1  3b15fcb9a000         cmp edx, dword ptr [0xa0b9fc]
// 004063f7  7527                 jne 0x406420
// 004063f9  8b4808               mov ecx, dword ptr [eax + 8]
// 004063fc  3b0d00baa000         cmp ecx, dword ptr [0xa0ba00]
// 00406402  751c                 jne 0x406420
// 00406404  8b500c               mov edx, dword ptr [eax + 0xc]
// 00406407  3b1504baa000         cmp edx, dword ptr [0xa0ba04]
// 0040640d  7511                 jne 0x406420
// 0040640f  b801000000           mov eax, 1
// 00406414  33c9                 xor ecx, ecx
// 00406416  85c0                 test eax, eax
// 00406418  0f94c1               sete cl
// 0040641b  8bc1                 mov eax, ecx
// 0040641d  c20800               ret 8
// 00406420  33c0                 xor eax, eax
// 00406422  33c9                 xor ecx, ecx
// 00406424  85c0                 test eax, eax
// 00406426  0f94c1               sete cl
// 00406429  8bc1                 mov eax, ecx
// 0040642b  c20800               ret 8
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
