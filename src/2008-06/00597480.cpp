// from server: 100% by king_originala
// roc 2008-06 00597480  unit: RBX::VTextureId::?$holder  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00597480
//
// 00597480  6aff                 push -1
// 00597482  68c17d7d00           push 0x7d7dc1
// 00597487  64a100000000         mov eax, dword ptr fs:[0]
// 0059748d  50                   push eax
// 0059748e  64892500000000       mov dword ptr fs:[0], esp
// 00597495  83ec20               sub esp, 0x20
// 00597498  8b442430             mov eax, dword ptr [esp + 0x30]
// 0059749c  56                   push esi
// 0059749d  50                   push eax
// 0059749e  8d4c2408             lea ecx, [esp + 8]
// 005974a2  ff155c248000         call dword ptr [0x80245c]
// 005974a8  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 005974b0  e8bbcdfbff           call 0x554270
// 005974b5  89442420             mov dword ptr [esp + 0x20], eax
// 005974b9  8b742438             mov esi, dword ptr [esp + 0x38]
// 005974bd  8d4c2404             lea ecx, [esp + 4]
// 005974c1  51                   push ecx
// 005974c2  8bce                 mov ecx, esi
// 005974c4  c744243001000000     mov dword ptr [esp + 0x30], 1
// 005974cc  ff150c248000         call dword ptr [0x80240c]
// 005974d2  8b542420             mov edx, dword ptr [esp + 0x20]
// 005974d6  8d4c2404             lea ecx, [esp + 4]
// 005974da  89561c               mov dword ptr [esi + 0x1c], edx
// 005974dd  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 005974e5  ff1568248000         call dword ptr [0x802468]
// 005974eb  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005974ef  b001                 mov al, 1
// 005974f1  5e                   pop esi
// 005974f2  64890d00000000       mov dword ptr fs:[0], ecx
// 005974f9  83c42c               add esp, 0x2c
// 005974fc  c3                   ret 

struct Name;

struct String {
    unsigned char data[28];

    String(const String&);
    ~String();
    String& operator=(const String&);
};

extern void (__thiscall *copyString)(String*, const String&);
extern void (__thiscall *destroyString)(String*);
extern String& (__thiscall *assignString)(String*, const String&);
extern const Name& __cdecl getLocalScope();

inline String::String(const String& source)
{
    copyString(this, source);
}

inline String::~String()
{
    destroyString(this);
}

inline String& String::operator=(const String& source)
{
    return assignString(this, source);
}

struct Holder {
    String text;
    const Name* scope;
};

bool __cdecl reconstruct(const String& source, Holder* destination)
{
    Holder temporary = { source, &getLocalScope() };
    *destination = temporary;
    return true;
}
