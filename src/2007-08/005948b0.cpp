// from server: 97% by colin
// roc 2007-08 005948b0  unit: RBX::VHingeTool::?$TToolVerb  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005948b0
//
// 005948b0  8b410c               mov eax, dword ptr [ecx + 0xc]
// 005948b3  8b8888010000         mov ecx, dword ptr [eax + 0x188]
// 005948b9  8b8118030000         mov eax, dword ptr [ecx + 0x318]
// 005948bf  85c0                 test eax, eax
// 005948c1  7416                 je 0x5948d9
// 005948c3  50                   push eax
// 005948c4  e8c9ca0900           call 0x631392
// 005948c9  83c404               add esp, 4
// 005948cc  50                   push eax
// 005948cd  b914508a00           mov ecx, 0x8a5014
// 005948d2  ff1508e77700         call dword ptr [0x77e708]
// 005948d8  c3                   ret 
// 005948d9  32c0                 xor al, al
// 005948db  c3                   ret 

struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

extern "C" void* __cdecl sub_631392(void*);

extern type_info type_info_8a5014_;

extern "C" bool (__thiscall *sub_77e708)(const type_info*, const type_info*);

struct VHingeTool_TToolVerb {
    char pad[0xc];
    void* field_c;
    bool isEnabled() const;
};

bool VHingeTool_TToolVerb::isEnabled() const {
    void* p = *(void**)((char*)field_c + 0x188);
    void* q = *(void**)((char*)p + 0x318);
    if (q) {
        void* r = sub_631392(q);
        return sub_77e708(&type_info_8a5014_, (const type_info*)r);
    }
    return false;
}
