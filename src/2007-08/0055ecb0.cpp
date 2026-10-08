// from server: 94% by colin
// roc 2007-08 0055ecb0  unit: RBX::TrackCameraCommand  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055ecb0
//
// 0055ecb0  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0055ecb3  8b8128020000         mov eax, dword ptr [ecx + 0x228]
// 0055ecb9  8b5004               mov edx, dword ptr [eax + 4]
// 0055ecbc  81c128020000         add ecx, 0x228
// 0055ecc2  ffd2                 call edx
// 0055ecc4  33c9                 xor ecx, ecx
// 0055ecc6  83b88c01000003       cmp dword ptr [eax + 0x18c], 3
// 0055eccd  0f94c1               sete cl
// 0055ecd0  8ac1                 mov al, cl
// 0055ecd2  c3                   ret 

struct TrackCameraCommand {
    char pad[0xc];
    void* camera;
    bool isFinished();
};

struct Camera {
    char pad[0x228];
    void* vtable;
};

struct Result {
    char pad[0x18c];
    int state;
};

bool TrackCameraCommand::isFinished()
{
    Camera* cam = *(Camera**)((char*)this + 0xc);
    void** vtbl = *(void***)((char*)cam + 0x228);
    typedef Result* (__thiscall *Fn)(void*);
    Fn fn = (Fn)vtbl[1];
    Result* r = fn((char*)cam + 0x228);
    return r->state == 3;
}
