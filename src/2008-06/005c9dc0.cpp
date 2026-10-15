// from server: 100% by colin
// roc 2008-06 005c9dc0  unit: RBX::Stats::TypedMemItem  size: 271 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c9dc0
//
// 005c9dc0  6aff                 push -1
// 005c9dc2  68c12f7c00           push 0x7c2fc1
// 005c9dc7  64a100000000         mov eax, dword ptr fs:[0]
// 005c9dcd  50                   push eax
// 005c9dce  64892500000000       mov dword ptr fs:[0], esp
// 005c9dd5  83ec2c               sub esp, 0x2c
// 005c9dd8  8b442440             mov eax, dword ptr [esp + 0x40]
// 005c9ddc  53                   push ebx
// 005c9ddd  55                   push ebp
// 005c9dde  56                   push esi
// 005c9ddf  57                   push edi
// 005c9de0  8bd9                 mov ebx, ecx
// 005c9de2  50                   push eax
// 005c9de3  8d4c241c             lea ecx, [esp + 0x1c]
// 005c9de7  51                   push ecx
// 005c9de8  e853ffffff           call 0x5c9d40
// 005c9ded  8b7004               mov esi, dword ptr [eax + 4]
// 005c9df0  8b38                 mov edi, dword ptr [eax]
// 005c9df2  83c408               add esp, 8
// 005c9df5  897c2410             mov dword ptr [esp + 0x10], edi
// 005c9df9  89742414             mov dword ptr [esp + 0x14], esi
// 005c9dfd  85f6                 test esi, esi
// 005c9dff  740c                 je 0x5c9e0d
// 005c9e01  8d5604               lea edx, [esi + 4]
// 005c9e04  b801000000           mov eax, 1
// 005c9e09  f00fc102             lock xadd dword ptr [edx], eax
// 005c9e0d  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 005c9e11  c744244400000000     mov dword ptr [esp + 0x44], 0
// 005c9e19  85ed                 test ebp, ebp
// 005c9e1b  742c                 je 0x5c9e49
// 005c9e1d  8d4d04               lea ecx, [ebp + 4]
// 005c9e20  83caff               or edx, 0xffffffff
// 005c9e23  f00fc111             lock xadd dword ptr [ecx], edx
// 005c9e27  7520                 jne 0x5c9e49
// 005c9e29  8b4500               mov eax, dword ptr [ebp]
// 005c9e2c  8b5004               mov edx, dword ptr [eax + 4]
// 005c9e2f  8bcd                 mov ecx, ebp
// 005c9e31  ffd2                 call edx
// 005c9e33  8d4508               lea eax, [ebp + 8]
// 005c9e36  83c9ff               or ecx, 0xffffffff
// 005c9e39  f00fc108             lock xadd dword ptr [eax], ecx
// 005c9e3d  750a                 jne 0x5c9e49
// 005c9e3f  8b5500               mov edx, dword ptr [ebp]
// 005c9e42  8b4208               mov eax, dword ptr [edx + 8]
// 005c9e45  8bcd                 mov ecx, ebp
// 005c9e47  ffd0                 call eax
// 005c9e49  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 005c9e4d  51                   push ecx
// 005c9e4e  8d4c2424             lea ecx, [esp + 0x24]
// 005c9e52  ff1558248000         call dword ptr [0x802458]
// 005c9e58  8b17                 mov edx, dword ptr [edi]
// 005c9e5a  8b5204               mov edx, dword ptr [edx + 4]
// 005c9e5d  8d442420             lea eax, [esp + 0x20]
// 005c9e61  50                   push eax
// 005c9e62  8bcf                 mov ecx, edi
// 005c9e64  c644244801           mov byte ptr [esp + 0x48], 1
// 005c9e69  ffd2                 call edx
// 005c9e6b  8d4c2420             lea ecx, [esp + 0x20]
// 005c9e6f  c644244400           mov byte ptr [esp + 0x44], 0
// 005c9e74  ff1568248000         call dword ptr [0x802468]
// 005c9e7a  53                   push ebx
// 005c9e7b  8bcf                 mov ecx, edi
// 005c9e7d  e86e0af9ff           call 0x55a8f0
// 005c9e82  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 005c9e8a  85f6                 test esi, esi
// 005c9e8c  742a                 je 0x5c9eb8
// 005c9e8e  8d4604               lea eax, [esi + 4]
// 005c9e91  83c9ff               or ecx, 0xffffffff
// 005c9e94  f00fc108             lock xadd dword ptr [eax], ecx
// 005c9e98  751e                 jne 0x5c9eb8
// 005c9e9a  8b16                 mov edx, dword ptr [esi]
// 005c9e9c  8b4204               mov eax, dword ptr [edx + 4]
// 005c9e9f  8bce                 mov ecx, esi
// 005c9ea1  ffd0                 call eax
// 005c9ea3  8d4e08               lea ecx, [esi + 8]
// 005c9ea6  83caff               or edx, 0xffffffff
// 005c9ea9  f00fc111             lock xadd dword ptr [ecx], edx
// 005c9ead  7509                 jne 0x5c9eb8
// 005c9eaf  8b06                 mov eax, dword ptr [esi]
// 005c9eb1  8b5008               mov edx, dword ptr [eax + 8]
// 005c9eb4  8bce                 mov ecx, esi
// 005c9eb6  ffd2                 call edx
// 005c9eb8  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 005c9ebc  8bc7                 mov eax, edi
// 005c9ebe  5f                   pop edi
// 005c9ebf  5e                   pop esi
// 005c9ec0  5d                   pop ebp
// 005c9ec1  5b                   pop ebx
// 005c9ec2  64890d00000000       mov dword ptr fs:[0], ecx
// 005c9ec9  83c438               add esp, 0x38
// 005c9ecc  c20800               ret 8

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
