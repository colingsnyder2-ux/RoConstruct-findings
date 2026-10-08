// from server: 50% by colin
// roc 2008-06 00685450  unit: Ogre::RbxSubEntity::RbxSubEntityShadowRenderable  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00685450
//
// 00685450  8b496c               mov ecx, dword ptr [ecx + 0x6c]
// 00685453  8b01                 mov eax, dword ptr [ecx]
// 00685455  8b4010               mov eax, dword ptr [eax + 0x10]
// 00685458  ffe0                 jmp eax

struct OgreRbxSubEntityRbxSubEntityShadowRenderable {
    void* vtable;
    int someData;

    void someMethod();
};

extern "C" __declspec(dllimport) void* __stdcall SomeFunction(void*);

void OgreRbxSubEntityRbxSubEntityShadowRenderable::someMethod() {
    void* ptr = this;
    ptr = *(void**)((char*)ptr + 0x6c);
    ptr = *(void**)((char*)ptr + 0x10);
    SomeFunction(ptr);
}
