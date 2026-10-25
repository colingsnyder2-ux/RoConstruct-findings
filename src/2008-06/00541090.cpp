// from server: 100% by king_originala
// roc 2008-06 00541090  unit: RBX::RenderBase::VChunk::?$WeakReferenceCountedPointer  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00541090
//
// 00541090  55                   push ebp
// 00541091  8bec                 mov ebp, esp
// 00541093  51                   push ecx
// 00541094  894dfc               mov dword ptr [ebp - 4], ecx
// 00541097  33c0                 xor eax, eax
// 00541099  75fc                 jne 0x541097
// 0054109b  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 0054109e  c7410400000000       mov dword ptr [ecx + 4], 0
// 005410a5  8be5                 mov esp, ebp
// 005410a7  5d                   pop ebp
// 005410a8  c3                   ret 

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
