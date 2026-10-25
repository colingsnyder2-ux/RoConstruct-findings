// from server: 100% by king_originala
// roc 2008-06 0057d5b0  unit: RBX::CameraZoomInCommand  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057d5b0
//
// 0057d5b0  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0057d5b3  8b8188020000         mov eax, dword ptr [ecx + 0x288]
// 0057d5b9  8b5004               mov edx, dword ptr [eax + 4]
// 0057d5bc  81c188020000         add ecx, 0x288
// 0057d5c2  ffd2                 call edx
// 0057d5c4  6a01                 push 1
// 0057d5c6  8bc8                 mov ecx, eax
// 0057d5c8  e8c3e90400           call 0x5cbf90
// 0057d5cd  c3                   ret 

struct Camera {
    void zoom(int direction);
};

struct CameraProvider {
    virtual void unused();
    virtual Camera* getCamera();
};

struct Owner {
    char padding[648];
    CameraProvider provider;
};

struct CameraZoomInCommand {
    char padding[12];
    Owner* owner;
    void execute();
};

void CameraZoomInCommand::execute() {
    Camera* camera = owner->provider.getCamera();
    camera->zoom(1);
}
