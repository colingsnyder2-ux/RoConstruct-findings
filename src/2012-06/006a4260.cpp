// roc 2012-06 006a4260  unit: RBX::VScriptContext::?$FactoryProduct  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006a4260
//
// 006a4260  56                   push esi
// 006a4261  8b742408             mov esi, dword ptr [esp + 8]
// 006a4265  57                   push edi
// 006a4266  6a00                 push 0
// 006a4268  6a02                 push 2
// 006a426a  56                   push esi
// 006a426b  e8b0f61800           call 0x833920
// 006a4270  8bf8                 mov edi, eax
// 006a4272  a1f813de00           mov eax, dword ptr [0xde13f8]
// 006a4277  50                   push eax
// 006a4278  6a01                 push 1
// 006a427a  56                   push esi
// 006a427b  e890f51800           call 0x833810
// 006a4280  56                   push esi
// 006a4281  57                   push edi
// 006a4282  50                   push eax
// 006a4283  e858d11900           call 0x8413e0
// 006a4288  83c424               add esp, 0x24
// 006a428b  5f                   pop edi
// 006a428c  33c0                 xor eax, eax
// 006a428e  5e                   pop esi
// 006a428f  c3                   ret 
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
