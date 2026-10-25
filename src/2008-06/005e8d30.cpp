// from server: 100% by king_originala
// roc 2008-06 005e8d30  unit: RBX::Primitive  size: 177 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e8d30
//
// 005e8d30  6aff                 push -1
// 005e8d32  68c8d37b00           push 0x7bd3c8
// 005e8d37  64a100000000         mov eax, dword ptr fs:[0]
// 005e8d3d  50                   push eax
// 005e8d3e  64892500000000       mov dword ptr fs:[0], esp
// 005e8d45  51                   push ecx
// 005e8d46  56                   push esi
// 005e8d47  8bf1                 mov esi, ecx
// 005e8d49  89742404             mov dword ptr [esp + 4], esi
// 005e8d4d  c706ac6a8200         mov dword ptr [esi], 0x826aac
// 005e8d53  c74610a06a8200       mov dword ptr [esi + 0x10], 0x826aa0
// 005e8d5a  c74614986a8200       mov dword ptr [esi + 0x14], 0x826a98
// 005e8d61  c74620906a8200       mov dword ptr [esi + 0x20], 0x826a90
// 005e8d68  c74624806a8200       mov dword ptr [esi + 0x24], 0x826a80
// 005e8d6f  c74644706a8200       mov dword ptr [esi + 0x44], 0x826a70
// 005e8d76  c74664606a8200       mov dword ptr [esi + 0x64], 0x826a60
// 005e8d7d  c78684000000506a8200 mov dword ptr [esi + 0x84], 0x826a50
// 005e8d87  c786a4000000406a8200 mov dword ptr [esi + 0xa4], 0x826a40
// 005e8d91  c786c4000000306a8200 mov dword ptr [esi + 0xc4], 0x826a30
// 005e8d9b  c78630010000246a8200 mov dword ptr [esi + 0x130], 0x826a24
// 005e8da5  c78634010000186a8200 mov dword ptr [esi + 0x134], 0x826a18
// 005e8daf  8d8e38010000         lea ecx, [esi + 0x138]
// 005e8db5  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005e8dbd  e86e240600           call 0x64b230
// 005e8dc2  8bce                 mov ecx, esi
// 005e8dc4  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005e8dcc  e86f17f7ff           call 0x55a540
// 005e8dd1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005e8dd5  5e                   pop esi
// 005e8dd6  64890d00000000       mov dword ptr fs:[0], ecx
// 005e8ddd  83c410               add esp, 0x10
// 005e8de0  c3                   ret 

struct B0 {
    virtual ~B0();
    char padding[0x0c];
};

struct B1 {
    virtual ~B1();
};

struct B2 {
    virtual ~B2();
    char padding[0x08];
};

struct B3 {
    virtual ~B3();
};

struct B4 {
    virtual ~B4();
    char padding[0x1c];
};

struct B5 {
    virtual ~B5();
    char padding[0x1c];
};

struct B6 {
    virtual ~B6();
    char padding[0x1c];
};

struct B7 {
    virtual ~B7();
    char padding[0x1c];
};

struct B8 {
    virtual ~B8();
    char padding[0x1c];
};

struct B9 {
    virtual ~B9();
    char padding[0x68];
};

struct B10 {
    virtual ~B10();
};

struct B11 {
    virtual ~B11();
};

struct Base : B0, B1, B2, B3, B4, B5, B6, B7, B8, B9, B10, B11 {
    virtual ~Base();
};

struct SleepStage {
    char storage[1];
    ~SleepStage();
};

struct Primitive : Base {
    SleepStage sleepStage;
    virtual ~Primitive();
};

Primitive::~Primitive()
{
}
