// from server: 100% by king_originala
// roc 2008-06 00458b70  unit: CRobloxReportPaneView  size: 272 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00458b70
//
// 00458b70  6aff                 push -1
// 00458b72  6870277c00           push 0x7c2770
// 00458b77  64a100000000         mov eax, dword ptr fs:[0]
// 00458b7d  50                   push eax
// 00458b7e  64892500000000       mov dword ptr fs:[0], esp
// 00458b85  83ec08               sub esp, 8
// 00458b88  53                   push ebx
// 00458b89  55                   push ebp
// 00458b8a  56                   push esi
// 00458b8b  8bf1                 mov esi, ecx
// 00458b8d  8dae78030000         lea ebp, [esi + 0x378]
// 00458b93  8d9e9c030000         lea ebx, [esi + 0x39c]
// 00458b99  57                   push edi
// 00458b9a  89742410             mov dword ptr [esp + 0x10], esi
// 00458b9e  c7068c888100         mov dword ptr [esi], 0x81888c
// 00458ba4  c7450078888100       mov dword ptr [ebp], 0x818878
// 00458bab  c70364888100         mov dword ptr [ebx], 0x818864
// 00458bb1  83ec08               sub esp, 8
// 00458bb4  8bc4                 mov eax, esp
// 00458bb6  c70000000000         mov dword ptr [eax], 0
// 00458bbc  c744242804000000     mov dword ptr [esp + 0x28], 4
// 00458bc4  8964241c             mov dword ptr [esp + 0x1c], esp
// 00458bc8  c7400400000000       mov dword ptr [eax + 4], 0
// 00458bcf  e82cfbffff           call 0x458700
// 00458bd4  8bbed0030000         mov edi, dword ptr [esi + 0x3d0]
// 00458bda  c644242003           mov byte ptr [esp + 0x20], 3
// 00458bdf  85ff                 test edi, edi
// 00458be1  742a                 je 0x458c0d
// 00458be3  8d4704               lea eax, [edi + 4]
// 00458be6  83c9ff               or ecx, 0xffffffff
// 00458be9  f00fc108             lock xadd dword ptr [eax], ecx
// 00458bed  751e                 jne 0x458c0d
// 00458bef  8b17                 mov edx, dword ptr [edi]
// 00458bf1  8b4204               mov eax, dword ptr [edx + 4]
// 00458bf4  8bcf                 mov ecx, edi
// 00458bf6  ffd0                 call eax
// 00458bf8  8d4f08               lea ecx, [edi + 8]
// 00458bfb  83caff               or edx, 0xffffffff
// 00458bfe  f00fc111             lock xadd dword ptr [ecx], edx
// 00458c02  7509                 jne 0x458c0d
// 00458c04  8b07                 mov eax, dword ptr [edi]
// 00458c06  8b5008               mov edx, dword ptr [eax + 8]
// 00458c09  8bcf                 mov ecx, edi
// 00458c0b  ffd2                 call edx
// 00458c0d  8bbec8030000         mov edi, dword ptr [esi + 0x3c8]
// 00458c13  c644242002           mov byte ptr [esp + 0x20], 2
// 00458c18  85ff                 test edi, edi
// 00458c1a  742a                 je 0x458c46
// 00458c1c  8d4704               lea eax, [edi + 4]
// 00458c1f  83c9ff               or ecx, 0xffffffff
// 00458c22  f00fc108             lock xadd dword ptr [eax], ecx
// 00458c26  751e                 jne 0x458c46
// 00458c28  8b17                 mov edx, dword ptr [edi]
// 00458c2a  8b4204               mov eax, dword ptr [edx + 4]
// 00458c2d  8bcf                 mov ecx, edi
// 00458c2f  ffd0                 call eax
// 00458c31  8d4f08               lea ecx, [edi + 8]
// 00458c34  83caff               or edx, 0xffffffff
// 00458c37  f00fc111             lock xadd dword ptr [ecx], edx
// 00458c3b  7509                 jne 0x458c46
// 00458c3d  8b07                 mov eax, dword ptr [edi]
// 00458c3f  8b5008               mov edx, dword ptr [eax + 8]
// 00458c42  8bcf                 mov ecx, edi
// 00458c44  ffd2                 call edx
// 00458c46  8bcb                 mov ecx, ebx
// 00458c48  c644242001           mov byte ptr [esp + 0x20], 1
// 00458c4d  e89eecffff           call 0x4578f0
// 00458c52  8bcd                 mov ecx, ebp
// 00458c54  c644242000           mov byte ptr [esp + 0x20], 0
// 00458c59  e882ebffff           call 0x4577e0
// 00458c5e  8bce                 mov ecx, esi
// 00458c60  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 00458c68  e8e3c42600           call 0x6c5150
// 00458c6d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00458c71  5f                   pop edi
// 00458c72  5e                   pop esi
// 00458c73  5d                   pop ebp
// 00458c74  64890d00000000       mov dword ptr fs:[0], ecx
// 00458c7b  5b                   pop ebx
// 00458c7c  83c414               add esp, 0x14
// 00458c7f  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control
{
    virtual ~Control();
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;

    void release();
};

inline void Control::release()
{
    if (_InterlockedDecrement(&strong) == 0)
    {
        dispose();
        if (_InterlockedDecrement(&weak) == 0)
            destroy();
    }
}

struct Count
{
    Control* control;

    Count();
    Count(const Count&);
    ~Count();
};

inline Count::Count() : control(0)
{
}

inline Count::Count(const Count& other) : control(other.control)
{
    if (control)
        _InterlockedExchangeAdd(&control->strong, 1);
}

inline Count::~Count()
{
    if (control)
        control->release();
}

struct Shared
{
    void* object;
    Count count;

    Shared();
    Shared(const Shared&);
    ~Shared();
};

inline Shared::Shared() : object(0), count()
{
}

inline Shared::Shared(const Shared& other)
    : object(other.object), count(other.count)
{
}

inline Shared::~Shared()
{
}

struct Base
{
    virtual ~Base();
    unsigned char reserved[0x374];
};

struct First
{
    virtual ~First();
    unsigned char reserved[0x20];
};

struct Second
{
    virtual ~Second();
    unsigned char reserved[0x24];
};

struct S : Base, First, Second
{
    Shared first;
    Shared second;

    virtual ~S();
    void reset(Shared);
};

S::~S()
{
    reset(Shared());
}
