// roc 2009-06 005af420  unit: RBX::TextureProxyBase  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005af420
//
// 005af420  55                   push ebp
// 005af421  8bec                 mov ebp, esp
// 005af423  51                   push ecx
// 005af424  894dfc               mov dword ptr [ebp - 4], ecx
// 005af427  8b45fc               mov eax, dword ptr [ebp - 4]
// 005af42a  d94508               fld dword ptr [ebp + 8]
// 005af42d  d9582c               fstp dword ptr [eax + 0x2c]
// 005af430  8be5                 mov esp, ebp
// 005af432  5d                   pop ebp
// 005af433  c20400               ret 4
// copied from an identical function in another client (function ?SetValue@TextureProxyBase@@QAEXM@Z)

// from server: 100% by tester
// roc-cl: 50727
// roc-flags: /Od /Ob0 /GS- /MD
struct TextureProxyBase
{
    void SetValue(float value);
};

void TextureProxyBase::SetValue(float value)
{
    *(float*)((char*)this + 0x2c) = value;
}