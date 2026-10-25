// from server: 100% by king_originala
// roc 2008-06 005423f0  unit: RBX::RenderBase::VChunk::?$WeakReferenceCountedPointer  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005423f0
//
// 005423f0  55                   push ebp
// 005423f1  8bec                 mov ebp, esp
// 005423f3  51                   push ecx
// 005423f4  894dfc               mov dword ptr [ebp - 4], ecx
// 005423f7  8b45fc               mov eax, dword ptr [ebp - 4]
// 005423fa  8b4818               mov ecx, dword ptr [eax + 0x18]
// 005423fd  51                   push ecx
// 005423fe  e83da20000           call 0x54c640
// 00542403  83c404               add esp, 4
// 00542406  8be5                 mov esp, ebp
// 00542408  5d                   pop ebp
// 00542409  c3                   ret 

#pragma optimize("", off)

struct VChunk {
    char pad[4];
};

char* __cdecl getPointer(VChunk* p);

struct S {
    char pad[0x18];
    VChunk* pointer;
    char* f();
};

char* S::f() {
    return getPointer(pointer);
}
