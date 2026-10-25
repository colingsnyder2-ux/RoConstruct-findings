// from server: 100% by king_originala
// roc 2008-06 004271e0  unit: CSelectionTreeCtrl  size: 229 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004271e0
//
// 004271e0  6aff                 push -1
// 004271e2  6800ef7b00           push 0x7bef00
// 004271e7  64a100000000         mov eax, dword ptr fs:[0]
// 004271ed  50                   push eax
// 004271ee  64892500000000       mov dword ptr fs:[0], esp
// 004271f5  51                   push ecx
// 004271f6  56                   push esi
// 004271f7  8b542418             mov edx, dword ptr [esp + 0x18]
// 004271fb  83ec08               sub esp, 8
// 004271fe  8bc4                 mov eax, esp
// 00427200  8910                 mov dword ptr [eax], edx
// 00427202  8b542424             mov edx, dword ptr [esp + 0x24]
// 00427206  895004               mov dword ptr [eax + 4], edx
// 00427209  8b442424             mov eax, dword ptr [esp + 0x24]
// 0042720d  c744241801000000     mov dword ptr [esp + 0x18], 1
// 00427215  8964240c             mov dword ptr [esp + 0xc], esp
// 00427219  85c0                 test eax, eax
// 0042721b  740c                 je 0x427229
// 0042721d  83c004               add eax, 4
// 00427220  ba01000000           mov edx, 1
// 00427225  f00fc110             lock xadd dword ptr [eax], edx
// 00427229  8db130ffffff         lea esi, [ecx - 0xd0]
// 0042722f  8bce                 mov ecx, esi
// 00427231  e8baf9ffff           call 0x426bf0
// 00427236  8b06                 mov eax, dword ptr [esi]
// 00427238  8b9064010000         mov edx, dword ptr [eax + 0x164]
// 0042723e  8bce                 mov ecx, esi
// 00427240  ffd2                 call edx
// 00427242  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00427246  c644241000           mov byte ptr [esp + 0x10], 0
// 0042724b  85f6                 test esi, esi
// 0042724d  742a                 je 0x427279
// 0042724f  8d4604               lea eax, [esi + 4]
// 00427252  83c9ff               or ecx, 0xffffffff
// 00427255  f00fc108             lock xadd dword ptr [eax], ecx
// 00427259  751e                 jne 0x427279
// 0042725b  8b16                 mov edx, dword ptr [esi]
// 0042725d  8b4204               mov eax, dword ptr [edx + 4]
// 00427260  8bce                 mov ecx, esi
// 00427262  ffd0                 call eax
// 00427264  8d4e08               lea ecx, [esi + 8]
// 00427267  83caff               or edx, 0xffffffff
// 0042726a  f00fc111             lock xadd dword ptr [ecx], edx
// 0042726e  7509                 jne 0x427279
// 00427270  8b06                 mov eax, dword ptr [esi]
// 00427272  8b5008               mov edx, dword ptr [eax + 8]
// 00427275  8bce                 mov ecx, esi
// 00427277  ffd2                 call edx
// 00427279  8b742424             mov esi, dword ptr [esp + 0x24]
// 0042727d  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00427285  85f6                 test esi, esi
// 00427287  742a                 je 0x4272b3
// 00427289  8d4604               lea eax, [esi + 4]
// 0042728c  83c9ff               or ecx, 0xffffffff
// 0042728f  f00fc108             lock xadd dword ptr [eax], ecx
// 00427293  751e                 jne 0x4272b3
// 00427295  8b16                 mov edx, dword ptr [esi]
// 00427297  8b4204               mov eax, dword ptr [edx + 4]
// 0042729a  8bce                 mov ecx, esi
// 0042729c  ffd0                 call eax
// 0042729e  8d4e08               lea ecx, [esi + 8]
// 004272a1  83caff               or edx, 0xffffffff
// 004272a4  f00fc111             lock xadd dword ptr [ecx], edx
// 004272a8  7509                 jne 0x4272b3
// 004272aa  8b06                 mov eax, dword ptr [esi]
// 004272ac  8b5008               mov edx, dword ptr [eax + 8]
// 004272af  8bce                 mov ecx, esi
// 004272b1  ffd2                 call edx
// 004272b3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004272b7  64890d00000000       mov dword ptr fs:[0], ecx
// 004272be  5e                   pop esi
// 004272bf  83c410               add esp, 0x10
// 004272c2  c21000               ret 0x10

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control
{
    virtual void unused();
    virtual void dispose();
    virtual void destroy();

    volatile long strong;
    volatile long weak;

    void add_ref();
    void release();
};

inline void Control::add_ref()
{
    _InterlockedIncrement(&strong);
}

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

    Shared(const Shared& other);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control)
{
    if (control)
        control->add_ref();
}

inline Shared::~Shared()
{
    if (control)
        control->release();
}

struct Owner;
typedef void (__thiscall *VirtualFunction)(Owner*);

struct Owner
{
    VirtualFunction* vtable;
    void apply(Shared value);
};

struct CSelectionTreeCtrl
{
    void func_004271e0(Shared first, Shared second);
};

void CSelectionTreeCtrl::func_004271e0(Shared first, Shared second)
{
    reinterpret_cast<Owner*>(
        reinterpret_cast<char*>(this) - 0xd0)->apply(first);

    Owner* owner = reinterpret_cast<Owner*>(
        reinterpret_cast<char*>(this) - 0xd0);
    owner->vtable[89](owner);
}
