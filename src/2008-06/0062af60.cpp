// from server: 100% by king_originala
// roc 2008-06 0062af60  unit: RBX::Explosion  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062af60
//
// 0062af60  6aff                 push -1
// 0062af62  6828997d00           push 0x7d9928
// 0062af67  64a100000000         mov eax, dword ptr fs:[0]
// 0062af6d  50                   push eax
// 0062af6e  64892500000000       mov dword ptr fs:[0], esp
// 0062af75  51                   push ecx
// 0062af76  56                   push esi
// 0062af77  8bf1                 mov esi, ecx
// 0062af79  8d8e34010000         lea ecx, [esi + 0x134]
// 0062af7f  89742404             mov dword ptr [esp + 4], esi
// 0062af83  c706a45e8400         mov dword ptr [esi], 0x845ea4
// 0062af89  c74610945e8400       mov dword ptr [esi + 0x10], 0x845e94
// 0062af90  c746148c5e8400       mov dword ptr [esi + 0x14], 0x845e8c
// 0062af97  c74620845e8400       mov dword ptr [esi + 0x20], 0x845e84
// 0062af9e  c74624745e8400       mov dword ptr [esi + 0x24], 0x845e74
// 0062afa5  c74644645e8400       mov dword ptr [esi + 0x44], 0x845e64
// 0062afac  c74664545e8400       mov dword ptr [esi + 0x64], 0x845e54
// 0062afb3  c78684000000445e8400 mov dword ptr [esi + 0x84], 0x845e44
// 0062afbd  c786a4000000345e8400 mov dword ptr [esi + 0xa4], 0x845e34
// 0062afc7  c786c4000000245e8400 mov dword ptr [esi + 0xc4], 0x845e24
// 0062afd1  c78630010000185e8400 mov dword ptr [esi + 0x130], 0x845e18
// 0062afdb  c701005e8400         mov dword ptr [ecx], 0x845e00
// 0062afe1  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0062afe9  e82224e5ff           call 0x47d410
// 0062afee  8bce                 mov ecx, esi
// 0062aff0  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0062aff8  e863ecffff           call 0x629c60
// 0062affd  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0062b001  5e                   pop esi
// 0062b002  64890d00000000       mov dword ptr fs:[0], ecx
// 0062b009  83c410               add esp, 0x10
// 0062b00c  c3                   ret 

struct B0
{
    virtual void f();
    char padding[12];
};

struct B1
{
    virtual void f();
};

struct B2
{
    virtual void f();
    char padding[8];
};

struct B3
{
    virtual void f();
};

struct B4
{
    virtual void f();
    char padding[28];
};

struct B5
{
    virtual void f();
    char padding[28];
};

struct B6
{
    virtual void f();
    char padding[28];
};

struct B7
{
    virtual void f();
    char padding[28];
};

struct B8
{
    virtual void f();
    char padding[28];
};

struct B9
{
    virtual void f();
    char padding[104];
};

struct B10
{
    virtual void f();
};

struct Base : B0, B1, B2, B3, B4, B5, B6, B7, B8, B9, B10
{
    ~Base();
};

struct Member
{
    virtual void f();
    ~Member();
};

struct S : Base, Member
{
    virtual void f();
    ~S();
};

S::~S()
{
}
