// from server: 94% by colin
// roc 2007-08 0055ed10  unit: RBX::WatchCameraCommand  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055ed10
//
// 0055ed10  8b490c               mov ecx, dword ptr [ecx + 0xc]
// 0055ed13  8b8128020000         mov eax, dword ptr [ecx + 0x228]
// 0055ed19  8b5004               mov edx, dword ptr [eax + 4]
// 0055ed1c  81c128020000         add ecx, 0x228
// 0055ed22  ffd2                 call edx
// 0055ed24  33c9                 xor ecx, ecx
// 0055ed26  83b88c01000002       cmp dword ptr [eax + 0x18c], 2
// 0055ed2d  0f94c1               sete cl
// 0055ed30  8ac1                 mov al, cl
// 0055ed32  c3                   ret 

struct WatchCameraCommand {
    char pad[0xc];
    void* camera;
    bool isFirstPerson();
};

bool WatchCameraCommand::isFirstPerson() {
    char* c = (char*)camera;
    void** vtable = *(void***)(c + 0x228);
    void* result = ((void* (__thiscall*)(void*))vtable[1])(c + 0x228);
    return *(int*)((char*)result + 0x18c) == 2;
}
