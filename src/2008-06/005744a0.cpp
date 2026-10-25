// from server: 100% by king_originala
// roc 2008-06 005744a0  unit: RBX::UnifiedWidget  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005744a0
//
// 005744a0  6aff                 push -1
// 005744a2  6827047d00           push 0x7d0427
// 005744a7  64a100000000         mov eax, dword ptr fs:[0]
// 005744ad  50                   push eax
// 005744ae  64892500000000       mov dword ptr fs:[0], esp
// 005744b5  51                   push ecx
// 005744b6  56                   push esi
// 005744b7  8bf1                 mov esi, ecx
// 005744b9  57                   push edi
// 005744ba  89742408             mov dword ptr [esp + 8], esi
// 005744be  e80df5ffff           call 0x5739d0
// 005744c3  8dbe44010000         lea edi, [esi + 0x144]
// 005744c9  8bcf                 mov ecx, edi
// 005744cb  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005744d3  c706e4fc8200         mov dword ptr [esi], 0x82fce4
// 005744d9  c74610d4fc8200       mov dword ptr [esi + 0x10], 0x82fcd4
// 005744e0  c74614ccfc8200       mov dword ptr [esi + 0x14], 0x82fccc
// 005744e7  c74620c4fc8200       mov dword ptr [esi + 0x20], 0x82fcc4
// 005744ee  c74624b4fc8200       mov dword ptr [esi + 0x24], 0x82fcb4
// 005744f5  c74644a4fc8200       mov dword ptr [esi + 0x44], 0x82fca4
// 005744fc  c7466494fc8200       mov dword ptr [esi + 0x64], 0x82fc94
// 00574503  c7868400000084fc8200 mov dword ptr [esi + 0x84], 0x82fc84
// 0057450d  c786a400000074fc8200 mov dword ptr [esi + 0xa4], 0x82fc74
// 00574517  c786c400000064fc8200 mov dword ptr [esi + 0xc4], 0x82fc64
// 00574521  c786300100005cfc8200 mov dword ptr [esi + 0x130], 0x82fc5c
// 0057452b  ff1560248000         call dword ptr [0x802460]
// 00574531  8bce                 mov ecx, esi
// 00574533  c644241401           mov byte ptr [esp + 0x14], 1
// 00574538  e8a3f0ffff           call 0x5735e0
// 0057453d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00574541  50                   push eax
// 00574542  8bce                 mov ecx, esi
// 00574544  e8476afeff           call 0x55af90
// 00574549  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0057454d  51                   push ecx
// 0057454e  8bcf                 mov ecx, edi
// 00574550  ff150c248000         call dword ptr [0x80240c]
// 00574556  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0057455a  5f                   pop edi
// 0057455b  8bc6                 mov eax, esi
// 0057455d  5e                   pop esi
// 0057455e  64890d00000000       mov dword ptr fs:[0], ecx
// 00574565  83c410               add esp, 0x10
// 00574568  c20800               ret 8

struct String;

extern void (__thiscall *string_construct)(String *);
extern String &(__thiscall *string_assign)(String *, const String &);

struct Base {
    unsigned char storage[0x144];
    Base();
    ~Base();
};

struct String {
    unsigned char storage[28];
    String(void *);
    ~String();
    String &operator=(const String &);
};

struct S : Base {
    String text;
    S(int, const String &);
    void initialize();
    void setValue(int);
};

__forceinline String::String(void *object)
{
    unsigned char *p = (unsigned char *)object;
    *(unsigned long *)(p + 0x000) = 0x0082fce4;
    *(unsigned long *)(p + 0x010) = 0x0082fcd4;
    *(unsigned long *)(p + 0x014) = 0x0082fccc;
    *(unsigned long *)(p + 0x020) = 0x0082fcc4;
    *(unsigned long *)(p + 0x024) = 0x0082fcb4;
    *(unsigned long *)(p + 0x044) = 0x0082fca4;
    *(unsigned long *)(p + 0x064) = 0x0082fc94;
    *(unsigned long *)(p + 0x084) = 0x0082fc84;
    *(unsigned long *)(p + 0x0a4) = 0x0082fc74;
    *(unsigned long *)(p + 0x0c4) = 0x0082fc64;
    *(unsigned long *)(p + 0x130) = 0x0082fc5c;
    string_construct(this);
}

inline String &String::operator=(const String &other)
{
    return string_assign(this, other);
}

S::S(int value, const String &name)
    : Base(), text(this)
{
    initialize();
    setValue(value);
    text = name;
}
