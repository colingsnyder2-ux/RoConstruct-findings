// from server: 71% by colin
// roc 2007-08 00594370  unit: RBX::VGlueTool::?$TToolVerb  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00594370
//
// 00594370  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00594373  8b8888010000         mov ecx, dword ptr [eax + 0x188]
// 00594379  8b8118030000         mov eax, dword ptr [ecx + 0x318]
// 0059437f  85c0                 test eax, eax
// 00594381  7416                 je 0x594399
// 00594383  50                   push eax
// 00594384  e809d00900           call 0x631392
// 00594389  83c404               add esp, 4
// 0059438c  50                   push eax
// 0059438d  b9944d8a00           mov ecx, 0x8a4d94
// 00594392  ff1508e77700         call dword ptr [0x77e708]
// 00594398  c3                   ret 
// 00594399  32c0                 xor al, al
// 0059439b  c3                   ret 

struct type_info {
    bool operator==(const type_info&) const;
};

struct Verb {
    char pad[8];
    int container;
    virtual bool isEnabled() const;
};

struct TToolVerb : Verb {
    bool isEnabled() const;
};

bool TToolVerb::isEnabled() const {
    int c = *(int*)((char*)this + 0xc);
    int v = *(int*)((char*)c + 0x188);
    int p = *(int*)((char*)v + 0x318);
    if (p) {
        type_info* ti = (type_info*)0x8a4d94;
        return ti->operator==(*(type_info*)p);
    }
    return false;
}
