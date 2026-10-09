// from server: 97% by colin
// roc 2007-08 00595230  unit: RBX::VNullTool::?$TToolVerb  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00595230
//
// 00595230  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00595233  8b8888010000         mov ecx, dword ptr [eax + 0x188]
// 00595239  8b8118030000         mov eax, dword ptr [ecx + 0x318]
// 0059523f  85c0                 test eax, eax
// 00595241  7416                 je 0x595259
// 00595243  50                   push eax
// 00595244  e849c10900           call 0x631392
// 00595249  83c404               add esp, 4
// 0059524c  50                   push eax
// 0059524d  b90c578a00           mov ecx, 0x8a570c
// 00595252  ff1508e77700         call dword ptr [0x77e708]
// 00595258  c3                   ret 
// 00595259  32c0                 xor al, al
// 0059525b  c3                   ret 

struct type_info {
    bool operator==(const type_info&) const;
};

struct VNullTool {
    char pad[0xc];
    void* field_c;
    bool isEnabled() const;
};

struct VNullToolInner {
    char pad[0x188];
    void* field_188;
};

struct VNullToolInner2 {
    char pad[0x318];
    void* field_318;
};

extern "C" void* __cdecl sub_631392(void*);
extern "C" bool (__thiscall *sub_77e708)(void*, const type_info*);
extern type_info type_info_8a570c;

bool VNullTool::isEnabled() const {
    VNullToolInner* p = *(VNullToolInner**)((char*)field_c + 0x188);
    VNullToolInner2* q = *(VNullToolInner2**)((char*)p + 0x318);
    if (q) {
        void* r = sub_631392(q);
        return sub_77e708(&type_info_8a570c, (const type_info*)r);
    }
    return false;
}
