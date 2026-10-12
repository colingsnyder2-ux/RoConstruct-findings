// from server: 100% by king_originala
// roc 2008-06 0062d820  unit: RBX::ForceField  size: 163 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062d820
//
// 0062d820  6aff                 push -1
// 0062d822  68089b7d00           push 0x7d9b08
// 0062d827  64a100000000         mov eax, dword ptr fs:[0]
// 0062d82d  50                   push eax
// 0062d82e  64892500000000       mov dword ptr fs:[0], esp
// 0062d835  51                   push ecx
// 0062d836  56                   push esi
// 0062d837  8bf1                 mov esi, ecx
// 0062d839  8d8e30010000         lea ecx, [esi + 0x130]
// 0062d83f  89742404             mov dword ptr [esp + 4], esi
// 0062d843  c7062c688400         mov dword ptr [esi], 0x84682c
// 0062d849  c7461020688400       mov dword ptr [esi + 0x10], 0x846820
// 0062d850  c7461418688400       mov dword ptr [esi + 0x14], 0x846818
// 0062d857  c7462010688400       mov dword ptr [esi + 0x20], 0x846810
// 0062d85e  c7462400688400       mov dword ptr [esi + 0x24], 0x846800
// 0062d865  c74644f0678400       mov dword ptr [esi + 0x44], 0x8467f0
// 0062d86c  c74664e0678400       mov dword ptr [esi + 0x64], 0x8467e0
// 0062d873  c78684000000d0678400 mov dword ptr [esi + 0x84], 0x8467d0
// 0062d87d  c786a4000000c0678400 mov dword ptr [esi + 0xa4], 0x8467c0
// 0062d887  c786c4000000b0678400 mov dword ptr [esi + 0xc4], 0x8467b0
// 0062d891  c70198678400         mov dword ptr [ecx], 0x846798
// 0062d897  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0062d89f  e86cfbe4ff           call 0x47d410
// 0062d8a4  8bce                 mov ecx, esi
// 0062d8a6  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0062d8ae  e80df8ffff           call 0x62d0c0
// 0062d8b3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0062d8b7  5e                   pop esi
// 0062d8b8  64890d00000000       mov dword ptr fs:[0], ecx
// 0062d8bf  83c410               add esp, 0x10
// 0062d8c2  c3                   ret 

struct Base
{
    virtual void f();
    unsigned char padding[12];
    ~Base();
};

struct Part4
{
    virtual void f();
};

struct Part12
{
    virtual void f();
    unsigned char padding[8];
};

struct Part32A
{
    virtual void f();
    unsigned char padding[28];
};

struct Part32B
{
    virtual void f();
    unsigned char padding[28];
};

struct Part32C
{
    virtual void f();
    unsigned char padding[28];
};

struct Part32D
{
    virtual void f();
    unsigned char padding[28];
};

struct Part32E
{
    virtual void f();
    unsigned char padding[28];
};

struct Part108
{
    virtual void f();
    unsigned char padding[104];
};

struct Part4B
{
    virtual void f();
};

struct Member
{
    virtual void f();
    ~Member();
};

struct ForceField :
    Base, Part4, Part12, Part4B,
    Part32A, Part32B, Part32C, Part32D, Part32E,
    Part108, Member
{
    virtual void f();
    ~ForceField();
};

ForceField::~ForceField()
{
}
