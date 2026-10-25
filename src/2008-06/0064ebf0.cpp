// from server: 100% by king_originala
// roc 2008-06 0064ebf0  unit: RBX::ChatWidget  size: 208 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064ebf0
//
// 0064ebf0  6aff                 push -1
// 0064ebf2  6807b47d00           push 0x7db407
// 0064ebf7  64a100000000         mov eax, dword ptr fs:[0]
// 0064ebfd  50                   push eax
// 0064ebfe  64892500000000       mov dword ptr fs:[0], esp
// 0064ec05  51                   push ecx
// 0064ec06  8b442414             mov eax, dword ptr [esp + 0x14]
// 0064ec0a  56                   push esi
// 0064ec0b  8bf1                 mov esi, ecx
// 0064ec0d  50                   push eax
// 0064ec0e  89742408             mov dword ptr [esp + 8], esi
// 0064ec12  e85937ffff           call 0x642370
// 0064ec17  8d8e4c010000         lea ecx, [esi + 0x14c]
// 0064ec1d  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0064ec25  c706f4b58400         mov dword ptr [esi], 0x84b5f4
// 0064ec2b  c74610e4b58400       mov dword ptr [esi + 0x10], 0x84b5e4
// 0064ec32  c74614dcb58400       mov dword ptr [esi + 0x14], 0x84b5dc
// 0064ec39  c74620d4b58400       mov dword ptr [esi + 0x20], 0x84b5d4
// 0064ec40  c74624c4b58400       mov dword ptr [esi + 0x24], 0x84b5c4
// 0064ec47  c74644b4b58400       mov dword ptr [esi + 0x44], 0x84b5b4
// 0064ec4e  c74664a4b58400       mov dword ptr [esi + 0x64], 0x84b5a4
// 0064ec55  c7868400000094b58400 mov dword ptr [esi + 0x84], 0x84b594
// 0064ec5f  c786a400000084b58400 mov dword ptr [esi + 0xa4], 0x84b584
// 0064ec69  c786c400000074b58400 mov dword ptr [esi + 0xc4], 0x84b574
// 0064ec73  c786300100006cb58400 mov dword ptr [esi + 0x130], 0x84b56c
// 0064ec7d  ff1560248000         call dword ptr [0x802460]
// 0064ec83  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0064ec87  51                   push ecx
// 0064ec88  8bce                 mov ecx, esi
// 0064ec8a  c644241401           mov byte ptr [esp + 0x14], 1
// 0064ec8f  e8fcc2f0ff           call 0x55af90
// 0064ec94  d905a89b8100         fld dword ptr [0x819ba8]
// 0064ec9a  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0064ec9e  d99e3c010000         fstp dword ptr [esi + 0x13c]
// 0064eca4  d9055cf88200         fld dword ptr [0x82f85c]
// 0064ecaa  8bc6                 mov eax, esi
// 0064ecac  d99e40010000         fstp dword ptr [esi + 0x140]
// 0064ecb2  5e                   pop esi
// 0064ecb3  64890d00000000       mov dword ptr fs:[0], ecx
// 0064ecba  83c410               add esp, 0x10
// 0064ecbd  c20800               ret 8

struct String;
extern void (__thiscall *string_construct)(String *);
extern void (__thiscall *string_destroy)(String *);
extern const float initialX;
extern const float initialY;

struct String
{
    char storage[28];
    String(int);
    ~String();
};

inline String::String(int)
{
    string_construct(this);
}

inline String::~String()
{
    string_destroy(this);
}

struct ChatEnter
{
    unsigned int words[83];
    ChatEnter(unsigned int);
    ~ChatEnter();
    ChatEnter *construct(unsigned int);
};

inline ChatEnter::ChatEnter(unsigned int value)
{
    construct(value);
}

struct S : ChatEnter
{
    String value;
    S(unsigned int, const String &);
    int installTables();
    void setValue(const String &);
};

__forceinline int S::installTables()
{
    words[0] = 0x84b5f4;
    words[4] = 0x84b5e4;
    words[5] = 0x84b5dc;
    words[8] = 0x84b5d4;
    words[9] = 0x84b5c4;
    words[17] = 0x84b5b4;
    words[25] = 0x84b5a4;
    words[33] = 0x84b594;
    words[41] = 0x84b584;
    words[49] = 0x84b574;
    words[76] = 0x84b56c;
    return 0;
}

S::S(unsigned int argument, const String &text)
    : ChatEnter(argument), value(installTables())
{
    setValue(text);
    *reinterpret_cast<float *>(&words[79]) = initialX;
    *reinterpret_cast<float *>(&words[80]) = initialY;
}
