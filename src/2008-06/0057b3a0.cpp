// from server: 73% by EspClaude
// from server: 67% by colin
// roc 2008-06 0057b3a0  unit: RBX::DataModel  size: 453 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057b3a0
//
// 0057b3a0  6aff                 push -1
// 0057b3a2  6860997d00           push 0x7d9960
// 0057b3a7  64a100000000         mov eax, dword ptr fs:[0]
// 0057b3ad  50                   push eax
// 0057b3ae  64892500000000       mov dword ptr fs:[0], esp
// 0057b3b5  83ec1c               sub esp, 0x1c
// 0057b3b8  53                   push ebx
// 0057b3b9  55                   push ebp
// 0057b3ba  56                   push esi
// 0057b3bb  57                   push edi
// 0057b3bc  8bf1                 mov esi, ecx
// 0057b3be  33db                 xor ebx, ebx
// 0057b3c0  56                   push esi
// 0057b3c1  8d4c241c             lea ecx, [esp + 0x1c]
// 0057b3c5  895c2438             mov dword ptr [esp + 0x38], ebx
// 0057b3c9  e892f3feff           call 0x56a760
// 0057b3ce  8b442448             mov eax, dword ptr [esp + 0x48]
// 0057b3d2  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0057b3d6  50                   push eax
// 0057b3d7  83ec08               sub esp, 8
// 0057b3da  8bc4                 mov eax, esp
// 0057b3dc  8908                 mov dword ptr [eax], ecx
// 0057b3de  8b542450             mov edx, dword ptr [esp + 0x50]
// 0057b3e2  895004               mov dword ptr [eax + 4], edx
// 0057b3e5  8b442450             mov eax, dword ptr [esp + 0x50]
// 0057b3e9  c644244001           mov byte ptr [esp + 0x40], 1
// 0057b3ee  89642454             mov dword ptr [esp + 0x54], esp
// 0057b3f2  3bc3                 cmp eax, ebx
// 0057b3f4  740c                 je 0x57b402
// 0057b3f6  83c004               add eax, 4
// 0057b3f9  b901000000           mov ecx, 1
// 0057b3fe  f00fc108             lock xadd dword ptr [eax], ecx
// 0057b402  8d4c242c             lea ecx, [esp + 0x2c]
// 0057b406  e865fdffff           call 0x57b170
// 0057b40b  885c2410             mov byte ptr [esp + 0x10], bl
// 0057b40f  8b442418             mov eax, dword ptr [esp + 0x18]
// 0057b413  8b36                 mov esi, dword ptr [esi]
// 0057b415  8b7e58               mov edi, dword ptr [esi + 0x58]
// 0057b418  83ec40               sub esp, 0x40
// 0057b41b  89642454             mov dword ptr [esp + 0x54], esp
// 0057b41f  8bdc                 mov ebx, esp
// 0057b421  8d542450             lea edx, [esp + 0x50]
// 0057b425  52                   push edx
// 0057b426  8be8                 mov ebp, eax
// 0057b428  8d442464             lea eax, [esp + 0x64]
// 0057b42c  50                   push eax
// 0057b42d  83ec1c               sub esp, 0x1c
// 0057b430  8bcc                 mov ecx, esp
// 0057b432  89642478             mov dword ptr [esp + 0x78], esp
// 0057b436  51                   push ecx
// 0057b437  8d4e08               lea ecx, [esi + 8]
// 0057b43a  c684249c00000003     mov byte ptr [esp + 0x9c], 3
// 0057b442  83c704               add edi, 4
// 0057b445  e8665fffff           call 0x5713b0
// 0057b44a  83ec1c               sub esp, 0x1c
// 0057b44d  8bd4                 mov edx, esp
// 0057b44f  89a42494000000       mov dword ptr [esp + 0x94], esp
// 0057b456  52                   push edx
// 0057b457  8d4d08               lea ecx, [ebp + 8]
// 0057b45a  e8515fffff           call 0x5713b0
// 0057b45f  8bcb                 mov ecx, ebx
// 0057b461  e83a54f1ff           call 0x4908a0
// 0057b466  83ec40               sub esp, 0x40
// 0057b469  89a42494000000       mov dword ptr [esp + 0x94], esp
// 0057b470  8bdc                 mov ebx, esp
// 0057b472  8d842490000000       lea eax, [esp + 0x90]
// 0057b479  50                   push eax
// 0057b47a  8d8c24a4000000       lea ecx, [esp + 0xa4]
// 0057b481  51                   push ecx
// 0057b482  83ec1c               sub esp, 0x1c
// 0057b485  8bd4                 mov edx, esp
// 0057b487  89a424b8000000       mov dword ptr [esp + 0xb8], esp
// 0057b48e  52                   push edx
// 0057b48f  8d4e08               lea ecx, [esi + 8]
// 0057b492  e8195fffff           call 0x5713b0
// 0057b497  83ec1c               sub esp, 0x1c
// 0057b49a  8bc4                 mov eax, esp
// 0057b49c  89a424d4000000       mov dword ptr [esp + 0xd4], esp
// 0057b4a3  8bcd                 mov ecx, ebp
// 0057b4a5  50                   push eax
// 0057b4a6  83c108               add ecx, 8
// 0057b4a9  e8d25effff           call 0x571380
// 0057b4ae  8bcb                 mov ecx, ebx
// 0057b4b0  e8eb53f1ff           call 0x4908a0
// 0057b4b5  8bac24bc000000       mov ebp, dword ptr [esp + 0xbc]
// 0057b4bc  55                   push ebp
// 0057b4bd  8bcf                 mov ecx, edi
// 0057b4bf  e83cfeffff           call 0x57b300
// 0057b4c4  33db                 xor ebx, ebx
// 0057b4c6  385c2410             cmp byte ptr [esp + 0x10], bl
// 0057b4ca  7404                 je 0x57b4d0
// 0057b4cc  885c2410             mov byte ptr [esp + 0x10], bl
// 0057b4d0  8b742424             mov esi, dword ptr [esp + 0x24]
// 0057b4d4  c644243401           mov byte ptr [esp + 0x34], 1
// 0057b4d9  3bf3                 cmp esi, ebx
// 0057b4db  742a                 je 0x57b507
// 0057b4dd  8d4e04               lea ecx, [esi + 4]
// 0057b4e0  83caff               or edx, 0xffffffff
// 0057b4e3  f00fc111             lock xadd dword ptr [ecx], edx
// 0057b4e7  751e                 jne 0x57b507
// 0057b4e9  8b06                 mov eax, dword ptr [esi]
// 0057b4eb  8b5004               mov edx, dword ptr [eax + 4]
// 0057b4ee  8bce                 mov ecx, esi
// 0057b4f0  ffd2                 call edx
// 0057b4f2  8d4608               lea eax, [esi + 8]
// 0057b4f5  83c9ff               or ecx, 0xffffffff
// 0057b4f8  f00fc108             lock xadd dword ptr [eax], ecx
// 0057b4fc  7509                 jne 0x57b507
// 0057b4fe  8b16                 mov edx, dword ptr [esi]
// 0057b500  8b4208               mov eax, dword ptr [edx + 8]
// 0057b503  8bce                 mov ecx, esi
// 0057b505  ffd0                 call eax
// 0057b507  8d4c2418             lea ecx, [esp + 0x18]
// 0057b50b  885c2434             mov byte ptr [esp + 0x34], bl
// 0057b50f  e83cf1feff           call 0x56a650
// 0057b514  8b742444             mov esi, dword ptr [esp + 0x44]
// 0057b518  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 0057b520  3bf3                 cmp esi, ebx
// 0057b522  742a                 je 0x57b54e
// 0057b524  8d4e04               lea ecx, [esi + 4]
// 0057b527  83caff               or edx, 0xffffffff
// 0057b52a  f00fc111             lock xadd dword ptr [ecx], edx
// 0057b52e  751e                 jne 0x57b54e
// 0057b530  8b06                 mov eax, dword ptr [esi]
// 0057b532  8b5004               mov edx, dword ptr [eax + 4]
// 0057b535  8bce                 mov ecx, esi
// 0057b537  ffd2                 call edx
// 0057b539  8d4608               lea eax, [esi + 8]
// 0057b53c  83c9ff               or ecx, 0xffffffff
// 0057b53f  f00fc108             lock xadd dword ptr [eax], ecx
// 0057b543  7509                 jne 0x57b54e
// 0057b545  8b16                 mov edx, dword ptr [esi]
// 0057b547  8b4208               mov eax, dword ptr [edx + 8]
// 0057b54a  8bce                 mov ecx, esi
// 0057b54c  ffd0                 call eax
// 0057b54e  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0057b552  5f                   pop edi
// 0057b553  5e                   pop esi
// 0057b554  8bc5                 mov eax, ebp
// 0057b556  5d                   pop ebp
// 0057b557  64890d00000000       mov dword ptr fs:[0], ecx
// 0057b55e  5b                   pop ebx
// 0057b55f  83c428               add esp, 0x28
// 0057b562  c21000               ret 0x10

