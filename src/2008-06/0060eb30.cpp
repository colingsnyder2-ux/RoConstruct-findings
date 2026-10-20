// from server: 82% by colin
// from server: 80% by king_originala
// roc 2008-06 0060eb30  unit: RBX::BlockBlockContact  size: 301 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060eb30
//
// 0060eb30  6aff                 push -1
// 0060eb32  6868917d00           push 0x7d9168
// 0060eb37  64a100000000         mov eax, dword ptr fs:[0]
// 0060eb3d  50                   push eax
// 0060eb3e  64892500000000       mov dword ptr fs:[0], esp
// 0060eb45  83ec0c               sub esp, 0xc
// 0060eb48  53                   push ebx
// 0060eb49  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0060eb4d  8b4310               mov eax, dword ptr [ebx + 0x10]
// 0060eb50  2b430c               sub eax, dword ptr [ebx + 0xc]
// 0060eb53  55                   push ebp
// 0060eb54  33c9                 xor ecx, ecx
// 0060eb56  c1f803               sar eax, 3
// 0060eb59  56                   push esi
// 0060eb5a  33ed                 xor ebp, ebp
// 0060eb5c  57                   push edi
// 0060eb5d  894c2410             mov dword ptr [esp + 0x10], ecx
// 0060eb61  85c0                 test eax, eax
// 0060eb63  0f86df000000         jbe 0x60ec48
// 0060eb69  3be8                 cmp ebp, eax
// 0060eb6b  7206                 jb 0x60eb73
// 0060eb6d  ff1590288000         call dword ptr [0x802890]
// 0060eb73  8b430c               mov eax, dword ptr [ebx + 0xc]
// 0060eb76  8d542414             lea edx, [esp + 0x14]
// 0060eb7a  8d0ce8               lea ecx, [eax + ebp*8]
// 0060eb7d  52                   push edx
// 0060eb7e  e87dbffbff           call 0x5cab00
// 0060eb83  8b742418             mov esi, dword ptr [esp + 0x18]
// 0060eb87  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0060eb8b  83ec08               sub esp, 8
// 0060eb8e  8bc4                 mov eax, esp
// 0060eb90  8938                 mov dword ptr [eax], edi
// 0060eb92  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 0060eb9a  89642434             mov dword ptr [esp + 0x34], esp
// 0060eb9e  897004               mov dword ptr [eax + 4], esi
// 0060eba1  85f6                 test esi, esi
// 0060eba3  740c                 je 0x60ebb1
// 0060eba5  8d4604               lea eax, [esi + 4]
// 0060eba8  b901000000           mov ecx, 1
// 0060ebad  f00fc108             lock xadd dword ptr [eax], ecx
// 0060ebb1  e83aaaf8ff           call 0x5995f0
// 0060ebb6  83c408               add esp, 8
// 0060ebb9  84c0                 test al, al
// 0060ebbb  742c                 je 0x60ebe9
// 0060ebbd  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0060ebc1  8d44242c             lea eax, [esp + 0x2c]
// 0060ebc5  8d9728020000         lea edx, [edi + 0x228]
// 0060ebcb  50                   push eax
// 0060ebcc  89542430             mov dword ptr [esp + 0x30], edx
// 0060ebd0  e8bbb5f8ff           call 0x59a190
// 0060ebd5  837c241000           cmp dword ptr [esp + 0x10], 0
// 0060ebda  750d                 jne 0x60ebe9
// 0060ebdc  57                   push edi
// 0060ebdd  e87e19f9ff           call 0x5a0560
// 0060ebe2  83c404               add esp, 4
// 0060ebe5  89442410             mov dword ptr [esp + 0x10], eax
// 0060ebe9  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0060ebf1  85f6                 test esi, esi
// 0060ebf3  742a                 je 0x60ec1f
// 0060ebf5  8d4e04               lea ecx, [esi + 4]
// 0060ebf8  83caff               or edx, 0xffffffff
// 0060ebfb  f00fc111             lock xadd dword ptr [ecx], edx
// 0060ebff  751e                 jne 0x60ec1f
// 0060ec01  8b06                 mov eax, dword ptr [esi]
// 0060ec03  8b5004               mov edx, dword ptr [eax + 4]
// 0060ec06  8bce                 mov ecx, esi
// 0060ec08  ffd2                 call edx
// 0060ec0a  8d4608               lea eax, [esi + 8]
// 0060ec0d  83c9ff               or ecx, 0xffffffff
// 0060ec10  f00fc108             lock xadd dword ptr [eax], ecx
// 0060ec14  7509                 jne 0x60ec1f
// 0060ec16  8b16                 mov edx, dword ptr [esi]
// 0060ec18  8b4208               mov eax, dword ptr [edx + 8]
// 0060ec1b  8bce                 mov ecx, esi
// 0060ec1d  ffd0                 call eax
// 0060ec1f  8b4310               mov eax, dword ptr [ebx + 0x10]
// 0060ec22  2b430c               sub eax, dword ptr [ebx + 0xc]
// 0060ec25  45                   inc ebp
// 0060ec26  c1f803               sar eax, 3
// 0060ec29  3be8                 cmp ebp, eax
// 0060ec2b  0f8242ffffff         jb 0x60eb73
// 0060ec31  8b442410             mov eax, dword ptr [esp + 0x10]
// 0060ec35  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0060ec39  64890d00000000       mov dword ptr fs:[0], ecx
// 0060ec40  5f                   pop edi
// 0060ec41  5e                   pop esi
// 0060ec42  5d                   pop ebp
// 0060ec43  5b                   pop ebx
// 0060ec44  83c418               add esp, 0x18
// 0060ec47  c3                   ret 
// 0060ec48  5f                   pop edi
// 0060ec49  5e                   pop esi
// 0060ec4a  8bc1                 mov eax, ecx
// 0060ec4c  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0060ec50  5d                   pop ebp
// 0060ec51  64890d00000000       mov dword ptr fs:[0], ecx
// 0060ec58  5b                   pop ebx
// 0060ec59  83c418               add esp, 0x18
// 0060ec5c  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" __declspec(dllimport) void __cdecl _invalid_parameter_noinfo();

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Object {
    char padding[0x228];
    int value;
};

struct Shared {
    Object* object;
    Control* control;
    Shared(const Shared&);
    ~Shared();
};

__forceinline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control)
{
    Control* p = control;
    if (p)
        _InterlockedExchangeAdd(&p->strong, 1);
}

__forceinline Shared::~Shared()
{
    Control* p = control;
    if (p && _InterlockedDecrement(&p->strong) == 0) {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

struct Entry {
    Object* object;
    Control* control;
    Shared lock();
};

struct Collection {
    char padding[12];
    Entry* first;
    Entry* last;
};

struct Output {
    void append(int* const*);
};

extern bool __cdecl accepted(Shared);
extern void* __cdecl getResult(Object*);

void* __cdecl reconstruct(Collection* collection, Output* output)
{
    void* result = 0;
    for (unsigned int i = 0;
         i < static_cast<unsigned int>(collection->last - collection->first);
         ++i) {
        if (i >= static_cast<unsigned int>(collection->last - collection->first))
            _invalid_parameter_noinfo();

        Shared item = collection->first[i].lock();
        Control* control = item.control;
        Object* object = item.object;
        if (accepted(item)) {
            int* value = &object->value;
            output->append(&value);
            if (!result)
                result = getResult(object);
        }
        item.control = control;
    }
    return result;
}
