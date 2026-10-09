// roc 2012-06 006a3ec0  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006a3ec0
//
// 006a3ec0  56                   push esi
// 006a3ec1  8b742408             mov esi, dword ptr [esp + 8]
// 006a3ec5  57                   push edi
// 006a3ec6  6a00                 push 0
// 006a3ec8  6a02                 push 2
// 006a3eca  56                   push esi
// 006a3ecb  e850fa1800           call 0x833920
// 006a3ed0  8bf8                 mov edi, eax
// 006a3ed2  a1b418de00           mov eax, dword ptr [0xde18b4]
// 006a3ed7  50                   push eax
// 006a3ed8  6a01                 push 1
// 006a3eda  56                   push esi
// 006a3edb  e830f91800           call 0x833810
// 006a3ee0  56                   push esi
// 006a3ee1  57                   push edi
// 006a3ee2  50                   push eax
// 006a3ee3  e8f8671900           call 0x83a6e0
// 006a3ee8  83c424               add esp, 0x24
// 006a3eeb  5f                   pop edi
// 006a3eec  33c0                 xor eax, eax
// 006a3eee  5e                   pop esi
// 006a3eef  c3                   ret 
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
