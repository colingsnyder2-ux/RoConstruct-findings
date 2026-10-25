// from server: 100% by king_originala
// roc 2008-06 0057dd10  unit: RBX::FollowCameraCommand  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057dd10
//
// 0057dd10  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0057dd13  8b8188020000         mov eax, dword ptr [ecx + 0x288]
// 0057dd19  8b5004               mov edx, dword ptr [eax + 4]
// 0057dd1c  81c188020000         add ecx, 0x288
// 0057dd22  ffd2                 call edx
// 0057dd24  33c9                 xor ecx, ecx
// 0057dd26  83b8d401000004       cmp dword ptr [eax + 0x1d4], 4
// 0057dd2d  0f94c1               sete cl
// 0057dd30  8ac1                 mov al, cl
// 0057dd32  c3                   ret 

struct Camera {
    char padding[0x1D4];
    int mode;
};

struct CameraSource {
    virtual void unused();
    virtual Camera* getCamera();
};

struct Context {
    char padding[0x288];
    CameraSource source;
};

struct FollowCameraCommand {
    char padding[0x0C];
    Context* context;
    bool isChecked();
};

bool FollowCameraCommand::isChecked() {
    return context->source.getCamera()->mode == 4;
}
