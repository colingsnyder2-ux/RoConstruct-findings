// from server: 100% by king_originala
// roc 2008-06 0057d590  unit: RBX::CameraTiltDownCommand  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057d590
//
// 0057d590  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0057d593  8b8188020000         mov eax, dword ptr [ecx + 0x288]
// 0057d599  8b5004               mov edx, dword ptr [eax + 4]
// 0057d59c  81c188020000         add ecx, 0x288
// 0057d5a2  ffd2                 call edx
// 0057d5a4  6a01                 push 1
// 0057d5a6  8bc8                 mov ecx, eax
// 0057d5a8  e893ea0400           call 0x5cc040
// 0057d5ad  c3                   ret 

struct Camera {
    void tiltDown(int);
};

struct CameraSource {
    virtual void reserved();
    virtual Camera* getCamera();
};

struct Owner {
    char padding[0x288];
    CameraSource source;
};

struct Command {
    char padding[0x0c];
    Owner* owner;
    void execute();
};

void Command::execute()
{
    Camera* camera = owner->source.getCamera();
    camera->tiltDown(1);
}
