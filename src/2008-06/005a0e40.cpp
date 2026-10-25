// from server: 100% by king_originala
// roc 2008-06 005a0e40  unit: RBX::RootInstance  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a0e40
//
// 005a0e40  53                   push ebx
// 005a0e41  57                   push edi
// 005a0e42  8bf9                 mov edi, ecx
// 005a0e44  33db                 xor ebx, ebx
// 005a0e46  395f04               cmp dword ptr [edi + 4], ebx
// 005a0e49  7e44                 jle 0x5a0e8f
// 005a0e4b  56                   push esi
// 005a0e4c  8d642400             lea esp, [esp]
// 005a0e50  8b07                 mov eax, dword ptr [edi]
// 005a0e52  8b74d804             mov esi, dword ptr [eax + ebx*8 + 4]
// 005a0e56  8d44d804             lea eax, [eax + ebx*8 + 4]
// 005a0e5a  85f6                 test esi, esi
// 005a0e5c  742a                 je 0x5a0e88
// 005a0e5e  8d4e04               lea ecx, [esi + 4]
// 005a0e61  83caff               or edx, 0xffffffff
// 005a0e64  f00fc111             lock xadd dword ptr [ecx], edx
// 005a0e68  751e                 jne 0x5a0e88
// 005a0e6a  8b06                 mov eax, dword ptr [esi]
// 005a0e6c  8b5004               mov edx, dword ptr [eax + 4]
// 005a0e6f  8bce                 mov ecx, esi
// 005a0e71  ffd2                 call edx
// 005a0e73  8d4608               lea eax, [esi + 8]
// 005a0e76  83c9ff               or ecx, 0xffffffff
// 005a0e79  f00fc108             lock xadd dword ptr [eax], ecx
// 005a0e7d  7509                 jne 0x5a0e88
// 005a0e7f  8b16                 mov edx, dword ptr [esi]
// 005a0e81  8b4208               mov eax, dword ptr [edx + 8]
// 005a0e84  8bce                 mov ecx, esi
// 005a0e86  ffd0                 call eax
// 005a0e88  43                   inc ebx
// 005a0e89  3b5f04               cmp ebx, dword ptr [edi + 4]
// 005a0e8c  7cc2                 jl 0x5a0e50
// 005a0e8e  5e                   pop esi
// 005a0e8f  8b0f                 mov ecx, dword ptr [edi]
// 005a0e91  51                   push ecx
// 005a0e92  e8896ef6ff           call 0x507d20
// 005a0e97  83c404               add esp, 4
// 005a0e9a  c70700000000         mov dword ptr [edi], 0
// 005a0ea0  c7470400000000       mov dword ptr [edi + 4], 0
// 005a0ea7  c7470800000000       mov dword ptr [edi + 8], 0
// 005a0eae  5f                   pop edi
// 005a0eaf  5b                   pop ebx
// 005a0eb0  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern void __cdecl alignedFree(void*);

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
    void release();
};

__forceinline void Control::release()
{
    if (_InterlockedDecrement(&strong) == 0) {
        dispose();
        if (_InterlockedDecrement(&weak) == 0)
            destroy();
    }
}

struct Holder {
    Control* control;
    ~Holder();
};

__forceinline Holder::~Holder()
{
    if (control)
        control->release();
}

struct Entry {
    void* object;
    Holder holder;
};

struct S {
    Entry* entries;
    int count;
    int capacity;
    void clear();
};

void S::clear()
{
    for (int i = 0; i < count; ++i)
        entries[i].holder.~Holder();

    alignedFree(entries);
    entries = 0;
    count = 0;
    capacity = 0;
}
