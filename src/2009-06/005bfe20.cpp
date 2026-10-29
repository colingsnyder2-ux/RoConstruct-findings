// roc 2009-06 005bfe20  unit: RBX::VChunk::?$WeakReferenceCountedPointer  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005bfe20
//
// 005bfe20  55                   push ebp
// 005bfe21  8bec                 mov ebp, esp
// 005bfe23  51                   push ecx
// 005bfe24  894dfc               mov dword ptr [ebp - 4], ecx
// 005bfe27  33c0                 xor eax, eax
// 005bfe29  75fc                 jne 0x5bfe27
// 005bfe2b  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 005bfe2e  c7410400000000       mov dword ptr [ecx + 4], 0
// 005bfe35  8be5                 mov esp, ebp
// 005bfe37  5d                   pop ebp
// 005bfe38  c3                   ret 
// copied from an identical function in another client (function ?f@S@@QAEXXZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct S {
    unsigned int reserved;
    unsigned int value;
    void f();
};

#pragma optimize("", off)
void S::f()
{
    do {
    } while (0);
    value = 0;
}
#pragma optimize("", on)