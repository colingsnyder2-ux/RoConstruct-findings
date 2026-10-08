// from server: 89% by colin
// roc 2007-08 00594ff0  unit: RBX::VFillTool::?$TToolVerb  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00594ff0
//
// 00594ff0  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00594ff3  8b8888010000         mov ecx, dword ptr [eax + 0x188]
// 00594ff9  8b8118030000         mov eax, dword ptr [ecx + 0x318]
// 00594fff  85c0                 test eax, eax
// 00595001  7416                 je 0x595019
// 00595003  50                   push eax
// 00595004  e889c30900           call 0x631392
// 00595009  83c404               add esp, 4
// 0059500c  50                   push eax
// 0059500d  b9c4558a00           mov ecx, 0x8a55c4
// 00595012  ff1508e77700         call dword ptr [0x77e708]
// 00595018  c3                   ret 
// 00595019  32c0                 xor al, al
// 0059501b  c3                   ret 

struct type_info;

extern "C" int __cdecl sub_631392(int);

extern "C" int (__stdcall *off_77E708)(int, const type_info*);

extern type_info type_info_8A55C4;

struct VFillTool {
    char pad[0xc];
    void* field_c;
    bool isEnabled() const;
};

bool VFillTool::isEnabled() const {
    char* p = *(char**)((char*)this + 0xc);
    char* q = *(char**)(p + 0x188);
    int v = *(int*)(q + 0x318);
    if (v != 0) {
        int r = sub_631392(v);
        return off_77E708(r, &type_info_8A55C4) != 0;
    }
    return false;
}
