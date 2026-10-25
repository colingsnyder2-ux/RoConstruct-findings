// from server: 100% by king_originala
// roc 2008-06 0056a650  unit: RBX::VInstance::?$NonFactoryProduct  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056a650
//
// 0056a650  6aff                 push -1
// 0056a652  6838077d00           push 0x7d0738
// 0056a657  64a100000000         mov eax, dword ptr fs:[0]
// 0056a65d  50                   push eax
// 0056a65e  64892500000000       mov dword ptr fs:[0], esp
// 0056a665  51                   push ecx
// 0056a666  56                   push esi
// 0056a667  8bf1                 mov esi, ecx
// 0056a669  89742404             mov dword ptr [esp + 4], esi
// 0056a66d  8b06                 mov eax, dword ptr [esi]
// 0056a66f  ff08                 dec dword ptr [eax]
// 0056a671  8b06                 mov eax, dword ptr [esi]
// 0056a673  833800               cmp dword ptr [eax], 0
// 0056a676  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0056a67e  7514                 jne 0x56a694
// 0056a680  f6400401             test byte ptr [eax + 4], 1
// 0056a684  740e                 je 0x56a694
// 0056a686  8d4808               lea ecx, [eax + 8]
// 0056a689  e8a27b0000           call 0x572230
// 0056a68e  8b06                 mov eax, dword ptr [esi]
// 0056a690  806004fe             and byte ptr [eax + 4], 0xfe
// 0056a694  8b7604               mov esi, dword ptr [esi + 4]
// 0056a697  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0056a69f  85f6                 test esi, esi
// 0056a6a1  742a                 je 0x56a6cd
// 0056a6a3  8d4604               lea eax, [esi + 4]
// 0056a6a6  83c9ff               or ecx, 0xffffffff
// 0056a6a9  f00fc108             lock xadd dword ptr [eax], ecx
// 0056a6ad  751e                 jne 0x56a6cd
// 0056a6af  8b16                 mov edx, dword ptr [esi]
// 0056a6b1  8b4204               mov eax, dword ptr [edx + 4]
// 0056a6b4  8bce                 mov ecx, esi
// 0056a6b6  ffd0                 call eax
// 0056a6b8  8d4e08               lea ecx, [esi + 8]
// 0056a6bb  83caff               or edx, 0xffffffff
// 0056a6be  f00fc111             lock xadd dword ptr [ecx], edx
// 0056a6c2  7509                 jne 0x56a6cd
// 0056a6c4  8b06                 mov eax, dword ptr [esi]
// 0056a6c6  8b5008               mov edx, dword ptr [eax + 8]
// 0056a6c9  8bce                 mov ecx, esi
// 0056a6cb  ffd2                 call edx
// 0056a6cd  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0056a6d1  5e                   pop esi
// 0056a6d2  64890d00000000       mov dword ptr fs:[0], ecx
// 0056a6d9  83c410               add esp, 0x10
// 0056a6dc  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Resource {
    ~Resource();
};

struct Holder {
    long count;
    unsigned char flags;
    unsigned char padding[3];
    Resource resource;
};

struct Control {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared {
    Holder* pointer;
    Control* control;
    ~Shared();
};

struct S {
    Shared value;
    ~S();
};

inline Shared::~Shared()
{
    Control* p = control;
    if (p) {
        if (_InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

S::~S()
{
    --value.pointer->count;
    if (value.pointer->count == 0 && (value.pointer->flags & 1)) {
        value.pointer->resource.~Resource();
        value.pointer->flags &= 0xfe;
    }
}
