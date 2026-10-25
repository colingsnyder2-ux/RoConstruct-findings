// from server: 100% by king_originala
// roc 2008-06 00598400  unit: RBX::VDecal::?$FactoryProduct  size: 255 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00598400
//
// 00598400  6aff                 push -1
// 00598402  68e8247d00           push 0x7d24e8
// 00598407  64a100000000         mov eax, dword ptr fs:[0]
// 0059840d  50                   push eax
// 0059840e  64892500000000       mov dword ptr fs:[0], esp
// 00598415  83ec24               sub esp, 0x24
// 00598418  56                   push esi
// 00598419  8bf1                 mov esi, ecx
// 0059841b  57                   push edi
// 0059841c  89742408             mov dword ptr [esp + 8], esi
// 00598420  e81bffffff           call 0x598340
// 00598425  8dbe44010000         lea edi, [esi + 0x144]
// 0059842b  8bcf                 mov ecx, edi
// 0059842d  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00598435  c706b4278300         mov dword ptr [esi], 0x8327b4
// 0059843b  c74610a8278300       mov dword ptr [esi + 0x10], 0x8327a8
// 00598442  c74614a0278300       mov dword ptr [esi + 0x14], 0x8327a0
// 00598449  c7462098278300       mov dword ptr [esi + 0x20], 0x832798
// 00598450  c7462488278300       mov dword ptr [esi + 0x24], 0x832788
// 00598457  c7464478278300       mov dword ptr [esi + 0x44], 0x832778
// 0059845e  c7466468278300       mov dword ptr [esi + 0x64], 0x832768
// 00598465  c7868400000058278300 mov dword ptr [esi + 0x84], 0x832758
// 0059846f  c786a400000048278300 mov dword ptr [esi + 0xa4], 0x832748
// 00598479  c786c400000038278300 mov dword ptr [esi + 0xc4], 0x832738
// 00598483  c7863001000020278300 mov dword ptr [esi + 0x130], 0x832720
// 0059848d  897c240c             mov dword ptr [esp + 0xc], edi
// 00598491  ff1560248000         call dword ptr [0x802460]
// 00598497  c644243401           mov byte ptr [esp + 0x34], 1
// 0059849c  e8cfbdfbff           call 0x554270
// 005984a1  89471c               mov dword ptr [edi + 0x1c], eax
// 005984a4  d9ee                 fldz 
// 005984a6  d99e64010000         fstp dword ptr [esi + 0x164]
// 005984ac  6814278300           push 0x832714
// 005984b1  d905f0228200         fld dword ptr [0x8222f0]
// 005984b7  8d4c2414             lea ecx, [esp + 0x14]
// 005984bb  d99e68010000         fstp dword ptr [esi + 0x168]
// 005984c1  c644243802           mov byte ptr [esp + 0x38], 2
// 005984c6  ff1558248000         call dword ptr [0x802458]
// 005984cc  8d442410             lea eax, [esp + 0x10]
// 005984d0  50                   push eax
// 005984d1  8bce                 mov ecx, esi
// 005984d3  c644243803           mov byte ptr [esp + 0x38], 3
// 005984d8  e8b32afcff           call 0x55af90
// 005984dd  8d4c2410             lea ecx, [esp + 0x10]
// 005984e1  c644243402           mov byte ptr [esp + 0x34], 2
// 005984e6  ff1568248000         call dword ptr [0x802468]
// 005984ec  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005984f0  5f                   pop edi
// 005984f1  8bc6                 mov eax, esi
// 005984f3  5e                   pop esi
// 005984f4  64890d00000000       mov dword ptr fs:[0], ecx
// 005984fb  83c430               add esp, 0x30
// 005984fe  c3                   ret 

struct Name;
extern const Name& __cdecl getLocalScope();
extern const float initialValue;

extern const char table0[], table10[], table14[], table20[];
extern const char table24[], table44[], table64[], table84[];
extern const char tableA4[], tableC4[], table130[];

typedef void (__thiscall *StringDefaultCtor)(void*);
typedef void (__thiscall *StringTextCtor)(void*, const char*);
typedef void (__thiscall *StringDtor)(void*);

extern StringDefaultCtor stringDefaultCtor;
extern StringTextCtor stringTextCtor;
extern StringDtor stringDtor;

struct String
{
    unsigned char storage[28];
    String();
    String(const char*);
    ~String();
};

inline String::String()
{
    stringDefaultCtor(this);
}

inline String::String(const char* text)
{
    stringTextCtor(this, text);
}

inline String::~String()
{
    stringDtor(this);
}

struct Guid
{
    String value;
    const Name* scope;
    Guid(int);
    ~Guid();
};

inline Guid::Guid(int) : value(), scope(&getLocalScope())
{
}

inline Guid::~Guid()
{
}

struct Base
{
    unsigned int words[81];
    Base();
    ~Base();
    void setName(const String&);
};

struct Decal : Base
{
    Guid guid;
    float transparency;
    float value;
    Decal();
};

Decal::Decal()
    : Base(),
      guid((
          words[0] = (unsigned int)table0,
          words[4] = (unsigned int)table10,
          words[5] = (unsigned int)table14,
          words[8] = (unsigned int)table20,
          words[9] = (unsigned int)table24,
          words[17] = (unsigned int)table44,
          words[25] = (unsigned int)table64,
          words[33] = (unsigned int)table84,
          words[41] = (unsigned int)tableA4,
          words[49] = (unsigned int)tableC4,
          words[76] = (unsigned int)table130,
          0)),
      transparency(0.0f),
      value(initialValue)
{
    String name("Decal");
    setName(name);
}
