// roc 2011-06 006197a0  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006197a0
//
// 006197a0  56                   push esi
// 006197a1  8b742408             mov esi, dword ptr [esp + 8]
// 006197a5  57                   push edi
// 006197a6  6a00                 push 0
// 006197a8  6a02                 push 2
// 006197aa  56                   push esi
// 006197ab  e8e0a91400           call 0x764190
// 006197b0  8bf8                 mov edi, eax
// 006197b2  a1dcefc800           mov eax, dword ptr [0xc8efdc]
// 006197b7  50                   push eax
// 006197b8  6a01                 push 1
// 006197ba  56                   push esi
// 006197bb  e8c0a81400           call 0x764080
// 006197c0  56                   push esi
// 006197c1  57                   push edi
// 006197c2  50                   push eax
// 006197c3  e858140100           call 0x62ac20
// 006197c8  83c424               add esp, 0x24
// 006197cb  5f                   pop edi
// 006197cc  33c0                 xor eax, eax
// 006197ce  5e                   pop esi
// 006197cf  c3                   ret 
// copied from an identical function in another client (function ?sub_535140@ns_ROCX000008@@YAHH@Z)

namespace ns_ROCX000008 {
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
