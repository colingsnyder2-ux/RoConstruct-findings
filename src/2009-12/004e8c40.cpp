// roc 2009-12 004e8c40  unit: seg_004e0000  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004e8c40
//
// 004e8c40  55                   push ebp
// 004e8c41  8bec                 mov ebp, esp
// 004e8c43  51                   push ecx
// 004e8c44  894dfc               mov dword ptr [ebp - 4], ecx
// 004e8c47  33c0                 xor eax, eax
// 004e8c49  75fc                 jne 0x4e8c47
// 004e8c4b  33c9                 xor ecx, ecx
// 004e8c4d  75fc                 jne 0x4e8c4b
// 004e8c4f  8b55fc               mov edx, dword ptr [ebp - 4]
// 004e8c52  8b02                 mov eax, dword ptr [edx]
// 004e8c54  8b4d08               mov ecx, dword ptr [ebp + 8]
// 004e8c57  8d0488               lea eax, [eax + ecx*4]
// 004e8c5a  8be5                 mov esp, ebp
// 004e8c5c  5d                   pop ebp
// 004e8c5d  c20400               ret 4
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