// from server: 100% by king_originala
// roc 2008-06 0048d0f0  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 271 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048d0f0
//
// 0048d0f0  6aff                 push -1
// 0048d0f2  6851627c00           push 0x7c6251
// 0048d0f7  64a100000000         mov eax, dword ptr fs:[0]
// 0048d0fd  50                   push eax
// 0048d0fe  64892500000000       mov dword ptr fs:[0], esp
// 0048d105  83ec08               sub esp, 8
// 0048d108  56                   push esi
// 0048d109  57                   push edi
// 0048d10a  c744240800000000     mov dword ptr [esp + 8], 0
// 0048d112  8b442430             mov eax, dword ptr [esp + 0x30]
// 0048d116  8b742428             mov esi, dword ptr [esp + 0x28]
// 0048d11a  c744241801000000     mov dword ptr [esp + 0x18], 1
// 0048d122  8bf8                 mov edi, eax
// 0048d124  3bf0                 cmp esi, eax
// 0048d126  745b                 je 0x48d183
// 0048d128  8b06                 mov eax, dword ptr [esi]
// 0048d12a  83ec08               sub esp, 8
// 0048d12d  8bcc                 mov ecx, esp
// 0048d12f  8901                 mov dword ptr [ecx], eax
// 0048d131  8b4604               mov eax, dword ptr [esi + 4]
// 0048d134  89642414             mov dword ptr [esp + 0x14], esp
// 0048d138  894104               mov dword ptr [ecx + 4], eax
// 0048d13b  85c0                 test eax, eax
// 0048d13d  740c                 je 0x48d14b
// 0048d13f  83c004               add eax, 4
// 0048d142  b901000000           mov ecx, 1
// 0048d147  f00fc108             lock xadd dword ptr [eax], ecx
// 0048d14b  8b542440             mov edx, dword ptr [esp + 0x40]
// 0048d14f  83ec08               sub esp, 8
// 0048d152  8bc4                 mov eax, esp
// 0048d154  8910                 mov dword ptr [eax], edx
// 0048d156  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0048d15a  894804               mov dword ptr [eax + 4], ecx
// 0048d15d  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0048d161  8964241c             mov dword ptr [esp + 0x1c], esp
// 0048d165  85c0                 test eax, eax
// 0048d167  740c                 je 0x48d175
// 0048d169  83c004               add eax, 4
// 0048d16c  ba01000000           mov edx, 1
// 0048d171  f00fc110             lock xadd dword ptr [eax], edx
// 0048d175  ff542444             call dword ptr [esp + 0x44]
// 0048d179  83c608               add esi, 8
// 0048d17c  83c410               add esp, 0x10
// 0048d17f  3bf7                 cmp esi, edi
// 0048d181  75a5                 jne 0x48d128
// 0048d183  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0048d187  8b442434             mov eax, dword ptr [esp + 0x34]
// 0048d18b  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0048d18f  8907                 mov dword ptr [edi], eax
// 0048d191  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0048d195  894f04               mov dword ptr [edi + 4], ecx
// 0048d198  894708               mov dword ptr [edi + 8], eax
// 0048d19b  85c0                 test eax, eax
// 0048d19d  7410                 je 0x48d1af
// 0048d19f  83c004               add eax, 4
// 0048d1a2  ba01000000           mov edx, 1
// 0048d1a7  f00fc110             lock xadd dword ptr [eax], edx
// 0048d1ab  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0048d1af  c744240801000000     mov dword ptr [esp + 8], 1
// 0048d1b7  c644241800           mov byte ptr [esp + 0x18], 0
// 0048d1bc  85c0                 test eax, eax
// 0048d1be  742c                 je 0x48d1ec
// 0048d1c0  8bf0                 mov esi, eax
// 0048d1c2  83c004               add eax, 4
// 0048d1c5  83c9ff               or ecx, 0xffffffff
// 0048d1c8  f00fc108             lock xadd dword ptr [eax], ecx
// 0048d1cc  751e                 jne 0x48d1ec
// 0048d1ce  8b16                 mov edx, dword ptr [esi]
// 0048d1d0  8b4204               mov eax, dword ptr [edx + 4]
// 0048d1d3  8bce                 mov ecx, esi
// 0048d1d5  ffd0                 call eax
// 0048d1d7  8d4e08               lea ecx, [esi + 8]
// 0048d1da  83caff               or edx, 0xffffffff
// 0048d1dd  f00fc111             lock xadd dword ptr [ecx], edx
// 0048d1e1  7509                 jne 0x48d1ec
// 0048d1e3  8b06                 mov eax, dword ptr [esi]
// 0048d1e5  8b5008               mov edx, dword ptr [eax + 8]
// 0048d1e8  8bce                 mov ecx, esi
// 0048d1ea  ffd2                 call edx
// 0048d1ec  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0048d1f0  8bc7                 mov eax, edi
// 0048d1f2  5f                   pop edi
// 0048d1f3  64890d00000000       mov dword ptr fs:[0], ecx
// 0048d1fa  5e                   pop esi
// 0048d1fb  83c414               add esp, 0x14
// 0048d1fe  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

__forceinline void add_reference(volatile long* count)
{
    _InterlockedExchangeAdd(count, 1);
}

struct Control
{
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Shared
{
    void* object;
    Control* control;

    Shared(const Shared&);
    ~Shared();
};

__forceinline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control)
{
    if (control)
        add_reference(&control->strong);
}

__forceinline Shared::~Shared()
{
    if (control)
    {
        Control* p = control;
        if (_InterlockedDecrement(&p->strong) == 0)
        {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

struct Iterator
{
    void* owner;
    Shared* position;
};

struct Function
{
    void (__cdecl *invoke)(Shared, Shared);
    Shared context;
};

Function __cdecl for_each(Iterator first, Iterator last, Function function)
{
    Shared* current = first.position;
    Shared* end = last.position;
    for (; current != end; ++current)
        function.invoke(function.context, *current);
    return function;
}
