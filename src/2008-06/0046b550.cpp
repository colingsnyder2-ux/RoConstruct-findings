// from server: 100% by king_originala
// roc 2008-06 0046b550  unit: VCWorkspace::?$CComObject  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046b550
//
// 0046b550  6aff                 push -1
// 0046b552  6848397c00           push 0x7c3948
// 0046b557  64a100000000         mov eax, dword ptr fs:[0]
// 0046b55d  50                   push eax
// 0046b55e  64892500000000       mov dword ptr fs:[0], esp
// 0046b565  51                   push ecx
// 0046b566  8b442418             mov eax, dword ptr [esp + 0x18]
// 0046b56a  56                   push esi
// 0046b56b  8bf1                 mov esi, ecx
// 0046b56d  50                   push eax
// 0046b56e  89742408             mov dword ptr [esp + 8], esi
// 0046b572  e8794a1200           call 0x58fff0
// 0046b577  8d4c241c             lea ecx, [esp + 0x1c]
// 0046b57b  51                   push ecx
// 0046b57c  8d542420             lea edx, [esp + 0x20]
// 0046b580  52                   push edx
// 0046b581  8d4e28               lea ecx, [esi + 0x28]
// 0046b584  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0046b58c  c70648c88100         mov dword ptr [esi], 0x81c848
// 0046b592  e899e52200           call 0x699b30
// 0046b597  8b442418             mov eax, dword ptr [esp + 0x18]
// 0046b59b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0046b59f  894648               mov dword ptr [esi + 0x48], eax
// 0046b5a2  8bc6                 mov eax, esi
// 0046b5a4  5e                   pop esi
// 0046b5a5  64890d00000000       mov dword ptr fs:[0], ecx
// 0046b5ac  83c410               add esp, 0x10
// 0046b5af  c20800               ret 8

struct Base
{
    Base(int value);
    virtual ~Base();
    char data[36];
};

struct Member
{
    Member(const int* first, const int* last);
    ~Member();
    char data[32];
};

struct S : Base
{
    Member member;
    int value;

    S(int value, int initial);
    virtual ~S();
};

S::S(int value, int initial)
    : Base(initial), member(&value + 1, &initial), value(value)
{
}
