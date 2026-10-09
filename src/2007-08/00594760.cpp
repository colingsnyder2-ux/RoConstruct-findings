// from server: 92% by colin
// roc 2007-08 00594760  unit: RBX::VInletTool::?$TToolVerb  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00594760
//
// 00594760  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00594763  8b8888010000         mov ecx, dword ptr [eax + 0x188]
// 00594769  8b8118030000         mov eax, dword ptr [ecx + 0x318]
// 0059476f  85c0                 test eax, eax
// 00594771  7416                 je 0x594789
// 00594773  50                   push eax
// 00594774  e819cc0900           call 0x631392
// 00594779  83c404               add esp, 4
// 0059477c  50                   push eax
// 0059477d  b9744f8a00           mov ecx, 0x8a4f74
// 00594782  ff1508e77700         call dword ptr [0x77e708]
// 00594788  c3                   ret 
// 00594789  32c0                 xor al, al
// 0059478b  c3                   ret 

struct VInletTool;

struct TToolVerb {
    char pad[0xc];
    VInletTool* tool;
    bool isEnabled() const;
};

struct VInletTool {
    char pad[0x188];
    void* field_188;
};

struct VInletTool_318 {
    char pad[0x318];
    void* field_318;
};

extern "C" void* __cdecl sub_631392(void*);
extern "C" bool (__thiscall *sub_77e708)(const void*, void*);

extern const char str_8a4f74[];

bool TToolVerb::isEnabled() const
{
    VInletTool_318* p = (VInletTool_318*)((VInletTool*)tool)->field_188;
    void* q = p->field_318;
    if (q != 0)
    {
        void* r = sub_631392(q);
        return sub_77e708(str_8a4f74, r);
    }
    return false;
}
