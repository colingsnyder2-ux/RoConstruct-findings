// from server: 94% by colin
// roc 2007-08 00594a00  unit: RBX::VRightMotorTool::?$TToolVerb  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00594a00
//
// 00594a00  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00594a03  8b8888010000         mov ecx, dword ptr [eax + 0x188]
// 00594a09  8b8118030000         mov eax, dword ptr [ecx + 0x318]
// 00594a0f  85c0                 test eax, eax
// 00594a11  7416                 je 0x594a29
// 00594a13  50                   push eax
// 00594a14  e879c90900           call 0x631392
// 00594a19  83c404               add esp, 4
// 00594a1c  50                   push eax
// 00594a1d  b9bc508a00           mov ecx, 0x8a50bc
// 00594a22  ff1508e77700         call dword ptr [0x77e708]
// 00594a28  c3                   ret 
// 00594a29  32c0                 xor al, al
// 00594a2b  c3                   ret 

struct type_info {
    bool operator==(const type_info&) const;
};

struct TToolVerb {
    char pad[0x318];
    type_info* type;
    bool isEnabled() const;
};

struct VRightMotorTool {
    char pad[0xc];
    void* dataModel;
};

extern "C" void* __cdecl sub_631392(void*);
extern "C" bool __stdcall sub_77e708(void*, void*);

bool TToolVerb::isEnabled() const {
    VRightMotorTool* tool = (VRightMotorTool*)this;
    void* dm = tool->dataModel;
    void* p = *(void**)((char*)dm + 0x188);
    type_info* t = *(type_info**)((char*)p + 0x318);
    if (t) {
        void* r = sub_631392(t);
        return ((const type_info*)0x8a50bc)->operator==(*(const type_info*)r);
    }
    return false;
}
