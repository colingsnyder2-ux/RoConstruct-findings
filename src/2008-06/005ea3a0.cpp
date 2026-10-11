// from server: 69% by colin
// roc 2008-06 005ea3a0  unit: RBX::PhysicsService  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ea3a0
//
// 005ea3a0  56                   push esi
// 005ea3a1  57                   push edi
// 005ea3a2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005ea3a6  8b07                 mov eax, dword ptr [edi]
// 005ea3a8  8b5018               mov edx, dword ptr [eax + 0x18]
// 005ea3ab  8bf1                 mov esi, ecx
// 005ea3ad  8bcf                 mov ecx, edi
// 005ea3af  897c240c             mov dword ptr [esp + 0xc], edi
// 005ea3b3  ffd2                 call edx
// 005ea3b5  84c0                 test al, al
// 005ea3b7  7410                 je 0x5ea3c9
// 005ea3b9  8d44240c             lea eax, [esp + 0xc]
// 005ea3bd  50                   push eax
// 005ea3be  8d8ec4000000         lea ecx, [esi + 0xc4]
// 005ea3c4  e897fbffff           call 0x5e9f60
// 005ea3c9  8b8e88000000         mov ecx, dword ptr [esi + 0x88]
// 005ea3cf  8b11                 mov edx, dword ptr [ecx]
// 005ea3d1  8b4214               mov eax, dword ptr [edx + 0x14]
// 005ea3d4  57                   push edi
// 005ea3d5  ffd0                 call eax
// 005ea3d7  ff8ee4000000         dec dword ptr [esi + 0xe4]
// 005ea3dd  5f                   pop edi
// 005ea3de  5e                   pop esi
// 005ea3df  c20400               ret 4

struct PhysicsService {
    char pad[0x88];
    void* field88;
    char pad2[0xc4 - 0x8c];
    char fieldc4[0x20];
    int fielde4;
    void removePart(void* part);
};

void sub_5e9f60(char* self, void* part);

void PhysicsService::removePart(void* part) {
    char* p = (char*)part;
    bool (__thiscall *fn)(void*) = *(bool (__thiscall **)(void*))(*(void**)p);
    fn = (bool (__thiscall *)(void*))((void**)fn)[6];
    if (fn(p)) {
        sub_5e9f60(fieldc4, part);
    }
    void* obj = field88;
    void (__thiscall *fn2)(void*, void*) = *(void (__thiscall **)(void*, void*))(*(void**)obj);
    fn2 = (void (__thiscall *)(void*, void*))((void**)fn2)[5];
    fn2(obj, part);
    fielde4--;
}
