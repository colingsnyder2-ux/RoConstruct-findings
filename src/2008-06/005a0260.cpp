// from server: 100% by king_originala
// roc 2008-06 005a0260  unit: RBX::Workspace  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a0260
//
// 005a0260  8b8188020000         mov eax, dword ptr [ecx + 0x288]
// 005a0266  8b5004               mov edx, dword ptr [eax + 4]
// 005a0269  c681d003000000       mov byte ptr [ecx + 0x3d0], 0
// 005a0270  81c188020000         add ecx, 0x288
// 005a0276  ffd2                 call edx
// 005a0278  8bc8                 mov ecx, eax
// 005a027a  e9d1c10200           jmp 0x5cc450

struct Result {
    void finish();
};

struct Component {
    virtual void unused();
    virtual Result* get();
};

struct Workspace {
    char padding0[0x288];
    Component component;
    char padding1[0x144];
    unsigned char flag;

    void reset();
};

void Workspace::reset()
{
    flag = 0;
    component.get()->finish();
}
