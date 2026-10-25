// from server: 100% by tester
// roc 2008-06 005e5fa0  unit: RBX::MotorJoint  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e5fa0
//
// 005e5fa0  8b442404             mov eax, dword ptr [esp + 4]
// 005e5fa4  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 005e5fa7  8908                 mov dword ptr [eax], ecx
// 005e5fa9  c7400401000000       mov dword ptr [eax + 4], 1
// 005e5fb0  c20400               ret 4

namespace RBX {
class Primitive;

class PrimIterator
{
    Primitive* primitive;
    int count;
public:
    PrimIterator(Primitive* primitive, int count) : primitive(primitive), count(count) {}
};

class Assembly
{
    char gap0[0x1c];
    Primitive* rootPrimitive;
public:
    PrimIterator assemblyPrimBegin() const;
};

PrimIterator Assembly::assemblyPrimBegin() const
{
    return PrimIterator(rootPrimitive, 1);
}
}
