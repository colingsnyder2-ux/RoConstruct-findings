// from server: 100% by king_originala
// roc 2008-06 0045f120  unit: RBX::Stats::H::?$TypedStatsItem  size: 271 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045f120
//
// 0045f120  6aff                 push -1
// 0045f122  68c12f7c00           push 0x7c2fc1
// 0045f127  64a100000000         mov eax, dword ptr fs:[0]
// 0045f12d  50                   push eax
// 0045f12e  64892500000000       mov dword ptr fs:[0], esp
// 0045f135  83ec2c               sub esp, 0x2c
// 0045f138  8b442440             mov eax, dword ptr [esp + 0x40]
// 0045f13c  53                   push ebx
// 0045f13d  55                   push ebp
// 0045f13e  56                   push esi
// 0045f13f  57                   push edi
// 0045f140  8bd9                 mov ebx, ecx
// 0045f142  50                   push eax
// 0045f143  8d4c241c             lea ecx, [esp + 0x1c]
// 0045f147  51                   push ecx
// 0045f148  e8d3feffff           call 0x45f020
// 0045f14d  8b7004               mov esi, dword ptr [eax + 4]
// 0045f150  8b38                 mov edi, dword ptr [eax]
// 0045f152  83c408               add esp, 8
// 0045f155  897c2410             mov dword ptr [esp + 0x10], edi
// 0045f159  89742414             mov dword ptr [esp + 0x14], esi
// 0045f15d  85f6                 test esi, esi
// 0045f15f  740c                 je 0x45f16d
// 0045f161  8d5604               lea edx, [esi + 4]
// 0045f164  b801000000           mov eax, 1
// 0045f169  f00fc102             lock xadd dword ptr [edx], eax
// 0045f16d  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0045f171  c744244400000000     mov dword ptr [esp + 0x44], 0
// 0045f179  85ed                 test ebp, ebp
// 0045f17b  742c                 je 0x45f1a9
// 0045f17d  8d4d04               lea ecx, [ebp + 4]
// 0045f180  83caff               or edx, 0xffffffff
// 0045f183  f00fc111             lock xadd dword ptr [ecx], edx
// 0045f187  7520                 jne 0x45f1a9
// 0045f189  8b4500               mov eax, dword ptr [ebp]
// 0045f18c  8b5004               mov edx, dword ptr [eax + 4]
// 0045f18f  8bcd                 mov ecx, ebp
// 0045f191  ffd2                 call edx
// 0045f193  8d4508               lea eax, [ebp + 8]
// 0045f196  83c9ff               or ecx, 0xffffffff
// 0045f199  f00fc108             lock xadd dword ptr [eax], ecx
// 0045f19d  750a                 jne 0x45f1a9
// 0045f19f  8b5500               mov edx, dword ptr [ebp]
// 0045f1a2  8b4208               mov eax, dword ptr [edx + 8]
// 0045f1a5  8bcd                 mov ecx, ebp
// 0045f1a7  ffd0                 call eax
// 0045f1a9  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0045f1ad  51                   push ecx
// 0045f1ae  8d4c2424             lea ecx, [esp + 0x24]
// 0045f1b2  ff1558248000         call dword ptr [0x802458]
// 0045f1b8  8b17                 mov edx, dword ptr [edi]
// 0045f1ba  8b5204               mov edx, dword ptr [edx + 4]
// 0045f1bd  8d442420             lea eax, [esp + 0x20]
// 0045f1c1  50                   push eax
// 0045f1c2  8bcf                 mov ecx, edi
// 0045f1c4  c644244801           mov byte ptr [esp + 0x48], 1
// 0045f1c9  ffd2                 call edx
// 0045f1cb  8d4c2420             lea ecx, [esp + 0x20]
// 0045f1cf  c644244400           mov byte ptr [esp + 0x44], 0
// 0045f1d4  ff1568248000         call dword ptr [0x802468]
// 0045f1da  53                   push ebx
// 0045f1db  8bcf                 mov ecx, edi
// 0045f1dd  e80eb70f00           call 0x55a8f0
// 0045f1e2  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 0045f1ea  85f6                 test esi, esi
// 0045f1ec  742a                 je 0x45f218
// 0045f1ee  8d4604               lea eax, [esi + 4]
// 0045f1f1  83c9ff               or ecx, 0xffffffff
// 0045f1f4  f00fc108             lock xadd dword ptr [eax], ecx
// 0045f1f8  751e                 jne 0x45f218
// 0045f1fa  8b16                 mov edx, dword ptr [esi]
// 0045f1fc  8b4204               mov eax, dword ptr [edx + 4]
// 0045f1ff  8bce                 mov ecx, esi
// 0045f201  ffd0                 call eax
// 0045f203  8d4e08               lea ecx, [esi + 8]
// 0045f206  83caff               or edx, 0xffffffff
// 0045f209  f00fc111             lock xadd dword ptr [ecx], edx
// 0045f20d  7509                 jne 0x45f218
// 0045f20f  8b06                 mov eax, dword ptr [esi]
// 0045f211  8b5008               mov edx, dword ptr [eax + 8]
// 0045f214  8bce                 mov ecx, esi
// 0045f216  ffd2                 call edx
// 0045f218  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0045f21c  8bc7                 mov eax, edi
// 0045f21e  5f                   pop edi
// 0045f21f  5e                   pop esi
// 0045f220  5d                   pop ebp
// 0045f221  5b                   pop ebx
// 0045f222  64890d00000000       mov dword ptr fs:[0], ecx
// 0045f229  83c438               add esp, 0x38
// 0045f22c  c20800               ret 8

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

    void release();
};

__forceinline void Control::release()
{
    if (_InterlockedDecrement(&strong) == 0)
    {
        dispose();
        if (_InterlockedDecrement(&weak) == 0)
            destroy();
    }
}

struct String
{
    unsigned char storage[28];

    String(const char*);
    ~String();
};

extern String* (__thiscall *constructString)(String*, const char*);
extern void (__thiscall *destroyString)(String*);

__forceinline String::String(const char* text)
{
    constructString(this, text);
}

__forceinline String::~String()
{
    destroyString(this);
}

struct Stats;

struct Item
{
    virtual void unused();
    virtual void setName(const String&);

    void attach(Stats*);
};

struct Temporary
{
    Item* object;
    Control* control;

    ~Temporary();
};

__forceinline Temporary::~Temporary()
{
    if (control)
        control->release();
}

struct Shared
{
    Item* object;
    Control* control;

    Shared(const Temporary&);
    ~Shared();
};

__forceinline Shared::Shared(const Temporary& source)
    : object(source.object), control(source.control)
{
    if (control)
        _InterlockedIncrement(&control->strong);
}

__forceinline Shared::~Shared()
{
    if (control)
        control->release();
}

Temporary __cdecl createItem(void*);

struct Stats
{
    Item* create(const char*, void*);
};

Item* Stats::create(const char* name, void* argument)
{
    Shared item(createItem(argument));
    {
        String text(name);
        item.object->setName(text);
    }
    item.object->attach(this);
    return item.object;
}
