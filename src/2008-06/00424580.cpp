// from server: 100% by king_originala
// roc 2008-06 00424580  unit: CSelectionTreeCtrl  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00424580
//
// 00424580  6aff                 push -1
// 00424582  6888ea7b00           push 0x7bea88
// 00424587  64a100000000         mov eax, dword ptr fs:[0]
// 0042458d  50                   push eax
// 0042458e  64892500000000       mov dword ptr fs:[0], esp
// 00424595  83ec14               sub esp, 0x14
// 00424598  56                   push esi
// 00424599  8bf1                 mov esi, ecx
// 0042459b  57                   push edi
// 0042459c  8b7e58               mov edi, dword ptr [esi + 0x58]
// 0042459f  81c7c4000000         add edi, 0xc4
// 004245a5  8bcf                 mov ecx, edi
// 004245a7  897c2408             mov dword ptr [esp + 8], edi
// 004245ab  e8e0ea1300           call 0x563090
// 004245b0  c644240c01           mov byte ptr [esp + 0xc], 1
// 004245b5  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 004245b9  50                   push eax
// 004245ba  8d4c2414             lea ecx, [esp + 0x14]
// 004245be  51                   push ecx
// 004245bf  8d4e60               lea ecx, [esi + 0x60]
// 004245c2  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 004245ca  e861faffff           call 0x424030
// 004245cf  8bcf                 mov ecx, edi
// 004245d1  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 004245d9  e802eb1300           call 0x5630e0
// 004245de  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 004245e1  8b11                 mov edx, dword ptr [ecx]
// 004245e3  8b825c010000         mov eax, dword ptr [edx + 0x15c]
// 004245e9  56                   push esi
// 004245ea  ffd0                 call eax
// 004245ec  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004245f0  5f                   pop edi
// 004245f1  5e                   pop esi
// 004245f2  64890d00000000       mov dword ptr fs:[0], ecx
// 004245f9  83c420               add esp, 0x20
// 004245fc  c20400               ret 4

struct Lock {
    void acquire();
    void f();
};

struct Guard {
    Lock* lock;
    bool held;
    Guard(Lock* p);
    ~Guard();
};

__forceinline Guard::Guard(Lock* p) : lock(p)
{
    lock->acquire();
    held = true;
}

__forceinline Guard::~Guard()
{
    if (held)
        lock->f();
}

struct Result {
    unsigned int data[3];
};

struct Container {
    Result insert(unsigned int value);
};

struct Selection;

struct ParentVtbl {
    char padding[0x15c];
    void (__thiscall *notify)(void*, Selection*);
};

struct Parent {
    ParentVtbl* vtbl;
    char padding[0xc0];
    Lock lock;
};

struct Selection {
    char padding[0x58];
    Parent* parent;
    unsigned int reserved;
    Container container;
    void f(unsigned int value);
};

void Selection::f(unsigned int value)
{
    {
        Guard guard(&parent->lock);
        container.insert(value);
    }
    parent->vtbl->notify(parent, this);
}
