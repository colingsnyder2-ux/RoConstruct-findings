// from server: 100% by tester
// roc 2008-06 005a0690  unit: RBX::Workspace  size: 174 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a0690
//
// 005a0690  64a100000000         mov eax, dword ptr fs:[0]
// 005a0696  6aff                 push -1
// 005a0698  6868617c00           push 0x7c6168
// 005a069d  50                   push eax
// 005a069e  64892500000000       mov dword ptr fs:[0], esp
// 005a06a5  56                   push esi
// 005a06a6  8b442414             mov eax, dword ptr [esp + 0x14]
// 005a06aa  6a00                 push 0
// 005a06ac  68709f9300           push 0x939f70
// 005a06b1  687c909200           push 0x92907c
// 005a06b6  6a00                 push 0
// 005a06b8  50                   push eax
// 005a06b9  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005a06c1  e800111000           call 0x6a17c6
// 005a06c6  8bf0                 mov esi, eax
// 005a06c8  83c414               add esp, 0x14
// 005a06cb  85f6                 test esi, esi
// 005a06cd  7425                 je 0x5a06f4
// 005a06cf  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005a06d3  51                   push ecx
// 005a06d4  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005a06d8  e8d36dfbff           call 0x5574b0
// 005a06dd  84c0                 test al, al
// 005a06df  7413                 je 0x5a06f4
// 005a06e1  8b442420             mov eax, dword ptr [esp + 0x20]
// 005a06e5  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005a06e9  8b16                 mov edx, dword ptr [esi]
// 005a06eb  8b5210               mov edx, dword ptr [edx + 0x10]
// 005a06ee  50                   push eax
// 005a06ef  51                   push ecx
// 005a06f0  8bce                 mov ecx, esi
// 005a06f2  ffd2                 call edx
// 005a06f4  8b742418             mov esi, dword ptr [esp + 0x18]
// 005a06f8  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 005a0700  85f6                 test esi, esi
// 005a0702  742a                 je 0x5a072e
// 005a0704  8d4604               lea eax, [esi + 4]
// 005a0707  83c9ff               or ecx, 0xffffffff
// 005a070a  f00fc108             lock xadd dword ptr [eax], ecx
// 005a070e  751e                 jne 0x5a072e
// 005a0710  8b16                 mov edx, dword ptr [esi]
// 005a0712  8b4204               mov eax, dword ptr [edx + 4]
// 005a0715  8bce                 mov ecx, esi
// 005a0717  ffd0                 call eax
// 005a0719  8d4e08               lea ecx, [esi + 8]
// 005a071c  83caff               or edx, 0xffffffff
// 005a071f  f00fc111             lock xadd dword ptr [ecx], edx
// 005a0723  7509                 jne 0x5a072e
// 005a0725  8b06                 mov eax, dword ptr [esi]
// 005a0727  8b5008               mov edx, dword ptr [eax + 8]
// 005a072a  8bce                 mov ecx, esi
// 005a072c  ffd2                 call edx
// 005a072e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005a0732  64890d00000000       mov dword ptr fs:[0], ecx
// 005a0739  5e                   pop esi
// 005a073a  83c40c               add esp, 0xc
// 005a073d  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

namespace RBX
{
    class Instance
    {
    public:
        virtual ~Instance();
        bool contains(Instance*);
    };

    class IRenderable
    {
    public:
        virtual ~IRenderable();
        virtual void reserved1();
        virtual void reserved2();
        virtual void reserved3();
        virtual void render(void*, void*);
    };
}

struct ControlBlock
{
    virtual ~ControlBlock();
    virtual void dispose();
    virtual void destroy();

    volatile long strongCount;
    volatile long weakCount;
};

struct InstancePtr
{
    RBX::Instance* object;
    ControlBlock* control;

    ~InstancePtr();
};

inline InstancePtr::~InstancePtr()
{
    ControlBlock* p = control;
    if (p)
    {
        if (_InterlockedDecrement(&p->strongCount) == 0)
        {
            p->dispose();
            if (_InterlockedDecrement(&p->weakCount) == 0)
                p->destroy();
        }
    }
}

void __cdecl renderInstance(
    InstancePtr instance,
    void* first,
    void* second,
    RBX::Instance* owner)
{
    RBX::IRenderable* renderable =
        dynamic_cast<RBX::IRenderable*>(instance.object);

    if (renderable && owner->contains(instance.object))
        renderable->render(first, second);
}
