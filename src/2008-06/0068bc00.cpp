// from server: 77% by tester
// roc 2008-06 0068bc00  unit: Ogre::RbxSceneManager  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068bc00
//
// 0068bc00  8b01                 mov eax, dword ptr [ecx]
// 0068bc02  8b15bc478000         mov edx, dword ptr [0x8047bc]
// 0068bc08  8b8040030000         mov eax, dword ptr [eax + 0x340]
// 0068bc0e  52                   push edx
// 0068bc0f  ffd0                 call eax
// 0068bc11  c3                   ret 

struct RbxSceneManager {
    void f();
};

extern "C" void* __stdcall FACTORY_TYPE_NAME_BillboardChainFactory;

void RbxSceneManager::f()
{
    void* p = *(void**)this;
    void* q = *(void**)((char*)p + 0x340);
    void* r = *(void**)0x8047bc;
    ((void (__stdcall*)(void*))q)(r);
}
