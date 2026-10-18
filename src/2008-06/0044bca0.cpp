// from server: 87% by colin
// from server: 85% by king_originala
// roc 2008-06 0044bca0  unit: CRobloxModule  size: 279 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044bca0
//
// 0044bca0  64a100000000         mov eax, dword ptr fs:[0]
// 0044bca6  6aff                 push -1
// 0044bca8  6858847c00           push 0x7c8458
// 0044bcad  50                   push eax
// 0044bcae  64892500000000       mov dword ptr fs:[0], esp
// 0044bcb5  83ec14               sub esp, 0x14
// 0044bcb8  53                   push ebx
// 0044bcb9  55                   push ebp
// 0044bcba  81c108010000         add ecx, 0x108
// 0044bcc0  833900               cmp dword ptr [ecx], 0
// 0044bcc3  56                   push esi
// 0044bcc4  57                   push edi
// 0044bcc5  0f84d7000000         je 0x44bda2
// 0044bccb  8d442414             lea eax, [esp + 0x14]
// 0044bccf  50                   push eax
// 0044bcd0  e8db580400           call 0x4915b0
// 0044bcd5  8b742414             mov esi, dword ptr [esp + 0x14]
// 0044bcd9  8b6e10               mov ebp, dword ptr [esi + 0x10]
// 0044bcdc  8b1d90288000         mov ebx, dword ptr [0x802890]
// 0044bce2  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 0044bcea  396e0c               cmp dword ptr [esi + 0xc], ebp
// 0044bced  7602                 jbe 0x44bcf1
// 0044bcef  ffd3                 call ebx
// 0044bcf1  8b7e0c               mov edi, dword ptr [esi + 0xc]
// 0044bcf4  8b0e                 mov ecx, dword ptr [esi]
// 0044bcf6  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0044bcfa  3b7e10               cmp edi, dword ptr [esi + 0x10]
// 0044bcfd  7602                 jbe 0x44bd01
// 0044bcff  ffd3                 call ebx
// 0044bd01  8b36                 mov esi, dword ptr [esi]
// 0044bd03  85f6                 test esi, esi
// 0044bd05  7406                 je 0x44bd0d
// 0044bd07  3b74241c             cmp esi, dword ptr [esp + 0x1c]
// 0044bd0b  7402                 je 0x44bd0f
// 0044bd0d  ffd3                 call ebx
// 0044bd0f  3bfd                 cmp edi, ebp
// 0044bd11  7455                 je 0x44bd68
// 0044bd13  85f6                 test esi, esi
// 0044bd15  7549                 jne 0x44bd60
// 0044bd17  ffd3                 call ebx
// 0044bd19  33c0                 xor eax, eax
// 0044bd1b  3b7810               cmp edi, dword ptr [eax + 0x10]
// 0044bd1e  7202                 jb 0x44bd22
// 0044bd20  ffd3                 call ebx
// 0044bd22  8b17                 mov edx, dword ptr [edi]
// 0044bd24  83ec08               sub esp, 8
// 0044bd27  8bcc                 mov ecx, esp
// 0044bd29  8911                 mov dword ptr [ecx], edx
// 0044bd2b  8b4704               mov eax, dword ptr [edi + 4]
// 0044bd2e  89642418             mov dword ptr [esp + 0x18], esp
// 0044bd32  894104               mov dword ptr [ecx + 4], eax
// 0044bd35  85c0                 test eax, eax
// 0044bd37  740c                 je 0x44bd45
// 0044bd39  83c004               add eax, 4
// 0044bd3c  b901000000           mov ecx, 1
// 0044bd41  f00fc108             lock xadd dword ptr [eax], ecx
// 0044bd45  ff54243c             call dword ptr [esp + 0x3c]
// 0044bd49  83c408               add esp, 8
// 0044bd4c  85f6                 test esi, esi
// 0044bd4e  7514                 jne 0x44bd64
// 0044bd50  ffd3                 call ebx
// 0044bd52  33c0                 xor eax, eax
// 0044bd54  3b7810               cmp edi, dword ptr [eax + 0x10]
// 0044bd57  7202                 jb 0x44bd5b
// 0044bd59  ffd3                 call ebx
// 0044bd5b  83c708               add edi, 8
// 0044bd5e  eba3                 jmp 0x44bd03
// 0044bd60  8b06                 mov eax, dword ptr [esi]
// 0044bd62  ebb7                 jmp 0x44bd1b
// 0044bd64  8b06                 mov eax, dword ptr [esi]
// 0044bd66  ebec                 jmp 0x44bd54
// 0044bd68  8b742418             mov esi, dword ptr [esp + 0x18]
// 0044bd6c  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 0044bd74  85f6                 test esi, esi
// 0044bd76  742a                 je 0x44bda2
// 0044bd78  8d5604               lea edx, [esi + 4]
// 0044bd7b  83c8ff               or eax, 0xffffffff
// 0044bd7e  f00fc102             lock xadd dword ptr [edx], eax
// 0044bd82  751e                 jne 0x44bda2
// 0044bd84  8b16                 mov edx, dword ptr [esi]
// 0044bd86  8b4204               mov eax, dword ptr [edx + 4]
// 0044bd89  8bce                 mov ecx, esi
// 0044bd8b  ffd0                 call eax
// 0044bd8d  8d4e08               lea ecx, [esi + 8]
// 0044bd90  83caff               or edx, 0xffffffff
// 0044bd93  f00fc111             lock xadd dword ptr [ecx], edx
// 0044bd97  7509                 jne 0x44bda2
// 0044bd99  8b06                 mov eax, dword ptr [esi]
// 0044bd9b  8b5008               mov edx, dword ptr [eax + 8]
// 0044bd9e  8bce                 mov ecx, esi
// 0044bda0  ffd2                 call edx
// 0044bda2  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0044bda6  5f                   pop edi
// 0044bda7  5e                   pop esi
// 0044bda8  5d                   pop ebp
// 0044bda9  64890d00000000       mov dword ptr fs:[0], ecx
// 0044bdb0  5b                   pop ebx
// 0044bdb1  83c420               add esp, 0x20
// 0044bdb4  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" void (__cdecl *_invalid_parameter_noinfo)();

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Item {
    void* object;
    Control* control;

    Item(const Item&);
    ~Item();
};

