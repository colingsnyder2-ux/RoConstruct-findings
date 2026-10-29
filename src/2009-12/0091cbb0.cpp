// roc 2009-12 0091cbb0  unit: RBX::VChunk::?$WeakReferenceCountedPointer  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0091cbb0
//
// 0091cbb0  55                   push ebp
// 0091cbb1  8bec                 mov ebp, esp
// 0091cbb3  51                   push ecx
// 0091cbb4  894dfc               mov dword ptr [ebp - 4], ecx
// 0091cbb7  33c0                 xor eax, eax
// 0091cbb9  75fc                 jne 0x91cbb7
// 0091cbbb  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0091cbbe  c7410400000000       mov dword ptr [ecx + 4], 0
// 0091cbc5  8be5                 mov esp, ebp
// 0091cbc7  5d                   pop ebp
// 0091cbc8  c3                   ret 
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