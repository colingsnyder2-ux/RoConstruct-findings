// from server: 100% by king_originala
// roc 2008-06 0057dce0  unit: RBX::TrackCameraCommand  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057dce0
//
// 0057dce0  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0057dce3  8b8188020000         mov eax, dword ptr [ecx + 0x288]
// 0057dce9  8b5004               mov edx, dword ptr [eax + 4]
// 0057dcec  81c188020000         add ecx, 0x288
// 0057dcf2  ffd2                 call edx
// 0057dcf4  33c9                 xor ecx, ecx
// 0057dcf6  83b8d401000003       cmp dword ptr [eax + 0x1d4], 3
// 0057dcfd  0f94c1               sete cl
// 0057dd00  8ac1                 mov al, cl
// 0057dd02  c3                   ret 

struct Camera {
    char padding[0x1D4];
    int mode;
};

struct CameraProvider {
    virtual void unused();
    virtual Camera* getCamera();
};

struct Owner {
    char padding[0x288];
    CameraProvider provider;
};

struct TrackCameraCommand {
    char padding[0xC];
    Owner* owner;
    bool isTracking();
};

bool TrackCameraCommand::isTracking()
{
    return owner->provider.getCamera()->mode == 3;
}
