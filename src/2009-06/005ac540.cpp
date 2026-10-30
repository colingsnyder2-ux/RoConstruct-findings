// roc 2009-06 005ac540  unit: RBX::Mesh  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005ac540
//
// 005ac540  55                   push ebp
// 005ac541  8bec                 mov ebp, esp
// 005ac543  51                   push ecx
// 005ac544  894dfc               mov dword ptr [ebp - 4], ecx
// 005ac547  33c0                 xor eax, eax
// 005ac549  75fc                 jne 0x5ac547
// 005ac54b  33c9                 xor ecx, ecx
// 005ac54d  75fc                 jne 0x5ac54b
// 005ac54f  8b55fc               mov edx, dword ptr [ebp - 4]
// 005ac552  8b4204               mov eax, dword ptr [edx + 4]
// 005ac555  83e801               sub eax, 1
// 005ac558  6bc018               imul eax, eax, 0x18
// 005ac55b  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005ac55e  0301                 add eax, dword ptr [ecx]
// 005ac560  8be5                 mov esp, ebp
// 005ac562  5d                   pop ebp
// 005ac563  c3                   ret 
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