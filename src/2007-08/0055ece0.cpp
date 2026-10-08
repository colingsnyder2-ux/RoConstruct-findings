// from server: 74% by colin
// roc 2007-08 0055ece0  unit: RBX::FollowCameraCommand  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055ece0
//
// 0055ece0  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0055ece3  8b8128020000         mov eax, dword ptr [ecx + 0x228]
// 0055ece9  8b5004               mov edx, dword ptr [eax + 4]
// 0055ecec  81c128020000         add ecx, 0x228
// 0055ecf2  ffd2                 call edx
// 0055ecf4  33c9                 xor ecx, ecx
// 0055ecf6  83b88c01000004       cmp dword ptr [eax + 0x18c], 4
// 0055ecfd  0f94c1               sete cl
// 0055ed00  8ac1                 mov al, cl
// 0055ed02  c3                   ret 

struct FollowCameraCommand {
    char pad0[0xc];
    void* m_ptr;
    bool f();
};

struct Inner {
    char pad0[0x228];
    void* m_vtbl;
};

struct Obj {
    char pad0[0x18c];
    int m_state;
};

bool FollowCameraCommand::f()
{
    Inner* inner = (Inner*)m_ptr;
    void** vtbl = (void**)inner->m_vtbl;
    typedef void (__thiscall *Fn)(void*);
    Fn fn = (Fn)vtbl[1];
    fn((char*)inner + 0x228);
    Obj* obj = (Obj*)inner;
    return obj->m_state == 4;
}
