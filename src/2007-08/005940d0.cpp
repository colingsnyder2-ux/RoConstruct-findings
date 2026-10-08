// from server: 94% by colin
// roc 2007-08 005940d0  unit: RBX::VAxisMoveTool::?$TToolVerb  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005940d0
//
// 005940d0  8b410c               mov eax, dword ptr [ecx + 0xc]
// 005940d3  8b8888010000         mov ecx, dword ptr [eax + 0x188]
// 005940d9  8b8118030000         mov eax, dword ptr [ecx + 0x318]
// 005940df  85c0                 test eax, eax
// 005940e1  7416                 je 0x5940f9
// 005940e3  50                   push eax
// 005940e4  e8a9d20900           call 0x631392
// 005940e9  83c404               add esp, 4
// 005940ec  50                   push eax
// 005940ed  b9744c8a00           mov ecx, 0x8a4c74
// 005940f2  ff1508e77700         call dword ptr [0x77e708]
// 005940f8  c3                   ret 
// 005940f9  32c0                 xor al, al
// 005940fb  c3                   ret 

struct type_info {
    bool operator==(const type_info&) const;
};

extern "C" void* __cdecl sub_631392(void*);

struct RBX_VAxisMoveTool_TToolVerb {
    char pad[0xc];
    void* field_c;
    bool isSelected() const;
};

bool RBX_VAxisMoveTool_TToolVerb::isSelected() const
{
    void* p = *(void**)((char*)field_c + 0x188);
    void* q = *(void**)((char*)p + 0x318);
    if (q) {
        void* r = sub_631392(q);
        const type_info* t = (const type_info*)0x8a4c74;
        return t->operator==(*(const type_info*)r);
    }
    return false;
}
