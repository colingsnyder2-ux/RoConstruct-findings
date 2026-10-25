// from server: 81% by EspClaude
// roc 2008-06 004e83b0  unit: RBX::Network::Players::Plugin  size: 412 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e83b0
//
// 004e83b0  6aff                 push -1
// 004e83b2  6898a67c00           push 0x7ca698
// 004e83b7  64a100000000         mov eax, dword ptr fs:[0]
// 004e83bd  50                   push eax
// 004e83be  64892500000000       mov dword ptr fs:[0], esp
// 004e83c5  83ec08               sub esp, 8
// 004e83c8  53                   push ebx
// 004e83c9  56                   push esi
// 004e83ca  8bf1                 mov esi, ecx
// 004e83cc  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 004e83d2  33db                 xor ebx, ebx
// 004e83d4  895c2418             mov dword ptr [esp + 0x18], ebx
// 004e83d8  3bc3                 cmp eax, ebx
// 004e83da  0f841f010000         je 0x4e84ff
// 004e83e0  57                   push edi
// 004e83e1  50                   push eax
// 004e83e2  e899af0b00           call 0x5a3380
// 004e83e7  53                   push ebx
// 004e83e8  6850dd9200           push 0x92dd50
// 004e83ed  8bf8                 mov edi, eax
// 004e83ef  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 004e83f5  8b8004010000         mov eax, dword ptr [eax + 0x104]
// 004e83fb  687c909200           push 0x92907c
// 004e8400  53                   push ebx
// 004e8401  50                   push eax
// 004e8402  e8bf931b00           call 0x6a17c6
// 004e8407  50                   push eax
// 004e8408  8d442428             lea eax, [esp + 0x28]
// 004e840c  50                   push eax
// 004e840d  e82e061300           call 0x618a40
// 004e8412  83c420               add esp, 0x20
// 004e8415  8b08                 mov ecx, dword ptr [eax]
// 004e8417  83c004               add eax, 4
// 004e841a  898ebc000000         mov dword ptr [esi + 0xbc], ecx
// 004e8420  50                   push eax
// 004e8421  8d8ec0000000         lea ecx, [esi + 0xc0]
// 004e8427  c644242001           mov byte ptr [esp + 0x20], 1
// 004e842c  e87fa1f1ff           call 0x4025b0
// 004e8431  8b442410             mov eax, dword ptr [esp + 0x10]
// 004e8435  885c241c             mov byte ptr [esp + 0x1c], bl
// 004e8439  3bc3                 cmp eax, ebx
// 004e843b  7430                 je 0x4e846d
// 004e843d  55                   push ebp
// 004e843e  8be8                 mov ebp, eax
// 004e8440  83c004               add eax, 4
// 004e8443  83caff               or edx, 0xffffffff
// 004e8446  f00fc110             lock xadd dword ptr [eax], edx
// 004e844a  7520                 jne 0x4e846c
// 004e844c  8b4500               mov eax, dword ptr [ebp]
// 004e844f  8b5004               mov edx, dword ptr [eax + 4]
// 004e8452  8bcd                 mov ecx, ebp
// 004e8454  ffd2                 call edx
// 004e8456  8d4508               lea eax, [ebp + 8]
// 004e8459  83c9ff               or ecx, 0xffffffff
// 004e845c  f00fc108             lock xadd dword ptr [eax], ecx
// 004e8460  750a                 jne 0x4e846c
// 004e8462  8b5500               mov edx, dword ptr [ebp]
// 004e8465  8b4208               mov eax, dword ptr [edx + 8]
// 004e8468  8bcd                 mov ecx, ebp
// 004e846a  ffd0                 call eax
// 004e846c  5d                   pop ebp
// 004e846d  3bfb                 cmp edi, ebx
// 004e846f  742e                 je 0x4e849f
// 004e8471  8b8ed8000000         mov ecx, dword ptr [esi + 0xd8]
// 004e8477  57                   push edi
// 004e8478  e863a6f3ff           call 0x422ae0
// 004e847d  84c0                 test al, al
// 004e847f  740e                 je 0x4e848f
// 004e8481  8bce                 mov ecx, esi
// 004e8483  e828e4ffff           call 0x4e68b0
// 004e8488  8bce                 mov ecx, esi
// 004e848a  e8b1e2ffff           call 0x4e6740
// 004e848f  8b8ed8000000         mov ecx, dword ptr [esi + 0xd8]
// 004e8495  57                   push edi
// 004e8496  e845a6f3ff           call 0x422ae0
// 004e849b  84c0                 test al, al
// 004e849d  755f                 jne 0x4e84fe
// 004e849f  8d4604               lea eax, [esi + 4]
// 004e84a2  50                   push eax
// 004e84a3  89742410             mov dword ptr [esp + 0x10], esi
// 004e84a7  ff15b0218000         call dword ptr [0x8021b0]
// 004e84ad  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 004e84b3  8b4904               mov ecx, dword ptr [ecx + 4]
// 004e84b6  8b11                 mov edx, dword ptr [ecx]
// 004e84b8  8b5208               mov edx, dword ptr [edx + 8]
// 004e84bb  8d44240c             lea eax, [esp + 0xc]
// 004e84bf  50                   push eax
// 004e84c0  c644242002           mov byte ptr [esp + 0x20], 2
// 004e84c5  ffd2                 call edx
// 004e84c7  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004e84cb  885c241c             mov byte ptr [esp + 0x1c], bl
// 004e84cf  3bc3                 cmp eax, ebx
// 004e84d1  742b                 je 0x4e84fe
// 004e84d3  83c004               add eax, 4
// 004e84d6  50                   push eax
// 004e84d7  ff15ac218000         call dword ptr [0x8021ac]
// 004e84dd  85c0                 test eax, eax
// 004e84df  7519                 jne 0x4e84fa
// 004e84e1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004e84e5  e8a628f7ff           call 0x45ad90
// 004e84ea  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004e84ee  3bcb                 cmp ecx, ebx
// 004e84f0  7408                 je 0x4e84fa
// 004e84f2  8b01                 mov eax, dword ptr [ecx]
// 004e84f4  8b10                 mov edx, dword ptr [eax]
// 004e84f6  6a01                 push 1
// 004e84f8  ffd2                 call edx
// 004e84fa  895c240c             mov dword ptr [esp + 0xc], ebx
// 004e84fe  5f                   pop edi
// 004e84ff  8b742424             mov esi, dword ptr [esp + 0x24]
// 004e8503  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 004e850b  3bf3                 cmp esi, ebx
// 004e850d  742a                 je 0x4e8539
// 004e850f  83c9ff               or ecx, 0xffffffff
// 004e8512  8d4604               lea eax, [esi + 4]
// 004e8515  f00fc108             lock xadd dword ptr [eax], ecx
// 004e8519  751e                 jne 0x4e8539
// 004e851b  8b16                 mov edx, dword ptr [esi]
// 004e851d  8b4204               mov eax, dword ptr [edx + 4]
// 004e8520  8bce                 mov ecx, esi
// 004e8522  ffd0                 call eax
// 004e8524  83caff               or edx, 0xffffffff
// 004e8527  8d4e08               lea ecx, [esi + 8]
// 004e852a  f00fc111             lock xadd dword ptr [ecx], edx
// 004e852e  7509                 jne 0x4e8539
// 004e8530  8b06                 mov eax, dword ptr [esi]
// 004e8532  8b5008               mov edx, dword ptr [eax + 8]
// 004e8535  8bce                 mov ecx, esi
// 004e8537  ffd2                 call edx
// 004e8539  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004e853d  5e                   pop esi
// 004e853e  5b                   pop ebx
// 004e853f  64890d00000000       mov dword ptr fs:[0], ecx
// 004e8546  83c414               add esp, 0x14
// 004e8549  c20800               ret 8

