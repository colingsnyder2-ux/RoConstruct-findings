// from server: 100% by king_originala
// roc 2008-06 00552fa0  unit: RBX::RenderBase::AggregateChunk  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00552fa0
//
// 00552fa0  55                   push ebp
// 00552fa1  8bec                 mov ebp, esp
// 00552fa3  51                   push ecx
// 00552fa4  894dfc               mov dword ptr [ebp - 4], ecx
// 00552fa7  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00552faa  e80148eeff           call 0x4377b0
// 00552faf  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00552fb2  83c10c               add ecx, 0xc
// 00552fb5  e8a6d5feff           call 0x540560
// 00552fba  8b45fc               mov eax, dword ptr [ebp - 4]
// 00552fbd  8be5                 mov esp, ebp
// 00552fbf  5d                   pop ebp
// 00552fc0  c3                   ret 

struct Vector3
{
    float x, y, z;
    Vector3();
};

struct Member
{
    Member();
};

struct S
{
    Vector3 first;
    Member second;
    S();
};

#pragma optimize("", off)
S::S()
{
}
