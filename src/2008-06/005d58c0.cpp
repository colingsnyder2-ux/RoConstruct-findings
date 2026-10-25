// from server: 100% by king_originala
// roc 2008-06 005d58c0  unit: RBX::Clothing  size: 207 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d58c0
//
// 005d58c0  6aff                 push -1
// 005d58c2  68415b7d00           push 0x7d5b41
// 005d58c7  64a100000000         mov eax, dword ptr fs:[0]
// 005d58cd  50                   push eax
// 005d58ce  64892500000000       mov dword ptr fs:[0], esp
// 005d58d5  83ec20               sub esp, 0x20
// 005d58d8  56                   push esi
// 005d58d9  8bf1                 mov esi, ecx
// 005d58db  89742404             mov dword ptr [esp + 4], esi
// 005d58df  e83cfbffff           call 0x5d5420
// 005d58e4  c70644cb8300         mov dword ptr [esi], 0x83cb44
// 005d58ea  c7461034cb8300       mov dword ptr [esi + 0x10], 0x83cb34
// 005d58f1  c746142ccb8300       mov dword ptr [esi + 0x14], 0x83cb2c
// 005d58f8  c7462024cb8300       mov dword ptr [esi + 0x20], 0x83cb24
// 005d58ff  c7462414cb8300       mov dword ptr [esi + 0x24], 0x83cb14
// 005d5906  c7464404cb8300       mov dword ptr [esi + 0x44], 0x83cb04
// 005d590d  c74664f4ca8300       mov dword ptr [esi + 0x64], 0x83caf4
// 005d5914  c78684000000e4ca8300 mov dword ptr [esi + 0x84], 0x83cae4
// 005d591e  c786a4000000d4ca8300 mov dword ptr [esi + 0xa4], 0x83cad4
// 005d5928  c786c4000000c4ca8300 mov dword ptr [esi + 0xc4], 0x83cac4
// 005d5932  c78630010000bcca8300 mov dword ptr [esi + 0x130], 0x83cabc
// 005d593c  68b0ca8300           push 0x83cab0
// 005d5941  8d4c240c             lea ecx, [esp + 0xc]
// 005d5945  c744243000000000     mov dword ptr [esp + 0x30], 0
// 005d594d  c78634010000e2000000 mov dword ptr [esi + 0x134], 0xe2
// 005d5957  ff1558248000         call dword ptr [0x802458]
// 005d595d  8d442408             lea eax, [esp + 8]
// 005d5961  50                   push eax
// 005d5962  8bce                 mov ecx, esi
// 005d5964  c644243001           mov byte ptr [esp + 0x30], 1
// 005d5969  e82256f8ff           call 0x55af90
// 005d596e  8d4c2408             lea ecx, [esp + 8]
// 005d5972  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005d5977  ff1568248000         call dword ptr [0x802468]
// 005d597d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005d5981  8bc6                 mov eax, esi
// 005d5983  5e                   pop esi
// 005d5984  64890d00000000       mov dword ptr fs:[0], ecx
// 005d598b  83c42c               add esp, 0x2c
// 005d598e  c3                   ret 

struct String;
extern String* (__thiscall *stringConstruct)(String*, const char*);
extern void (__thiscall *stringDestroy)(String*);

extern const char table00[];
extern const char table10[];
extern const char table14[];
extern const char table20[];
extern const char table24[];
extern const char table44[];
extern const char table64[];
extern const char table84[];
extern const char tableA4[];
extern const char tableC4[];
extern const char table130[];

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
    char storage[0x134];
    Base();
    ~Base();
};

struct S : Base {
    volatile unsigned int kind;
    S();
    void setValue(const String&);
};

S::S()
{
    volatile unsigned int* p =
        reinterpret_cast<volatile unsigned int*>(this);
    p[0x00 / 4] = reinterpret_cast<unsigned int>(table00);
    p[0x10 / 4] = reinterpret_cast<unsigned int>(table10);
    p[0x14 / 4] = reinterpret_cast<unsigned int>(table14);
    p[0x20 / 4] = reinterpret_cast<unsigned int>(table20);
    p[0x24 / 4] = reinterpret_cast<unsigned int>(table24);
    p[0x44 / 4] = reinterpret_cast<unsigned int>(table44);
    p[0x64 / 4] = reinterpret_cast<unsigned int>(table64);
    p[0x84 / 4] = reinterpret_cast<unsigned int>(table84);
    p[0xa4 / 4] = reinterpret_cast<unsigned int>(tableA4);
    p[0xc4 / 4] = reinterpret_cast<unsigned int>(tableC4);
    p[0x130 / 4] = reinterpret_cast<unsigned int>(table130);
    kind = 0xe2;
    String name("Skin");
    setValue(name);
}
