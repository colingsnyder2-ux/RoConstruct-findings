// from server: 100% by king_originala
// roc 2008-06 005d5510  unit: RBX::VSkin::?$FactoryProduct  size: 235 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d5510
//
// 005d5510  6aff                 push -1
// 005d5512  68a85a7d00           push 0x7d5aa8
// 005d5517  64a100000000         mov eax, dword ptr fs:[0]
// 005d551d  50                   push eax
// 005d551e  64892500000000       mov dword ptr fs:[0], esp
// 005d5525  83ec24               sub esp, 0x24
// 005d5528  56                   push esi
// 005d5529  8bf1                 mov esi, ecx
// 005d552b  57                   push edi
// 005d552c  89742408             mov dword ptr [esp + 8], esi
// 005d5530  e88bfcffff           call 0x5d51c0
// 005d5535  8dbe34010000         lea edi, [esi + 0x134]
// 005d553b  8bcf                 mov ecx, edi
// 005d553d  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005d5545  c70694c98300         mov dword ptr [esi], 0x83c994
// 005d554b  c7461084c98300       mov dword ptr [esi + 0x10], 0x83c984
// 005d5552  c746147cc98300       mov dword ptr [esi + 0x14], 0x83c97c
// 005d5559  c7462074c98300       mov dword ptr [esi + 0x20], 0x83c974
// 005d5560  c7462464c98300       mov dword ptr [esi + 0x24], 0x83c964
// 005d5567  c7464454c98300       mov dword ptr [esi + 0x44], 0x83c954
// 005d556e  c7466444c98300       mov dword ptr [esi + 0x64], 0x83c944
// 005d5575  c7868400000034c98300 mov dword ptr [esi + 0x84], 0x83c934
// 005d557f  c786a400000024c98300 mov dword ptr [esi + 0xa4], 0x83c924
// 005d5589  c786c400000014c98300 mov dword ptr [esi + 0xc4], 0x83c914
// 005d5593  c786300100000cc98300 mov dword ptr [esi + 0x130], 0x83c90c
// 005d559d  897c240c             mov dword ptr [esp + 0xc], edi
// 005d55a1  ff1560248000         call dword ptr [0x802460]
// 005d55a7  c644243401           mov byte ptr [esp + 0x34], 1
// 005d55ac  e8bfecf7ff           call 0x554270
// 005d55b1  89471c               mov dword ptr [edi + 0x1c], eax
// 005d55b4  68f8c88300           push 0x83c8f8
// 005d55b9  8d4c2414             lea ecx, [esp + 0x14]
// 005d55bd  c644243802           mov byte ptr [esp + 0x38], 2
// 005d55c2  ff1558248000         call dword ptr [0x802458]
// 005d55c8  8d442410             lea eax, [esp + 0x10]
// 005d55cc  50                   push eax
// 005d55cd  8bce                 mov ecx, esi
// 005d55cf  c644243803           mov byte ptr [esp + 0x38], 3
// 005d55d4  e8b759f8ff           call 0x55af90
// 005d55d9  8d4c2410             lea ecx, [esp + 0x10]
// 005d55dd  c644243402           mov byte ptr [esp + 0x34], 2
// 005d55e2  ff1568248000         call dword ptr [0x802468]
// 005d55e8  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005d55ec  5f                   pop edi
// 005d55ed  8bc6                 mov eax, esi
// 005d55ef  5e                   pop esi
// 005d55f0  64890d00000000       mov dword ptr fs:[0], ecx
// 005d55f7  83c430               add esp, 0x30
// 005d55fa  c3                   ret 

struct Name;
extern const Name& __cdecl getLocalScope();

extern const char table00[], table10[], table14[], table20[], table24[];
extern const char table44[], table64[], table84[], tableA4[], tableC4[];
extern const char table130[];
extern const char shirtGraphic[];

struct String;
extern void (__thiscall *stringDefaultConstruct)(String*);
extern void (__thiscall *stringTextConstruct)(String*, const char*);
extern void (__thiscall *stringDestroy)(String*);

struct String {
    char storage[28];
    String(void* owner);
    String(const char* text);
    ~String();
};

__forceinline void* installTables(void* owner) {
    unsigned long* p = static_cast<unsigned long*>(owner);
    p[0x00 / 4] = reinterpret_cast<unsigned long>(table00);
    p[0x10 / 4] = reinterpret_cast<unsigned long>(table10);
    p[0x14 / 4] = reinterpret_cast<unsigned long>(table14);
    p[0x20 / 4] = reinterpret_cast<unsigned long>(table20);
    p[0x24 / 4] = reinterpret_cast<unsigned long>(table24);
    p[0x44 / 4] = reinterpret_cast<unsigned long>(table44);
    p[0x64 / 4] = reinterpret_cast<unsigned long>(table64);
    p[0x84 / 4] = reinterpret_cast<unsigned long>(table84);
    p[0xa4 / 4] = reinterpret_cast<unsigned long>(tableA4);
    p[0xc4 / 4] = reinterpret_cast<unsigned long>(tableC4);
    p[0x130 / 4] = reinterpret_cast<unsigned long>(table130);
    return owner;
}

__forceinline String::String(void* owner) {
    stringDefaultConstruct(this);
}

inline String::String(const char* text) {
    stringTextConstruct(this, text);
}

inline String::~String() {
    stringDestroy(this);
}

struct Base {
    char storage[0x134];
    Base();
    ~Base();
    void setValue(const String&);
};

struct Guid {
    String value;
    const Name* scope;
    Guid(void* owner);
    ~Guid();
};

__forceinline Guid::Guid(void* owner)
    : value(owner), scope(&getLocalScope()) {
}

inline Guid::~Guid() {
}

struct S : Base {
    Guid guid;
    S();
};

S::S() : Base(), guid(installTables(this)) {
    String name(shirtGraphic);
    setValue(name);
}
