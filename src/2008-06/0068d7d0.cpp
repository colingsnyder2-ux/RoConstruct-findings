// from server: 89% by colin
// from server: 88% by king_originala
// roc 2008-06 0068d7d0  unit: Ogre::RbxSceneManager  size: 420 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068d7d0
//
// 0068d7d0  51                   push ecx
// 0068d7d1  53                   push ebx
// 0068d7d2  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0068d7d6  55                   push ebp
// 0068d7d7  8b2d90448000         mov ebp, dword ptr [0x804490]
// 0068d7dd  56                   push esi
// 0068d7de  8bf1                 mov esi, ecx
// 0068d7e0  83be1401000000       cmp dword ptr [esi + 0x114], 0
// 0068d7e7  57                   push edi
// 0068d7e8  741a                 je 0x68d804
// 0068d7ea  8b8614010000         mov eax, dword ptr [esi + 0x114]
// 0068d7f0  8b38                 mov edi, dword ptr [eax]
// 0068d7f2  8bcb                 mov ecx, ebx
// 0068d7f4  83c76c               add edi, 0x6c
// 0068d7f7  ffd5                 call ebp
// 0068d7f9  8b8e14010000         mov ecx, dword ptr [esi + 0x114]
// 0068d7ff  8b17                 mov edx, dword ptr [edi]
// 0068d801  50                   push eax
// 0068d802  ffd2                 call edx
// 0068d804  83be1c01000000       cmp dword ptr [esi + 0x11c], 0
// 0068d80b  7434                 je 0x68d841
// 0068d80d  8b861c010000         mov eax, dword ptr [esi + 0x11c]
// 0068d813  8b38                 mov edi, dword ptr [eax]
// 0068d815  8bcb                 mov ecx, ebx
// 0068d817  83c76c               add edi, 0x6c
// 0068d81a  ffd5                 call ebp
// 0068d81c  8b8e1c010000         mov ecx, dword ptr [esi + 0x11c]
// 0068d822  8b17                 mov edx, dword ptr [edi]
// 0068d824  50                   push eax
// 0068d825  ffd2                 call edx
// 0068d827  8b86e48b0000         mov eax, dword ptr [esi + 0x8be4]
// 0068d82d  8b38                 mov edi, dword ptr [eax]
// 0068d82f  8bcb                 mov ecx, ebx
// 0068d831  83c76c               add edi, 0x6c
// 0068d834  ffd5                 call ebp
// 0068d836  8b8ee48b0000         mov ecx, dword ptr [esi + 0x8be4]
// 0068d83c  8b17                 mov edx, dword ptr [edi]
// 0068d83e  50                   push eax
// 0068d83f  ffd2                 call edx
// 0068d841  83be1801000000       cmp dword ptr [esi + 0x118], 0
// 0068d848  741a                 je 0x68d864
// 0068d84a  8b8618010000         mov eax, dword ptr [esi + 0x118]
// 0068d850  8b38                 mov edi, dword ptr [eax]
// 0068d852  8bcb                 mov ecx, ebx
// 0068d854  83c76c               add edi, 0x6c
// 0068d857  ffd5                 call ebp
// 0068d859  8b8e18010000         mov ecx, dword ptr [esi + 0x118]
// 0068d85f  8b17                 mov edx, dword ptr [edi]
// 0068d861  50                   push eax
// 0068d862  ffd2                 call edx
// 0068d864  80be2001000000       cmp byte ptr [esi + 0x120], 0
// 0068d86b  8b2dd4488000         mov ebp, dword ptr [0x8048d4]
// 0068d871  7433                 je 0x68d8a6
// 0068d873  0fb68621010000       movzx eax, byte ptr [esi + 0x121]
// 0068d87a  8b8ee4000000         mov ecx, dword ptr [esi + 0xe4]
// 0068d880  f7d8                 neg eax
// 0068d882  1bc0                 sbb eax, eax
// 0068d884  83e0a6               and eax, 0xffffffa6
// 0068d887  6a64                 push 0x64
// 0068d889  83c05f               add eax, 0x5f
// 0068d88c  50                   push eax
// 0068d88d  6a00                 push 0
// 0068d88f  ff15d0488000         call dword ptr [0x8048d0]
// 0068d895  50                   push eax
// 0068d896  8b06                 mov eax, dword ptr [esi]
// 0068d898  8b9018020000         mov edx, dword ptr [eax + 0x218]
// 0068d89e  8bce                 mov ecx, esi
// 0068d8a0  ffd2                 call edx
// 0068d8a2  8bc8                 mov ecx, eax
// 0068d8a4  ffd5                 call ebp
// 0068d8a6  80be4801000000       cmp byte ptr [esi + 0x148], 0
// 0068d8ad  746d                 je 0x68d91c
// 0068d8af  0fb6be49010000       movzx edi, byte ptr [esi + 0x149]
// 0068d8b6  f7df                 neg edi
// 0068d8b8  1bff                 sbb edi, edi
// 0068d8ba  83e7a6               and edi, 0xffffffa6
// 0068d8bd  83c75f               add edi, 0x5f
// 0068d8c0  8d9efc000000         lea ebx, [esi + 0xfc]
// 0068d8c6  c744241006000000     mov dword ptr [esp + 0x10], 6
// 0068d8ce  8bff                 mov edi, edi
// 0068d8d0  8b0b                 mov ecx, dword ptr [ebx]
// 0068d8d2  6a64                 push 0x64
// 0068d8d4  57                   push edi
// 0068d8d5  6a00                 push 0
// 0068d8d7  ff15d0488000         call dword ptr [0x8048d0]
// 0068d8dd  50                   push eax
// 0068d8de  8b06                 mov eax, dword ptr [esi]
// 0068d8e0  8b9018020000         mov edx, dword ptr [eax + 0x218]
// 0068d8e6  8bce                 mov ecx, esi
// 0068d8e8  ffd2                 call edx
// 0068d8ea  8bc8                 mov ecx, eax
// 0068d8ec  ffd5                 call ebp
// 0068d8ee  83c304               add ebx, 4
// 0068d8f1  836c241001           sub dword ptr [esp + 0x10], 1
// 0068d8f6  75d8                 jne 0x68d8d0
// 0068d8f8  8b9edc8b0000         mov ebx, dword ptr [esi + 0x8bdc]
// 0068d8fe  85db                 test ebx, ebx
// 0068d900  741a                 je 0x68d91c
// 0068d902  8b06                 mov eax, dword ptr [esi]
// 0068d904  8b9018020000         mov edx, dword ptr [eax + 0x218]
// 0068d90a  57                   push edi
// 0068d90b  8bce                 mov ecx, esi
// 0068d90d  ffd2                 call edx
// 0068d90f  50                   push eax
// 0068d910  8b442420             mov eax, dword ptr [esp + 0x20]
// 0068d914  50                   push eax
// 0068d915  8bcb                 mov ecx, ebx
// 0068d917  e8341fffff           call 0x67f850
// 0068d91c  80be6001000000       cmp byte ptr [esi + 0x160], 0
// 0068d923  7447                 je 0x68d96c
// 0068d925  0fb6be61010000       movzx edi, byte ptr [esi + 0x161]
// 0068d92c  f7df                 neg edi
// 0068d92e  1bff                 sbb edi, edi
// 0068d930  83e7a6               and edi, 0xffffffa6
// 0068d933  83c75f               add edi, 0x5f
// 0068d936  8d9ee8000000         lea ebx, [esi + 0xe8]
// 0068d93c  c744241805000000     mov dword ptr [esp + 0x18], 5
// 0068d944  8b0b                 mov ecx, dword ptr [ebx]
// 0068d946  6a64                 push 0x64
// 0068d948  57                   push edi
// 0068d949  6a00                 push 0
// 0068d94b  ff15d0488000         call dword ptr [0x8048d0]
// 0068d951  8b16                 mov edx, dword ptr [esi]
// 0068d953  50                   push eax
// 0068d954  8b8218020000         mov eax, dword ptr [edx + 0x218]
// 0068d95a  8bce                 mov ecx, esi
// 0068d95c  ffd0                 call eax
// 0068d95e  8bc8                 mov ecx, eax
// 0068d960  ffd5                 call ebp
// 0068d962  83c304               add ebx, 4
// 0068d965  836c241801           sub dword ptr [esp + 0x18], 1
// 0068d96a  75d8                 jne 0x68d944
// 0068d96c  5f                   pop edi
// 0068d96d  5e                   pop esi
// 0068d96e  5d                   pop ebp
// 0068d96f  5b                   pop ebx
// 0068d970  59                   pop ecx
// 0068d971  c20400               ret 4
#include <intrin.h>

