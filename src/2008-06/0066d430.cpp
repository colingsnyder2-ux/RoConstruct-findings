// from server: 89% by colin
// from server: 86% by colin
// roc 2008-06 0066d430  unit: RBX::GroupDragTool  size: 190 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066d430
//
// 0066d430  6aff                 push -1
// 0066d432  6868917d00           push 0x7d9168
// 0066d437  64a100000000         mov eax, dword ptr fs:[0]
// 0066d43d  50                   push eax
// 0066d43e  64892500000000       mov dword ptr fs:[0], esp
// 0066d445  83ec0c               sub esp, 0xc
// 0066d448  55                   push ebp
// 0066d449  56                   push esi
// 0066d44a  57                   push edi
// 0066d44b  8bf9                 mov edi, ecx
// 0066d44d  8d442410             lea eax, [esp + 0x10]
// 0066d451  50                   push eax
// 0066d452  8d4f08               lea ecx, [edi + 8]
// 0066d455  e8a6d6f5ff           call 0x5cab00
// 0066d45a  8b742414             mov esi, dword ptr [esp + 0x14]
// 0066d45e  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0066d462  83ec08               sub esp, 8
// 0066d465  8bc4                 mov eax, esp
// 0066d467  8928                 mov dword ptr [eax], ebp
// 0066d469  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0066d471  89642414             mov dword ptr [esp + 0x14], esp
// 0066d475  897004               mov dword ptr [eax + 4], esi
// 0066d478  85f6                 test esi, esi
// 0066d47a  740c                 je 0x66d488
// 0066d47c  8d4e04               lea ecx, [esi + 4]
// 0066d47f  ba01000000           mov edx, 1
// 0066d484  f00fc111             lock xadd dword ptr [ecx], edx
// 0066d488  e863c1f2ff           call 0x5995f0
// 0066d48d  83c408               add esp, 8
// 0066d490  84c0                 test al, al
// 0066d492  740b                 je 0x66d49f
// 0066d494  81c528020000         add ebp, 0x228
// 0066d49a  896f24               mov dword ptr [edi + 0x24], ebp
// 0066d49d  eb07                 jmp 0x66d4a6
// 0066d49f  c7472400000000       mov dword ptr [edi + 0x24], 0
// 0066d4a6  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 0066d4ae  85f6                 test esi, esi
// 0066d4b0  742a                 je 0x66d4dc
// 0066d4b2  8d4604               lea eax, [esi + 4]
// 0066d4b5  83c9ff               or ecx, 0xffffffff
// 0066d4b8  f00fc108             lock xadd dword ptr [eax], ecx
// 0066d4bc  751e                 jne 0x66d4dc
// 0066d4be  8b16                 mov edx, dword ptr [esi]
// 0066d4c0  8b4204               mov eax, dword ptr [edx + 4]
// 0066d4c3  8bce                 mov ecx, esi
// 0066d4c5  ffd0                 call eax
// 0066d4c7  8d4e08               lea ecx, [esi + 8]
// 0066d4ca  83caff               or edx, 0xffffffff
// 0066d4cd  f00fc111             lock xadd dword ptr [ecx], edx
// 0066d4d1  7509                 jne 0x66d4dc
// 0066d4d3  8b06                 mov eax, dword ptr [esi]
// 0066d4d5  8b5008               mov edx, dword ptr [eax + 8]
// 0066d4d8  8bce                 mov ecx, esi
// 0066d4da  ffd2                 call edx
// 0066d4dc  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0066d4e0  5f                   pop edi
// 0066d4e1  5e                   pop esi
// 0066d4e2  64890d00000000       mov dword ptr fs:[0], ecx
// 0066d4e9  5d                   pop ebp
// 0066d4ea  83c418               add esp, 0x18
// 0066d4ed  c3                   ret 

