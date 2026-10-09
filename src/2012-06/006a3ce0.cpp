// roc 2012-06 006a3ce0  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006a3ce0
//
// 006a3ce0  56                   push esi
// 006a3ce1  8b742408             mov esi, dword ptr [esp + 8]
// 006a3ce5  57                   push edi
// 006a3ce6  6a00                 push 0
// 006a3ce8  6a02                 push 2
// 006a3cea  56                   push esi
// 006a3ceb  e830fc1800           call 0x833920
// 006a3cf0  8bf8                 mov edi, eax
// 006a3cf2  a1dc13de00           mov eax, dword ptr [0xde13dc]
// 006a3cf7  50                   push eax
// 006a3cf8  6a01                 push 1
// 006a3cfa  56                   push esi
// 006a3cfb  e810fb1800           call 0x833810
// 006a3d00  56                   push esi
// 006a3d01  57                   push edi
// 006a3d02  50                   push eax
// 006a3d03  e8d8691900           call 0x83a6e0
// 006a3d08  83c424               add esp, 0x24
// 006a3d0b  5f                   pop edi
// 006a3d0c  33c0                 xor eax, eax
// 006a3d0e  5e                   pop esi
// 006a3d0f  c3                   ret 
// copied from an identical function in another client (function ?sub_535140@ns_ROCX000005@@YAHH@Z)

namespace ns_ROCX000005 {
extern "C" int __cdecl sub_5BF350(int, int, int);
extern "C" int __cdecl sub_5BF240(int, int, int);
extern "C" int __cdecl sub_56C740(int, int, int);

extern int dword_8ABE80;

int __cdecl sub_535140(int a)
{
    int v1 = sub_5BF350(a, 2, 0);
    int v2 = sub_5BF240(a, 1, dword_8ABE80);
    sub_56C740(v2, v1, a);
    return 0;
}
}
