// from server: 100% by colin
// roc 2008-06 00801400  unit: seg_00800000  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00801400
//
// 00801400  a144d99700           mov eax, dword ptr [0x97d944]
// 00801405  57                   push edi
// 00801406  8bf8                 mov edi, eax
// 00801408  85c0                 test eax, eax
// 0080140a  7421                 je 0x80142d
// 0080140c  56                   push esi
// 0080140d  8b30                 mov esi, dword ptr [eax]
// 0080140f  85f6                 test esi, esi
// 00801411  7410                 je 0x801423
// 00801413  8bce                 mov ecx, esi
// 00801415  e8e66de5ff           call 0x658200
// 0080141a  56                   push esi
// 0080141b  e85af2e9ff           call 0x6a067a
// 00801420  83c404               add esp, 4
// 00801423  57                   push edi
// 00801424  e851f2e9ff           call 0x6a067a
// 00801429  83c404               add esp, 4
// 0080142c  5e                   pop esi
// 0080142d  5f                   pop edi
// 0080142e  c3                   ret 

// from server: 93% by atomic.potato
struct S_func_00801400 {
    void m();
};

extern S_func_00801400 G1_func_00801400;

struct T_sub_00658200 { void m(); };
extern "C" void __cdecl sub_006a067a(void*);

void* g_ptr_0097d944;
void** g_pptr_0097d944 = &g_ptr_0097d944;

void func_00801400()
{
    void*& p = g_ptr_0097d944;
    void* edi = p;
    if (p)
    {
        void* q = *(void**)p;
        if (q)
        {
            ((T_sub_00658200*)q)->m();
            sub_006a067a(q);
        }
        sub_006a067a(edi);
    }
}
