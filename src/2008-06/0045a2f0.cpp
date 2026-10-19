// from server: 85% by colin
// from server: 83% by king_originala
// roc 2008-06 0045a2f0  unit: CRobloxView  size: 422 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045a2f0
//
// 0045a2f0  6aff                 push -1
// 0045a2f2  68d0297c00           push 0x7c29d0
// 0045a2f7  64a100000000         mov eax, dword ptr fs:[0]
// 0045a2fd  50                   push eax
// 0045a2fe  64892500000000       mov dword ptr fs:[0], esp
// 0045a305  83ec14               sub esp, 0x14
// 0045a308  53                   push ebx
// 0045a309  55                   push ebp
// 0045a30a  56                   push esi
// 0045a30b  57                   push edi
// 0045a30c  8bf1                 mov esi, ecx
// 0045a30e  8b8670010000         mov eax, dword ptr [esi + 0x170]
// 0045a314  83ec08               sub esp, 8
// 0045a317  8bcc                 mov ecx, esp
// 0045a319  8901                 mov dword ptr [ecx], eax
// 0045a31b  8b8674010000         mov eax, dword ptr [esi + 0x174]
// 0045a321  33db                 xor ebx, ebx
// 0045a323  89642418             mov dword ptr [esp + 0x18], esp
// 0045a327  894104               mov dword ptr [ecx + 4], eax
// 0045a32a  3bc3                 cmp eax, ebx
// 0045a32c  740c                 je 0x45a33a
// 0045a32e  83c004               add eax, 4
// 0045a331  b901000000           mov ecx, 1
// 0045a336  f00fc108             lock xadd dword ptr [eax], ecx
// 0045a33a  8d4c2420             lea ecx, [esp + 0x20]
// 0045a33e  e8fd77fbff           call 0x411b40
// 0045a343  8b8edc010000         mov ecx, dword ptr [esi + 0x1dc]
// 0045a349  895c242c             mov dword ptr [esp + 0x2c], ebx
// 0045a34d  899edc010000         mov dword ptr [esi + 0x1dc], ebx
// 0045a353  3bcb                 cmp ecx, ebx
// 0045a355  7409                 je 0x45a360
// 0045a357  8b11                 mov edx, dword ptr [ecx]
// 0045a359  8b4204               mov eax, dword ptr [edx + 4]
// 0045a35c  6a01                 push 1
// 0045a35e  ffd0                 call eax
// 0045a360  8b8ee0010000         mov ecx, dword ptr [esi + 0x1e0]
// 0045a366  899ee0010000         mov dword ptr [esi + 0x1e0], ebx
// 0045a36c  3bcb                 cmp ecx, ebx
// 0045a36e  7409                 je 0x45a379
// 0045a370  8b11                 mov edx, dword ptr [ecx]
// 0045a372  8b4204               mov eax, dword ptr [edx + 4]
// 0045a375  6a01                 push 1
// 0045a377  ffd0                 call eax
// 0045a379  8b8ee4010000         mov ecx, dword ptr [esi + 0x1e4]
// 0045a37f  899ee4010000         mov dword ptr [esi + 0x1e4], ebx
// 0045a385  3bcb                 cmp ecx, ebx
// 0045a387  7409                 je 0x45a392
// 0045a389  8b11                 mov edx, dword ptr [ecx]
// 0045a38b  8b4204               mov eax, dword ptr [edx + 4]
// 0045a38e  6a01                 push 1
// 0045a390  ffd0                 call eax
// 0045a392  8b8ee8010000         mov ecx, dword ptr [esi + 0x1e8]
// 0045a398  899ee8010000         mov dword ptr [esi + 0x1e8], ebx
// 0045a39e  3bcb                 cmp ecx, ebx
// 0045a3a0  7409                 je 0x45a3ab
// 0045a3a2  8b11                 mov edx, dword ptr [ecx]
// 0045a3a4  8b4204               mov eax, dword ptr [edx + 4]
// 0045a3a7  6a01                 push 1
// 0045a3a9  ffd0                 call eax
// 0045a3ab  8b8eec010000         mov ecx, dword ptr [esi + 0x1ec]
// 0045a3b1  899eec010000         mov dword ptr [esi + 0x1ec], ebx
// 0045a3b7  3bcb                 cmp ecx, ebx
// 0045a3b9  7409                 je 0x45a3c4
// 0045a3bb  8b11                 mov edx, dword ptr [ecx]
// 0045a3bd  8b4204               mov eax, dword ptr [edx + 4]
// 0045a3c0  6a01                 push 1
// 0045a3c2  ffd0                 call eax
// 0045a3c4  3bf3                 cmp esi, ebx
// 0045a3c6  7408                 je 0x45a3d0
// 0045a3c8  8d8ea0000000         lea ecx, [esi + 0xa0]
// 0045a3ce  eb02                 jmp 0x45a3d2
// 0045a3d0  33c9                 xor ecx, ecx
// 0045a3d2  8b8670010000         mov eax, dword ptr [esi + 0x170]
// 0045a3d8  3bc3                 cmp eax, ebx
// 0045a3da  740c                 je 0x45a3e8
// 0045a3dc  51                   push ecx
// 0045a3dd  8d8850010000         lea ecx, [eax + 0x150]
// 0045a3e3  e898b61800           call 0x5e5a80
// 0045a3e8  8b8670010000         mov eax, dword ptr [esi + 0x170]
// 0045a3ee  8d8ea4000000         lea ecx, [esi + 0xa4]
// 0045a3f4  3bc3                 cmp eax, ebx
// 0045a3f6  740c                 je 0x45a404
// 0045a3f8  51                   push ecx
// 0045a3f9  8d8870010000         lea ecx, [eax + 0x170]
// 0045a3ff  e87cb61800           call 0x5e5a80
// 0045a404  8d4c2410             lea ecx, [esp + 0x10]
// 0045a408  51                   push ecx
// 0045a409  8bce                 mov ecx, esi
// 0045a40b  e860eeffff           call 0x459270
// 0045a410  8b08                 mov ecx, dword ptr [eax]
// 0045a412  c644242c01           mov byte ptr [esp + 0x2c], 1
// 0045a417  3bcb                 cmp ecx, ebx
// 0045a419  7409                 je 0x45a424
// 0045a41b  e8b081fbff           call 0x4125d0
// 0045a420  8be8                 mov ebp, eax
// 0045a422  eb02                 jmp 0x45a426
// 0045a424  33ed                 xor ebp, ebp
// 0045a426  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0045a42a  885c242c             mov byte ptr [esp + 0x2c], bl
// 0045a42e  3bfb                 cmp edi, ebx
// 0045a430  742a                 je 0x45a45c
// 0045a432  8d5704               lea edx, [edi + 4]
// 0045a435  83c8ff               or eax, 0xffffffff
// 0045a438  f00fc102             lock xadd dword ptr [edx], eax
// 0045a43c  751e                 jne 0x45a45c
// 0045a43e  8b17                 mov edx, dword ptr [edi]
// 0045a440  8b4204               mov eax, dword ptr [edx + 4]
// 0045a443  8bcf                 mov ecx, edi
// 0045a445  ffd0                 call eax
// 0045a447  8d4f08               lea ecx, [edi + 8]
// 0045a44a  83caff               or edx, 0xffffffff
// 0045a44d  f00fc111             lock xadd dword ptr [ecx], edx
// 0045a451  7509                 jne 0x45a45c
// 0045a453  8b07                 mov eax, dword ptr [edi]
// 0045a455  8b5008               mov edx, dword ptr [eax + 8]
// 0045a458  8bcf                 mov ecx, edi
// 0045a45a  ffd2                 call edx
// 0045a45c  3beb                 cmp ebp, ebx
// 0045a45e  7412                 je 0x45a472
// 0045a460  8d86a8000000         lea eax, [esi + 0xa8]
// 0045a466  50                   push eax
// 0045a467  8d8d50010000         lea ecx, [ebp + 0x150]
// 0045a46d  e80eb61800           call 0x5e5a80
// 0045a472  8d4c2418             lea ecx, [esp + 0x18]
// 0045a476  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 0045a47e  e83dcf1100           call 0x5773c0
// 0045a483  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0045a487  5f                   pop edi
// 0045a488  5e                   pop esi
// 0045a489  5d                   pop ebp
// 0045a48a  64890d00000000       mov dword ptr fs:[0], ecx
// 0045a491  5b                   pop ebx
// 0045a492  83c420               add esp, 0x20
// 0045a495  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct RefCount {
    virtual ~RefCount();
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Signal {
    void remove(void*);
};

