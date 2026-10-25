// from server: 100% by king_originala
// roc 2008-06 005dafa0  unit: RBX::VHumanoid::?$BoundFuncDesc  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005dafa0
//
// 005dafa0  6aff                 push -1
// 005dafa2  68fe5e7d00           push 0x7d5efe
// 005dafa7  64a100000000         mov eax, dword ptr fs:[0]
// 005dafad  50                   push eax
// 005dafae  64892500000000       mov dword ptr fs:[0], esp
// 005dafb5  51                   push ecx
// 005dafb6  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005dafba  56                   push esi
// 005dafbb  8bf1                 mov esi, ecx
// 005dafbd  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 005dafc1  50                   push eax
// 005dafc2  51                   push ecx
// 005dafc3  8974240c             mov dword ptr [esp + 0xc], esi
// 005dafc7  e89458feff           call 0x5c0860
// 005dafcc  50                   push eax
// 005dafcd  8bce                 mov ecx, esi
// 005dafcf  e8bca7fbff           call 0x595790
// 005dafd4  8b542418             mov edx, dword ptr [esp + 0x18]
// 005dafd8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005dafdc  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005dafe0  895638               mov dword ptr [esi + 0x38], edx
// 005dafe3  89463c               mov dword ptr [esi + 0x3c], eax
// 005dafe6  894e40               mov dword ptr [esi + 0x40], ecx
// 005dafe9  8d4e44               lea ecx, [esi + 0x44]
// 005dafec  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005daff4  c706bcd78300         mov dword ptr [esi], 0x83d7bc
// 005daffa  e8c19afbff           call 0x594ac0
// 005dafff  8d4e4c               lea ecx, [esi + 0x4c]
// 005db002  c644241001           mov byte ptr [esp + 0x10], 1
// 005db007  e8b49afbff           call 0x594ac0
// 005db00c  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 005db010  8b442428             mov eax, dword ptr [esp + 0x28]
// 005db014  52                   push edx
// 005db015  50                   push eax
// 005db016  8bce                 mov ecx, esi
// 005db018  c644241802           mov byte ptr [esp + 0x18], 2
// 005db01d  e80ec8ffff           call 0x5d7830
// 005db022  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005db026  8bc6                 mov eax, esi
// 005db028  5e                   pop esi
// 005db029  64890d00000000       mov dword ptr fs:[0], ecx
// 005db030  83c410               add esp, 0x10
// 005db033  c21c00               ret 0x1c

extern "C" void* __stdcall makeDescriptor(const char*, int);

struct Base {
    virtual ~Base();
    char storage[0x34];
    Base(void*);
};

struct Value {
    void* type;
    int data;
    Value();
    ~Value();
};

struct Member {
    int a;
    int b;
    int c;
};

struct S : Base {
    Member member;
    Value value0;
    Value value1;

    S(Member, const char*, void*, void*, int);
    virtual ~S();
    void initialize(void*, void*);
};

S::S(Member m, const char* name, void* first, void* second, int flags)
    : Base(makeDescriptor(name, flags)),
      member(m), value0(), value1()
{
    initialize(first, second);
}
