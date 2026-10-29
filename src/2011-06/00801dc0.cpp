// roc 2011-06 00801dc0  unit: RBX::Tasks::SequenceBase  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00801dc0
//
// 00801dc0  55                   push ebp
// 00801dc1  8bec                 mov ebp, esp
// 00801dc3  51                   push ecx
// 00801dc4  894dfc               mov dword ptr [ebp - 4], ecx
// 00801dc7  8b45fc               mov eax, dword ptr [ebp - 4]
// 00801dca  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00801dcd  8908                 mov dword ptr [eax], ecx
// 00801dcf  8b45fc               mov eax, dword ptr [ebp - 4]
// 00801dd2  8be5                 mov esp, ebp
// 00801dd4  5d                   pop ebp
// 00801dd5  c20400               ret 4
// copied from an identical function in another client (function ??0S@ns_ROCX000009@@QAE@H@Z)

namespace ns_ROCX000009 {
struct S {
    int value;
    S(int);
};

#pragma optimize("", off)
S::S(int v)
{
    value = v;
}
}
