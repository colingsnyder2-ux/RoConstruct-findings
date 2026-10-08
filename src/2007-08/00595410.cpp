// from server: 94% by colin
// roc 2007-08 00595410  unit: RBX::VCloneTool::?$TToolVerb  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00595410
//
// 00595410  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00595413  8b8888010000         mov ecx, dword ptr [eax + 0x188]
// 00595419  8b8118030000         mov eax, dword ptr [ecx + 0x318]
// 0059541f  85c0                 test eax, eax
// 00595421  7416                 je 0x595439
// 00595423  50                   push eax
// 00595424  e869bf0900           call 0x631392
// 00595429  83c404               add esp, 4
// 0059542c  50                   push eax
// 0059542d  b920588a00           mov ecx, 0x8a5820
// 00595432  ff1508e77700         call dword ptr [0x77e708]
// 00595438  c3                   ret 
// 00595439  32c0                 xor al, al
// 0059543b  c3                   ret 

struct TypeInfo {
    bool __thiscall operator==(const TypeInfo&) const;
};

extern "C" void* __cdecl sub_631392(void*);

struct S {
    char pad0[12];
    char* m_ptr;
    bool f();
};

bool S::f()
{
    char* p = *(char**)(m_ptr + 0x188);
    void* q = *(void**)(p + 0x318);
    if (q) {
        TypeInfo* ti = (TypeInfo*)0x8a5820;
        void* r = sub_631392(q);
        return ti->operator==(*(const TypeInfo*)r);
    }
    return false;
}
