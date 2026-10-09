// roc 2007-03 004f41e0  unit: seg_004f0000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f41e0
//
// 004f41e0  56                   push esi
// 004f41e1  8b742408             mov esi, dword ptr [esp + 8]
// 004f41e5  0faf74240c           imul esi, dword ptr [esp + 0xc]
// 004f41ea  57                   push edi
// 004f41eb  56                   push esi
// 004f41ec  e88ff9ffff           call 0x4f3b80
// 004f41f1  56                   push esi
// 004f41f2  8bf8                 mov edi, eax
// 004f41f4  6a00                 push 0
// 004f41f6  57                   push edi
// 004f41f7  e8f4feffff           call 0x4f40f0
// 004f41fc  83c410               add esp, 0x10
// 004f41ff  8bc7                 mov eax, edi
// 004f4201  5f                   pop edi
// 004f4202  5e                   pop esi
// 004f4203  c3                   ret 
// copied from an identical function in another client (function ?sub_500670@ns_ROCX000003@@YAPAXII@Z)

namespace ns_ROCX000003 {
extern "C" void* __cdecl sub_500010(unsigned int size);
extern "C" void __cdecl sub_500580(void* ptr, int value, unsigned int size);

void* __cdecl sub_500670(unsigned int count, unsigned int size)
{
    unsigned int total = count * size;
    void* p = sub_500010(total);
    sub_500580(p, 0, total);
    return p;
}
}
