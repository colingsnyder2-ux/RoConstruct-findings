// from server: 100% by king_originala
// roc 2008-06 005d10a0  unit: RBX::VStarterPackService::?$FactoryProduct  size: 197 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d10a0
//
// 005d10a0  6aff                 push -1
// 005d10a2  6831577d00           push 0x7d5731
// 005d10a7  64a100000000         mov eax, dword ptr fs:[0]
// 005d10ad  50                   push eax
// 005d10ae  64892500000000       mov dword ptr fs:[0], esp
// 005d10b5  83ec20               sub esp, 0x20
// 005d10b8  56                   push esi
// 005d10b9  8bf1                 mov esi, ecx
// 005d10bb  89742404             mov dword ptr [esp + 4], esi
// 005d10bf  e8bcf9ffff           call 0x5d0a80
// 005d10c4  6858a78300           push 0x83a758
// 005d10c9  8d4c240c             lea ecx, [esp + 0xc]
// 005d10cd  c744243000000000     mov dword ptr [esp + 0x30], 0
// 005d10d5  c706fcac8300         mov dword ptr [esi], 0x83acfc
// 005d10db  c74610ecac8300       mov dword ptr [esi + 0x10], 0x83acec
// 005d10e2  c74614e4ac8300       mov dword ptr [esi + 0x14], 0x83ace4
// 005d10e9  c74620dcac8300       mov dword ptr [esi + 0x20], 0x83acdc
// 005d10f0  c74624ccac8300       mov dword ptr [esi + 0x24], 0x83accc
// 005d10f7  c74644bcac8300       mov dword ptr [esi + 0x44], 0x83acbc
// 005d10fe  c74664acac8300       mov dword ptr [esi + 0x64], 0x83acac
// 005d1105  c786840000009cac8300 mov dword ptr [esi + 0x84], 0x83ac9c
// 005d110f  c786a40000008cac8300 mov dword ptr [esi + 0xa4], 0x83ac8c
// 005d1119  c786c40000007cac8300 mov dword ptr [esi + 0xc4], 0x83ac7c
// 005d1123  c7863001000074ac8300 mov dword ptr [esi + 0x130], 0x83ac74
// 005d112d  ff1558248000         call dword ptr [0x802458]
// 005d1133  8d442408             lea eax, [esp + 8]
// 005d1137  50                   push eax
// 005d1138  8bce                 mov ecx, esi
// 005d113a  c644243001           mov byte ptr [esp + 0x30], 1
// 005d113f  e84c9ef8ff           call 0x55af90
// 005d1144  8d4c2408             lea ecx, [esp + 8]
// 005d1148  c644242c00           mov byte ptr [esp + 0x2c], 0
// 005d114d  ff1568248000         call dword ptr [0x802468]
// 005d1153  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005d1157  8bc6                 mov eax, esi
// 005d1159  5e                   pop esi
// 005d115a  64890d00000000       mov dword ptr fs:[0], ecx
// 005d1161  83c42c               add esp, 0x2c
// 005d1164  c3                   ret 

struct String;
typedef void (__thiscall *StringConstructor)(String*, const char*);
typedef void (__thiscall *StringDestructor)(String*);

extern StringConstructor stringConstructor;
extern StringDestructor stringDestructor;

struct String {
    unsigned char storage[28];
    String(const char*);
    ~String();
};

__forceinline String::String(const char* text)
{
    stringConstructor(this, text);
}

__forceinline String::~String()
{
    stringDestructor(this);
}

struct P0 {
    virtual void f0();
    unsigned char padding[12];
};
struct P1 {
    virtual void f1();
};
struct P2 {
    virtual void f2();
    unsigned char padding[8];
};
struct P3 {
    virtual void f3();
};
struct P4 {
    virtual void f4();
    unsigned char padding[28];
};
struct P5 {
    virtual void f5();
    unsigned char padding[28];
};
struct P6 {
    virtual void f6();
    unsigned char padding[28];
};
struct P7 {
    virtual void f7();
    unsigned char padding[28];
};
struct P8 {
    virtual void f8();
    unsigned char padding[28];
};
struct P9 {
    virtual void f9();
    unsigned char padding[104];
};
struct P10 {
    virtual void f10();
};

struct Base : P0, P1, P2, P3, P4, P5, P6, P7, P8, P9, P10 {
    Base();
    ~Base();
    void setName(const String&);
};

struct S : Base {
    S();
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual void f7();
    virtual void f8();
    virtual void f9();
    virtual void f10();
};

S::S()
{
    String name((const char*)0x83a758);
    setName(name);
}
