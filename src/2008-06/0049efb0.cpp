// from server: 99% by king_originala
// roc 2008-06 0049efb0  unit: RBX::Network::VClient::?$FactoryProduct  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0049efb0
//
// 0049efb0  6aff                 push -1
// 0049efb2  68fb767c00           push 0x7c76fb
// 0049efb7  64a100000000         mov eax, dword ptr fs:[0]
// 0049efbd  50                   push eax
// 0049efbe  64892500000000       mov dword ptr fs:[0], esp
// 0049efc5  51                   push ecx
// 0049efc6  56                   push esi
// 0049efc7  8bf1                 mov esi, ecx
// 0049efc9  89742404             mov dword ptr [esp + 4], esi
// 0049efcd  8d442418             lea eax, [esp + 0x18]
// 0049efd1  50                   push eax
// 0049efd2  c744241401000000     mov dword ptr [esp + 0x14], 1
// 0049efda  ff155c248000         call dword ptr [0x80245c]
// 0049efe0  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0049efe4  8d542438             lea edx, [esp + 0x38]
// 0049efe8  894e1c               mov dword ptr [esi + 0x1c], ecx
// 0049efeb  52                   push edx
// 0049efec  8d4e20               lea ecx, [esi + 0x20]
// 0049efef  c644241402           mov byte ptr [esp + 0x14], 2
// 0049eff4  ff155c248000         call dword ptr [0x80245c]
// 0049effa  8d4c2418             lea ecx, [esp + 0x18]
// 0049effe  c644241000           mov byte ptr [esp + 0x10], 0
// 0049f003  ff1568248000         call dword ptr [0x802468]
// 0049f009  8d4c2438             lea ecx, [esp + 0x38]
// 0049f00d  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0049f015  ff1568248000         call dword ptr [0x802468]
// 0049f01b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0049f01f  8bc6                 mov eax, esi
// 0049f021  5e                   pop esi
// 0049f022  64890d00000000       mov dword ptr fs:[0], ecx
// 0049f029  83c410               add esp, 0x10
// 0049f02c  c23c00               ret 0x3c

struct String;

extern void (__thiscall *copyString)(String *, const String &);
extern void (__thiscall *destroyString)(String *);

struct String {
    unsigned char storage[28];

    String(const String &);
    ~String();
};

inline String::String(const String &other)
{
    copyString(this, other);
}

inline String::~String()
{
    destroyString(this);
}

struct S {
    String first;
    int value;
    String second;

    S(String a, int n, String b);
};

S::S(String a, int n, String b)
    : first(a), value(n), second(b)
{
}
