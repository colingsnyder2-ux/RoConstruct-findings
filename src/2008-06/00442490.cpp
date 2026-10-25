// from server: 100% by EspClaude
// roc 2008-06 00442490  unit: CSelectionPropGrid  size: 325 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00442490
//
// 00442490  6aff                 push -1
// 00442492  68100c7c00           push 0x7c0c10
// 00442497  64a100000000         mov eax, dword ptr fs:[0]
// 0044249d  50                   push eax
// 0044249e  64892500000000       mov dword ptr fs:[0], esp
// 004424a5  83ec08               sub esp, 8
// 004424a8  53                   push ebx
// 004424a9  55                   push ebp
// 004424aa  56                   push esi
// 004424ab  57                   push edi
// 004424ac  8bf9                 mov edi, ecx
// 004424ae  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004424b2  c744242000000000     mov dword ptr [esp + 0x20], 0
// 004424ba  bb01000000           mov ebx, 1
// 004424bf  85c9                 test ecx, ecx
// 004424c1  742e                 je 0x4424f1
// 004424c3  83ec08               sub esp, 8
// 004424c6  8bc4                 mov eax, esp
// 004424c8  8908                 mov dword ptr [eax], ecx
// 004424ca  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 004424ce  894804               mov dword ptr [eax + 4], ecx
// 004424d1  8b442438             mov eax, dword ptr [esp + 0x38]
// 004424d5  89642418             mov dword ptr [esp + 0x18], esp
// 004424d9  85c0                 test eax, eax
// 004424db  7409                 je 0x4424e6
// 004424dd  83c004               add eax, 4
// 004424e0  8bd3                 mov edx, ebx
// 004424e2  f00fc110             lock xadd dword ptr [eax], edx
// 004424e6  8d8fc8fdffff         lea ecx, [edi - 0x238]
// 004424ec  e8fffeffff           call 0x4423f0
// 004424f1  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 004424f5  85c9                 test ecx, ecx
// 004424f7  742e                 je 0x442527
// 004424f9  83ec08               sub esp, 8
// 004424fc  8bc4                 mov eax, esp
// 004424fe  8908                 mov dword ptr [eax], ecx
// 00442500  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00442504  894804               mov dword ptr [eax + 4], ecx
// 00442507  8b442440             mov eax, dword ptr [esp + 0x40]
// 0044250b  89642418             mov dword ptr [esp + 0x18], esp
// 0044250f  85c0                 test eax, eax
// 00442511  7409                 je 0x44251c
// 00442513  83c004               add eax, 4
// 00442516  8bd3                 mov edx, ebx
// 00442518  f00fc110             lock xadd dword ptr [eax], edx
// 0044251c  8d8fc8fdffff         lea ecx, [edi - 0x238]
// 00442522  e8a977ffff           call 0x439cd0
// 00442527  8daf54ffffff         lea ebp, [edi - 0xac]
// 0044252d  8bcd                 mov ecx, ebp
// 0044252f  896c2410             mov dword ptr [esp + 0x10], ebp
// 00442533  e8580b1200           call 0x563090
// 00442538  885c2414             mov byte ptr [esp + 0x14], bl
// 0044253c  885fbd               mov byte ptr [edi - 0x43], bl
// 0044253f  8b47d8               mov eax, dword ptr [edi - 0x28]
// 00442542  8b4804               mov ecx, dword ptr [eax + 4]
// 00442545  8d77c0               lea esi, [edi - 0x40]
// 00442548  51                   push ecx
// 00442549  8bce                 mov ecx, esi
// 0044254b  885c2424             mov byte ptr [esp + 0x24], bl
// 0044254f  e8fc6a2200           call 0x669050
// 00442554  8b4618               mov eax, dword ptr [esi + 0x18]
// 00442557  894004               mov dword ptr [eax + 4], eax
// 0044255a  8b4618               mov eax, dword ptr [esi + 0x18]
// 0044255d  c7461c00000000       mov dword ptr [esi + 0x1c], 0
// 00442564  8900                 mov dword ptr [eax], eax
// 00442566  8b7618               mov esi, dword ptr [esi + 0x18]
// 00442569  897608               mov dword ptr [esi + 8], esi
// 0044256c  8db754ffffff         lea esi, [edi - 0xac]
// 00442572  8bce                 mov ecx, esi
// 00442574  e8170b1200           call 0x563090
// 00442579  807fbc00             cmp byte ptr [edi - 0x44], 0
// 0044257d  751d                 jne 0x44259c
// 0044257f  8b87e8fdffff         mov eax, dword ptr [edi - 0x218]
// 00442585  85c0                 test eax, eax
// 00442587  7410                 je 0x442599
// 00442589  6a00                 push 0
// 0044258b  6a00                 push 0
// 0044258d  6865040000           push 0x465
// 00442592  50                   push eax
// 00442593  ff150c2e8000         call dword ptr [0x802e0c]
// 00442599  885fbc               mov byte ptr [edi - 0x44], bl
// 0044259c  8bce                 mov ecx, esi
// 0044259e  e83d0b1200           call 0x5630e0
// 004425a3  8bcd                 mov ecx, ebp
// 004425a5  c644242000           mov byte ptr [esp + 0x20], 0
// 004425aa  e8310b1200           call 0x5630e0
// 004425af  8d4c242c             lea ecx, [esp + 0x2c]
// 004425b3  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 004425bb  e8a006feff           call 0x422c60
// 004425c0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004425c4  5f                   pop edi
// 004425c5  5e                   pop esi
// 004425c6  5d                   pop ebp
// 004425c7  64890d00000000       mov dword ptr fs:[0], ecx
// 004425ce  5b                   pop ebx
// 004425cf  83c414               add esp, 0x14
// 004425d2  c21400               ret 0x14



extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" {
    __declspec(dllimport) int __stdcall PostMessageA(void *, unsigned int, unsigned int, long);
}

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void *object;
    Control *control;

    Shared(const Shared &other) : object(other.object), control(other.control)
    {
        if (control) {
            volatile long *count = &control->strong;
            _InterlockedExchangeAdd(count, 1);
        }
    }

    ~Shared();
};

struct Change {
    Shared first;
    Shared second;
    ~Change();
};

struct Mutex {
    void *handle;
    bool criticalSection;
    unsigned int count;
    void lock();
    void unlock();
};

struct Lock {
    Mutex *mutex;
    bool held;

    Lock(Mutex &m) : mutex(&m), held(false)
    {
        mutex->lock();
        held = true;
    }

    ~Lock()
    {
        if (held)
            mutex->unlock();
    }
};

struct Node {
    Node *left;
    Node *parent;
    Node *right;
};

struct Tree {
    char padding[24];
    Node *head;
    unsigned int size;
    void erase(Node *);
};

struct Base {
    void first(Shared);
    void second(Shared);
};

struct Grid {
    char pad0[32];
    void *window;
    char pad1[396 - 36];
    Mutex mutex;
    char pad2[500 - 396 - sizeof(Mutex)];
    bool pending;
    void requestUpdate()
    {
        Lock lock(mutex);
        if (!pending) {
            if (window)
                PostMessageA(window, 1125, 0, 0);
            pending = true;
        }
    }
};

struct S {
    void f(int argument, Change change);
};

void S::f(int argument, Change change)
{
    if (change.first.object)
        reinterpret_cast<Base *>(reinterpret_cast<char *>(this) - 568)->first(change.first);

    if (change.second.object)
        reinterpret_cast<Base *>(reinterpret_cast<char *>(this) - 568)->second(change.second);

    Lock lock(*reinterpret_cast<Mutex *>(reinterpret_cast<char *>(this) - 172));
    *reinterpret_cast<bool *>(reinterpret_cast<char *>(this) - 67) = true;

    Tree *tree = reinterpret_cast<Tree *>(reinterpret_cast<char *>(this) - 64);
    tree->erase(tree->head->parent);
    tree->head->parent = tree->head;
    tree->size = 0;
    tree->head->left = tree->head;
    tree->head->right = tree->head;

    reinterpret_cast<Grid *>(reinterpret_cast<char *>(this) - 568)->requestUpdate();
}
