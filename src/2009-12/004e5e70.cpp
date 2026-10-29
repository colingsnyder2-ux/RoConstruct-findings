// roc 2009-12 004e5e70  unit: RBX::Mesh  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004e5e70
//
// 004e5e70  55                   push ebp
// 004e5e71  8bec                 mov ebp, esp
// 004e5e73  51                   push ecx
// 004e5e74  894dfc               mov dword ptr [ebp - 4], ecx
// 004e5e77  33c0                 xor eax, eax
// 004e5e79  75fc                 jne 0x4e5e77
// 004e5e7b  33c9                 xor ecx, ecx
// 004e5e7d  75fc                 jne 0x4e5e7b
// 004e5e7f  8b55fc               mov edx, dword ptr [ebp - 4]
// 004e5e82  8b4204               mov eax, dword ptr [edx + 4]
// 004e5e85  83e801               sub eax, 1
// 004e5e88  6bc018               imul eax, eax, 0x18
// 004e5e8b  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 004e5e8e  0301                 add eax, dword ptr [ecx]
// 004e5e90  8be5                 mov esp, ebp
// 004e5e92  5d                   pop ebp
// 004e5e93  c3                   ret 
// copied from an identical function in another client (function ?f@S@@QAEPAUElement@@XZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct Element {
    char data[24];
};

struct S {
    Element* data;
    int count;
    Element* f();
};

#pragma optimize("", off)
Element* S::f()
{
    do {} while (0);
    do {} while (0);
    return data + (count - 1);
}
#pragma optimize("", on)