inline Item::Item(const Item& other)
    : object(other.object), control(other.control) {
    if (control) {
        volatile long* count = &control->strong;
        _InterlockedExchangeAdd(count, 1);
    }
}

inline Item::~Item() {
    Control* p = control;
    if (p && _InterlockedDecrement(&p->strong) == 0) {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

struct Vector;

struct Proxy {
    Vector* container;
};

struct Iterator {
    Proxy* owner;
    Item* current;
};

struct __declspec(dllimport) Vector {
    Proxy* proxy;
    unsigned int reserved[2];
    Item* first;
    Item* last;

    Iterator begin(void (__cdecl *invalid)());
    Iterator end(void (__cdecl *invalid)());
};

struct SharedVector {
    Vector* object;
    Control* control;

    SharedVector copy() const;
    ~SharedVector();
};

inline SharedVector::~SharedVector() {
    Control* p = control;
    if (p && _InterlockedDecrement(&p->strong) == 0) {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

struct S {
    unsigned char reserved[0x108];
    SharedVector items;

    void visit(void (__cdecl *callback)(Item));
};

void S::visit(void (__cdecl *callback)(Item)) {
    if (items.object) {
        SharedVector snapshot = items.copy();
        Vector* vector = snapshot.object;
        void (__cdecl *invalid)() = _invalid_parameter_noinfo;
        Iterator finish = vector->end(invalid);
        Item* position = vector->first;
        Proxy* finishOwner = finish.owner;

        if (position > vector->last)
            invalid();

        Proxy* owner = vector->proxy;

        for (;;) {
            if (!owner || owner != finishOwner)
                invalid();

            if (position == finish.current)
                break;

            if (!owner)
                invalid();

            Vector* container = owner ? owner->container : 0;
            if (position >= container->last)
                invalid();

            callback(*position);

            if (!owner)
                invalid();

            container = owner ? owner->container : 0;
            if (position >= container->last)
                invalid();

            ++position;
        }
    }
}
