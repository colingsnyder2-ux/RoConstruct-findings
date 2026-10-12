// from server: 65% by king_originala
// roc 2008-06 00426780  unit: CSelectionTreeCtrl  size: 378 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00426780
//
// 00426780  64a100000000         mov eax, dword ptr fs:[0]
// 00426786  6aff                 push -1
// 00426788  68b0ed7b00           push 0x7bedb0
// 0042678d  50                   push eax
// 0042678e  64892500000000       mov dword ptr fs:[0], esp
// 00426795  83ec18               sub esp, 0x18
// 00426798  55                   push ebp
// 00426799  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0042679d  837d0000             cmp dword ptr [ebp], 0
// 004267a1  57                   push edi
// 004267a2  8bf9                 mov edi, ecx
// 004267a4  7515                 jne 0x4267bb
// 004267a6  5f                   pop edi
// 004267a7  33c0                 xor eax, eax
// 004267a9  5d                   pop ebp
// 004267aa  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004267ae  64890d00000000       mov dword ptr fs:[0], ecx
// 004267b5  83c424               add esp, 0x24
// 004267b8  c20400               ret 4
// 004267bb  53                   push ebx
// 004267bc  8d9fc4000000         lea ebx, [edi + 0xc4]
// 004267c2  56                   push esi
// 004267c3  8bcb                 mov ecx, ebx
// 004267c5  e8c6c81300           call 0x563090
// 004267ca  8b4500               mov eax, dword ptr [ebp]
// 004267cd  8d4c2438             lea ecx, [esp + 0x38]
// 004267d1  51                   push ecx
// 004267d2  8d54241c             lea edx, [esp + 0x1c]
// 004267d6  8db798000000         lea esi, [edi + 0x98]
// 004267dc  52                   push edx
// 004267dd  8bce                 mov ecx, esi
// 004267df  89442440             mov dword ptr [esp + 0x40], eax
// 004267e3  e818ae0200           call 0x451600
// 004267e8  8b4618               mov eax, dword ptr [esi + 0x18]
// 004267eb  89442424             mov dword ptr [esp + 0x24], eax
// 004267ef  8b06                 mov eax, dword ptr [esi]
// 004267f1  8b742418             mov esi, dword ptr [esp + 0x18]
// 004267f5  85f6                 test esi, esi
// 004267f7  7404                 je 0x4267fd
// 004267f9  3bf0                 cmp esi, eax
// 004267fb  7406                 je 0x426803
// 004267fd  ff1590288000         call dword ptr [0x802890]
// 00426803  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00426807  3b4c2424             cmp ecx, dword ptr [esp + 0x24]
// 0042680b  744a                 je 0x426857
// 0042680d  85f6                 test esi, esi
// 0042680f  7542                 jne 0x426853
// 00426811  ff1590288000         call dword ptr [0x802890]
// 00426817  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0042681b  3b5618               cmp edx, dword ptr [esi + 0x18]
// 0042681e  7506                 jne 0x426826
// 00426820  ff1590288000         call dword ptr [0x802890]
// 00426826  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0042682a  8b7010               mov esi, dword ptr [eax + 0x10]
// 0042682d  8bcb                 mov ecx, ebx
// 0042682f  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 00426837  e8a4c81300           call 0x5630e0
// 0042683c  8bc6                 mov eax, esi
// 0042683e  5e                   pop esi
// 0042683f  5b                   pop ebx
// 00426840  5f                   pop edi
// 00426841  5d                   pop ebp
// 00426842  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00426846  64890d00000000       mov dword ptr fs:[0], ecx
// 0042684d  83c424               add esp, 0x24
// 00426850  c20400               ret 4
// 00426853  8b36                 mov esi, dword ptr [esi]
// 00426855  ebc0                 jmp 0x426817
// 00426857  83ceff               or esi, 0xffffffff
// 0042685a  8bcb                 mov ecx, ebx
// 0042685c  89742430             mov dword ptr [esp + 0x30], esi
// 00426860  e87bc81300           call 0x5630e0
// 00426865  8b4500               mov eax, dword ptr [ebp]
// 00426868  8b8004010000         mov eax, dword ptr [eax + 0x104]
// 0042686e  50                   push eax
// 0042686f  8d4c2424             lea ecx, [esp + 0x24]
// 00426873  51                   push ecx
// 00426874  e8c7211f00           call 0x618a40
// 00426879  83c408               add esp, 8
// 0042687c  50                   push eax
// 0042687d  8bcf                 mov ecx, edi
// 0042687f  c744243401000000     mov dword ptr [esp + 0x34], 1
// 00426887  e8f4feffff           call 0x426780
// 0042688c  8bd8                 mov ebx, eax
// 0042688e  8b442424             mov eax, dword ptr [esp + 0x24]
// 00426892  89742430             mov dword ptr [esp + 0x30], esi
// 00426896  85c0                 test eax, eax
// 00426898  7428                 je 0x4268c2
// 0042689a  8bf8                 mov edi, eax
// 0042689c  83c004               add eax, 4
// 0042689f  8bd6                 mov edx, esi
// 004268a1  f00fc110             lock xadd dword ptr [eax], edx
// 004268a5  751b                 jne 0x4268c2
// 004268a7  8b07                 mov eax, dword ptr [edi]
// 004268a9  8b5004               mov edx, dword ptr [eax + 4]
// 004268ac  8bcf                 mov ecx, edi
// 004268ae  ffd2                 call edx
// 004268b0  8d4708               lea eax, [edi + 8]
// 004268b3  f00fc130             lock xadd dword ptr [eax], esi
// 004268b7  7509                 jne 0x4268c2
// 004268b9  8b17                 mov edx, dword ptr [edi]
// 004268bb  8b4208               mov eax, dword ptr [edx + 8]
// 004268be  8bcf                 mov ecx, edi
// 004268c0  ffd0                 call eax
// 004268c2  85db                 test ebx, ebx
// 004268c4  7517                 jne 0x4268dd
// 004268c6  5e                   pop esi
// 004268c7  5b                   pop ebx
// 004268c8  5f                   pop edi
// 004268c9  33c0                 xor eax, eax
// 004268cb  5d                   pop ebp
// 004268cc  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004268d0  64890d00000000       mov dword ptr fs:[0], ecx
// 004268d7  83c424               add esp, 0x24
// 004268da  c20400               ret 4
// 004268dd  55                   push ebp
// 004268de  8bcb                 mov ecx, ebx
// 004268e0  e81bf8ffff           call 0x426100
// 004268e5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004268e9  5e                   pop esi
// 004268ea  5b                   pop ebx
// 004268eb  5f                   pop edi
// 004268ec  5d                   pop ebp
// 004268ed  64890d00000000       mov dword ptr fs:[0], ecx
// 004268f4  83c424               add esp, 0x24
// 004268f7  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" void __cdecl _invalid_parameter_noinfo();

