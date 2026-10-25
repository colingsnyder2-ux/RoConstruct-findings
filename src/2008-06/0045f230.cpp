// from server: 100% by king_originala
// roc 2008-06 0045f230  unit: RBX::Stats::H::?$TypedStatsItem  size: 271 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045f230
//
// 0045f230  6aff                 push -1
// 0045f232  68c12f7c00           push 0x7c2fc1
// 0045f237  64a100000000         mov eax, dword ptr fs:[0]
// 0045f23d  50                   push eax
// 0045f23e  64892500000000       mov dword ptr fs:[0], esp
// 0045f245  83ec2c               sub esp, 0x2c
// 0045f248  8b442440             mov eax, dword ptr [esp + 0x40]
// 0045f24c  53                   push ebx
// 0045f24d  55                   push ebp
// 0045f24e  56                   push esi
// 0045f24f  57                   push edi
// 0045f250  8bd9                 mov ebx, ecx
// 0045f252  50                   push eax
// 0045f253  8d4c241c             lea ecx, [esp + 0x1c]
// 0045f257  51                   push ecx
// 0045f258  e843feffff           call 0x45f0a0
// 0045f25d  8b7004               mov esi, dword ptr [eax + 4]
// 0045f260  8b38                 mov edi, dword ptr [eax]
// 0045f262  83c408               add esp, 8
// 0045f265  897c2410             mov dword ptr [esp + 0x10], edi
// 0045f269  89742414             mov dword ptr [esp + 0x14], esi
// 0045f26d  85f6                 test esi, esi
// 0045f26f  740c                 je 0x45f27d
// 0045f271  8d5604               lea edx, [esi + 4]
// 0045f274  b801000000           mov eax, 1
// 0045f279  f00fc102             lock xadd dword ptr [edx], eax
// 0045f27d  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0045f281  c744244400000000     mov dword ptr [esp + 0x44], 0
// 0045f289  85ed                 test ebp, ebp
// 0045f28b  742c                 je 0x45f2b9
// 0045f28d  8d4d04               lea ecx, [ebp + 4]
// 0045f290  83caff               or edx, 0xffffffff
// 0045f293  f00fc111             lock xadd dword ptr [ecx], edx
// 0045f297  7520                 jne 0x45f2b9
// 0045f299  8b4500               mov eax, dword ptr [ebp]
// 0045f29c  8b5004               mov edx, dword ptr [eax + 4]
// 0045f29f  8bcd                 mov ecx, ebp
// 0045f2a1  ffd2                 call edx
// 0045f2a3  8d4508               lea eax, [ebp + 8]
// 0045f2a6  83c9ff               or ecx, 0xffffffff
// 0045f2a9  f00fc108             lock xadd dword ptr [eax], ecx
// 0045f2ad  750a                 jne 0x45f2b9
// 0045f2af  8b5500               mov edx, dword ptr [ebp]
// 0045f2b2  8b4208               mov eax, dword ptr [edx + 8]
// 0045f2b5  8bcd                 mov ecx, ebp
// 0045f2b7  ffd0                 call eax
// 0045f2b9  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0045f2bd  51                   push ecx
// 0045f2be  8d4c2424             lea ecx, [esp + 0x24]
// 0045f2c2  ff1558248000         call dword ptr [0x802458]
// 0045f2c8  8b17                 mov edx, dword ptr [edi]
// 0045f2ca  8b5204               mov edx, dword ptr [edx + 4]
// 0045f2cd  8d442420             lea eax, [esp + 0x20]
// 0045f2d1  50                   push eax
// 0045f2d2  8bcf                 mov ecx, edi
// 0045f2d4  c644244801           mov byte ptr [esp + 0x48], 1
// 0045f2d9  ffd2                 call edx
// 0045f2db  8d4c2420             lea ecx, [esp + 0x20]
// 0045f2df  c644244400           mov byte ptr [esp + 0x44], 0
// 0045f2e4  ff1568248000         call dword ptr [0x802468]
// 0045f2ea  53                   push ebx
// 0045f2eb  8bcf                 mov ecx, edi
// 0045f2ed  e8feb50f00           call 0x55a8f0
// 0045f2f2  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 0045f2fa  85f6                 test esi, esi
// 0045f2fc  742a                 je 0x45f328
// 0045f2fe  8d4604               lea eax, [esi + 4]
// 0045f301  83c9ff               or ecx, 0xffffffff
// 0045f304  f00fc108             lock xadd dword ptr [eax], ecx
// 0045f308  751e                 jne 0x45f328
// 0045f30a  8b16                 mov edx, dword ptr [esi]
// 0045f30c  8b4204               mov eax, dword ptr [edx + 4]
// 0045f30f  8bce                 mov ecx, esi
// 0045f311  ffd0                 call eax
// 0045f313  8d4e08               lea ecx, [esi + 8]
// 0045f316  83caff               or edx, 0xffffffff
// 0045f319  f00fc111             lock xadd dword ptr [ecx], edx
// 0045f31d  7509                 jne 0x45f328
// 0045f31f  8b06                 mov eax, dword ptr [esi]
// 0045f321  8b5008               mov edx, dword ptr [eax + 8]
// 0045f324  8bce                 mov ecx, esi
// 0045f326  ffd2                 call edx
// 0045f328  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0045f32c  8bc7                 mov eax, edi
// 0045f32e  5f                   pop edi
// 0045f32f  5e                   pop esi
// 0045f330  5d                   pop ebp
// 0045f331  5b                   pop ebx
// 0045f332  64890d00000000       mov dword ptr fs:[0], ecx
// 0045f339  83c438               add esp, 0x38
// 0045f33c  c20800               ret 8

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
#pragma intrinsic(_InterlockedDecrement)

struct String;
extern void (__thiscall *stringConstructor)(String*, const char*);
extern void (__thiscall *stringDestructor)(String*);

struct String
{
    unsigned char storage[28];
    String(const char*);
    ~String();
};

inline String::String(const char* text)
{
    stringConstructor(this, text);
}

inline String::~String()
{
    stringDestructor(this);
}

struct Item;
struct S;

struct Control
{
    virtual void unused() = 0;
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

struct Temporary
{
    Item* pointer;
    Control* control;
    ~Temporary();
};

inline Temporary::~Temporary()
{
    if (control)
        control->release();
}

struct Shared
{
    Item* pointer;
    Control* control;

    Shared(const Temporary&);
    ~Shared();
};

inline Shared::Shared(const Temporary& value)
    : pointer(value.pointer), control(value.control)
{
    if (control)
        _InterlockedIncrement(&control->strong);
}

inline Shared::~Shared()
{
    if (control)
        control->release();
}

struct Item
{
    virtual void unused() = 0;
    virtual void setName(const String&) = 0;
    void attach(S*);
};

Temporary __cdecl createItem(const char*);

struct S
{
    Item* f(const char*, const char*);
};

Item* S::f(const char* name, const char* type)
{
    Shared item(createItem(type));
    {
        String text(name);
        item.pointer->setName(text);
    }
    item.pointer->attach(this);
    return item.pointer;
}
