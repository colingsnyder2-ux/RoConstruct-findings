// from server: 48% by colin
// roc 2007-08 005fb1c0  unit: RBX::Seat  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005fb1c0
//
// 005fb1c0  56                   push esi
// 005fb1c1  8bf1                 mov esi, ecx
// 005fb1c3  e858ffffff           call 0x5fb120
// 005fb1c8  f644240801           test byte ptr [esp + 8], 1
// 005fb1cd  8b86d8020000         mov eax, dword ptr [esi + 0x2d8]
// 005fb1d3  c786d4020000ac4c7a00 mov dword ptr [esi + 0x2d4], 0x7a4cac
// 005fb1dd  8b4804               mov ecx, dword ptr [eax + 4]
// 005fb1e0  c78431d8020000a44c7a00 mov dword ptr [ecx + esi + 0x2d8], 0x7a4ca4
// 005fb1eb  740a                 je 0x5fb1f7
// 005fb1ed  56                   push esi
// 005fb1ee  ff15c4e67700         call dword ptr [0x77e6c4]
// 005fb1f4  83c404               add esp, 4
// 005fb1f7  8bc6                 mov eax, esi
// 005fb1f9  5e                   pop esi
// 005fb1fa  c20400               ret 4

struct Seat {
    char pad[0x2d4];
    void* m_vtable_2d4;
    char pad2[0x4];
    void* m_field_2d8;
    void destroy(char flag);
};

extern "C" void __stdcall free(void*);

void Seat::destroy(char flag)
{
    void* p;
    this->m_vtable_2d4 = (void*)0x7a4cac;
    p = this->m_field_2d8;
    *(void**)((char*)p + 4) = (void*)0x7a4ca4;
    if (flag & 1) {
        free(this);
    }
}
