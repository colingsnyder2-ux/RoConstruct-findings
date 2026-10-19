// from server: 81% by colin
// from server: 76% by king_originala
// roc 2008-06 0060ee30  unit: RBX::BlockBlockContact  size: 244 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060ee30
//
// 0060ee30  64a100000000         mov eax, dword ptr fs:[0]
// 0060ee36  6aff                 push -1
// 0060ee38  6868917d00           push 0x7d9168
// 0060ee3d  50                   push eax
// 0060ee3e  64892500000000       mov dword ptr fs:[0], esp
// 0060ee45  83ec08               sub esp, 8
// 0060ee48  53                   push ebx
// 0060ee49  55                   push ebp
// 0060ee4a  56                   push esi
// 0060ee4b  57                   push edi
// 0060ee4c  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0060ee50  57                   push edi
// 0060ee51  e80afeffff           call 0x60ec60
// 0060ee56  8b4710               mov eax, dword ptr [edi + 0x10]
// 0060ee59  2b470c               sub eax, dword ptr [edi + 0xc]
// 0060ee5c  83c404               add esp, 4
// 0060ee5f  c1f803               sar eax, 3
// 0060ee62  33ed                 xor ebp, ebp
// 0060ee64  85c0                 test eax, eax
// 0060ee66  0f86a5000000         jbe 0x60ef11
// 0060ee6c  3be8                 cmp ebp, eax
// 0060ee6e  7206                 jb 0x60ee76
// 0060ee70  ff1590288000         call dword ptr [0x802890]
// 0060ee76  8b470c               mov eax, dword ptr [edi + 0xc]
// 0060ee79  8d542410             lea edx, [esp + 0x10]
// 0060ee7d  8d0ce8               lea ecx, [eax + ebp*8]
// 0060ee80  52                   push edx
// 0060ee81  e87abcfbff           call 0x5cab00
// 0060ee86  8b742414             mov esi, dword ptr [esp + 0x14]
// 0060ee8a  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0060ee8e  83ec08               sub esp, 8
// 0060ee91  8bc4                 mov eax, esp
// 0060ee93  8918                 mov dword ptr [eax], ebx
// 0060ee95  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0060ee9d  89642430             mov dword ptr [esp + 0x30], esp
// 0060eea1  897004               mov dword ptr [eax + 4], esi
// 0060eea4  85f6                 test esi, esi
// 0060eea6  740c                 je 0x60eeb4
// 0060eea8  8d4604               lea eax, [esi + 4]
// 0060eeab  b901000000           mov ecx, 1
// 0060eeb0  f00fc108             lock xadd dword ptr [eax], ecx
// 0060eeb4  e837a7f8ff           call 0x5995f0
// 0060eeb9  83c408               add esp, 8
// 0060eebc  84c0                 test al, al
// 0060eebe  7409                 je 0x60eec9
// 0060eec0  6a01                 push 1
// 0060eec2  8bcb                 mov ecx, ebx
// 0060eec4  e857eef8ff           call 0x59dd20
// 0060eec9  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 0060eed1  85f6                 test esi, esi
// 0060eed3  742a                 je 0x60eeff
// 0060eed5  8d5604               lea edx, [esi + 4]
// 0060eed8  83c8ff               or eax, 0xffffffff
// 0060eedb  f00fc102             lock xadd dword ptr [edx], eax
// 0060eedf  751e                 jne 0x60eeff
// 0060eee1  8b16                 mov edx, dword ptr [esi]
// 0060eee3  8b4204               mov eax, dword ptr [edx + 4]
// 0060eee6  8bce                 mov ecx, esi
// 0060eee8  ffd0                 call eax
// 0060eeea  8d4e08               lea ecx, [esi + 8]
// 0060eeed  83caff               or edx, 0xffffffff
// 0060eef0  f00fc111             lock xadd dword ptr [ecx], edx
// 0060eef4  7509                 jne 0x60eeff
// 0060eef6  8b06                 mov eax, dword ptr [esi]
// 0060eef8  8b5008               mov edx, dword ptr [eax + 8]
// 0060eefb  8bce                 mov ecx, esi
// 0060eefd  ffd2                 call edx
// 0060eeff  8b4710               mov eax, dword ptr [edi + 0x10]
// 0060ef02  2b470c               sub eax, dword ptr [edi + 0xc]
// 0060ef05  45                   inc ebp
// 0060ef06  c1f803               sar eax, 3
// 0060ef09  3be8                 cmp ebp, eax
// 0060ef0b  0f8265ffffff         jb 0x60ee76
// 0060ef11  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0060ef15  5f                   pop edi
// 0060ef16  5e                   pop esi
// 0060ef17  5d                   pop ebp
// 0060ef18  64890d00000000       mov dword ptr fs:[0], ecx
// 0060ef1f  5b                   pop ebx
// 0060ef20  83c414               add esp, 0x14
// 0060ef23  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" void __cdecl _invalid_parameter_noinfo();

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Object {
    void setEnabled(bool);
};

struct Shared {
    Object* const object;
    Control* const control;

    Shared(const Shared&);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control)
{
    if (control)
        _InterlockedIncrement(&control->strong);
}

inline Shared::~Shared()
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

struct Container {
    unsigned reserved[3];
    Entry* first;
    Entry* last;
};

extern void __cdecl prepare(Container*);
extern bool __cdecl predicate(Shared);

void __cdecl update(Container* container)
{
    prepare(container);
    for (unsigned i = 0; i < (unsigned)(container->last - container->first); ++i) {
        if (i >= (unsigned)(container->last - container->first))
            _invalid_parameter_noinfo();

        const Shared value = container->first[i].lock();
        if (predicate(value))
            value.object->setEnabled(true);
    }
}
