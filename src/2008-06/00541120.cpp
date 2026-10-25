// from server: 100% by king_originala
// roc 2008-06 00541120  unit: RBX::RenderBase::VChunk::?$WeakReferenceCountedPointer  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00541120
//
// 00541120  55                   push ebp
// 00541121  8bec                 mov ebp, esp
// 00541123  51                   push ecx
// 00541124  894dfc               mov dword ptr [ebp - 4], ecx
// 00541127  8b45fc               mov eax, dword ptr [ebp - 4]
// 0054112a  33c9                 xor ecx, ecx
// 0054112c  833800               cmp dword ptr [eax], 0
// 0054112f  0f94c1               sete cl
// 00541132  8ac1                 mov al, cl
// 00541134  8be5                 mov esp, ebp
// 00541136  5d                   pop ebp
// 00541137  c3                   ret 

#pragma optimize("", off)
struct S {
    void* pointer;
    bool f();
};

bool S::f() {
    return pointer == 0;
}
