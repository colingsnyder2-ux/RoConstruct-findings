// from server: 100% by king_originala
// roc 2008-06 0057d5d0  unit: RBX::CameraZoomOutCommand  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057d5d0
//
// 0057d5d0  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0057d5d3  8b8188020000         mov eax, dword ptr [ecx + 0x288]
// 0057d5d9  8b5004               mov edx, dword ptr [eax + 4]
// 0057d5dc  81c188020000         add ecx, 0x288
// 0057d5e2  ffd2                 call edx
// 0057d5e4  6aff                 push -1
// 0057d5e6  8bc8                 mov ecx, eax
// 0057d5e8  e8a3e90400           call 0x5cbf90
// 0057d5ed  c3                   ret 

struct Camera {
    void zoom(int direction);
};

struct CameraProvider {
    virtual void reserved();
    virtual Camera* getCamera();
};

struct Owner {
    char padding[0x288];
    CameraProvider provider;
};

struct CameraZoomOutCommand {
    char padding[0x0C];
    Owner* owner;
    void execute();
};

void CameraZoomOutCommand::execute() {
    Camera* camera = owner->provider.getCamera();
    camera->zoom(-1);
}
