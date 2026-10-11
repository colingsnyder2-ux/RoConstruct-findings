// from server: 100% by atomic.potato
// roc 2009-06 005d3470  unit: RBX::VSelection::?$FactoryProduct  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005d3470
//
// 005d3470  56                   push esi
// 005d3471  8bf1                 mov esi, ecx
// 005d3473  c70634528d00         mov dword ptr [esi], 0x8d5234
// 005d3479  c7461428528d00       mov dword ptr [esi + 0x14], 0x8d5228
// 005d3480  c7461820528d00       mov dword ptr [esi + 0x18], 0x8d5220
// 005d3487  c7462018528d00       mov dword ptr [esi + 0x20], 0x8d5218
// 005d348e  e8cdf6ffff           call 0x5d2b60
// 005d3493  f644240801           test byte ptr [esp + 8], 1
// 005d3498  7409                 je 0x5d34a3
// 005d349a  56                   push esi
// 005d349b  e892551400           call 0x718a32
// 005d34a0  83c404               add esp, 4
// 005d34a3  8bc6                 mov eax, esi
// 005d34a5  5e                   pop esi
// 005d34a6  c20400               ret 4

struct FactoryProduct {
    void* field0;
    unsigned char pad_04[0x10];
    void* field14;
    void* field18;
    void* field1c;
    void* field20;
    void sub_5d2b60();
    void* destroy(unsigned int flags);
};

void __cdecl sub_718a32(void* p);

void* FactoryProduct::destroy(unsigned int flags)
{
    field0 = (void*)0x8d5234;
    field14 = (void*)0x8d5228;
    field18 = (void*)0x8d5220;
    field20 = (void*)0x8d5218;
    sub_5d2b60();
    if (flags & 1)
        sub_718a32(this);
    return this;
}
