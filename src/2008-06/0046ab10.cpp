// from server: 100% by king_originala
// roc 2008-06 0046ab10  unit: VCWorkspace::?$CComObject  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046ab10
//
// 0046ab10  64a100000000         mov eax, dword ptr fs:[0]
// 0046ab16  6aff                 push -1
// 0046ab18  6808357c00           push 0x7c3508
// 0046ab1d  50                   push eax
// 0046ab1e  64892500000000       mov dword ptr fs:[0], esp
// 0046ab25  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 0046ab28  c744240800000000     mov dword ptr [esp + 8], 0
// 0046ab30  e81ba80e00           call 0x555350
// 0046ab35  8d4c2414             lea ecx, [esp + 0x14]
// 0046ab39  c7442408ffffffff     mov dword ptr [esp + 8], 0xffffffff
// 0046ab41  e81a81fbff           call 0x422c60
// 0046ab46  8b0c24               mov ecx, dword ptr [esp]
// 0046ab49  64890d00000000       mov dword ptr fs:[0], ecx
// 0046ab50  83c40c               add esp, 0xc
// 0046ab53  c21400               ret 0x14

struct Value
{
    unsigned char data[16];
    ~Value();
};

struct Target
{
    void func_00555350();
};

struct S
{
    unsigned char padding[20];
    Target* target;
    void func_0046ab10(int, Value);
};

void S::func_0046ab10(int, Value)
{
    target->func_00555350();
}
