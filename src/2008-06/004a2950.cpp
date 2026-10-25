// from server: 100% by king_originala
// roc 2008-06 004a2950  unit: RBX::Network::VServer::?$FactoryProduct  size: 367 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004a2950
//
// 004a2950  6aff                 push -1
// 004a2952  68fb7b7c00           push 0x7c7bfb
// 004a2957  64a100000000         mov eax, dword ptr fs:[0]
// 004a295d  50                   push eax
// 004a295e  64892500000000       mov dword ptr fs:[0], esp
// 004a2965  83ec18               sub esp, 0x18
// 004a2968  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004a296c  53                   push ebx
// 004a296d  55                   push ebp
// 004a296e  56                   push esi
// 004a296f  33f6                 xor esi, esi
// 004a2971  8974240c             mov dword ptr [esp + 0xc], esi
// 004a2975  3bce                 cmp ecx, esi
// 004a2977  7439                 je 0x4a29b2
// 004a2979  8d44241c             lea eax, [esp + 0x1c]
// 004a297d  50                   push eax
// 004a297e  e80d86f8ff           call 0x42af90
// 004a2983  50                   push eax
// 004a2984  8d4c2418             lea ecx, [esp + 0x18]
// 004a2988  51                   push ecx
// 004a2989  c744243401000000     mov dword ptr [esp + 0x34], 1
// 004a2991  c744241401000000     mov dword ptr [esp + 0x14], 1
// 004a2999  e8b2f7ffff           call 0x4a2150
// 004a299e  83c408               add esp, 8
// 004a29a1  8d5e03               lea ebx, [esi + 3]
// 004a29a4  8b742410             mov esi, dword ptr [esp + 0x10]
// 004a29a8  c744242c02000000     mov dword ptr [esp + 0x2c], 2
// 004a29b0  eb11                 jmp 0x4a29c3
// 004a29b2  8974240c             mov dword ptr [esp + 0xc], esi
// 004a29b6  89742410             mov dword ptr [esp + 0x10], esi
// 004a29ba  8d44240c             lea eax, [esp + 0xc]
// 004a29be  bb04000000           mov ebx, 4
// 004a29c3  8b10                 mov edx, dword ptr [eax]
// 004a29c5  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 004a29c9  895500               mov dword ptr [ebp], edx
// 004a29cc  8b4004               mov eax, dword ptr [eax + 4]
// 004a29cf  894504               mov dword ptr [ebp + 4], eax
// 004a29d2  85c0                 test eax, eax
// 004a29d4  740c                 je 0x4a29e2
// 004a29d6  83c004               add eax, 4
// 004a29d9  b901000000           mov ecx, 1
// 004a29de  f00fc108             lock xadd dword ptr [eax], ecx
// 004a29e2  83cb08               or ebx, 8
// 004a29e5  f6c304               test bl, 4
// 004a29e8  7435                 je 0x4a2a1f
// 004a29ea  83e3fb               and ebx, 0xfffffffb
// 004a29ed  895c240c             mov dword ptr [esp + 0xc], ebx
// 004a29f1  85f6                 test esi, esi
// 004a29f3  742a                 je 0x4a2a1f
// 004a29f5  8d5604               lea edx, [esi + 4]
// 004a29f8  83c8ff               or eax, 0xffffffff
// 004a29fb  f00fc102             lock xadd dword ptr [edx], eax
// 004a29ff  751e                 jne 0x4a2a1f
// 004a2a01  8b16                 mov edx, dword ptr [esi]
// 004a2a03  8b4204               mov eax, dword ptr [edx + 4]
// 004a2a06  8bce                 mov ecx, esi
// 004a2a08  ffd0                 call eax
// 004a2a0a  8d4e08               lea ecx, [esi + 8]
// 004a2a0d  83caff               or edx, 0xffffffff
// 004a2a10  f00fc111             lock xadd dword ptr [ecx], edx
// 004a2a14  7509                 jne 0x4a2a1f
// 004a2a16  8b06                 mov eax, dword ptr [esi]
// 004a2a18  8b5008               mov edx, dword ptr [eax + 8]
// 004a2a1b  8bce                 mov ecx, esi
// 004a2a1d  ffd2                 call edx
// 004a2a1f  c744242c01000000     mov dword ptr [esp + 0x2c], 1
// 004a2a27  f6c302               test bl, 2
// 004a2a2a  7439                 je 0x4a2a65
// 004a2a2c  8b742418             mov esi, dword ptr [esp + 0x18]
// 004a2a30  83e3fd               and ebx, 0xfffffffd
// 004a2a33  895c240c             mov dword ptr [esp + 0xc], ebx
// 004a2a37  85f6                 test esi, esi
// 004a2a39  742a                 je 0x4a2a65
// 004a2a3b  8d4604               lea eax, [esi + 4]
// 004a2a3e  83c9ff               or ecx, 0xffffffff
// 004a2a41  f00fc108             lock xadd dword ptr [eax], ecx
// 004a2a45  751e                 jne 0x4a2a65
// 004a2a47  8b16                 mov edx, dword ptr [esi]
// 004a2a49  8b4204               mov eax, dword ptr [edx + 4]
// 004a2a4c  8bce                 mov ecx, esi
// 004a2a4e  ffd0                 call eax
// 004a2a50  8d4e08               lea ecx, [esi + 8]
// 004a2a53  83caff               or edx, 0xffffffff
// 004a2a56  f00fc111             lock xadd dword ptr [ecx], edx
// 004a2a5a  7509                 jne 0x4a2a65
// 004a2a5c  8b06                 mov eax, dword ptr [esi]
// 004a2a5e  8b5008               mov edx, dword ptr [eax + 8]
// 004a2a61  8bce                 mov ecx, esi
// 004a2a63  ffd2                 call edx
// 004a2a65  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 004a2a6d  f6c301               test bl, 1
// 004a2a70  7439                 je 0x4a2aab
// 004a2a72  8b742420             mov esi, dword ptr [esp + 0x20]
// 004a2a76  83e3fe               and ebx, 0xfffffffe
// 004a2a79  895c240c             mov dword ptr [esp + 0xc], ebx
// 004a2a7d  85f6                 test esi, esi
// 004a2a7f  742a                 je 0x4a2aab
// 004a2a81  8d4604               lea eax, [esi + 4]
// 004a2a84  83c9ff               or ecx, 0xffffffff
// 004a2a87  f00fc108             lock xadd dword ptr [eax], ecx
// 004a2a8b  751e                 jne 0x4a2aab
// 004a2a8d  8b16                 mov edx, dword ptr [esi]
// 004a2a8f  8b4204               mov eax, dword ptr [edx + 4]
// 004a2a92  8bce                 mov ecx, esi
// 004a2a94  ffd0                 call eax
// 004a2a96  8d4e08               lea ecx, [esi + 8]
// 004a2a99  83caff               or edx, 0xffffffff
// 004a2a9c  f00fc111             lock xadd dword ptr [ecx], edx
// 004a2aa0  7509                 jne 0x4a2aab
// 004a2aa2  8b06                 mov eax, dword ptr [esi]
// 004a2aa4  8b5008               mov edx, dword ptr [eax + 8]
// 004a2aa7  8bce                 mov ecx, esi
// 004a2aa9  ffd2                 call edx
// 004a2aab  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004a2aaf  5e                   pop esi
// 004a2ab0  8bc5                 mov eax, ebp
// 004a2ab2  5d                   pop ebp
// 004a2ab3  5b                   pop ebx
// 004a2ab4  64890d00000000       mov dword ptr fs:[0], ecx
// 004a2abb  83c424               add esp, 0x24
// 004a2abe  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
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
};

template<class T> struct Shared {
    T* pointer;
    Control* control;

    Shared();
    Shared(const Shared&);
    ~Shared();
};

template<class T>
inline Shared<T>::Shared() : pointer(0), control(0) {}

template<class T>
inline Shared<T>::Shared(const Shared& other)
    : pointer(other.pointer), control(other.control) {
    Control* p = control;
    if (p)
        _InterlockedIncrement(&p->strong);
}

template<class T>
inline Shared<T>::~Shared() {
    Control* p = control;
    if (p && _InterlockedDecrement(&p->strong) == 0) {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

struct Source {
    Shared<Source> get();
};

Shared<void> __cdecl convert(const Shared<Source>&);

Shared<void> __cdecl reconstruct(Source* source) {
    return source ? convert(source->get()) : Shared<void>();
}
