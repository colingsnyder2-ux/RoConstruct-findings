// from server: 100% by king_originala
// roc 2008-06 004ada80  unit: RBX::Network::Replicator::ChangePropertyItem  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ada80
//
// 004ada80  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004ada84  83ec0c               sub esp, 0xc
// 004ada87  8d0424               lea eax, [esp]
// 004ada8a  50                   push eax
// 004ada8b  e890f6ffff           call 0x4ad120
// 004ada90  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004ada94  50                   push eax
// 004ada95  51                   push ecx
// 004ada96  e8058fffff           call 0x4a69a0
// 004ada9b  83c414               add esp, 0x14
// 004ada9e  c3                   ret 

struct Vector3 {
    float x, y, z;
};

struct S {
    Vector3 get();
};

extern void __cdecl consume(void* destination, const Vector3& value);

void __cdecl f(S* object, void* destination)
{
    consume(destination, object->get());
}
