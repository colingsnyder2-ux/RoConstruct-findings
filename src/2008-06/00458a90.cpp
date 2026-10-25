// from server: 100% by king_originala
// roc 2008-06 00458a90  unit: CRobloxReportPaneView  size: 215 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00458a90
//
// 00458a90  6aff                 push -1
// 00458a92  6800ef7b00           push 0x7bef00
// 00458a97  64a100000000         mov eax, dword ptr fs:[0]
// 00458a9d  50                   push eax
// 00458a9e  64892500000000       mov dword ptr fs:[0], esp
// 00458aa5  51                   push ecx
// 00458aa6  56                   push esi
// 00458aa7  8b542418             mov edx, dword ptr [esp + 0x18]
// 00458aab  83ec08               sub esp, 8
// 00458aae  8bc4                 mov eax, esp
// 00458ab0  8910                 mov dword ptr [eax], edx
// 00458ab2  8b542424             mov edx, dword ptr [esp + 0x24]
// 00458ab6  895004               mov dword ptr [eax + 4], edx
// 00458ab9  8b442424             mov eax, dword ptr [esp + 0x24]
// 00458abd  c744241801000000     mov dword ptr [esp + 0x18], 1
// 00458ac5  8964240c             mov dword ptr [esp + 0xc], esp
// 00458ac9  85c0                 test eax, eax
// 00458acb  740c                 je 0x458ad9
// 00458acd  83c004               add eax, 4
// 00458ad0  ba01000000           mov edx, 1
// 00458ad5  f00fc110             lock xadd dword ptr [eax], edx
// 00458ad9  81c12cfcffff         add ecx, 0xfffffc2c
// 00458adf  e81cfcffff           call 0x458700
// 00458ae4  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00458ae8  c644241000           mov byte ptr [esp + 0x10], 0
// 00458aed  85f6                 test esi, esi
// 00458aef  742a                 je 0x458b1b
// 00458af1  8d4604               lea eax, [esi + 4]
// 00458af4  83c9ff               or ecx, 0xffffffff
// 00458af7  f00fc108             lock xadd dword ptr [eax], ecx
// 00458afb  751e                 jne 0x458b1b
// 00458afd  8b16                 mov edx, dword ptr [esi]
// 00458aff  8b4204               mov eax, dword ptr [edx + 4]
// 00458b02  8bce                 mov ecx, esi
// 00458b04  ffd0                 call eax
// 00458b06  8d4e08               lea ecx, [esi + 8]
// 00458b09  83caff               or edx, 0xffffffff
// 00458b0c  f00fc111             lock xadd dword ptr [ecx], edx
// 00458b10  7509                 jne 0x458b1b
// 00458b12  8b06                 mov eax, dword ptr [esi]
// 00458b14  8b5008               mov edx, dword ptr [eax + 8]
// 00458b17  8bce                 mov ecx, esi
// 00458b19  ffd2                 call edx
// 00458b1b  8b742424             mov esi, dword ptr [esp + 0x24]
// 00458b1f  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00458b27  85f6                 test esi, esi
// 00458b29  742a                 je 0x458b55
// 00458b2b  8d4604               lea eax, [esi + 4]
// 00458b2e  83c9ff               or ecx, 0xffffffff
// 00458b31  f00fc108             lock xadd dword ptr [eax], ecx
// 00458b35  751e                 jne 0x458b55
// 00458b37  8b16                 mov edx, dword ptr [esi]
// 00458b39  8b4204               mov eax, dword ptr [edx + 4]
// 00458b3c  8bce                 mov ecx, esi
// 00458b3e  ffd0                 call eax
// 00458b40  8d4e08               lea ecx, [esi + 8]
// 00458b43  83caff               or edx, 0xffffffff
// 00458b46  f00fc111             lock xadd dword ptr [ecx], edx
// 00458b4a  7509                 jne 0x458b55
// 00458b4c  8b06                 mov eax, dword ptr [esi]
// 00458b4e  8b5008               mov edx, dword ptr [eax + 8]
// 00458b51  8bce                 mov ecx, esi
// 00458b53  ffd2                 call edx
// 00458b55  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00458b59  64890d00000000       mov dword ptr fs:[0], ecx
// 00458b60  5e                   pop esi
// 00458b61  83c410               add esp, 0x10
// 00458b64  c21000               ret 0x10

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

struct Shared
{
    void* object;
    Control* control;

    Shared(const Shared&);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control)
{
    if (control)
    {
        volatile long* count = &control->strong;
        _InterlockedExchangeAdd(count, 1);
    }
}

inline Shared::~Shared()
{
    if (control)
        control->release();
}

struct Base
{
    void forward(Shared);
};

struct S
{
    void f(Shared, Shared);
};

void S::f(Shared first, Shared second)
{
    reinterpret_cast<Base*>(reinterpret_cast<char*>(this) - 980)->forward(first);
}