struct Object;
struct Shared;
struct Tree;
struct Map;

struct Control
{
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Object
{
    char padding[0x104];
    Object* parent;
};

struct Shared
{
    Object* object;
    Control* control;

    ~Shared()
    {
        if (control)
        {
            if (_InterlockedExchangeAdd(&control->strong, -1) == 1)
            {
                control->dispose();
                if (_InterlockedExchangeAdd(&control->weak, -1) == 1)
                    control->destroy();
            }
        }
    }
};

struct Tree
{
    Tree* insert(const Shared*);
};

struct Node
{
    char padding[0x10];
    Tree* value;
};

struct Proxy
{
    Map* container;
};

struct Iterator
{
    Proxy* owner;
    Node* node;

    bool operator!=(const Iterator& other) const
    {
        if (!owner || owner != other.owner)
            _invalid_parameter_noinfo();
        return node != other.node;
    }

    Tree* value() const;
};

struct Map
{
    Proxy* proxy;
    char padding[0x14];
    Node* sentinel;
    char tail[0x10];

    Iterator find(Object* const&);
    Iterator end() const
    {
        Iterator result;
        result.owner = proxy;
        result.node = sentinel;
        return result;
    }
};

inline Tree* Iterator::value() const
{
    if (!owner)
        _invalid_parameter_noinfo();
    if (node == owner->container->sentinel)
        _invalid_parameter_noinfo();
    return node->value;
}

struct Lock
{
    void acquire();
    void release();
};

extern Shared* __cdecl makeShared(Shared*, Object*);

struct CSelectionTreeCtrl
{
    char padding[0x98];
    Map map;
    Lock lock;

    Tree* find(const Shared*);
};

Tree* CSelectionTreeCtrl::find(const Shared* object)
{
    if (!object->object)
        return 0;

    lock.acquire();
    Object* key = object->object;
    Iterator position = map.find(key);
    Iterator finish = map.end();

    if (position != finish)
    {
        Tree* result = position.value();
        lock.release();
        return result;
    }

    lock.release();

    Tree* parent;
    {
        Shared temporary;
        parent = find(makeShared(&temporary, object->object->parent));
    }

    if (!parent)
        return 0;

    return parent->insert(object);
}
