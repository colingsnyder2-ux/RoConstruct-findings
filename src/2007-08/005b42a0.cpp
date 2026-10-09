// from server: 83% by colin
// roc 2007-08 005b42a0  unit: RBX::Assembly  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b42a0
//
// 005b42a0  d9442404             fld dword ptr [esp + 4]
// 005b42a4  56                   push esi
// 005b42a5  8bf1                 mov esi, ecx
// 005b42a7  d89688000000         fcom dword ptr [esi + 0x88]
// 005b42ad  dfe0                 fnstsw ax
// 005b42af  f6c444               test ah, 0x44
// 005b42b2  7b30                 jnp 0x5b42e4
// 005b42b4  8b4e04               mov ecx, dword ptr [esi + 4]
// 005b42b7  d99e88000000         fstp dword ptr [esi + 0x88]
// 005b42bd  85c9                 test ecx, ecx
// 005b42bf  7425                 je 0x5b42e6
// 005b42c1  8b01                 mov eax, dword ptr [ecx]
// 005b42c3  8b5004               mov edx, dword ptr [eax + 4]
// 005b42c6  ffd2                 call edx
// 005b42c8  83f808               cmp eax, 8
// 005b42cb  8b4604               mov eax, dword ptr [esi + 4]
// 005b42ce  7503                 jne 0x5b42d3
// 005b42d0  8b4004               mov eax, dword ptr [eax + 4]
// 005b42d3  8b480c               mov ecx, dword ptr [eax + 0xc]
// 005b42d6  85c9                 test ecx, ecx
// 005b42d8  740c                 je 0x5b42e6
// 005b42da  56                   push esi
// 005b42db  e83050ffff           call 0x5a9310
// 005b42e0  5e                   pop esi
// 005b42e1  c20400               ret 4
// 005b42e4  ddd8                 fstp st(0)
// 005b42e6  5e                   pop esi
// 005b42e7  c20400               ret 4

struct Assembly {
    char pad[4];
    void* ptr4;
    char pad2[0x80];
    float field88;
    void setMass(float mass);
};

extern "C" void __stdcall sub_5a9310(void* p);

void Assembly::setMass(float mass) {
    if (mass == field88) {
        return;
    }
    field88 = mass;
    if (ptr4 == 0) {
        return;
    }
    int type = (*(int (__thiscall **)(void*))(*(int*)ptr4 + 4))(ptr4);
    void* p;
    if (type == 8) {
        p = *(void**)((char*)ptr4 + 4);
    } else {
        p = ptr4;
    }
    void* q = *(void**)((char*)p + 0xc);
    if (q == 0) {
        return;
    }
    sub_5a9310(this);
}
