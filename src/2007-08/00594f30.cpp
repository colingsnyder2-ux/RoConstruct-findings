// from server: 94% by colin
// roc 2007-08 00594f30  unit: RBX::VLockTool::?$TToolVerb  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00594f30
//
// 00594f30  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00594f33  8b8888010000         mov ecx, dword ptr [eax + 0x188]
// 00594f39  8b8118030000         mov eax, dword ptr [ecx + 0x318]
// 00594f3f  85c0                 test eax, eax
// 00594f41  7416                 je 0x594f59
// 00594f43  50                   push eax
// 00594f44  e849c40900           call 0x631392
// 00594f49  83c404               add esp, 4
// 00594f4c  50                   push eax
// 00594f4d  b928558a00           mov ecx, 0x8a5528
// 00594f52  ff1508e77700         call dword ptr [0x77e708]
// 00594f58  c3                   ret 
// 00594f59  32c0                 xor al, al
// 00594f5b  c3                   ret 

struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

extern "C" int __cdecl sub_00631392(int);

struct VLockTool_TToolVerb {
    char pad[0xc];
    int* field_c;
    bool isEnabled() const;
};

bool VLockTool_TToolVerb::isEnabled() const
{
    int* p = *(int**)((char*)field_c + 0x188);
    int q = *(int*)((char*)p + 0x318);
    if (q != 0) {
        const type_info* t = (const type_info*)0x8a5528;
        return t->operator==(*(const type_info*)sub_00631392(q));
    }
    return false;
}
