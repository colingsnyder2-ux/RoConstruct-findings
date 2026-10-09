// roc 2008-06 005a9640  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a9640
//
// 005a9640  56                   push esi
// 005a9641  8b742408             mov esi, dword ptr [esp + 8]
// 005a9645  57                   push edi
// 005a9646  6a00                 push 0
// 005a9648  6a02                 push 2
// 005a964a  56                   push esi
// 005a964b  e870800600           call 0x6116c0
// 005a9650  8bf8                 mov edi, eax
// 005a9652  a1c0b19500           mov eax, dword ptr [0x95b1c0]
// 005a9657  50                   push eax
// 005a9658  6a01                 push 1
// 005a965a  56                   push esi
// 005a965b  e8507f0600           call 0x6115b0
// 005a9660  56                   push esi
// 005a9661  57                   push edi
// 005a9662  50                   push eax
// 005a9663  e898330700           call 0x61ca00
// 005a9668  83c424               add esp, 0x24
// 005a966b  5f                   pop edi
// 005a966c  33c0                 xor eax, eax
// 005a966e  5e                   pop esi
// 005a966f  c3                   ret 
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
