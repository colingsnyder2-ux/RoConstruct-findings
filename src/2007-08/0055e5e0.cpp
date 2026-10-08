// from server: 73% by colin
// roc 2007-08 0055e5e0  unit: RBX::FixedCameraCommand  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055e5e0
//
// 0055e5e0  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0055e5e3  8b8128020000         mov eax, dword ptr [ecx + 0x228]
// 0055e5e9  8b5004               mov edx, dword ptr [eax + 4]
// 0055e5ec  81c128020000         add ecx, 0x228
// 0055e5f2  ffd2                 call edx
// 0055e5f4  33c9                 xor ecx, ecx
// 0055e5f6  39888c010000         cmp dword ptr [eax + 0x18c], ecx
// 0055e5fc  0f94c1               sete cl
// 0055e5ff  8ac1                 mov al, cl
// 0055e601  c3                   ret 

struct Camera {
    char pad[0x228];
    void* vtable;
};

struct FixedCameraCommand {
    char pad[0xc];
    Camera* camera;
    bool isEnabled();
};

bool FixedCameraCommand::isEnabled()
{
    Camera* cam = camera;
    void* vtbl = cam->vtable;
    void* fn = *(void**)((char*)vtbl + 4);
    ((void (__fastcall*)(void*))fn)((char*)cam + 0x228);
    return *(int*)((char*)cam + 0x18c) == 0;
}
