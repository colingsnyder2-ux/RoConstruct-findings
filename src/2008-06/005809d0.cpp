// from server: 90% by colin
// from server: 81% by king_originala
// roc 2008-06 005809d0  unit: RBX::JoinCommand  size: 265 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005809d0
//
// 005809d0  64a100000000         mov eax, dword ptr fs:[0]
// 005809d6  6aff                 push -1
// 005809d8  68302a7d00           push 0x7d2a30
// 005809dd  50                   push eax
// 005809de  64892500000000       mov dword ptr fs:[0], esp
// 005809e5  83ec10               sub esp, 0x10
// 005809e8  56                   push esi
// 005809e9  57                   push edi
// 005809ea  8bf9                 mov edi, ecx
// 005809ec  8b770c               mov esi, dword ptr [edi + 0xc]
// 005809ef  e85cc8ffff           call 0x57d250
// 005809f4  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 005809f7  85c9                 test ecx, ecx
// 005809f9  7409                 je 0x580a04
// 005809fb  e8b049e9ff           call 0x4153b0
// 00580a00  8bf0                 mov esi, eax
// 00580a02  eb02                 jmp 0x580a06
// 00580a04  33f6                 xor esi, esi
// 00580a06  8b8654010000         mov eax, dword ptr [esi + 0x154]
// 00580a0c  8b4810               mov ecx, dword ptr [eax + 0x10]
// 00580a0f  2b480c               sub ecx, dword ptr [eax + 0xc]
// 00580a12  83e1f8               and ecx, 0xfffffff8
// 00580a15  83f910               cmp ecx, 0x10
// 00580a18  0f85a8000000         jne 0x580ac6
// 00580a1e  8d542410             lea edx, [esp + 0x10]
// 00580a22  52                   push edx
// 00580a23  8bce                 mov ecx, esi
// 00580a25  e8f631e9ff           call 0x413c20
// 00580a2a  8d442408             lea eax, [esp + 8]
// 00580a2e  50                   push eax
// 00580a2f  8bce                 mov ecx, esi
// 00580a31  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00580a39  e822dcffff           call 0x57e660
// 00580a3e  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00580a42  8b542410             mov edx, dword ptr [esp + 0x10]
// 00580a46  51                   push ecx
// 00580a47  52                   push edx
// 00580a48  c644242801           mov byte ptr [esp + 0x28], 1
// 00580a4d  e8aebf0800           call 0x60ca00
// 00580a52  8b742414             mov esi, dword ptr [esp + 0x14]
// 00580a56  83c408               add esp, 8
// 00580a59  c644242000           mov byte ptr [esp + 0x20], 0
// 00580a5e  85f6                 test esi, esi
// 00580a60  742a                 je 0x580a8c
// 00580a62  8d4604               lea eax, [esi + 4]
// 00580a65  83c9ff               or ecx, 0xffffffff
// 00580a68  f00fc108             lock xadd dword ptr [eax], ecx
// 00580a6c  751e                 jne 0x580a8c
// 00580a6e  8b16                 mov edx, dword ptr [esi]
// 00580a70  8b4204               mov eax, dword ptr [edx + 4]
// 00580a73  8bce                 mov ecx, esi
// 00580a75  ffd0                 call eax
// 00580a77  8d4e08               lea ecx, [esi + 8]
// 00580a7a  83caff               or edx, 0xffffffff
// 00580a7d  f00fc111             lock xadd dword ptr [ecx], edx
// 00580a81  7509                 jne 0x580a8c
// 00580a83  8b06                 mov eax, dword ptr [esi]
// 00580a85  8b5008               mov edx, dword ptr [eax + 8]
// 00580a88  8bce                 mov ecx, esi
// 00580a8a  ffd2                 call edx
// 00580a8c  8b742414             mov esi, dword ptr [esp + 0x14]
// 00580a90  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 00580a98  85f6                 test esi, esi
// 00580a9a  742a                 je 0x580ac6
// 00580a9c  8d4604               lea eax, [esi + 4]
// 00580a9f  83c9ff               or ecx, 0xffffffff
// 00580aa2  f00fc108             lock xadd dword ptr [eax], ecx
// 00580aa6  751e                 jne 0x580ac6
// 00580aa8  8b16                 mov edx, dword ptr [esi]
// 00580aaa  8b4204               mov eax, dword ptr [edx + 4]
// 00580aad  8bce                 mov ecx, esi
// 00580aaf  ffd0                 call eax
// 00580ab1  8d4e08               lea ecx, [esi + 8]
// 00580ab4  83caff               or edx, 0xffffffff
// 00580ab7  f00fc111             lock xadd dword ptr [ecx], edx
// 00580abb  7509                 jne 0x580ac6
// 00580abd  8b06                 mov eax, dword ptr [esi]
// 00580abf  8b5008               mov edx, dword ptr [eax + 8]
// 00580ac2  8bce                 mov ecx, esi
// 00580ac4  ffd2                 call edx
// 00580ac6  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00580aca  5f                   pop edi
// 00580acb  5e                   pop esi
// 00580acc  64890d00000000       mov dword ptr fs:[0], ecx
// 00580ad3  83c41c               add esp, 0x1c
// 00580ad6  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Pair {
    void* object;
    Control* control;
    ~Pair();
};

inline Pair::~Pair()
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

struct Collection {
    unsigned char padding[12];
    Pair* begin;
    Pair* end;
};

struct Node {
    unsigned char padding[0x154];
    Collection* collection;
    Node* resolve();
    Pair first();
    Pair second();
};

void __cdecl combine(void*, void*);

struct JoinCommand {
    unsigned char padding[12];
    Node* volatile node;
    void prepare();
    void execute(int);
};

void JoinCommand::execute(int)
{
    Node* p = node;
    prepare();
    Node* current = node;
    if (current)
        p = current->resolve();
    else
        p = 0;

    if (static_cast<unsigned>(p->collection->end -
                              p->collection->begin) == 2) {
        Pair a = p->first();
        Pair b = p->second();
        combine(a.object, b.object);
    }
}