// from server: 78% by king_originala
// roc 2008-06 004e83b0  unit: RBX::Network::Players::Plugin  size: 412 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004e83b0
//
// 004e83b0  6aff                 push -1
// 004e83b2  6898a67c00           push 0x7ca698
// 004e83b7  64a100000000         mov eax, dword ptr fs:[0]
// 004e83bd  50                   push eax
// 004e83be  64892500000000       mov dword ptr fs:[0], esp
// 004e83c5  83ec08               sub esp, 8
// 004e83c8  53                   push ebx
// 004e83c9  56                   push esi
// 004e83ca  8bf1                 mov esi, ecx
// 004e83cc  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 004e83d2  33db                 xor ebx, ebx
// 004e83d4  895c2418             mov dword ptr [esp + 0x18], ebx
// 004e83d8  3bc3                 cmp eax, ebx
// 004e83da  0f841f010000         je 0x4e84ff
// 004e83e0  57                   push edi
// 004e83e1  50                   push eax
// 004e83e2  e899af0b00           call 0x5a3380
// 004e83e7  53                   push ebx
// 004e83e8  6850dd9200           push 0x92dd50
// 004e83ed  8bf8                 mov edi, eax
// 004e83ef  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 004e83f5  8b8004010000         mov eax, dword ptr [eax + 0x104]
// 004e83fb  687c909200           push 0x92907c
// 004e8400  53                   push ebx
// 004e8401  50                   push eax
// 004e8402  e8bf931b00           call 0x6a17c6
// 004e8407  50                   push eax
// 004e8408  8d442428             lea eax, [esp + 0x28]
// 004e840c  50                   push eax
// 004e840d  e82e061300           call 0x618a40
// 004e8412  83c420               add esp, 0x20
// 004e8415  8b08                 mov ecx, dword ptr [eax]
// 004e8417  83c004               add eax, 4
// 004e841a  898ebc000000         mov dword ptr [esi + 0xbc], ecx
// 004e8420  50                   push eax
// 004e8421  8d8ec0000000         lea ecx, [esi + 0xc0]
// 004e8427  c644242001           mov byte ptr [esp + 0x20], 1
// 004e842c  e87fa1f1ff           call 0x4025b0
// 004e8431  8b442410             mov eax, dword ptr [esp + 0x10]
// 004e8435  885c241c             mov byte ptr [esp + 0x1c], bl
// 004e8439  3bc3                 cmp eax, ebx
// 004e843b  7430                 je 0x4e846d
// 004e843d  55                   push ebp
// 004e843e  8be8                 mov ebp, eax
// 004e8440  83c004               add eax, 4
// 004e8443  83caff               or edx, 0xffffffff
// 004e8446  f00fc110             lock xadd dword ptr [eax], edx
// 004e844a  7520                 jne 0x4e846c
// 004e844c  8b4500               mov eax, dword ptr [ebp]
// 004e844f  8b5004               mov edx, dword ptr [eax + 4]
// 004e8452  8bcd                 mov ecx, ebp
// 004e8454  ffd2                 call edx
// 004e8456  8d4508               lea eax, [ebp + 8]
// 004e8459  83c9ff               or ecx, 0xffffffff
// 004e845c  f00fc108             lock xadd dword ptr [eax], ecx
// 004e8460  750a                 jne 0x4e846c
// 004e8462  8b5500               mov edx, dword ptr [ebp]
// 004e8465  8b4208               mov eax, dword ptr [edx + 8]
// 004e8468  8bcd                 mov ecx, ebp
// 004e846a  ffd0                 call eax
// 004e846c  5d                   pop ebp
// 004e846d  3bfb                 cmp edi, ebx
// 004e846f  742e                 je 0x4e849f
// 004e8471  8b8ed8000000         mov ecx, dword ptr [esi + 0xd8]
// 004e8477  57                   push edi
// 004e8478  e863a6f3ff           call 0x422ae0
// 004e847d  84c0                 test al, al
// 004e847f  740e                 je 0x4e848f
// 004e8481  8bce                 mov ecx, esi
// 004e8483  e828e4ffff           call 0x4e68b0
// 004e8488  8bce                 mov ecx, esi
// 004e848a  e8b1e2ffff           call 0x4e6740
// 004e848f  8b8ed8000000         mov ecx, dword ptr [esi + 0xd8]
// 004e8495  57                   push edi
// 004e8496  e845a6f3ff           call 0x422ae0
// 004e849b  84c0                 test al, al
// 004e849d  755f                 jne 0x4e84fe
// 004e849f  8d4604               lea eax, [esi + 4]
// 004e84a2  50                   push eax
// 004e84a3  89742410             mov dword ptr [esp + 0x10], esi
// 004e84a7  ff15b0218000         call dword ptr [0x8021b0]
// 004e84ad  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 004e84b3  8b4904               mov ecx, dword ptr [ecx + 4]
// 004e84b6  8b11                 mov edx, dword ptr [ecx]
// 004e84b8  8b5208               mov edx, dword ptr [edx + 8]
// 004e84bb  8d44240c             lea eax, [esp + 0xc]
// 004e84bf  50                   push eax
// 004e84c0  c644242002           mov byte ptr [esp + 0x20], 2
// 004e84c5  ffd2                 call edx
// 004e84c7  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004e84cb  885c241c             mov byte ptr [esp + 0x1c], bl
// 004e84cf  3bc3                 cmp eax, ebx
// 004e84d1  742b                 je 0x4e84fe
// 004e84d3  83c004               add eax, 4
// 004e84d6  50                   push eax
// 004e84d7  ff15ac218000         call dword ptr [0x8021ac]
// 004e84dd  85c0                 test eax, eax
// 004e84df  7519                 jne 0x4e84fa
// 004e84e1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004e84e5  e8a628f7ff           call 0x45ad90
// 004e84ea  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004e84ee  3bcb                 cmp ecx, ebx
// 004e84f0  7408                 je 0x4e84fa
// 004e84f2  8b01                 mov eax, dword ptr [ecx]
// 004e84f4  8b10                 mov edx, dword ptr [eax]
// 004e84f6  6a01                 push 1
// 004e84f8  ffd2                 call edx
// 004e84fa  895c240c             mov dword ptr [esp + 0xc], ebx
// 004e84fe  5f                   pop edi
// 004e84ff  8b742424             mov esi, dword ptr [esp + 0x24]
// 004e8503  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 004e850b  3bf3                 cmp esi, ebx
// 004e850d  742a                 je 0x4e8539
// 004e850f  83c9ff               or ecx, 0xffffffff
// 004e8512  8d4604               lea eax, [esi + 4]
// 004e8515  f00fc108             lock xadd dword ptr [eax], ecx
// 004e8519  751e                 jne 0x4e8539
// 004e851b  8b16                 mov edx, dword ptr [esi]
// 004e851d  8b4204               mov eax, dword ptr [edx + 4]
// 004e8520  8bce                 mov ecx, esi
// 004e8522  ffd0                 call eax
// 004e8524  83caff               or edx, 0xffffffff
// 004e8527  8d4e08               lea ecx, [esi + 8]
// 004e852a  f00fc111             lock xadd dword ptr [ecx], edx
// 004e852e  7509                 jne 0x4e8539
// 004e8530  8b06                 mov eax, dword ptr [esi]
// 004e8532  8b5008               mov edx, dword ptr [eax + 8]
// 004e8535  8bce                 mov ecx, esi
// 004e8537  ffd2                 call edx
// 004e8539  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004e853d  5e                   pop esi
// 004e853e  5b                   pop ebx
// 004e853f  64890d00000000       mov dword ptr fs:[0], ecx
// 004e8546  83c414               add esp, 0x14
// 004e8549  c20800               ret 8

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

struct Intrusive
{
    S* pointer;
    Intrusive(S*);
    ~Intrusive();
};

struct Callback
{
    virtual void slot0();
    virtual void slot1();
    virtual void invoke(const Intrusive&);
};

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

__forceinline Intrusive::Intrusive(S* p)
{
    pointer = p;
    incrementReference(&p->references);
}

__forceinline Intrusive::~Intrusive()
{
    if (pointer)
    {
        if (decrementReference(&pointer->references) == 0)
        {
            pointer->cleanup();
            delete pointer;
        }
        pointer = 0;
    }
}

void S::f(Shared argument)
{
    if (node)
    {
        Node* root = findRoot(node);
        shared = makeShared(
            runtimeCast(node->parent, 0, &instanceType, &partType, 0));

        if (root)
        {
            if (node->contains(root))
            {
                updateFirst();
                updateSecond();
            }
            if (node->contains(root))
                return;
        }

        holder->callback->invoke(Intrusive(this));
    }
}
