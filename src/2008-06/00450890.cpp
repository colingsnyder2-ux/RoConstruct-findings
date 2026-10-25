// from server: 100% by king_originala
// roc 2008-06 00450890  unit: CRobloxDoc  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00450890
//
// 00450890  83ec08               sub esp, 8
// 00450893  56                   push esi
// 00450894  57                   push edi
// 00450895  8d442408             lea eax, [esp + 8]
// 00450899  50                   push eax
// 0045089a  e8a127fbff           call 0x403040
// 0045089f  8b08                 mov ecx, dword ptr [eax]
// 004508a1  8b8104020000         mov eax, dword ptr [ecx + 0x204]
// 004508a7  85c0                 test eax, eax
// 004508a9  7408                 je 0x4508b3
// 004508ab  8db8ec020000         lea edi, [eax + 0x2ec]
// 004508b1  eb02                 jmp 0x4508b5
// 004508b3  33ff                 xor edi, edi
// 004508b5  8b74240c             mov esi, dword ptr [esp + 0xc]
// 004508b9  85f6                 test esi, esi
// 004508bb  742a                 je 0x4508e7
// 004508bd  8d5604               lea edx, [esi + 4]
// 004508c0  83c8ff               or eax, 0xffffffff
// 004508c3  f00fc102             lock xadd dword ptr [edx], eax
// 004508c7  751e                 jne 0x4508e7
// 004508c9  8b16                 mov edx, dword ptr [esi]
// 004508cb  8b4204               mov eax, dword ptr [edx + 4]
// 004508ce  8bce                 mov ecx, esi
// 004508d0  ffd0                 call eax
// 004508d2  8d4e08               lea ecx, [esi + 8]
// 004508d5  83caff               or edx, 0xffffffff
// 004508d8  f00fc111             lock xadd dword ptr [ecx], edx
// 004508dc  7509                 jne 0x4508e7
// 004508de  8b06                 mov eax, dword ptr [esi]
// 004508e0  8b5008               mov edx, dword ptr [eax + 8]
// 004508e3  8bce                 mov ecx, esi
// 004508e5  ffd2                 call edx
// 004508e7  8bc7                 mov eax, edi
// 004508e9  5f                   pop edi
// 004508ea  5e                   pop esi
// 004508eb  83c408               add esp, 8
// 004508ee  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control
{
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Object
{
    char padding[0x2ec];
    char value;
};

struct Owner
{
    char padding[0x204];
    Object* object;
};

struct Pair
{
    Owner* pointer;
    Control* control;
};

struct S
{
    Pair* get(Pair*);
    void* func_00450890();
};

void* S::func_00450890()
{
    Pair p;
    Object* object = get(&p)->pointer->object;
    void* result = object ? &object->value : 0;
    Control* control = p.control;

    if (control && _InterlockedDecrement(&control->strong) == 0)
    {
        control->dispose();
        if (_InterlockedDecrement(&control->weak) == 0)
            control->destroy();
    }

    return result;
}
