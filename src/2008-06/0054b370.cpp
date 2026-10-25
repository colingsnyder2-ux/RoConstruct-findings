// from server: 100% by king_originala
// roc 2008-06 0054b370  unit: RBX::RenderBase::Mesh  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0054b370
//
// 0054b370  55                   push ebp
// 0054b371  8bec                 mov ebp, esp
// 0054b373  83ec08               sub esp, 8
// 0054b376  894df8               mov dword ptr [ebp - 8], ecx
// 0054b379  8d4dff               lea ecx, [ebp - 1]
// 0054b37c  e88f2f0000           call 0x54e310
// 0054b381  50                   push eax
// 0054b382  8d45fe               lea eax, [ebp - 2]
// 0054b385  50                   push eax
// 0054b386  8b4df8               mov ecx, dword ptr [ebp - 8]
// 0054b389  e8c2120000           call 0x54c650
// 0054b38e  8b45f8               mov eax, dword ptr [ebp - 8]
// 0054b391  8be5                 mov esp, ebp
// 0054b393  5d                   pop ebp
// 0054b394  c3                   ret 

#pragma optimize("", off)

struct A {
    float& XMin();
};

struct B {};

struct S {
    S();
    void initialize(const B&, float&);
};

S::S()
{
    A a;
    B b;
    initialize(b, a.XMin());
}
