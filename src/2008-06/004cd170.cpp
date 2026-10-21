// from server: 98% by EspClaude
// from server: 86% by colin
// roc 2008-06 004cd170  unit: RBX::Network::PhysicsSender  size: 385 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cd170
//
// 004cd170  6aff                 push -1
// 004cd172  68b8997c00           push 0x7c99b8
// 004cd177  64a100000000         mov eax, dword ptr fs:[0]
// 004cd17d  50                   push eax
// 004cd17e  64892500000000       mov dword ptr fs:[0], esp
// 004cd185  83ec60               sub esp, 0x60
// 004cd188  56                   push esi
// 004cd189  8bf1                 mov esi, ecx
// 004cd18b  8d442474             lea eax, [esp + 0x74]
// 004cd18f  50                   push eax
// 004cd190  8d4c2410             lea ecx, [esp + 0x10]
// 004cd194  51                   push ecx
// 004cd195  c744247400000000     mov dword ptr [esp + 0x74], 0
// 004cd19d  e8de6e1000           call 0x5d4080
// 004cd1a2  83c408               add esp, 8
// 004cd1a5  8d4604               lea eax, [esi + 4]
// 004cd1a8  c644246c01           mov byte ptr [esp + 0x6c], 1
// 004cd1ad  85c0                 test eax, eax
// 004cd1af  7405                 je 0x4cd1b6
// 004cd1b1  8d700c               lea esi, [eax + 0xc]
// 004cd1b4  eb02                 jmp 0x4cd1b8
// 004cd1b6  33f6                 xor esi, esi
// 004cd1b8  8d5606               lea edx, [esi + 6]
// 004cd1bb  52                   push edx
// 004cd1bc  8d4605               lea eax, [esi + 5]
// 004cd1bf  50                   push eax
// 004cd1c0  8d4c2414             lea ecx, [esp + 0x14]
// 004cd1c4  51                   push ecx
// 004cd1c5  8d542410             lea edx, [esp + 0x10]
// 004cd1c9  52                   push edx
// 004cd1ca  8bce                 mov ecx, esi
// 004cd1cc  e86fe1ffff           call 0x4cb340
// 004cd1d1  85f6                 test esi, esi
// 004cd1d3  7405                 je 0x4cd1da
// 004cd1d5  8d46f4               lea eax, [esi - 0xc]
// 004cd1d8  eb02                 jmp 0x4cd1dc
// 004cd1da  33c0                 xor eax, eax
// 004cd1dc  8b4004               mov eax, dword ptr [eax + 4]
// 004cd1df  39442404             cmp dword ptr [esp + 4], eax
// 004cd1e3  0f8585000000         jne 0x4cd26e
// 004cd1e9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004cd1ed  83ec08               sub esp, 8
// 004cd1f0  8bc4                 mov eax, esp
// 004cd1f2  8908                 mov dword ptr [eax], ecx
// 004cd1f4  8b542418             mov edx, dword ptr [esp + 0x18]
// 004cd1f8  895004               mov dword ptr [eax + 4], edx
// 004cd1fb  8b442418             mov eax, dword ptr [esp + 0x18]
// 004cd1ff  8964240c             mov dword ptr [esp + 0xc], esp
// 004cd203  85c0                 test eax, eax
// 004cd205  740c                 je 0x4cd213
// 004cd207  83c004               add eax, 4
// 004cd20a  b901000000           mov ecx, 1
// 004cd20f  f00fc108             lock xadd dword ptr [eax], ecx
// 004cd213  8d4c241c             lea ecx, [esp + 0x1c]
// 004cd217  e8e4d2ffff           call 0x4ca500
// 004cd21c  c644246c02           mov byte ptr [esp + 0x6c], 2
// 004cd221  85f6                 test esi, esi
// 004cd223  7405                 je 0x4cd22a
// 004cd225  8d4ef4               lea ecx, [esi - 0xc]
// 004cd228  eb02                 jmp 0x4cd22c
// 004cd22a  33c9                 xor ecx, ecx
// 004cd22c  50                   push eax
// 004cd22d  8d542408             lea edx, [esp + 8]
// 004cd231  52                   push edx
// 004cd232  e829f7ffff           call 0x4cc960
// 004cd237  8b742418             mov esi, dword ptr [esp + 0x18]
// 004cd23b  c644246c01           mov byte ptr [esp + 0x6c], 1
// 004cd240  85f6                 test esi, esi
// 004cd242  742a                 je 0x4cd26e
// 004cd244  8d4604               lea eax, [esi + 4]
// 004cd247  83c9ff               or ecx, 0xffffffff
// 004cd24a  f00fc108             lock xadd dword ptr [eax], ecx
// 004cd24e  751e                 jne 0x4cd26e
// 004cd250  8b16                 mov edx, dword ptr [esi]
// 004cd252  8b4204               mov eax, dword ptr [edx + 4]
// 004cd255  8bce                 mov ecx, esi
// 004cd257  ffd0                 call eax
// 004cd259  8d4e08               lea ecx, [esi + 8]
// 004cd25c  83caff               or edx, 0xffffffff
// 004cd25f  f00fc111             lock xadd dword ptr [ecx], edx
// 004cd263  7509                 jne 0x4cd26e
// 004cd265  8b06                 mov eax, dword ptr [esi]
// 004cd267  8b5008               mov edx, dword ptr [eax + 8]
// 004cd26a  8bce                 mov ecx, esi
// 004cd26c  ffd2                 call edx
// 004cd26e  8b742410             mov esi, dword ptr [esp + 0x10]
// 004cd272  c644246c00           mov byte ptr [esp + 0x6c], 0
// 004cd277  85f6                 test esi, esi
// 004cd279  742a                 je 0x4cd2a5
// 004cd27b  8d4604               lea eax, [esi + 4]
// 004cd27e  83c9ff               or ecx, 0xffffffff
// 004cd281  f00fc108             lock xadd dword ptr [eax], ecx
// 004cd285  751e                 jne 0x4cd2a5
// 004cd287  8b16                 mov edx, dword ptr [esi]
// 004cd289  8b4204               mov eax, dword ptr [edx + 4]
// 004cd28c  8bce                 mov ecx, esi
// 004cd28e  ffd0                 call eax
// 004cd290  8d4e08               lea ecx, [esi + 8]
// 004cd293  83caff               or edx, 0xffffffff
// 004cd296  f00fc111             lock xadd dword ptr [ecx], edx
// 004cd29a  7509                 jne 0x4cd2a5
// 004cd29c  8b06                 mov eax, dword ptr [esi]
// 004cd29e  8b5008               mov edx, dword ptr [eax + 8]
// 004cd2a1  8bce                 mov ecx, esi
// 004cd2a3  ffd2                 call edx
// 004cd2a5  8b742478             mov esi, dword ptr [esp + 0x78]
// 004cd2a9  c744246cffffffff     mov dword ptr [esp + 0x6c], 0xffffffff
// 004cd2b1  85f6                 test esi, esi
// 004cd2b3  742a                 je 0x4cd2df
// 004cd2b5  8d4604               lea eax, [esi + 4]
// 004cd2b8  83c9ff               or ecx, 0xffffffff
// 004cd2bb  f00fc108             lock xadd dword ptr [eax], ecx
// 004cd2bf  751e                 jne 0x4cd2df
// 004cd2c1  8b16                 mov edx, dword ptr [esi]
// 004cd2c3  8b4204               mov eax, dword ptr [edx + 4]
// 004cd2c6  8bce                 mov ecx, esi
// 004cd2c8  ffd0                 call eax
// 004cd2ca  8d4e08               lea ecx, [esi + 8]
// 004cd2cd  83caff               or edx, 0xffffffff
// 004cd2d0  f00fc111             lock xadd dword ptr [ecx], edx
// 004cd2d4  7509                 jne 0x4cd2df
// 004cd2d6  8b06                 mov eax, dword ptr [esi]
// 004cd2d8  8b5008               mov edx, dword ptr [eax + 8]
// 004cd2db  8bce                 mov ecx, esi
// 004cd2dd  ffd2                 call edx
// 004cd2df  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 004cd2e3  64890d00000000       mov dword ptr fs:[0], ecx
// 004cd2ea  5e                   pop esi
// 004cd2eb  83c46c               add esp, 0x6c
// 004cd2ee  c20800               ret 8