// from server: 66% by king_originala
// roc 2008-06 0057b3a0  unit: RBX::DataModel  size: 453 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057b3a0
//
// 0057b3a0  6aff                 push -1
// 0057b3a2  6860997d00           push 0x7d9960
// 0057b3a7  64a100000000         mov eax, dword ptr fs:[0]
// 0057b3ad  50                   push eax
// 0057b3ae  64892500000000       mov dword ptr fs:[0], esp
// 0057b3b5  83ec1c               sub esp, 0x1c
// 0057b3b8  53                   push ebx
// 0057b3b9  55                   push ebp
// 0057b3ba  56                   push esi
// 0057b3bb  57                   push edi
// 0057b3bc  8bf1                 mov esi, ecx
// 0057b3be  33db                 xor ebx, ebx
// 0057b3c0  56                   push esi
// 0057b3c1  8d4c241c             lea ecx, [esp + 0x1c]
// 0057b3c5  895c2438             mov dword ptr [esp + 0x38], ebx
// 0057b3c9  e892f3feff           call 0x56a760
// 0057b3ce  8b442448             mov eax, dword ptr [esp + 0x48]
// 0057b3d2  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0057b3d6  50                   push eax
// 0057b3d7  83ec08               sub esp, 8
// 0057b3da  8bc4                 mov eax, esp
// 0057b3dc  8908                 mov dword ptr [eax], ecx
// 0057b3de  8b542450             mov edx, dword ptr [esp + 0x50]
// 0057b3e2  895004               mov dword ptr [eax + 4], edx
// 0057b3e5  8b442450             mov eax, dword ptr [esp + 0x50]
// 0057b3e9  c644244001           mov byte ptr [esp + 0x40], 1
// 0057b3ee  89642454             mov dword ptr [esp + 0x54], esp
// 0057b3f2  3bc3                 cmp eax, ebx
// 0057b3f4  740c                 je 0x57b402
// 0057b3f6  83c004               add eax, 4
// 0057b3f9  b901000000           mov ecx, 1
// 0057b3fe  f00fc108             lock xadd dword ptr [eax], ecx
// 0057b402  8d4c242c             lea ecx, [esp + 0x2c]
// 0057b406  e865fdffff           call 0x57b170
// 0057b40b  885c2410             mov byte ptr [esp + 0x10], bl
// 0057b40f  8b442418             mov eax, dword ptr [esp + 0x18]
// 0057b413  8b36                 mov esi, dword ptr [esi]
// 0057b415  8b7e58               mov edi, dword ptr [esi + 0x58]
// 0057b418  83ec40               sub esp, 0x40
// 0057b41b  89642454             mov dword ptr [esp + 0x54], esp
// 0057b41f  8bdc                 mov ebx, esp
// 0057b421  8d542450             lea edx, [esp + 0x50]
// 0057b425  52                   push edx
// 0057b426  8be8                 mov ebp, eax
// 0057b428  8d442464             lea eax, [esp + 0x64]
// 0057b42c  50                   push eax
// 0057b42d  83ec1c               sub esp, 0x1c
// 0057b430  8bcc                 mov ecx, esp
// 0057b432  89642478             mov dword ptr [esp + 0x78], esp
// 0057b436  51                   push ecx
// 0057b437  8d4e08               lea ecx, [esi + 8]
// 0057b43a  c684249c00000003     mov byte ptr [esp + 0x9c], 3
// 0057b442  83c704               add edi, 4
// 0057b445  e8665fffff           call 0x5713b0
// 0057b44a  83ec1c               sub esp, 0x1c
// 0057b44d  8bd4                 mov edx, esp
// 0057b44f  89a42494000000       mov dword ptr [esp + 0x94], esp
// 0057b456  52                   push edx
// 0057b457  8d4d08               lea ecx, [ebp + 8]
// 0057b45a  e8515fffff           call 0x5713b0
// 0057b45f  8bcb                 mov ecx, ebx
// 0057b461  e83a54f1ff           call 0x4908a0
// 0057b466  83ec40               sub esp, 0x40
// 0057b469  89a42494000000       mov dword ptr [esp + 0x94], esp
// 0057b470  8bdc                 mov ebx, esp
// 0057b472  8d842490000000       lea eax, [esp + 0x90]
// 0057b479  50                   push eax
// 0057b47a  8d8c24a4000000       lea ecx, [esp + 0xa4]
// 0057b481  51                   push ecx
// 0057b482  83ec1c               sub esp, 0x1c
// 0057b485  8bd4                 mov edx, esp
// 0057b487  89a424b8000000       mov dword ptr [esp + 0xb8], esp
// 0057b48e  52                   push edx
// 0057b48f  8d4e08               lea ecx, [esi + 8]
// 0057b492  e8195fffff           call 0x5713b0
// 0057b497  83ec1c               sub esp, 0x1c
// 0057b49a  8bc4                 mov eax, esp
// 0057b49c  89a424d4000000       mov dword ptr [esp + 0xd4], esp
// 0057b4a3  8bcd                 mov ecx, ebp
// 0057b4a5  50                   push eax
// 0057b4a6  83c108               add ecx, 8
// 0057b4a9  e8d25effff           call 0x571380
// 0057b4ae  8bcb                 mov ecx, ebx
// 0057b4b0  e8eb53f1ff           call 0x4908a0
// 0057b4b5  8bac24bc000000       mov ebp, dword ptr [esp + 0xbc]
// 0057b4bc  55                   push ebp
// 0057b4bd  8bcf                 mov ecx, edi
// 0057b4bf  e83cfeffff           call 0x57b300
// 0057b4c4  33db                 xor ebx, ebx
// 0057b4c6  385c2410             cmp byte ptr [esp + 0x10], bl
// 0057b4ca  7404                 je 0x57b4d0
// 0057b4cc  885c2410             mov byte ptr [esp + 0x10], bl
// 0057b4d0  8b742424             mov esi, dword ptr [esp + 0x24]
// 0057b4d4  c644243401           mov byte ptr [esp + 0x34], 1
// 0057b4d9  3bf3                 cmp esi, ebx
// 0057b4db  742a                 je 0x57b507
// 0057b4dd  8d4e04               lea ecx, [esi + 4]
// 0057b4e0  83caff               or edx, 0xffffffff
// 0057b4e3  f00fc111             lock xadd dword ptr [ecx], edx
// 0057b4e7  751e                 jne 0x57b507
// 0057b4e9  8b06                 mov eax, dword ptr [esi]
// 0057b4eb  8b5004               mov edx, dword ptr [eax + 4]
// 0057b4ee  8bce                 mov ecx, esi
// 0057b4f0  ffd2                 call edx
// 0057b4f2  8d4608               lea eax, [esi + 8]
// 0057b4f5  83c9ff               or ecx, 0xffffffff
// 0057b4f8  f00fc108             lock xadd dword ptr [eax], ecx
// 0057b4fc  7509                 jne 0x57b507
// 0057b4fe  8b16                 mov edx, dword ptr [esi]
// 0057b500  8b4208               mov eax, dword ptr [edx + 8]
// 0057b503  8bce                 mov ecx, esi
// 0057b505  ffd0                 call eax
// 0057b507  8d4c2418             lea ecx, [esp + 0x18]
// 0057b50b  885c2434             mov byte ptr [esp + 0x34], bl
// 0057b50f  e83cf1feff           call 0x56a650
// 0057b514  8b742444             mov esi, dword ptr [esp + 0x44]
// 0057b518  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 0057b520  3bf3                 cmp esi, ebx
// 0057b522  742a                 je 0x57b54e
// 0057b524  8d4e04               lea ecx, [esi + 4]
// 0057b527  83caff               or edx, 0xffffffff
// 0057b52a  f00fc111             lock xadd dword ptr [ecx], edx
// 0057b52e  751e                 jne 0x57b54e
// 0057b530  8b06                 mov eax, dword ptr [esi]
// 0057b532  8b5004               mov edx, dword ptr [eax + 4]
// 0057b535  8bce                 mov ecx, esi
// 0057b537  ffd2                 call edx
// 0057b539  8d4608               lea eax, [esi + 8]
// 0057b53c  83c9ff               or ecx, 0xffffffff
// 0057b53f  f00fc108             lock xadd dword ptr [eax], ecx
// 0057b543  7509                 jne 0x57b54e
// 0057b545  8b16                 mov edx, dword ptr [esi]
// 0057b547  8b4208               mov eax, dword ptr [edx + 8]
// 0057b54a  8bce                 mov ecx, esi
// 0057b54c  ffd0                 call eax
// 0057b54e  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0057b552  5f                   pop edi
// 0057b553  5e                   pop esi
// 0057b554  8bc5                 mov eax, ebp
// 0057b556  5d                   pop ebp
// 0057b557  64890d00000000       mov dword ptr fs:[0], ecx
// 0057b55e  5b                   pop ebx
// 0057b55f  83c428               add esp, 0x28
// 0057b562  c21000               ret 0x10

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Count {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
    void release()
    {
        if (_InterlockedDecrement(&strong) == 0) {
            dispose();
            if (_InterlockedDecrement(&weak) == 0)
                destroy();
        }
    }
};

