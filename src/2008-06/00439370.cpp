// from server: 80% by king_originala
// roc 2008-06 00439370  unit: CSelectionPropGrid  size: 267 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00439370
//
// 00439370  6aff                 push -1
// 00439372  6888707c00           push 0x7c7088
// 00439377  64a100000000         mov eax, dword ptr fs:[0]
// 0043937d  50                   push eax
// 0043937e  64892500000000       mov dword ptr fs:[0], esp
// 00439385  83ec1c               sub esp, 0x1c
// 00439388  56                   push esi
// 00439389  57                   push edi
// 0043938a  8bf9                 mov edi, ecx
// 0043938c  8d7704               lea esi, [edi + 4]
// 0043938f  8bce                 mov ecx, esi
// 00439391  89742414             mov dword ptr [esp + 0x14], esi
// 00439395  e8f69c1200           call 0x563090
// 0043939a  c644241801           mov byte ptr [esp + 0x18], 1
// 0043939f  807f6d00             cmp byte ptr [edi + 0x6d], 0
// 004393a3  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 004393ab  0f85a3000000         jne 0x439454
// 004393b1  8b442438             mov eax, dword ptr [esp + 0x38]
// 004393b5  53                   push ebx
// 004393b6  55                   push ebp
// 004393b7  8d4c2410             lea ecx, [esp + 0x10]
// 004393bb  51                   push ecx
// 004393bc  8d542428             lea edx, [esp + 0x28]
// 004393c0  8d772c               lea esi, [edi + 0x2c]
// 004393c3  52                   push edx
// 004393c4  8bce                 mov ecx, esi
// 004393c6  89442418             mov dword ptr [esp + 0x18], eax
// 004393ca  e831820100           call 0x451600
// 004393cf  8b28                 mov ebp, dword ptr [eax]
// 004393d1  8b5804               mov ebx, dword ptr [eax + 4]
// 004393d4  8b4618               mov eax, dword ptr [esi + 0x18]
// 004393d7  8b36                 mov esi, dword ptr [esi]
// 004393d9  89442414             mov dword ptr [esp + 0x14], eax
// 004393dd  85ed                 test ebp, ebp
// 004393df  7404                 je 0x4393e5
// 004393e1  3bee                 cmp ebp, esi
// 004393e3  740a                 je 0x4393ef
// 004393e5  8b3590288000         mov esi, dword ptr [0x802890]
// 004393eb  ffd6                 call esi
// 004393ed  eb06                 jmp 0x4393f5
// 004393ef  8b3590288000         mov esi, dword ptr [0x802890]
// 004393f5  3b5c2414             cmp ebx, dword ptr [esp + 0x14]
// 004393f9  741e                 je 0x439419
// 004393fb  85ed                 test ebp, ebp
// 004393fd  7577                 jne 0x439476
// 004393ff  ffd6                 call esi
// 00439401  3b5d18               cmp ebx, dword ptr [ebp + 0x18]
// 00439404  7502                 jne 0x439408
// 00439406  ffd6                 call esi
// 00439408  83c310               add ebx, 0x10
// 0043940b  53                   push ebx
// 0043940c  8d4c2414             lea ecx, [esp + 0x14]
// 00439410  51                   push ecx
// 00439411  8d4f70               lea ecx, [edi + 0x70]
// 00439414  e827f81a00           call 0x5e8c40
// 00439419  8d7704               lea esi, [edi + 4]
// 0043941c  8bce                 mov ecx, esi
// 0043941e  e86d9c1200           call 0x563090
// 00439423  807f6c00             cmp byte ptr [edi + 0x6c], 0
// 00439427  5d                   pop ebp
// 00439428  5b                   pop ebx
// 00439429  751e                 jne 0x439449
// 0043942b  8b8798feffff         mov eax, dword ptr [edi - 0x168]
// 00439431  85c0                 test eax, eax
// 00439433  7410                 je 0x439445
// 00439435  6a00                 push 0
// 00439437  6a00                 push 0
// 00439439  6865040000           push 0x465
// 0043943e  50                   push eax
// 0043943f  ff150c2e8000         call dword ptr [0x802e0c]
// 00439445  c6476c01             mov byte ptr [edi + 0x6c], 1
// 00439449  8bce                 mov ecx, esi
// 0043944b  e8909c1200           call 0x5630e0
// 00439450  8b742414             mov esi, dword ptr [esp + 0x14]
// 00439454  8bce                 mov ecx, esi
// 00439456  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 0043945e  e87d9c1200           call 0x5630e0
// 00439463  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00439467  5f                   pop edi
// 00439468  5e                   pop esi
// 00439469  64890d00000000       mov dword ptr fs:[0], ecx
// 00439470  83c428               add esp, 0x28
// 00439473  c20c00               ret 0xc
// 00439476  8b6d00               mov ebp, dword ptr [ebp]
// 00439479  eb86                 jmp 0x439401

extern "C" {
    extern void (__cdecl *_invalid_parameter_noinfo)();
    extern int (__stdcall *PostMessageA)(void *, unsigned int, unsigned int, long);
}

struct Lock {
    int value;
    unsigned char flag;
    unsigned char padding[3];
    int count;
    unsigned char reserved[28];
    void acquire();
    void release();
};

struct Guard {
    Lock *lock;
    bool active;
    Guard(Lock *p) : lock(p), active(false) {
        lock->acquire();
        active = true;
    }
    ~Guard() {
        if (active)
            lock->release();
    }
};

struct Key {
    int value;
};

struct Node {
    unsigned char reserved[16];
    int value;
};

struct Tree;

struct Proxy {
    Tree *container;
};

struct Iterator {
    Proxy *owner;
    Node *node;
};

struct Tree {
    Proxy *proxy;
    unsigned char reserved[20];
    Node *end;
    unsigned char tail[4];
    Iterator *find(Iterator *, const Key *);
};

struct Collection {
    Iterator *insert(Iterator *, const int *);
};

struct S {
    int reserved;
    Lock lock;
    Tree tree;
    unsigned char padding[32];
    bool pending;
    bool disabled;
    unsigned char alignment[2];
    Collection collection;
    void f(int, int, int);
};

void S::f(int, int key, int)
{
    Guard guard(&lock);
    if (!disabled) {
        union {
            Key lookup;
            Iterator result;
        } temporary;
        Iterator found;
        temporary.lookup.value = key;
        Tree *container = &tree;
        Iterator *p = container->find(&found, &temporary.lookup);
        Proxy *owner = p->owner;
        Node *node = p->node;
        Node *end = container->end;
        Proxy *expected = container->proxy;
        void (__cdecl *invalid)() = _invalid_parameter_noinfo;

        if (!owner || owner != expected)
            invalid();

        if (node != end) {
            if (!owner)
                invalid();
            else
                owner = reinterpret_cast<Proxy *>(owner->container);

            if (node == reinterpret_cast<Tree *>(owner)->end)
                invalid();

            collection.insert(&temporary.result, &node->value);
        }

        lock.acquire();
        if (!pending) {
            void *window = *reinterpret_cast<void **>(
                reinterpret_cast<char *>(this) - 360);
            if (window)
                PostMessageA(window, 0x465, 0, 0);
            pending = true;
        }
        lock.release();
    }
}
