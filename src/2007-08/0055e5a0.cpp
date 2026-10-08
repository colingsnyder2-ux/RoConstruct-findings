// from server: 87% by colin
// roc 2007-08 0055e5a0  unit: RBX::CameraZoomInCommand  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055e5a0
//
// 0055e5a0  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0055e5a3  8b8128020000         mov eax, dword ptr [ecx + 0x228]
// 0055e5a9  8b5004               mov edx, dword ptr [eax + 4]
// 0055e5ac  81c128020000         add ecx, 0x228
// 0055e5b2  ffd2                 call edx
// 0055e5b4  6a01                 push 1
// 0055e5b6  8bc8                 mov ecx, eax
// 0055e5b8  e803af0300           call 0x5994c0
// 0055e5bd  c3                   ret 

struct CameraZoomInCommand {
    void doIt(void* dataState);
};

struct Camera {
    char pad[0x228];
    void* camera;
};

struct Workspace {
    char pad[0xc];
    Camera* camera;
};

void __stdcall sub_5994C0(void* p, int v);

void CameraZoomInCommand::doIt(void* dataState) {
    Camera* cam = *(Camera**)((char*)this + 0xc);
    void* obj = *(void**)((char*)cam + 0x228);
    void* fn = *(void**)((char*)obj + 4);
    ((void (__thiscall*)(void*))fn)((char*)cam + 0x228);
    sub_5994C0((void*)0, 1);
}
