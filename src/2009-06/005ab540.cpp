// roc 2009-06 005ab540  unit: RBX::Mesh  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ab540
//
// 005ab540  55                   push ebp
// 005ab541  8bec                 mov ebp, esp
// 005ab543  51                   push ecx
// 005ab544  894dfc               mov dword ptr [ebp - 4], ecx
// 005ab547  33c0                 xor eax, eax
// 005ab549  75fc                 jne 0x5ab547
// 005ab54b  33c9                 xor ecx, ecx
// 005ab54d  75fc                 jne 0x5ab54b
// 005ab54f  8b55fc               mov edx, dword ptr [ebp - 4]
// 005ab552  8b02                 mov eax, dword ptr [edx]
// 005ab554  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005ab557  8d0488               lea eax, [eax + ecx*4]
// 005ab55a  8be5                 mov esp, ebp
// 005ab55c  5d                   pop ebp
// 005ab55d  c20400               ret 4
// copied from an identical function in another client (function ?element@Mesh@@QAEPAHH@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
#pragma optimize("", off)

struct Mesh {
    int* data;
    int* element(int index);
};

int* Mesh::element(int index)
{
    do {} while (0);
    do {} while (0);
    return data + index;
}