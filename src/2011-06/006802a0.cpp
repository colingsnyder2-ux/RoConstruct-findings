// from server: 84% by atomic.potato
// roc 2011-06 006802a0  unit: RBX::VHumanoid::?$FactoryProduct  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006802a0
//
// 006802a0  8b442404             mov eax, dword ptr [esp + 4]
// 006802a4  85c0                 test eax, eax
// 006802a6  7429                 je 0x6802d1
// 006802a8  8b4044               mov eax, dword ptr [eax + 0x44]
// 006802ab  85c0                 test eax, eax
// 006802ad  7422                 je 0x6802d1
// 006802af  6a00                 push 0
// 006802b1  6834a9c100           push 0xc1a934
// 006802b6  68f871c000           push 0xc071f8
// 006802bb  6a00                 push 0
// 006802bd  50                   push eax
// 006802be  e827b01800           call 0x80b2ea
// 006802c3  83c414               add esp, 0x14
// 006802c6  85c0                 test eax, eax
// 006802c8  7407                 je 0x6802d1
// 006802ca  8bc8                 mov ecx, eax
// 006802cc  e91ff0ffff           jmp 0x67f2f0
// 006802d1  33c0                 xor eax, eax
// 006802d3  c3                   ret 

struct VHumanoid {
    char pad[0x44];
    void* field44;
};

extern "C" void* __cdecl sub_80B2EA(void*, void*, void*, void*, void*);
extern "C" void* __cdecl sub_67F2F0(void*);

void* __cdecl sub_6802A0(VHumanoid* p) {
    if (p != 0) {
        void* q = p->field44;
        if (q != 0) {
            void* r = sub_80B2EA(q, 0, (void*)0xC071F8, (void*)0xC1A934, 0);
            if (r != 0) {
                return sub_67F2F0(r);
            }
        }
    }
    return 0;
}
