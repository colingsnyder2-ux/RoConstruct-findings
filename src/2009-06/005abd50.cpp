// roc 2009-06 005abd50  unit: RBX::Mesh  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005abd50
//
// 005abd50  55                   push ebp
// 005abd51  8bec                 mov ebp, esp
// 005abd53  51                   push ecx
// 005abd54  894dfc               mov dword ptr [ebp - 4], ecx
// 005abd57  33c0                 xor eax, eax
// 005abd59  75fc                 jne 0x5abd57
// 005abd5b  33c9                 xor ecx, ecx
// 005abd5d  75fc                 jne 0x5abd5b
// 005abd5f  8b55fc               mov edx, dword ptr [ebp - 4]
// 005abd62  8b02                 mov eax, dword ptr [edx]
// 005abd64  034508               add eax, dword ptr [ebp + 8]
// 005abd67  8be5                 mov esp, ebp
// 005abd69  5d                   pop ebp
// 005abd6a  c20400               ret 4
// copied from an identical function in another client (function ?f@Mesh@@QAEHH@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct Mesh {
    int value;
    int f(int offset);
};

#pragma optimize("", off)
int Mesh::f(int offset)
{
    do {} while (0);
    do {} while (0);
    return value + offset;
}
#pragma optimize("", on)