struct Node {
    char padding[0x150];
    Signal first;
    char gap[0x1c];
    Signal second;
    Node* resolve();
};

struct Shared {
    Node* ptr;
    RefCount* count;

    Shared(const Shared& other)
        : ptr(other.ptr), count(other.count) {
        if (count)
            _InterlockedIncrement(&count->strong);
    }

    ~Shared() {
        RefCount* p = count;
        if (p && _InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
};

struct Guard {
    char storage[8];
    Guard(Shared);
    ~Guard();
};

struct Connection {
    virtual void reserved() = 0;
    virtual ~Connection();
};

struct S {
    char padding0[0xa0];
    int listener0;
    int listener1;
    int listener2;
    char padding1[0xc4];
    Shared model;
    char padding2[0x64];
    Connection* connection0;
    Connection* connection1;
    Connection* connection2;
    Connection* connection3;
    Connection* connection4;

    Shared get();
    void disconnect();
};

void S::disconnect() {
    Guard guard(model);

    Connection* old = connection0;
    connection0 = 0;
    if (old)
        delete old;

    old = connection1;
    connection1 = 0;
    if (old)
        delete old;

    old = connection2;
    connection2 = 0;
    if (old)
        delete old;

    old = connection3;
    connection3 = 0;
    if (old)
        delete old;

    old = connection4;
    connection4 = 0;
    if (old)
        delete old;

    void* listener = this ? &listener0 : 0;
    if (model.ptr)
        model.ptr->first.remove(listener);

    listener = &listener1;
    if (model.ptr)
        model.ptr->second.remove(listener);

    Node* node;
    {
        Shared temporary = get();
        node = temporary.ptr ? temporary.ptr->resolve() : 0;
    }

    if (node)
        node->first.remove(&listener2);
}
