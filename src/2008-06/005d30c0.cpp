// from server: 100% by king_originala
// roc 2008-06 005d30c0  unit: RBX::VSpawnerService::?$FactoryProduct  size: 231 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d30c0
//
// 005d30c0  6aff                 push -1
// 005d30c2  682f597d00           push 0x7d592f
// 005d30c7  64a100000000         mov eax, dword ptr fs:[0]
// 005d30cd  50                   push eax
// 005d30ce  64892500000000       mov dword ptr fs:[0], esp
// 005d30d5  83ec24               sub esp, 0x24
// 005d30d8  56                   push esi
// 005d30d9  8bf1                 mov esi, ecx
// 005d30db  57                   push edi
// 005d30dc  8974240c             mov dword ptr [esp + 0xc], esi
// 005d30e0  e8dbfeffff           call 0x5d2fc0
// 005d30e5  8d7e14               lea edi, [esi + 0x14]
// 005d30e8  8d8e30010000         lea ecx, [esi + 0x130]
// 005d30ee  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005d30f6  c7062cbd8300         mov dword ptr [esi], 0x83bd2c
// 005d30fc  c746101cbd8300       mov dword ptr [esi + 0x10], 0x83bd1c
// 005d3103  c70714bd8300         mov dword ptr [edi], 0x83bd14
// 005d3109  c746200cbd8300       mov dword ptr [esi + 0x20], 0x83bd0c
// 005d3110  c74624fcbc8300       mov dword ptr [esi + 0x24], 0x83bcfc
// 005d3117  c74644ecbc8300       mov dword ptr [esi + 0x44], 0x83bcec
// 005d311e  c74664dcbc8300       mov dword ptr [esi + 0x64], 0x83bcdc
// 005d3125  c78684000000ccbc8300 mov dword ptr [esi + 0x84], 0x83bccc
// 005d312f  c786a4000000bcbc8300 mov dword ptr [esi + 0xa4], 0x83bcbc
// 005d3139  c786c4000000acbc8300 mov dword ptr [esi + 0xc4], 0x83bcac
// 005d3143  e8b8700400           call 0x61a200
// 005d3148  6838ba8300           push 0x83ba38
// 005d314d  8d4c2414             lea ecx, [esp + 0x14]
// 005d3151  c644243801           mov byte ptr [esp + 0x38], 1
// 005d3156  ff1558248000         call dword ptr [0x802458]
// 005d315c  8d442410             lea eax, [esp + 0x10]
// 005d3160  50                   push eax
// 005d3161  8bce                 mov ecx, esi
// 005d3163  c644243802           mov byte ptr [esp + 0x38], 2
// 005d3168  e8237ef8ff           call 0x55af90
// 005d316d  8d4c2410             lea ecx, [esp + 0x10]
// 005d3171  c644243401           mov byte ptr [esp + 0x34], 1
// 005d3176  ff1568248000         call dword ptr [0x802468]
// 005d317c  8b0d8c3e9700         mov ecx, dword ptr [0x973e8c]
// 005d3182  8d44240b             lea eax, [esp + 0xb]
// 005d3186  c644240b00           mov byte ptr [esp + 0xb], 0
// 005d318b  8b11                 mov edx, dword ptr [ecx]
// 005d318d  8b520c               mov edx, dword ptr [edx + 0xc]
// 005d3190  50                   push eax
// 005d3191  57                   push edi
// 005d3192  ffd2                 call edx
// 005d3194  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005d3198  5f                   pop edi
// 005d3199  8bc6                 mov eax, esi
// 005d319b  5e                   pop esi
// 005d319c  64890d00000000       mov dword ptr fs:[0], ecx
// 005d31a3  83c430               add esp, 0x30
// 005d31a6  c3                   ret 

struct String;
extern String* (__thiscall *stringConstruct)(String*, const char*);
extern void (__thiscall *stringDestroy)(String*);

struct String {
    char storage[28];
    String(const char*);
    ~String();
};

inline String::String(const char* text)
{
    stringConstruct(this, text);
}

inline String::~String()
{
    stringDestroy(this);
}

struct Base {
    Base();
    ~Base();
};

struct Member {
    Member();
    ~Member();
};

struct Registry {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void registerValue(unsigned int*, bool*);
};

extern Registry* registry;

struct S : Base {
    unsigned int table0;
    char padding04[12];
    unsigned int table10;
    unsigned int table14;
    char padding18[8];
    unsigned int table20;
    unsigned int table24;
    char padding28[28];
    unsigned int table44;
    char padding48[28];
    unsigned int table64;
    char padding68[28];
    unsigned int table84;
    char padding88[28];
    unsigned int tableA4;
    char paddingA8[28];
    unsigned int tableC4;
    char paddingC8[104];
    Member member;

    S();
    void setValue(const String&);
};

S::S()
    : Base(),
      table0(0x83bd2c),
      table10(0x83bd1c),
      table14(0x83bd14),
      table20(0x83bd0c),
      table24(0x83bcfc),
      table44(0x83bcec),
      table64(0x83bcdc),
      table84(0x83bccc),
      tableA4(0x83bcbc),
      tableC4(0x83bcac),
      member()
{
    {
        String name((const char*)0x83ba38);
        setValue(name);
    }

    bool enabled = false;
    registry->registerValue(&table14, &enabled);
}