struct Vector3 { float x, y, z; };
struct Camera;
struct Entity;
struct Renderable;
struct RenderQueue;

typedef const Vector3& (__thiscall *PositionFunction)(Camera*);
typedef void (__thiscall *QueueFunction)(RenderQueue*, Renderable*, unsigned int, unsigned short);

extern PositionFunction getDerivedPosition;
extern Renderable* (__thiscall *getSubEntity)(Entity*, unsigned int);
extern QueueFunction addRenderable;

#define V(n) virtual void v##n();
#define V10(n) V(n##0) V(n##1) V(n##2) V(n##3) V(n##4) V(n##5) V(n##6) V(n##7) V(n##8) V(n##9)

struct Node
{
    V10(0) V10(1)
    V(20) V(21) V(22) V(23) V(24) V(25) V(26)
    virtual void update(const Vector3&);
};

struct Special
{
    void update(Camera*, RenderQueue*, unsigned int);
};

struct S
{
    V10(0) V10(1) V10(2) V10(3) V10(4)
    V10(5) V10(6) V10(7) V10(8) V10(9)
    V10(10) V10(11) V10(12)
    V(130) V(131) V(132) V(133)
    virtual RenderQueue* getRenderQueue();

    char padding0[0xe0];
    Entity* entity;
    Entity* entities5[5];
    Entity* entities6[6];
    Node* node114;
    Node* node118;
    Node* node11c;
    unsigned char enabled120;
    unsigned char mode121;
    char padding1[0x26];
    unsigned char enabled148;
    unsigned char mode149;
    char padding2[0x16];
    unsigned char enabled160;
    unsigned char mode161;
    char padding3[0x8bdc - 0x162];
    Special* special;
    char padding4[4];
    Node* node8be4;

    void f(Camera*);
};

#undef V10
#undef V

void S::f(Camera* camera)
{
    PositionFunction position = getDerivedPosition;
    _ReadWriteBarrier();

    if (node114)
        node114->update(position(camera));

    if (node11c)
    {
        node11c->update(position(camera));
        node8be4->update(position(camera));
    }

    if (node118)
        node118->update(position(camera));

    QueueFunction enqueue = addRenderable;

    if (enabled120)
        enqueue(getRenderQueue(), getSubEntity(entity, 0),
                mode121 ? 5 : 95, 100);

    if (enabled148)
    {
        unsigned int group = mode149 ? 5 : 95;
        Entity** p = entities6;
        int count = 6;
        do
        {
            enqueue(getRenderQueue(), getSubEntity(*p, 0), group, 100);
            ++p;
        } while (--count);

        Special* object = special;
        if (object)
            object->update(camera, getRenderQueue(), group);
    }

    if (enabled160)
    {
        unsigned int group = mode161 ? 5 : 95;
        Entity** p = entities5;
        int count = 5;
        do
        {
            enqueue(getRenderQueue(), getSubEntity(*p, 0), group, 100);
            ++p;
        } while (--count);
    }
}
