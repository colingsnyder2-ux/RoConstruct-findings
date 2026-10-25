// from server: 100% by king_originala
// roc 2008-06 0054c200  unit: RBX::RenderBase::Mesh  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0054c200
//
// 0054c200  55                   push ebp
// 0054c201  8bec                 mov ebp, esp
// 0054c203  51                   push ecx
// 0054c204  894dfc               mov dword ptr [ebp - 4], ecx
// 0054c207  6a00                 push 0
// 0054c209  6a00                 push 0
// 0054c20b  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054c20e  e81d190000           call 0x54db30
// 0054c213  8b45fc               mov eax, dword ptr [ebp - 4]
// 0054c216  8be5                 mov esp, ebp
// 0054c218  5d                   pop ebp
// 0054c219  c3                   ret 

struct S {
    S();
    void initialize(int, int);
};

#pragma optimize("", off)
S::S() {
    initialize(0, 0);
}
