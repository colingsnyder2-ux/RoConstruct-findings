// roc 2008-06 005a9760  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a9760
//
// 005a9760  56                   push esi
// 005a9761  8b742408             mov esi, dword ptr [esp + 8]
// 005a9765  57                   push edi
// 005a9766  6a00                 push 0
// 005a9768  6a02                 push 2
// 005a976a  56                   push esi
// 005a976b  e8507f0600           call 0x6116c0
// 005a9770  8bf8                 mov edi, eax
// 005a9772  a1e8b19500           mov eax, dword ptr [0x95b1e8]
// 005a9777  50                   push eax
// 005a9778  6a01                 push 1
// 005a977a  56                   push esi
// 005a977b  e8307e0600           call 0x6115b0
// 005a9780  56                   push esi
// 005a9781  57                   push edi
// 005a9782  50                   push eax
// 005a9783  e878320700           call 0x61ca00
// 005a9788  83c424               add esp, 0x24
// 005a978b  5f                   pop edi
// 005a978c  33c0                 xor eax, eax
// 005a978e  5e                   pop esi
// 005a978f  c3                   ret 
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
