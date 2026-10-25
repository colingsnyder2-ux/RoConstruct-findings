// from server: 100% by king_originala
// roc 2008-06 004967c0  unit: RBX::Network::Players::Plugin  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004967c0
//
// 004967c0  64a100000000         mov eax, dword ptr fs:[0]
// 004967c6  6aff                 push -1
// 004967c8  68c16b7c00           push 0x7c6bc1
// 004967cd  50                   push eax
// 004967ce  64892500000000       mov dword ptr fs:[0], esp
// 004967d5  56                   push esi
// 004967d6  57                   push edi
// 004967d7  8bf1                 mov esi, ecx
// 004967d9  8d442418             lea eax, [esp + 0x18]
// 004967dd  50                   push eax
// 004967de  c744241401000000     mov dword ptr [esp + 0x14], 1
// 004967e6  ff155c248000         call dword ptr [0x80245c]
// 004967ec  8b442438             mov eax, dword ptr [esp + 0x38]
// 004967f0  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 004967f4  894e1c               mov dword ptr [esi + 0x1c], ecx
// 004967f7  894620               mov dword ptr [esi + 0x20], eax
// 004967fa  85c0                 test eax, eax
// 004967fc  740c                 je 0x49680a
// 004967fe  83c004               add eax, 4
// 00496801  ba01000000           mov edx, 1
// 00496806  f00fc110             lock xadd dword ptr [eax], edx
// 0049680a  8d4c2418             lea ecx, [esp + 0x18]
// 0049680e  c644241000           mov byte ptr [esp + 0x10], 0
// 00496813  ff1568248000         call dword ptr [0x802468]
// 00496819  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0049681d  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00496825  85ff                 test edi, edi
// 00496827  742a                 je 0x496853
// 00496829  8d4704               lea eax, [edi + 4]
// 0049682c  83c9ff               or ecx, 0xffffffff
// 0049682f  f00fc108             lock xadd dword ptr [eax], ecx
// 00496833  751e                 jne 0x496853
// 00496835  8b17                 mov edx, dword ptr [edi]
// 00496837  8b4204               mov eax, dword ptr [edx + 4]
// 0049683a  8bcf                 mov ecx, edi
// 0049683c  ffd0                 call eax
// 0049683e  8d4f08               lea ecx, [edi + 8]
// 00496841  83caff               or edx, 0xffffffff
// 00496844  f00fc111             lock xadd dword ptr [ecx], edx
// 00496848  7509                 jne 0x496853
// 0049684a  8b07                 mov eax, dword ptr [edi]
// 0049684c  8b5008               mov edx, dword ptr [eax + 8]
// 0049684f  8bcf                 mov ecx, edi
// 00496851  ffd2                 call edx
// 00496853  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00496857  5f                   pop edi
// 00496858  8bc6                 mov eax, esi
// 0049685a  64890d00000000       mov dword ptr fs:[0], ecx
// 00496861  5e                   pop esi
// 00496862  83c40c               add esp, 0xc
// 00496865  c22400               ret 0x24

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct String;
extern String* (__thiscall* string_copy)(String*, const String&);
extern void (__thiscall* string_destroy)(String*);

struct String
{
    char storage[28];
    String(const String&);
    ~String();
};

inline String::String(const String& other)
{
    string_copy(this, other);
}

inline String::~String()
{
    string_destroy(this);
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
    void* pointer;
    Control* control;
    Shared(const Shared&);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : pointer(other.pointer), control(other.control)
{
    if (control)
        _InterlockedIncrement(&control->strong);
}

inline Shared::~Shared()
{
    Control* p = control;
    if (p && _InterlockedDecrement(&p->strong) == 0)
    {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

struct S
{
    String string;
    Shared shared;
    S(String, Shared);
};

S::S(String value, Shared owner)
    : string(value), shared(owner)
{
}
