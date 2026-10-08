// from server: 94% by colin
// roc 2007-08 00594c70  unit: RBX::VModelSetFrontTool::?$TToolVerb  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00594c70
//
// 00594c70  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00594c73  8b8888010000         mov ecx, dword ptr [eax + 0x188]
// 00594c79  8b8118030000         mov eax, dword ptr [ecx + 0x318]
// 00594c7f  85c0                 test eax, eax
// 00594c81  7416                 je 0x594c99
// 00594c83  50                   push eax
// 00594c84  e809c70900           call 0x631392
// 00594c89  83c404               add esp, 4
// 00594c8c  50                   push eax
// 00594c8d  b9e0528a00           mov ecx, 0x8a52e0
// 00594c92  ff1508e77700         call dword ptr [0x77e708]
// 00594c98  c3                   ret 
// 00594c99  32c0                 xor al, al
// 00594c9b  c3                   ret 

struct type_info {
    bool operator==(const type_info&) const;
};

extern "C" void* __cdecl sub_631392(void*);
extern "C" bool __stdcall sub_77E708(void*, void*);

struct ToolVerb {
    bool isEnabled() const;
};

bool ToolVerb::isEnabled() const {
    char* p = *(char**)((char*)this + 0xc);
    char* q = *(char**)(p + 0x188);
    void* r = *(void**)(q + 0x318);
    if (r) {
        void* s = sub_631392(r);
        const type_info* ti = (const type_info*)0x8a52e0;
        return ti->operator==(*(const type_info*)s);
    }
    return false;
}
