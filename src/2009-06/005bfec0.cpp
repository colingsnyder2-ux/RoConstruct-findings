// roc 2009-06 005bfec0  unit: RBX::VChunk::?$WeakReferenceCountedPointer  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005bfec0
//
// 005bfec0  55                   push ebp
// 005bfec1  8bec                 mov ebp, esp
// 005bfec3  51                   push ecx
// 005bfec4  894dfc               mov dword ptr [ebp - 4], ecx
// 005bfec7  8b45fc               mov eax, dword ptr [ebp - 4]
// 005bfeca  33c9                 xor ecx, ecx
// 005bfecc  833800               cmp dword ptr [eax], 0
// 005bfecf  0f94c1               sete cl
// 005bfed2  8ac1                 mov al, cl
// 005bfed4  8be5                 mov esp, ebp
// 005bfed6  5d                   pop ebp
// 005bfed7  c3                   ret 
// copied from an identical function in another client (function ?f@S@@QAE_NXZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
#pragma optimize("", off)
struct S {
    void* pointer;
    bool f();
};

bool S::f() {
    return pointer == 0;
}