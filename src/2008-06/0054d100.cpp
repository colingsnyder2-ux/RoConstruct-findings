// from server: 100% by king_originala
// roc 2008-06 0054d100  unit: RBX::RenderBase::Mesh  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0054d100
//
// 0054d100  55                   push ebp
// 0054d101  8bec                 mov ebp, esp
// 0054d103  51                   push ecx
// 0054d104  894dfc               mov dword ptr [ebp - 4], ecx
// 0054d107  8b4508               mov eax, dword ptr [ebp + 8]
// 0054d10a  50                   push eax
// 0054d10b  e8a0430000           call 0x5514b0
// 0054d110  83c404               add esp, 4
// 0054d113  8be5                 mov esp, ebp
// 0054d115  5d                   pop ebp
// 0054d116  c20400               ret 4

extern "C" int __cdecl helper(int);

struct Mesh {
    int f(int);
};

#pragma optimize("", off)
int Mesh::f(int value)
{
    return helper(value);
}
