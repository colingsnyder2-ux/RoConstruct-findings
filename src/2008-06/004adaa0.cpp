// from server: 100% by king_originala
// roc 2008-06 004adaa0  unit: RBX::Network::Replicator::ChangePropertyItem  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004adaa0
//
// 004adaa0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004adaa4  83ec30               sub esp, 0x30
// 004adaa7  8d0424               lea eax, [esp]
// 004adaaa  50                   push eax
// 004adaab  e8d0f6ffff           call 0x4ad180
// 004adab0  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 004adab4  50                   push eax
// 004adab5  51                   push ecx
// 004adab6  e8f58fffff           call 0x4a6ab0
// 004adabb  83c438               add esp, 0x38
// 004adabe  c3                   ret 

struct Matrix {
    float elements[9];
    Matrix(const Matrix&);
};

struct Transform {
    Matrix rotation;
    float position[3];
};

struct S {
    Transform get();
};

void __cdecl consume(void*, const Transform&);

void __cdecl function(S* object, void* destination)
{
    consume(destination, object->get());
}