struct Object;

struct Shared {
    Object* px;
    Count* pn;
    Shared(const Shared&);
    ~Shared();
};

__forceinline Shared::Shared(const Shared& other)
    : px(other.px), pn(other.pn)
{
    if (pn)
        _InterlockedIncrement(&pn->strong);
}

__forceinline Shared::~Shared()
{
    if (pn)
        pn->release();
}

struct Iterator {
    unsigned char data[28];
    Iterator(const Iterator&);
};

struct Range {
    Iterator begin();
    Iterator end();
};

struct Guard {
    Shared owner;
    int flags;
    Guard(Shared, int);
};

struct Flag {
    bool value;
    Flag() : value(false) {}
    ~Flag()
    {
        if (value)
            value = false;
    }
};

struct Task {
    unsigned char data[64];
    Task(Iterator, Iterator, Guard*, Flag*);
    Task(const Task&);
};

struct Result {
    void* p;
    Result(const Result&);
};

struct QueueBase {
    int pad;
};
struct Runner {
    Result run(Task, Task);
};
struct Queue : QueueBase, Runner {
};

struct Prefix {
    unsigned char prefix[8];
};

struct Object : Prefix, Range {
    unsigned char padding[0x58 - 8 - sizeof(Range)];
    Queue* queue;
};

struct Model {
    Object* px;
    Count* pn;
    Model(const Model&);
    ~Model();
    Result execute(Shared, int);
};

Result Model::execute(Shared other, int flags)
{
    Model hold(*this);
    Guard guard(other, flags);
    Flag active;
    Object* source = hold.px;
    Object* object = px;
    Queue* queue = object->queue;

    return queue->run(
        Task(source->begin(), object->end(), &guard, &active),
        Task(source->end(), object->end(), &guard, &active));
}
