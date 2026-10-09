// roc 2009-06 00634880  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00634880
//
// 00634880  56                   push esi
// 00634881  8b742408             mov esi, dword ptr [esp + 8]
// 00634885  57                   push edi
// 00634886  6a00                 push 0
// 00634888  6a02                 push 2
// 0063488a  56                   push esi
// 0063488b  e830640800           call 0x6bacc0
// 00634890  8bf8                 mov edi, eax
// 00634892  a1ec2aa200           mov eax, dword ptr [0xa22aec]
// 00634897  50                   push eax
// 00634898  6a01                 push 1
// 0063489a  56                   push esi
// 0063489b  e810630800           call 0x6babb0
// 006348a0  56                   push esi
// 006348a1  57                   push edi
// 006348a2  50                   push eax
// 006348a3  e8d8b90800           call 0x6c0280
// 006348a8  83c424               add esp, 0x24
// 006348ab  5f                   pop edi
// 006348ac  33c0                 xor eax, eax
// 006348ae  5e                   pop esi
// 006348af  c3                   ret 
// copied from an identical function in another client (function ?sub_535140@ns_ROCX000004@@YAHH@Z)

namespace ns_ROCX000004 {
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