// from server: 76% by king_originala
// roc 2008-06 004cd170  unit: RBX::Network::PhysicsSender  size: 385 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004cd170
//
// 004cd170  6aff                 push -1
// 004cd172  68b8997c00           push 0x7c99b8
// 004cd177  64a100000000         mov eax, dword ptr fs:[0]
// 004cd17d  50                   push eax
// 004cd17e  64892500000000       mov dword ptr fs:[0], esp
// 004cd185  83ec60               sub esp, 0x60
// 004cd188  56                   push esi
// 004cd189  8bf1                 mov esi, ecx
// 004cd18b  8d442474             lea eax, [esp + 0x74]
// 004cd18f  50                   push eax
// 004cd190  8d4c2410             lea ecx, [esp + 0x10]
// 004cd194  51                   push ecx
// 004cd195  c744247400000000     mov dword ptr [esp + 0x74], 0
// 004cd19d  e8de6e1000           call 0x5d4080
// 004cd1a2  83c408               add esp, 8
// 004cd1a5  8d4604               lea eax, [esi + 4]
// 004cd1a8  c644246c01           mov byte ptr [esp + 0x6c], 1
// 004cd1ad  85c0                 test eax, eax
// 004cd1af  7405                 je 0x4cd1b6
// 004cd1b1  8d700c               lea esi, [eax + 0xc]
// 004cd1b4  eb02                 jmp 0x4cd1b8
// 004cd1b6  33f6                 xor esi, esi
// 004cd1b8  8d5606               lea edx, [esi + 6]
// 004cd1bb  52                   push edx
// 004cd1bc  8d4605               lea eax, [esi + 5]
// 004cd1bf  50                   push eax
// 004cd1c0  8d4c2414             lea ecx, [esp + 0x14]
// 004cd1c4  51                   push ecx
// 004cd1c5  8d542410             lea edx, [esp + 0x10]
// 004cd1c9  52                   push edx
// 004cd1ca  8bce                 mov ecx, esi
// 004cd1cc  e86fe1ffff           call 0x4cb340
// 004cd1d1  85f6                 test esi, esi
// 004cd1d3  7405                 je 0x4cd1da
// 004cd1d5  8d46f4               lea eax, [esi - 0xc]
// 004cd1d8  eb02                 jmp 0x4cd1dc
// 004cd1da  33c0                 xor eax, eax
// 004cd1dc  8b4004               mov eax, dword ptr [eax + 4]
// 004cd1df  39442404             cmp dword ptr [esp + 4], eax
// 004cd1e3  0f8585000000         jne 0x4cd26e
// 004cd1e9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004cd1ed  83ec08               sub esp, 8
// 004cd1f0  8bc4                 mov eax, esp
// 004cd1f2  8908                 mov dword ptr [eax], ecx
// 004cd1f4  8b542418             mov edx, dword ptr [esp + 0x18]
// 004cd1f8  895004               mov dword ptr [eax + 4], edx
// 004cd1fb  8b442418             mov eax, dword ptr [esp + 0x18]
// 004cd1ff  8964240c             mov dword ptr [esp + 0xc], esp
// 004cd203  85c0                 test eax, eax
// 004cd205  740c                 je 0x4cd213
// 004cd207  83c004               add eax, 4
// 004cd20a  b901000000           mov ecx, 1
// 004cd20f  f00fc108             lock xadd dword ptr [eax], ecx
// 004cd213  8d4c241c             lea ecx, [esp + 0x1c]
// 004cd217  e8e4d2ffff           call 0x4ca500
// 004cd21c  c644246c02           mov byte ptr [esp + 0x6c], 2
// 004cd221  85f6                 test esi, esi
// 004cd223  7405                 je 0x4cd22a
// 004cd225  8d4ef4               lea ecx, [esi - 0xc]
// 004cd228  eb02                 jmp 0x4cd22c
// 004cd22a  33c9                 xor ecx, ecx
// 004cd22c  50                   push eax
// 004cd22d  8d542408             lea edx, [esp + 8]
// 004cd231  52                   push edx
// 004cd232  e829f7ffff           call 0x4cc960
// 004cd237  8b742418             mov esi, dword ptr [esp + 0x18]
// 004cd23b  c644246c01           mov byte ptr [esp + 0x6c], 1
// 004cd240  85f6                 test esi, esi
// 004cd242  742a                 je 0x4cd26e
// 004cd244  8d4604               lea eax, [esi + 4]
// 004cd247  83c9ff               or ecx, 0xffffffff
// 004cd24a  f00fc108             lock xadd dword ptr [eax], ecx
// 004cd24e  751e                 jne 0x4cd26e
// 004cd250  8b16                 mov edx, dword ptr [esi]
// 004cd252  8b4204               mov eax, dword ptr [edx + 4]
// 004cd255  8bce                 mov ecx, esi
// 004cd257  ffd0                 call eax
// 004cd259  8d4e08               lea ecx, [esi + 8]
// 004cd25c  83caff               or edx, 0xffffffff
// 004cd25f  f00fc111             lock xadd dword ptr [ecx], edx
// 004cd263  7509                 jne 0x4cd26e
// 004cd265  8b06                 mov eax, dword ptr [esi]
// 004cd267  8b5008               mov edx, dword ptr [eax + 8]
// 004cd26a  8bce                 mov ecx, esi
// 004cd26c  ffd2                 call edx
// 004cd26e  8b742410             mov esi, dword ptr [esp + 0x10]
// 004cd272  c644246c00           mov byte ptr [esp + 0x6c], 0
// 004cd277  85f6                 test esi, esi
// 004cd279  742a                 je 0x4cd2a5
// 004cd27b  8d4604               lea eax, [esi + 4]
// 004cd27e  83c9ff               or ecx, 0xffffffff
// 004cd281  f00fc108             lock xadd dword ptr [eax], ecx
// 004cd285  751e                 jne 0x4cd2a5
// 004cd287  8b16                 mov edx, dword ptr [esi]
// 004cd289  8b4204               mov eax, dword ptr [edx + 4]
// 004cd28c  8bce                 mov ecx, esi
// 004cd28e  ffd0                 call eax
// 004cd290  8d4e08               lea ecx, [esi + 8]
// 004cd293  83caff               or edx, 0xffffffff
// 004cd296  f00fc111             lock xadd dword ptr [ecx], edx
// 004cd29a  7509                 jne 0x4cd2a5
// 004cd29c  8b06                 mov eax, dword ptr [esi]
// 004cd29e  8b5008               mov edx, dword ptr [eax + 8]
// 004cd2a1  8bce                 mov ecx, esi
// 004cd2a3  ffd2                 call edx
// 004cd2a5  8b742478             mov esi, dword ptr [esp + 0x78]
// 004cd2a9  c744246cffffffff     mov dword ptr [esp + 0x6c], 0xffffffff
// 004cd2b1  85f6                 test esi, esi
// 004cd2b3  742a                 je 0x4cd2df
// 004cd2b5  8d4604               lea eax, [esi + 4]
// 004cd2b8  83c9ff               or ecx, 0xffffffff
// 004cd2bb  f00fc108             lock xadd dword ptr [eax], ecx
// 004cd2bf  751e                 jne 0x4cd2df
// 004cd2c1  8b16                 mov edx, dword ptr [esi]
// 004cd2c3  8b4204               mov eax, dword ptr [edx + 4]
// 004cd2c6  8bce                 mov ecx, esi
// 004cd2c8  ffd0                 call eax
// 004cd2ca  8d4e08               lea ecx, [esi + 8]
// 004cd2cd  83caff               or edx, 0xffffffff
// 004cd2d0  f00fc111             lock xadd dword ptr [ecx], edx
// 004cd2d4  7509                 jne 0x4cd2df
// 004cd2d6  8b06                 mov eax, dword ptr [esi]
// 004cd2d8  8b5008               mov edx, dword ptr [eax + 8]
// 004cd2db  8bce                 mov ecx, esi
// 004cd2dd  ffd2                 call edx
// 004cd2df  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 004cd2e3  64890d00000000       mov dword ptr fs:[0], ecx
// 004cd2ea  5e                   pop esi
// 004cd2eb  83c46c               add esp, 0x6c
// 004cd2ee  c20800               ret 8

