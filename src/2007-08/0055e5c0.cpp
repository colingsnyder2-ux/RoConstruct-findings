// from server: 81% by colin
// roc 2007-08 0055e5c0  unit: RBX::CameraZoomOutCommand  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055e5c0
//
// 0055e5c0  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0055e5c3  8b8128020000         mov eax, dword ptr [ecx + 0x228]
// 0055e5c9  8b5004               mov edx, dword ptr [eax + 4]
// 0055e5cc  81c128020000         add ecx, 0x228
// 0055e5d2  ffd2                 call edx
// 0055e5d4  6aff                 push -1
// 0055e5d6  8bc8                 mov ecx, eax
// 0055e5d8  e8e3ae0300           call 0x5994c0
// 0055e5dd  c3                   ret 

struct CameraZoomOutCommand {
    char pad[0xc];
    void* camera;
    void doIt(void* dataState);
};

extern "C" void __stdcall func_005994c0(void*, int);

void CameraZoomOutCommand::doIt(void* dataState)
{
    char* cam = (char*)camera;
    void* vtbl = *(void**)(cam + 0x228);
    void* fn = *(void**)((char*)vtbl + 4);
    typedef void* (__thiscall *Fn)(void*);
    void* result = ((Fn)fn)(cam + 0x228);
    func_005994c0(result, -1);
}
