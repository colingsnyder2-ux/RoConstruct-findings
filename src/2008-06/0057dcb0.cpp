// from server: 100% by king_originala
// roc 2008-06 0057dcb0  unit: RBX::AttachCameraCommand  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057dcb0
//
// 0057dcb0  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0057dcb3  8b8188020000         mov eax, dword ptr [ecx + 0x288]
// 0057dcb9  8b5004               mov edx, dword ptr [eax + 4]
// 0057dcbc  81c188020000         add ecx, 0x288
// 0057dcc2  ffd2                 call edx
// 0057dcc4  33c9                 xor ecx, ecx
// 0057dcc6  83b8d401000001       cmp dword ptr [eax + 0x1d4], 1
// 0057dccd  0f94c1               sete cl
// 0057dcd0  8ac1                 mov al, cl
// 0057dcd2  c3                   ret 

struct Result {
    char padding[0x1D4];
    int state;
};

struct Interface {
    virtual void unused();
    virtual Result* getResult();
};

struct Owner {
    char padding[0x288];
    Interface camera;
};

struct AttachCameraCommand {
    char padding[0xC];
    Owner* owner;
    bool execute();
};

bool AttachCameraCommand::execute() {
    return owner->camera.getResult()->state == 1;
}
