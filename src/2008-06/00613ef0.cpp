// from server: 100% by tester
// roc 2008-06 00613ef0  unit: RBX::RevoluteLink  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00613ef0
//
// 00613ef0  8bc1                 mov eax, ecx
// 00613ef2  8b4814               mov ecx, dword ptr [eax + 0x14]
// 00613ef5  85c9                 test ecx, ecx
// 00613ef7  7405                 je 0x613efe
// 00613ef9  e9f2ffffff           jmp 0x613ef0
// 00613efe  c3                   ret 

namespace RBX {
class Body
{
    char gap0[0x14];
    Body* parent;
public:
    Body* calcRoot();
};

Body* Body::calcRoot()
{
    return parent ? parent->calcRoot() : this;
}
}
