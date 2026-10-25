// from server: 100% by king_originala
// roc 2008-06 00540a80  unit: RBX::RenderBase::AggregatingSceneManager::Bucket  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00540a80
//
// 00540a80  55                   push ebp
// 00540a81  8bec                 mov ebp, esp
// 00540a83  83ec08               sub esp, 8
// 00540a86  894df8               mov dword ptr [ebp - 8], ecx
// 00540a89  8d4dff               lea ecx, [ebp - 1]
// 00540a8c  e87fd80000           call 0x54e310
// 00540a91  50                   push eax
// 00540a92  8d45fe               lea eax, [ebp - 2]
// 00540a95  50                   push eax
// 00540a96  8b4df8               mov ecx, dword ptr [ebp - 8]
// 00540a99  e812130000           call 0x541db0
// 00540a9e  8b45f8               mov eax, dword ptr [ebp - 8]
// 00540aa1  8be5                 mov esp, ebp
// 00540aa3  5d                   pop ebp
// 00540aa4  c3                   ret 

struct Token {
    float& __thiscall get();
};

struct S {
    void __thiscall initialize(Token* token, float& value);
    S* __thiscall f();
};

#pragma optimize("", off)
S* S::f()
{
    Token first;
    Token second;
    initialize(&second, first.get());
    return this;
}
#pragma optimize("", on)
