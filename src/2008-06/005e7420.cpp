// from server: 100% by tester
// roc 2008-06 005e7420  unit: RBX::Ball  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e7420
//
// 005e7420  8b442404             mov eax, dword ptr [esp + 4]
// 005e7424  3b4114               cmp eax, dword ptr [ecx + 0x14]
// 005e7427  7409                 je 0x5e7432
// 005e7429  83795800             cmp dword ptr [ecx + 0x58], 0
// 005e742d  7503                 jne 0x5e7432
// 005e742f  894114               mov dword ptr [ecx + 0x14], eax
// 005e7432  c20400               ret 4

namespace RBX {
class Primitive
{
    char gap0[0x14];
    unsigned int sizeMultiplier;
    char gap18[0x40];
    void* world;
public:
    void setSizeMultiplier(unsigned int value);
};

void Primitive::setSizeMultiplier(unsigned int value)
{
    if (value != sizeMultiplier && world == 0)
        sizeMultiplier = value;
}
}
