// from server: 100% by atomic.potato
// roc 2009-06 005d56a0  unit: RBX::VRunService::?$FactoryProduct  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005d56a0
//
// 005d56a0  56                   push esi
// 005d56a1  8bf1                 mov esi, ecx
// 005d56a3  c70654538d00         mov dword ptr [esi], 0x8d5354
// 005d56a9  c7461448538d00       mov dword ptr [esi + 0x14], 0x8d5348
// 005d56b0  c7461840538d00       mov dword ptr [esi + 0x18], 0x8d5340
// 005d56b7  c7462038538d00       mov dword ptr [esi + 0x20], 0x8d5338
// 005d56be  e89dd4ffff           call 0x5d2b60
// 005d56c3  f644240801           test byte ptr [esp + 8], 1
// 005d56c8  7409                 je 0x5d56d3
// 005d56ca  56                   push esi
// 005d56cb  e862331400           call 0x718a32
// 005d56d0  83c404               add esp, 4
// 005d56d3  8bc6                 mov eax, esi
// 005d56d5  5e                   pop esi
// 005d56d6  c20400               ret 4

struct S_func_005d56a0 {
    void* m_vtbl0;
    char pad1[0x10];
    void* m_vtbl14;
    void* m_vtbl18;
    char pad2[4];
    void* m_vtbl20;
    S_func_005d56a0* f(unsigned int flag);
};

extern "C" void __cdecl sub_005d2b60();
extern "C" void __cdecl sub_00718a32(void* p);

S_func_005d56a0* S_func_005d56a0::f(unsigned int flag)
{
    m_vtbl0 = (void*)0x8d5354;
    m_vtbl14 = (void*)0x8d5348;
    m_vtbl18 = (void*)0x8d5340;
    m_vtbl20 = (void*)0x8d5338;
    sub_005d2b60();
    if (flag & 1) {
        sub_00718a32(this);
    }
    return this;
}
