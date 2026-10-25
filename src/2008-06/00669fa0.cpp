// from server: 100% by king_originala
// roc 2008-06 00669fa0  unit: RBX::TreeStage  size: 184 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00669fa0
//
// 00669fa0  6aff                 push -1
// 00669fa2  68d2c37d00           push 0x7dc3d2
// 00669fa7  64a100000000         mov eax, dword ptr fs:[0]
// 00669fad  50                   push eax
// 00669fae  64892500000000       mov dword ptr fs:[0], esp
// 00669fb5  83ec08               sub esp, 8
// 00669fb8  53                   push ebx
// 00669fb9  55                   push ebp
// 00669fba  56                   push esi
// 00669fbb  57                   push edi
// 00669fbc  8bf1                 mov esi, ecx
// 00669fbe  33db                 xor ebx, ebx
// 00669fc0  895c2420             mov dword ptr [esp + 0x20], ebx
// 00669fc4  ff15c8258000         call dword ptr [0x8025c8]
// 00669fca  89442410             mov dword ptr [esp + 0x10], eax
// 00669fce  ff15c4258000         call dword ptr [0x8025c4]
// 00669fd4  8bc8                 mov ecx, eax
// 00669fd6  ff15a4258000         call dword ptr [0x8025a4]
// 00669fdc  8d442410             lea eax, [esp + 0x10]
// 00669fe0  50                   push eax
// 00669fe1  8d4c242c             lea ecx, [esp + 0x2c]
// 00669fe5  51                   push ecx
// 00669fe6  c644242801           mov byte ptr [esp + 0x28], 1
// 00669feb  e8105dfeff           call 0x64fd00
// 00669ff0  83c408               add esp, 8
// 00669ff3  8d4c2410             lea ecx, [esp + 0x10]
// 00669ff7  885c2420             mov byte ptr [esp + 0x20], bl
// 00669ffb  ff1564258000         call dword ptr [0x802564]
// 0066a001  8b7e18               mov edi, dword ptr [esi + 0x18]
// 0066a004  8b2e                 mov ebp, dword ptr [esi]
// 0066a006  8d542428             lea edx, [esp + 0x28]
// 0066a00a  52                   push edx
// 0066a00b  8d442414             lea eax, [esp + 0x14]
// 0066a00f  50                   push eax
// 0066a010  8bce                 mov ecx, esi
// 0066a012  e8898fe3ff           call 0x4a2fa0
// 0066a017  8bf0                 mov esi, eax
// 0066a019  8b06                 mov eax, dword ptr [esi]
// 0066a01b  3bc3                 cmp eax, ebx
// 0066a01d  7404                 je 0x66a023
// 0066a01f  3bc5                 cmp eax, ebp
// 0066a021  7406                 je 0x66a029
// 0066a023  ff1590288000         call dword ptr [0x802890]
// 0066a029  397e04               cmp dword ptr [esi + 4], edi
// 0066a02c  8d4c2428             lea ecx, [esp + 0x28]
// 0066a030  0f95c3               setne bl
// 0066a033  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 0066a03b  ff1568248000         call dword ptr [0x802468]
// 0066a041  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0066a045  5f                   pop edi
// 0066a046  5e                   pop esi
// 0066a047  5d                   pop ebp
// 0066a048  8ac3                 mov al, bl
// 0066a04a  5b                   pop ebx
// 0066a04b  64890d00000000       mov dword ptr fs:[0], ecx
// 0066a052  83c414               add esp, 0x14
// 0066a055  c21c00               ret 0x1c

struct LocaleImpl;

extern LocaleImpl* (__cdecl* getGlobalLocale)();
extern LocaleImpl* (__cdecl* initLocale)();
extern void (__thiscall* increfLocale)(LocaleImpl*);
extern void (__thiscall* destroyLocale)(void*);
extern void (__thiscall* destroyString)(void*);
extern void (__cdecl* invalidParameter)();

struct Locale
{
    LocaleImpl* impl;
    unsigned char storage[4];

    Locale();
    ~Locale();
};

struct String
{
    unsigned char data[28];

    ~String();
};

struct Iterator
{
    void* owner;
    void* node;
};

extern void __cdecl prepareString(String*, Locale*);

struct TreeStage
{
    void* owner;
    unsigned char padding[20];
    void* endNode;

    Iterator* lookup(Iterator*, const String*);
    bool process(String);
};

__forceinline Locale::Locale()
{
    impl = getGlobalLocale();
    increfLocale(initLocale());
}

__forceinline Locale::~Locale()
{
    destroyLocale(this);
}

__forceinline String::~String()
{
    destroyString(this);
}

bool TreeStage::process(String value)
{
    Iterator* result;
    {
        Locale locale;
        prepareString(&value, &locale);
        result = reinterpret_cast<Iterator*>(&locale);
    }

    void* savedEnd = endNode;
    void* savedOwner = owner;
    Iterator* found = lookup(result, &value);

    if (!found->owner || found->owner != savedOwner)
        invalidParameter();

    return found->node != savedEnd;
}
