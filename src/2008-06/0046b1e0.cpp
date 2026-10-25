// from server: 100% by king_originala
// roc 2008-06 0046b1e0  unit: VCWorkspace::?$CComObject  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046b1e0
//
// 0046b1e0  6aff                 push -1
// 0046b1e2  6848397c00           push 0x7c3948
// 0046b1e7  64a100000000         mov eax, dword ptr fs:[0]
// 0046b1ed  50                   push eax
// 0046b1ee  64892500000000       mov dword ptr fs:[0], esp
// 0046b1f5  51                   push ecx
// 0046b1f6  56                   push esi
// 0046b1f7  8bf1                 mov esi, ecx
// 0046b1f9  89742404             mov dword ptr [esp + 4], esi
// 0046b1fd  8d4e28               lea ecx, [esi + 0x28]
// 0046b200  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0046b208  e863feffff           call 0x46b070
// 0046b20d  8d4e04               lea ecx, [esi + 4]
// 0046b210  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0046b218  e8b394faff           call 0x4146d0
// 0046b21d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0046b221  5e                   pop esi
// 0046b222  64890d00000000       mov dword ptr fs:[0], ecx
// 0046b229  83c410               add esp, 0x10
// 0046b22c  c3                   ret 

struct A {
    char data[36];
    ~A();
};

struct B {
    ~B();
};

struct S {
    unsigned int prefix;
    A a;
    B b;
    ~S();
};

S::~S()
{
}
