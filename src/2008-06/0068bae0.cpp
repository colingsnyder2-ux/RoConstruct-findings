// from server: 92% by colin
// roc 2008-06 0068bae0  unit: Ogre::RbxSceneManager  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068bae0
//
// 0068bae0  8b15b8478000         mov edx, dword ptr [0x8047b8]
// 0068bae6  8b01                 mov eax, dword ptr [ecx]
// 0068bae8  8b8034030000         mov eax, dword ptr [eax + 0x334]
// 0068baee  6a00                 push 0
// 0068baf0  52                   push edx
// 0068baf1  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0068baf5  52                   push edx
// 0068baf6  ffd0                 call eax
// 0068baf8  c20400               ret 4

extern "C" int _cdecl_8047b8;

struct RbxSceneManager {
    virtual void vfunc_334(int, int, int);
    void method(int);
};

void RbxSceneManager::method(int a) {
    int g = _cdecl_8047b8;
    vfunc_334(a, g, 0);
}
