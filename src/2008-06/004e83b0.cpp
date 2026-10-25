// from server: 90% by king_originala_sol_resume_high
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbxgs-view roc_resume_high_decal_guard_ac07cee00b306dea.cpp

// Candidate translation unit (score above; library headers required).
#include "RenderLib/RenderScene.h"
// RTTI proves Decal -> PartChunk -> Chunk -> ReferenceCountedObject all PMD zero.
// Keep borrowed owner fields; use genuine native scene callback and G3D self ownership.
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" long (__stdcall * const incrementReference)(volatile long*);
extern "C" long (__stdcall * const decrementReference)(volatile long*);

struct Control
{
    virtual void slot0();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
    void release()
    {
        if (_InterlockedDecrement(&strong) == 0)
        {
            dispose();
            weak_release();
        }
    }
    void weak_release()
    {
        if (_InterlockedDecrement(&weak) == 0)
            destroy();
    }
};

struct ControlRef
{
    Control* pointer;
    ControlRef& assign(const ControlRef&);
};

struct Shared
{
    void* object;
    ControlRef control;
    Shared& operator=(const Shared&);
    ~Shared();
};

struct Node
{
    char padding[0x104];
    Node* parent;
    bool contains(Node*);
};

struct S;

typedef G3D::ReferenceCountedPointer<RBX::Render::Chunk> Intrusive;

typedef RBX::Render::SceneManager Callback;

struct Holder
{
    void* unused;
    Callback* callback;
};

struct S
{
    virtual ~S();
    volatile long references;
    char padding0[0xb4];
    Shared shared;
    char padding1[0xc];
    Holder* holder;
    void* unused;
    Node* node;

    void cleanup();
    void updateFirst();
    void updateSecond();
    void f(Shared);
};

extern char instanceType;
extern char partType;
extern "C" void* __cdecl runtimeCast(void*, int, void*, void*, int);
extern Node* __cdecl findRoot(Node*);
extern Shared __cdecl makeShared(void*);

__forceinline Shared& Shared::operator=(const Shared& other)
{
    object = other.object;
    control.assign(other.control);
    return *this;
}

__forceinline Shared::~Shared()
{
    if (control.pointer)
        control.pointer->release();
}

void S::f(Shared argument)
{
    if (node)
    {
        Node* root = findRoot(node);
        shared = makeShared(
            runtimeCast(node->parent, 0, &instanceType, &partType, 0));
        if (root && node->contains(root))
        {
            updateFirst();
            updateSecond();
        }
        if (!root || !node->contains(root))
        {
            holder->callback->removeModel(Intrusive(reinterpret_cast<RBX::Render::Chunk*>(this)));
        }
    }
}