extern "C" long __cdecl _InterlockedIncrement(volatile long*);
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual ~Control();
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;

    void addRef();
    void release();
};

inline void Control::addRef()
{
    _InterlockedIncrement(&strong);
}

inline void Control::release()
{
    if (_InterlockedDecrement(&strong) == 0) {
        dispose();
        if (_InterlockedDecrement(&weak) == 0)
            destroy();
    }
}

struct Shared {
    void* object;
    Control* control;

    Shared(const Shared&);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control)
{
    if (control)
        control->addRef();
}

inline Shared::~Shared()
{
    Control* p = control;
    if (p)
        p->release();
}

Shared __cdecl convert(const Shared&);

struct Node {
    Shared value;
    unsigned char storage[72];

    Node(Shared);
};

struct Iterator {
    void* node;
    bool operator==(const Iterator& o) const { return node == o.node; }
};

struct Header {
    unsigned long unused;
    void* end;
    unsigned long remaining;
};

struct Search {
    unsigned char storage[5];
    unsigned char flag1;
    unsigned char flag2;

    void find(Iterator*, const Shared*, unsigned char*, unsigned char*);
    inline void doInsert(Iterator*, const Node&);
};

struct Tree : Header, Search {
    void insert(Iterator*, const Node&);
    Iterator endIt() { Iterator i; i.node = end; return i; }
};

inline void Search::doInsert(Iterator* it, const Node& n) { static_cast<Tree*>(this)->insert(it, n); }

struct S {
    unsigned long unused;
    Tree tree;

    void f(Shared);
};

void S::f(Shared argument)
{
    Shared value = convert(argument);
    Tree* t = &tree;
    Search* search = t;
    Iterator position;

    search->find(&position, &value, &search->flag1, &search->flag2);

    if (position == static_cast<Tree*>(search)->endIt())
        search->doInsert(&position, Node(value));
}
