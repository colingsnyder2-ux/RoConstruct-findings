// from server: 85% by colin
// roc 2007-08 00594d80  unit: RBX::VModelSetPrimaryPartTool::?$TToolVerb  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00594d80
//
// 00594d80  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00594d83  8b8888010000         mov ecx, dword ptr [eax + 0x188]
// 00594d89  8b8118030000         mov eax, dword ptr [ecx + 0x318]
// 00594d8f  85c0                 test eax, eax
// 00594d91  7416                 je 0x594da9
// 00594d93  50                   push eax
// 00594d94  e8f9c50900           call 0x631392
// 00594d99  83c404               add esp, 4
// 00594d9c  50                   push eax
// 00594d9d  b9a8538a00           mov ecx, 0x8a53a8
// 00594da2  ff1508e77700         call dword ptr [0x77e708]
// 00594da8  c3                   ret 
// 00594da9  32c0                 xor al, al
// 00594dab  c3                   ret 

struct VModelSetPrimaryPartTool_TToolVerb {
    bool isEnabled() const;
};

struct VModelSetPrimaryPartTool_TToolVerb_Inner {
    char pad[0x318];
    void* field_318;
};

struct VModelSetPrimaryPartTool_TToolVerb_Outer {
    char pad[0x188];
    VModelSetPrimaryPartTool_TToolVerb_Inner* field_188;
};

struct VModelSetPrimaryPartTool_TToolVerb_This {
    char pad[0xc];
    VModelSetPrimaryPartTool_TToolVerb_Outer* field_c;
};

extern "C" void* __cdecl sub_631392(void*);
extern "C" void* __stdcall sub_77e708(void*);

bool VModelSetPrimaryPartTool_TToolVerb::isEnabled() const
{
    VModelSetPrimaryPartTool_TToolVerb_This* self = (VModelSetPrimaryPartTool_TToolVerb_This*)this;
    VModelSetPrimaryPartTool_TToolVerb_Outer* outer = self->field_c;
    VModelSetPrimaryPartTool_TToolVerb_Inner* inner = outer->field_188;
    void* p = inner->field_318;
    if (p != 0) {
        void* q = sub_631392(p);
        sub_77e708(q);
        return true;
    }
    return false;
}
