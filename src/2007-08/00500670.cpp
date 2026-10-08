// from server: 100% by colin
// roc 2007-08 00500670  unit: G3D::Shader  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00500670
//
// 00500670  56                   push esi
// 00500671  8b742408             mov esi, dword ptr [esp + 8]
// 00500675  0faf74240c           imul esi, dword ptr [esp + 0xc]
// 0050067a  57                   push edi
// 0050067b  56                   push esi
// 0050067c  e88ff9ffff           call 0x500010
// 00500681  56                   push esi
// 00500682  8bf8                 mov edi, eax
// 00500684  6a00                 push 0
// 00500686  57                   push edi
// 00500687  e8f4feffff           call 0x500580
// 0050068c  83c410               add esp, 0x10
// 0050068f  8bc7                 mov eax, edi
// 00500691  5f                   pop edi
// 00500692  5e                   pop esi
// 00500693  c3                   ret 

extern "C" void* __cdecl sub_500010(unsigned int size);
extern "C" void __cdecl sub_500580(void* ptr, int value, unsigned int size);

void* __cdecl sub_500670(unsigned int count, unsigned int size)
{
    unsigned int total = count * size;
    void* p = sub_500010(total);
    sub_500580(p, 0, total);
    return p;
}
