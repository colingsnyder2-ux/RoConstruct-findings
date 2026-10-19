// from server: 78% by colin
// from server: 77% by colin
// roc 2008-06 0060ed40  unit: RBX::BlockBlockContact  size: 233 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060ed40
//
// 0060ed40  64a100000000         mov eax, dword ptr fs:[0]
// 0060ed46  6aff                 push -1
// 0060ed48  6868917d00           push 0x7d9168
// 0060ed4d  50                   push eax
// 0060ed4e  64892500000000       mov dword ptr fs:[0], esp
// 0060ed55  83ec08               sub esp, 8
// 0060ed58  53                   push ebx
// 0060ed59  55                   push ebp
// 0060ed5a  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0060ed5e  8b4510               mov eax, dword ptr [ebp + 0x10]
// 0060ed61  2b450c               sub eax, dword ptr [ebp + 0xc]
// 0060ed64  56                   push esi
// 0060ed65  57                   push edi
// 0060ed66  c1f803               sar eax, 3
// 0060ed69  33ff                 xor edi, edi
// 0060ed6b  85c0                 test eax, eax
// 0060ed6d  0f86a3000000         jbe 0x60ee16
// 0060ed73  3bf8                 cmp edi, eax
// 0060ed75  7206                 jb 0x60ed7d
// 0060ed77  ff1590288000         call dword ptr [0x802890]
// 0060ed7d  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0060ed80  8d542410             lea edx, [esp + 0x10]
// 0060ed84  8d0cf8               lea ecx, [eax + edi*8]
// 0060ed87  52                   push edx
// 0060ed88  e873bdfbff           call 0x5cab00
// 0060ed8d  8b742414             mov esi, dword ptr [esp + 0x14]
// 0060ed91  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0060ed95  83ec08               sub esp, 8
// 0060ed98  8bc4                 mov eax, esp
// 0060ed9a  8918                 mov dword ptr [eax], ebx
// 0060ed9c  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0060eda4  89642430             mov dword ptr [esp + 0x30], esp
// 0060eda8  897004               mov dword ptr [eax + 4], esi
// 0060edab  85f6                 test esi, esi
// 0060edad  740c                 je 0x60edbb
// 0060edaf  8d4604               lea eax, [esi + 4]
// 0060edb2  b901000000           mov ecx, 1
// 0060edb7  f00fc108             lock xadd dword ptr [eax], ecx
// 0060edbb  e830a8f8ff           call 0x5995f0
// 0060edc0  83c408               add esp, 8
// 0060edc3  84c0                 test al, al
// 0060edc5  7407                 je 0x60edce
// 0060edc7  8bcb                 mov ecx, ebx
// 0060edc9  e8c29ef8ff           call 0x598c90
// 0060edce  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 0060edd6  85f6                 test esi, esi
// 0060edd8  742a                 je 0x60ee04
// 0060edda  8d5604               lea edx, [esi + 4]
// 0060eddd  83c8ff               or eax, 0xffffffff
// 0060ede0  f00fc102             lock xadd dword ptr [edx], eax
// 0060ede4  751e                 jne 0x60ee04
// 0060ede6  8b16                 mov edx, dword ptr [esi]
// 0060ede8  8b4204               mov eax, dword ptr [edx + 4]
// 0060edeb  8bce                 mov ecx, esi
// 0060eded  ffd0                 call eax
// 0060edef  8d4e08               lea ecx, [esi + 8]
// 0060edf2  83caff               or edx, 0xffffffff
// 0060edf5  f00fc111             lock xadd dword ptr [ecx], edx
// 0060edf9  7509                 jne 0x60ee04
// 0060edfb  8b06                 mov eax, dword ptr [esi]
// 0060edfd  8b5008               mov edx, dword ptr [eax + 8]
// 0060ee00  8bce                 mov ecx, esi
// 0060ee02  ffd2                 call edx
// 0060ee04  8b4510               mov eax, dword ptr [ebp + 0x10]
// 0060ee07  2b450c               sub eax, dword ptr [ebp + 0xc]
// 0060ee0a  47                   inc edi
// 0060ee0b  c1f803               sar eax, 3
// 0060ee0e  3bf8                 cmp edi, eax
// 0060ee10  0f8267ffffff         jb 0x60ed7d
// 0060ee16  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0060ee1a  5f                   pop edi
// 0060ee1b  5e                   pop esi
// 0060ee1c  5d                   pop ebp
// 0060ee1d  64890d00000000       mov dword ptr fs:[0], ecx
// 0060ee24  5b                   pop ebx
// 0060ee25  83c414               add esp, 0x14
// 0060ee28  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" void __cdecl _invalid_parameter_noinfo();

struct Object {
    void func_00598c70();
};

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;

    void addRef();
    void release();
};

inline void Control::addRef()
{
    _InterlockedIncrement(&strong);
}

inline void Control::release()
{
    if (_InterlockedDecrement(&strong) == 0) {
        dispose();
        if (_InterlockedDecrement(&weak) == 0)
            destroy();
    }
}

struct Count {
    Control* control;

    Count(const Count&);
    ~Count();
};

inline Count::Count(const Count& other)
    : control(other.control)
{
    if (control)
        control->addRef();
}

inline Count::~Count()
{
    if (control)
        control->release();
}

struct Shared {
    Object* object;
    Count count;

    Shared(const Shared&);
};

inline Shared::Shared(const Shared& other)
    : object(other.object), count(other.count)
{
}

struct Entry {
    Object* object;
    Control* control;
    Shared get();
};

struct Container {
    char padding[12];
    Entry* first;
    Entry* last;
};

bool __cdecl testObject(Shared value);

void __cdecl process(Container* container)
{
    unsigned int count = static_cast<unsigned int>(container->last - container->first);
    for (unsigned int i = 0; i < count; ++i) {
        if (i >= count)
            _invalid_parameter_noinfo();

        Shared value = container->first[i].get();
        Object* object = value.object;
        if (testObject(value))
            object->func_00598c70();
    }
}
