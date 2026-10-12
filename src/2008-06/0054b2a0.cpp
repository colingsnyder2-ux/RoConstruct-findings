// from server: 79% by king_originala
// roc 2008-06 0054b2a0  unit: RBX::RenderBase::Mesh  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0054b2a0
//
// 0054b2a0  55                   push ebp
// 0054b2a1  8bec                 mov ebp, esp
// 0054b2a3  6aff                 push -1
// 0054b2a5  68b8d37c00           push 0x7cd3b8
// 0054b2aa  64a100000000         mov eax, dword ptr fs:[0]
// 0054b2b0  50                   push eax
// 0054b2b1  83ec08               sub esp, 8
// 0054b2b4  a1c05c9600           mov eax, dword ptr [0x965cc0]
// 0054b2b9  33c5                 xor eax, ebp
// 0054b2bb  50                   push eax
// 0054b2bc  8d45f4               lea eax, [ebp - 0xc]
// 0054b2bf  64a300000000         mov dword ptr fs:[0], eax
// 0054b2c5  894dec               mov dword ptr [ebp - 0x14], ecx
// 0054b2c8  51                   push ecx
// 0054b2c9  8bcc                 mov ecx, esp
// 0054b2cb  8965f0               mov dword ptr [ebp - 0x10], esp
// 0054b2ce  e83d300000           call 0x54e310
// 0054b2d3  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 0054b2d6  e865270000           call 0x54da40
// 0054b2db  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0054b2e2  6a00                 push 0
// 0054b2e4  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 0054b2e7  e814120000           call 0x54c500
// 0054b2ec  c745fcffffffff       mov dword ptr [ebp - 4], 0xffffffff
// 0054b2f3  8b45ec               mov eax, dword ptr [ebp - 0x14]
// 0054b2f6  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0054b2f9  64890d00000000       mov dword ptr fs:[0], ecx
// 0054b300  59                   pop ecx
// 0054b301  8be5                 mov esp, ebp
// 0054b303  5d                   pop ebp
// 0054b304  c3                   ret 

#pragma optimize("", off)
#pragma strict_gs_check(on)

struct Argument {
    unsigned long value;
    Argument();
    Argument(const Argument&);
};

struct Base {
    Base(Argument);
    ~Base();
};

struct S : Base {
    S();
    void initialize(int);
};

S::S() : Base(Argument())
{
    initialize(0);
}
