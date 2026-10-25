// from server: 100% by king_originala
// roc 2008-06 0068cad0  unit: Ogre::RbxSceneManager  size: 136 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068cad0
//
// 0068cad0  6aff                 push -1
// 0068cad2  683bf47b00           push 0x7bf43b
// 0068cad7  64a100000000         mov eax, dword ptr fs:[0]
// 0068cadd  50                   push eax
// 0068cade  64892500000000       mov dword ptr fs:[0], esp
// 0068cae5  51                   push ecx
// 0068cae6  56                   push esi
// 0068cae7  57                   push edi
// 0068cae8  6a5c                 push 0x5c
// 0068caea  8bf9                 mov edi, ecx
// 0068caec  e82f3e0100           call 0x6a0920
// 0068caf1  8bf0                 mov esi, eax
// 0068caf3  83c404               add esp, 4
// 0068caf6  89742408             mov dword ptr [esp + 8], esi
// 0068cafa  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0068cb02  85f6                 test esi, esi
// 0068cb04  7418                 je 0x68cb1e
// 0068cb06  57                   push edi
// 0068cb07  8bce                 mov ecx, esi
// 0068cb09  ff1510488000         call dword ptr [0x804810]
// 0068cb0f  c706b8ea8400         mov dword ptr [esi], 0x84eab8
// 0068cb15  c74634a8ea8400       mov dword ptr [esi + 0x34], 0x84eaa8
// 0068cb1c  eb02                 jmp 0x68cb20
// 0068cb1e  33f6                 xor esi, esi
// 0068cb20  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0068cb24  50                   push eax
// 0068cb25  8bce                 mov ecx, esi
// 0068cb27  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0068cb2f  ff150c488000         call dword ptr [0x80480c]
// 0068cb35  8b16                 mov edx, dword ptr [esi]
// 0068cb37  8b442420             mov eax, dword ptr [esp + 0x20]
// 0068cb3b  8b5204               mov edx, dword ptr [edx + 4]
// 0068cb3e  50                   push eax
// 0068cb3f  8bce                 mov ecx, esi
// 0068cb41  ffd2                 call edx
// 0068cb43  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0068cb47  5f                   pop edi
// 0068cb48  8bc6                 mov eax, esi
// 0068cb4a  5e                   pop esi
// 0068cb4b  64890d00000000       mov dword ptr fs:[0], ecx
// 0068cb52  83c410               add esp, 0x10
// 0068cb55  c20800               ret 8

typedef unsigned int size_t;

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

namespace Ogre {
    struct SceneManager;
    struct AxisAlignedBox;

    struct AxisAlignedBoxSceneQuery {
        virtual ~AxisAlignedBoxSceneQuery();
        virtual void setQueryMask(unsigned int);
        __declspec(dllimport) void setBox(const AxisAlignedBox&);
        unsigned char data[48];
    };

    struct SceneQueryListener {
        virtual ~SceneQueryListener();
        unsigned char data[36];
    };

    struct DefaultAxisAlignedBoxSceneQuery
        : AxisAlignedBoxSceneQuery, SceneQueryListener {
        __declspec(dllimport) DefaultAxisAlignedBoxSceneQuery(SceneManager*);
    };

    struct RbxAxisAlignedBoxSceneQuery : DefaultAxisAlignedBoxSceneQuery {
        RbxAxisAlignedBoxSceneQuery(SceneManager*);
        virtual ~RbxAxisAlignedBoxSceneQuery();
    };

    struct RbxSceneManager {
        AxisAlignedBoxSceneQuery* createAABBQuery(
            const AxisAlignedBox&, unsigned int);
    };
}

inline Ogre::RbxAxisAlignedBoxSceneQuery::RbxAxisAlignedBoxSceneQuery(
    Ogre::SceneManager* manager)
    : DefaultAxisAlignedBoxSceneQuery(manager)
{
}

Ogre::AxisAlignedBoxSceneQuery* Ogre::RbxSceneManager::createAABBQuery(
    const Ogre::AxisAlignedBox& box, unsigned int mask)
{
    RbxAxisAlignedBoxSceneQuery* query =
        new RbxAxisAlignedBoxSceneQuery(
            reinterpret_cast<SceneManager*>(this));
    query->setBox(box);
    query->setQueryMask(mask);
    return query;
}
