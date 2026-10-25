// from server: 100% by king_originala
// roc 2008-06 005409b0  unit: RBX::RenderBase::AggregatingSceneManager::Bucket  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005409b0
//
// 005409b0  55                   push ebp
// 005409b1  8bec                 mov ebp, esp
// 005409b3  51                   push ecx
// 005409b4  894dfc               mov dword ptr [ebp - 4], ecx
// 005409b7  8b45fc               mov eax, dword ptr [ebp - 4]
// 005409ba  50                   push eax
// 005409bb  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005409be  8b5118               mov edx, dword ptr [ecx + 0x18]
// 005409c1  52                   push edx
// 005409c2  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005409c5  e856d90000           call 0x54e320
// 005409ca  8b4508               mov eax, dword ptr [ebp + 8]
// 005409cd  8be5                 mov esp, ebp
// 005409cf  5d                   pop ebp
// 005409d0  c20400               ret 4

struct S;

struct Result {
    void __thiscall initialize(unsigned int value, S* owner);
};

struct S {
    unsigned char padding[24];
    unsigned int value;
    Result* __thiscall f(Result* result);
};

#pragma optimize("", off)
Result* S::f(Result* result)
{
    result->initialize(value, this);
    return result;
}
#pragma optimize("", on)
