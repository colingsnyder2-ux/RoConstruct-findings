// from server: 100% by tester
// roc 2008-06 00544320  unit: RBX::RenderBase::VChunk::?$WeakReferenceCountedPointer  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00544320
//
// 00544320  55                   push ebp
// 00544321  8bec                 mov ebp, esp
// 00544323  51                   push ecx
// 00544324  894dfc               mov dword ptr [ebp - 4], ecx
// 00544327  8b45fc               mov eax, dword ptr [ebp - 4]
// 0054432a  c70000000000         mov dword ptr [eax], 0
// 00544330  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00544333  8b11                 mov edx, dword ptr [ecx]
// 00544335  52                   push edx
// 00544336  8b4dfc               mov ecx, dword ptr [ebp - 4]
// 00544339  e8b2e2ffff           call 0x5425f0
// 0054433e  8b45fc               mov eax, dword ptr [ebp - 4]
// 00544341  8be5                 mov esp, ebp
// 00544343  5d                   pop ebp
// 00544344  c20400               ret 4

#pragma optimize("", off)

struct S {
    void* pointer;
    void assign(void*);
    S(const S&);
};

S::S(const S& other) {
    pointer = 0;
    assign(other.pointer);
}
