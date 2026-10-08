// from server: 90% by colin
// roc 2007-08 0042d690  unit: boost::any::M::?$holder  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042d690
//
// 0042d690  56                   push esi
// 0042d691  6a08                 push 8
// 0042d693  8bf1                 mov esi, ecx
// 0042d695  e85c282000           call 0x62fef6
// 0042d69a  83c404               add esp, 4
// 0042d69d  85c0                 test eax, eax
// 0042d69f  740e                 je 0x42d6af
// 0042d6a1  c700eca57800         mov dword ptr [eax], 0x78a5ec
// 0042d6a7  d94604               fld dword ptr [esi + 4]
// 0042d6aa  d95804               fstp dword ptr [eax + 4]
// 0042d6ad  5e                   pop esi
// 0042d6ae  c3                   ret 
// 0042d6af  33c0                 xor eax, eax
// 0042d6b1  5e                   pop esi
// 0042d6b2  c3                   ret 

struct Holder {
    void* m_pVtbl;
    float m_value;
    void* clone();
};

extern "C" void* __cdecl operator_new(unsigned int size);

void* Holder::clone()
{
    Holder* p = (Holder*)operator_new(8);
    if (p != 0)
    {
        p->m_pVtbl = (void*)0x78a5ec;
        p->m_value = m_value;
    }
    return p;
}
