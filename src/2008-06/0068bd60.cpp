// from server: 100% by tester
// roc 2008-06 0068bd60  unit: Ogre::RbxSceneManager  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068bd60
//
// 0068bd60  8b01                 mov eax, dword ptr [ecx]
// 0068bd62  8b15c4478000         mov edx, dword ptr [0x8047c4]
// 0068bd68  8b8040030000         mov eax, dword ptr [eax + 0x340]
// 0068bd6e  52                   push edx
// 0068bd6f  ffd0                 call eax
// 0068bd71  c3                   ret 

// Ogre::RbxSceneManager: destroys all movable objects of one factory type.
#define V1(n) virtual void n();
#define V4(n) V1(n##0) V1(n##1) V1(n##2) V1(n##3)
#define V16(n) V4(n##0) V4(n##1) V4(n##2) V4(n##3)
#define V64(n) V16(n##0) V16(n##1) V16(n##2) V16(n##3)

struct MovableObjectFactory;
extern const char* FACTORY_TYPE_NAME_0068bd60_0068b880;

struct SceneManager {
    V64(a) V64(b) V64(c) V16(d)
    virtual void destroyAllMovableObjectsByType(const char* typeName);
};

struct RbxSceneManager : SceneManager {
    void destroyAllObjects();
};

void RbxSceneManager::destroyAllObjects()
{
    destroyAllMovableObjectsByType(FACTORY_TYPE_NAME_0068bd60_0068b880);
}
