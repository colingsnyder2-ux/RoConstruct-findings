// from server: 100% by king_originala
// roc 2008-06 0068cc30  unit: Ogre::RbxSceneManager  size: 136 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068cc30
//
// 0068cc30  6aff                 push -1
// 0068cc32  683bf47b00           push 0x7bf43b
// 0068cc37  64a100000000         mov eax, dword ptr fs:[0]
// 0068cc3d  50                   push eax
// 0068cc3e  64892500000000       mov dword ptr fs:[0], esp
// 0068cc45  51                   push ecx
// 0068cc46  56                   push esi
// 0068cc47  57                   push edi
// 0068cc48  6a54                 push 0x54
// 0068cc4a  8bf9                 mov edi, ecx
// 0068cc4c  e8cf3c0100           call 0x6a0920
// 0068cc51  8bf0                 mov esi, eax
// 0068cc53  83c404               add esp, 4
// 0068cc56  89742408             mov dword ptr [esp + 8], esi
// 0068cc5a  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0068cc62  85f6                 test esi, esi
// 0068cc64  7418                 je 0x68cc7e
// 0068cc66  57                   push edi
// 0068cc67  8bce                 mov ecx, esi
// 0068cc69  ff1560488000         call dword ptr [0x804860]
// 0068cc6f  c70640eb8400         mov dword ptr [esi], 0x84eb40
// 0068cc75  c7463430eb8400       mov dword ptr [esi + 0x34], 0x84eb30
// 0068cc7c  eb02                 jmp 0x68cc80
// 0068cc7e  33f6                 xor esi, esi
// 0068cc80  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0068cc84  50                   push eax
// 0068cc85  8bce                 mov ecx, esi
// 0068cc87  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0068cc8f  ff155c488000         call dword ptr [0x80485c]
// 0068cc95  8b16                 mov edx, dword ptr [esi]
// 0068cc97  8b442420             mov eax, dword ptr [esp + 0x20]
// 0068cc9b  8b5204               mov edx, dword ptr [edx + 4]
// 0068cc9e  50                   push eax
// 0068cc9f  8bce                 mov ecx, esi
// 0068cca1  ffd2                 call edx
// 0068cca3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0068cca7  5f                   pop edi
// 0068cca8  8bc6                 mov eax, esi
// 0068ccaa  5e                   pop esi
// 0068ccab  64890d00000000       mov dword ptr fs:[0], ecx
// 0068ccb2  83c410               add esp, 0x10
// 0068ccb5  c20800               ret 8

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
        unsigned char data[28];
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
