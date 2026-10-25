// from server: 100% by king_originala
// roc 2008-06 005d0c10  unit: RBX::VLegacyHopperService::?$FactoryProduct  size: 199 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d0c10
//
// 005d0c10  6aff                 push -1
// 005d0c12  68cf567d00           push 0x7d56cf
// 005d0c17  64a100000000         mov eax, dword ptr fs:[0]
// 005d0c1d  50                   push eax
// 005d0c1e  64892500000000       mov dword ptr fs:[0], esp
// 005d0c25  83ec08               sub esp, 8
// 005d0c28  56                   push esi
// 005d0c29  8bf1                 mov esi, ecx
// 005d0c2b  57                   push edi
// 005d0c2c  89742408             mov dword ptr [esp + 8], esi
// 005d0c30  e85bf8ffff           call 0x5d0490
// 005d0c35  8d8e48010000         lea ecx, [esi + 0x148]
// 005d0c3b  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005d0c43  c706f4b28300         mov dword ptr [esi], 0x83b2f4
// 005d0c49  c74610e4b28300       mov dword ptr [esi + 0x10], 0x83b2e4
// 005d0c50  c74614dcb28300       mov dword ptr [esi + 0x14], 0x83b2dc
// 005d0c57  c74620d4b28300       mov dword ptr [esi + 0x20], 0x83b2d4
// 005d0c5e  c74624c4b28300       mov dword ptr [esi + 0x24], 0x83b2c4
// 005d0c65  c74644b4b28300       mov dword ptr [esi + 0x44], 0x83b2b4
// 005d0c6c  c74664a4b28300       mov dword ptr [esi + 0x64], 0x83b2a4
// 005d0c73  c7868400000094b28300 mov dword ptr [esi + 0x84], 0x83b294
// 005d0c7d  c786a400000084b28300 mov dword ptr [esi + 0xa4], 0x83b284
// 005d0c87  c786c400000074b28300 mov dword ptr [esi + 0xc4], 0x83b274
// 005d0c91  c786300100006cb28300 mov dword ptr [esi + 0x130], 0x83b26c
// 005d0c9b  e8d0ebffff           call 0x5cf870
// 005d0ca0  8dbe80010000         lea edi, [esi + 0x180]
// 005d0ca6  8bcf                 mov ecx, edi
// 005d0ca8  c644241801           mov byte ptr [esp + 0x18], 1
// 005d0cad  897c240c             mov dword ptr [esp + 0xc], edi
// 005d0cb1  ff1560248000         call dword ptr [0x802460]
// 005d0cb7  c644241802           mov byte ptr [esp + 0x18], 2
// 005d0cbc  e8af35f8ff           call 0x554270
// 005d0cc1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005d0cc5  89471c               mov dword ptr [edi + 0x1c], eax
// 005d0cc8  5f                   pop edi
// 005d0cc9  8bc6                 mov eax, esi
// 005d0ccb  5e                   pop esi
// 005d0ccc  64890d00000000       mov dword ptr fs:[0], ecx
// 005d0cd3  83c414               add esp, 0x14
// 005d0cd6  c3                   ret 

struct Base {
    unsigned int data[82];
    Base();
    ~Base();
};

struct Part {
    unsigned char data[56];
    void initialize();
};

struct S;

struct Member {
    unsigned char data[56];
    Member(S*);
    ~Member();
};

struct StringMember {
    unsigned char data[28];
    StringMember();
    ~StringMember();
};

extern void (__thiscall * const constructString)(StringMember*);
extern unsigned int __cdecl getLocalScope();

extern unsigned char table0[];
extern unsigned char table10[];
extern unsigned char table14[];
extern unsigned char table20[];
extern unsigned char table24[];
extern unsigned char table44[];
extern unsigned char table64[];
extern unsigned char table84[];
extern unsigned char tableA4[];
extern unsigned char tableC4[];
extern unsigned char table130[];

struct Guid {
    StringMember text;
    unsigned int scope;
    Guid();
    ~Guid();
};

struct S : Base {
    Member member;
    Guid guid;
    S();
};

__forceinline Member::Member(S* owner)
{
    unsigned int* p = reinterpret_cast<unsigned int*>(owner);
    p[0] = reinterpret_cast<unsigned int>(table0);
    p[4] = reinterpret_cast<unsigned int>(table10);
    p[5] = reinterpret_cast<unsigned int>(table14);
    p[8] = reinterpret_cast<unsigned int>(table20);
    p[9] = reinterpret_cast<unsigned int>(table24);
    p[17] = reinterpret_cast<unsigned int>(table44);
    p[25] = reinterpret_cast<unsigned int>(table64);
    p[33] = reinterpret_cast<unsigned int>(table84);
    p[41] = reinterpret_cast<unsigned int>(tableA4);
    p[49] = reinterpret_cast<unsigned int>(tableC4);
    p[76] = reinterpret_cast<unsigned int>(table130);
    reinterpret_cast<Part*>(this)->initialize();
}

__forceinline StringMember::StringMember()
{
    constructString(this);
}

__forceinline Guid::Guid() : text()
{
    scope = getLocalScope();
}

S::S() : Base(), member(this), guid()
{
}