// from server: 85% by king_originala
// roc 2008-06 0066d430  unit: RBX::GroupDragTool  size: 190 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066d430
//
// 0066d430  6aff                 push -1
// 0066d432  6868917d00           push 0x7d9168
// 0066d437  64a100000000         mov eax, dword ptr fs:[0]
// 0066d43d  50                   push eax
// 0066d43e  64892500000000       mov dword ptr fs:[0], esp
// 0066d445  83ec0c               sub esp, 0xc
// 0066d448  55                   push ebp
// 0066d449  56                   push esi
// 0066d44a  57                   push edi
// 0066d44b  8bf9                 mov edi, ecx
// 0066d44d  8d442410             lea eax, [esp + 0x10]
// 0066d451  50                   push eax
// 0066d452  8d4f08               lea ecx, [edi + 8]
// 0066d455  e8a6d6f5ff           call 0x5cab00
// 0066d45a  8b742414             mov esi, dword ptr [esp + 0x14]
// 0066d45e  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0066d462  83ec08               sub esp, 8
// 0066d465  8bc4                 mov eax, esp
// 0066d467  8928                 mov dword ptr [eax], ebp
// 0066d469  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0066d471  89642414             mov dword ptr [esp + 0x14], esp
// 0066d475  897004               mov dword ptr [eax + 4], esi
// 0066d478  85f6                 test esi, esi
// 0066d47a  740c                 je 0x66d488
// 0066d47c  8d4e04               lea ecx, [esi + 4]
// 0066d47f  ba01000000           mov edx, 1
// 0066d484  f00fc111             lock xadd dword ptr [ecx], edx
// 0066d488  e863c1f2ff           call 0x5995f0
// 0066d48d  83c408               add esp, 8
// 0066d490  84c0                 test al, al
// 0066d492  740b                 je 0x66d49f
// 0066d494  81c528020000         add ebp, 0x228
// 0066d49a  896f24               mov dword ptr [edi + 0x24], ebp
// 0066d49d  eb07                 jmp 0x66d4a6
// 0066d49f  c7472400000000       mov dword ptr [edi + 0x24], 0
// 0066d4a6  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 0066d4ae  85f6                 test esi, esi
// 0066d4b0  742a                 je 0x66d4dc
// 0066d4b2  8d4604               lea eax, [esi + 4]
// 0066d4b5  83c9ff               or ecx, 0xffffffff
// 0066d4b8  f00fc108             lock xadd dword ptr [eax], ecx
// 0066d4bc  751e                 jne 0x66d4dc
// 0066d4be  8b16                 mov edx, dword ptr [esi]
// 0066d4c0  8b4204               mov eax, dword ptr [edx + 4]
// 0066d4c3  8bce                 mov ecx, esi
// 0066d4c5  ffd0                 call eax
// 0066d4c7  8d4e08               lea ecx, [esi + 8]
// 0066d4ca  83caff               or edx, 0xffffffff
// 0066d4cd  f00fc111             lock xadd dword ptr [ecx], edx
// 0066d4d1  7509                 jne 0x66d4dc
// 0066d4d3  8b06                 mov eax, dword ptr [esi]
// 0066d4d5  8b5008               mov edx, dword ptr [eax + 8]
// 0066d4d8  8bce                 mov ecx, esi
// 0066d4da  ffd2                 call edx
// 0066d4dc  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0066d4e0  5f                   pop edi
// 0066d4e1  5e                   pop esi
// 0066d4e2  64890d00000000       mov dword ptr fs:[0], ecx
// 0066d4e9  5d                   pop ebp
// 0066d4ea  83c418               add esp, 0x18
// 0066d4ed  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;

    void release();
};

inline void Control::release()
{
    if (_InterlockedDecrement(&strong) == 0) {
        dispose();
        if (_InterlockedDecrement(&weak) == 0)
            destroy();
    }
}

struct Shared {
    char* object;
    Control* control;

    Shared(const Shared&);
    ~Shared();
};

__declspec(noinline) Shared::Shared(const Shared& other)
    : object(other.object), control(other.control)
{
    Control* p = other.control;
    if (p)
        _InterlockedIncrement(&p->strong);
}

inline Shared::~Shared()
{
    Control* p = control;
    if (p)
        p->release();
}

struct Source {
    char data[8];
    Shared get();
};

bool __cdecl check(Shared);

struct S {
    char padding0[8];
    Source source;
    char padding1[20];
    char* result;

    void update();
};

void S::update()
{
    Shared value = source.get();
    Control* control = value.control;
    char* object = value.object;
    if (check(value))
        result = object + 0x228;
    else
        result = 0;
    value.control = control;
}
