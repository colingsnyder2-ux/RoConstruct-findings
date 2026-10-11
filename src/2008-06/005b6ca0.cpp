// from server: 64% by colin
// roc 2008-06 005b6ca0  unit: RBX::DropperTool  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b6ca0
//
// 005b6ca0  56                   push esi
// 005b6ca1  8b742408             mov esi, dword ptr [esp + 8]
// 005b6ca5  85f6                 test esi, esi
// 005b6ca7  742c                 je 0x5b6cd5
// 005b6ca9  8b0e                 mov ecx, dword ptr [esi]
// 005b6cab  85c9                 test ecx, ecx
// 005b6cad  7409                 je 0x5b6cb8
// 005b6caf  8b01                 mov eax, dword ptr [ecx]
// 005b6cb1  8b5004               mov edx, dword ptr [eax + 4]
// 005b6cb4  ffd2                 call edx
// 005b6cb6  eb05                 jmp 0x5b6cbd
// 005b6cb8  b814969200           mov eax, 0x929614
// 005b6cbd  68e8d39400           push 0x94d3e8
// 005b6cc2  8bc8                 mov ecx, eax
// 005b6cc4  ff1578288000         call dword ptr [0x802878]
// 005b6cca  84c0                 test al, al
// 005b6ccc  7407                 je 0x5b6cd5
// 005b6cce  8b06                 mov eax, dword ptr [esi]
// 005b6cd0  83c004               add eax, 4
// 005b6cd3  5e                   pop esi
// 005b6cd4  c3                   ret 
// 005b6cd5  33c0                 xor eax, eax
// 005b6cd7  5e                   pop esi
// 005b6cd8  c3                   ret 

struct type_info {
    bool operator==(const type_info&) const;
};

struct SoundId {
    virtual type_info* getTypeInfo() const;
};

struct DropperTool {
    void* f();
};

void* DropperTool::f() {
    SoundId* p = *(SoundId**)this;
    type_info* ti;
    if (p) {
        ti = p->getTypeInfo();
    } else {
        ti = (type_info*)0x929614;
    }
    if (ti->operator==(*(type_info*)0x94d3e8)) {
        return (char*)*(void**)this + 4;
    }
    return 0;
}
