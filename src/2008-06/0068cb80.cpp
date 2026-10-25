// from server: 100% by king_originala
// roc 2008-06 0068cb80  unit: Ogre::RbxSceneManager  size: 136 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068cb80
//
// 0068cb80  6aff                 push -1
// 0068cb82  683bf47b00           push 0x7bf43b
// 0068cb87  64a100000000         mov eax, dword ptr fs:[0]
// 0068cb8d  50                   push eax
// 0068cb8e  64892500000000       mov dword ptr fs:[0], esp
// 0068cb95  51                   push ecx
// 0068cb96  56                   push esi
// 0068cb97  57                   push edi
// 0068cb98  6a4c                 push 0x4c
// 0068cb9a  8bf9                 mov edi, ecx
// 0068cb9c  e87f3d0100           call 0x6a0920
// 0068cba1  8bf0                 mov esi, eax
// 0068cba3  83c404               add esp, 4
// 0068cba6  89742408             mov dword ptr [esp + 8], esi
// 0068cbaa  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0068cbb2  85f6                 test esi, esi
// 0068cbb4  7418                 je 0x68cbce
// 0068cbb6  57                   push edi
// 0068cbb7  8bce                 mov ecx, esi
// 0068cbb9  ff1550488000         call dword ptr [0x804850]
// 0068cbbf  c706fcea8400         mov dword ptr [esi], 0x84eafc
// 0068cbc5  c74634ecea8400       mov dword ptr [esi + 0x34], 0x84eaec
// 0068cbcc  eb02                 jmp 0x68cbd0
// 0068cbce  33f6                 xor esi, esi
// 0068cbd0  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0068cbd4  50                   push eax
// 0068cbd5  8bce                 mov ecx, esi
// 0068cbd7  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0068cbdf  ff154c488000         call dword ptr [0x80484c]
// 0068cbe5  8b16                 mov edx, dword ptr [esi]
// 0068cbe7  8b442420             mov eax, dword ptr [esp + 0x20]
// 0068cbeb  8b5204               mov edx, dword ptr [edx + 4]
// 0068cbee  50                   push eax
// 0068cbef  8bce                 mov ecx, esi
// 0068cbf1  ffd2                 call edx
// 0068cbf3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0068cbf7  5f                   pop edi
// 0068cbf8  8bc6                 mov eax, esi
// 0068cbfa  5e                   pop esi
// 0068cbfb  64890d00000000       mov dword ptr fs:[0], ecx
// 0068cc02  83c410               add esp, 0x10
// 0068cc05  c20800               ret 8

typedef unsigned int size_t;

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

namespace Ogre {
    struct SceneManager;
    struct Sphere;

    struct SphereSceneQuery {
        virtual ~SphereSceneQuery();
        virtual void setQueryMask(unsigned int);
        __declspec(dllimport) void setSphere(const Sphere&);
        unsigned char data[48];
    };

    struct SceneQueryListener {
        virtual ~SceneQueryListener();
        unsigned char data[20];
    };

    struct DefaultSphereSceneQuery
        : SphereSceneQuery, SceneQueryListener {
        __declspec(dllimport) DefaultSphereSceneQuery(SceneManager*);
    };

    struct RbxSphereSceneQuery : DefaultSphereSceneQuery {
        RbxSphereSceneQuery(SceneManager*);
        virtual ~RbxSphereSceneQuery();
    };

    struct RbxSceneManager {
        SphereSceneQuery* createSphereQuery(const Sphere&, unsigned int);
    };
}

inline Ogre::RbxSphereSceneQuery::RbxSphereSceneQuery(
    Ogre::SceneManager* manager)
    : DefaultSphereSceneQuery(manager)
{
}

Ogre::SphereSceneQuery* Ogre::RbxSceneManager::createSphereQuery(
    const Ogre::Sphere& sphere, unsigned int mask)
{
    RbxSphereSceneQuery* query =
        new RbxSphereSceneQuery(reinterpret_cast<SceneManager*>(this));
    query->setSphere(sphere);
    query->setQueryMask(mask);
    return query;
}
