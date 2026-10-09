// from server: 95% by colin
// roc 2007-08 00593e20  unit: RBX::VArrowTool::?$TToolVerb  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00593e20
//
// 00593e20  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00593e23  8b8888010000         mov ecx, dword ptr [eax + 0x188]
// 00593e29  8b8118030000         mov eax, dword ptr [ecx + 0x318]
// 00593e2f  85c0                 test eax, eax
// 00593e31  7416                 je 0x593e49
// 00593e33  50                   push eax
// 00593e34  e859d50900           call 0x631392
// 00593e39  83c404               add esp, 4
// 00593e3c  50                   push eax
// 00593e3d  b9c4198a00           mov ecx, 0x8a19c4
// 00593e42  ff1508e77700         call dword ptr [0x77e708]
// 00593e48  c3                   ret 
// 00593e49  32c0                 xor al, al
// 00593e4b  c3                   ret 

struct type_info {
    bool operator==(const type_info& other) const;
};

struct SubObject {
    char pad[0x188];
    void* field_188;
};

struct Inner {
    char pad[0x318];
    void* field_318;
};

struct Outer {
    char pad[0xc];
    SubObject* field_c;
};

extern "C" void* __cdecl sub_631392(void*);
extern "C" bool (__thiscall *sub_77e708)(const type_info*, const type_info*);

struct VArrowTool {
    bool isEnabled() const;
};

bool VArrowTool::isEnabled() const
{
    Outer* outer = (Outer*)this;
    Inner* inner = (Inner*)outer->field_c->field_188;
    void* p = inner->field_318;
    if (p) {
        void* q = sub_631392(p);
        return sub_77e708((const type_info*)0x8a19c4, (const type_info*)q);
    }
    return false;
}
