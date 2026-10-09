// roc 2012-06 006a37a0  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006a37a0
//
// 006a37a0  56                   push esi
// 006a37a1  8b742408             mov esi, dword ptr [esp + 8]
// 006a37a5  57                   push edi
// 006a37a6  6a00                 push 0
// 006a37a8  6a02                 push 2
// 006a37aa  56                   push esi
// 006a37ab  e870011900           call 0x833920
// 006a37b0  8bf8                 mov edi, eax
// 006a37b2  a1549eda00           mov eax, dword ptr [0xda9e54]
// 006a37b7  50                   push eax
// 006a37b8  6a01                 push 1
// 006a37ba  56                   push esi
// 006a37bb  e850001900           call 0x833810
// 006a37c0  56                   push esi
// 006a37c1  57                   push edi
// 006a37c2  50                   push eax
// 006a37c3  e8186f1900           call 0x83a6e0
// 006a37c8  83c424               add esp, 0x24
// 006a37cb  5f                   pop edi
// 006a37cc  33c0                 xor eax, eax
// 006a37ce  5e                   pop esi
// 006a37cf  c3                   ret 
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
