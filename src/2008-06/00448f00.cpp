// from server: 100% by tester
// roc 2008-06 00448f00  unit: CRenderSettings  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00448f00
//
// 00448f00  8b442404             mov eax, dword ptr [esp + 4]
// 00448f04  3b8174010000         cmp eax, dword ptr [ecx + 0x174]
// 00448f0a  7410                 je 0x448f1c
// 00448f0c  682cd49600           push 0x96d42c
// 00448f11  898174010000         mov dword ptr [ecx + 0x174], eax
// 00448f17  e8e44bfcff           call 0x40db00
// 00448f1c  c20400               ret 4

namespace RBX {
namespace Reflection {
class PropertyDescriptor
{
    const char* name;
};
}

class BrickColor
{
public:
    int number;
    ~BrickColor() {}
};

namespace Network {
class Player
{
    char gap0[0x174];
    BrickColor teamColor;
public:
    static Reflection::PropertyDescriptor prop_teamColor;
    void raisePropertyChanged(const Reflection::PropertyDescriptor& descriptor);
    void setTeamColor(BrickColor value);
};

void Player::setTeamColor(BrickColor value)
{
    if (value.number != teamColor.number) {
        teamColor = value;
        raisePropertyChanged(prop_teamColor);
    }
}
}
}
