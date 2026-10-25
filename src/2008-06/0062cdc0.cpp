// from server: 100% by tester
// roc 2008-06 0062cdc0  unit: RBX::FlagStand  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0062cdc0
//
// 0062cdc0  8b442404             mov eax, dword ptr [esp + 4]
// 0062cdc4  680c619700           push 0x97610c
// 0062cdc9  8981fc030000         mov dword ptr [ecx + 0x3fc], eax
// 0062cdcf  e82c0ddeff           call 0x40db00
// 0062cdd4  c20400               ret 4

namespace RBX {
namespace Reflection {
class PropertyDescriptor
{
    const char* name;
};
}

class BrickColor
{
    int number;
public:
    ~BrickColor() {}
};

class FlagStand
{
    char gap0[0x3fc];
    BrickColor teamColor;
public:
    static Reflection::PropertyDescriptor prop_TeamColor;
    void raisePropertyChanged(const Reflection::PropertyDescriptor& descriptor);
    void setTeamColor(BrickColor value);
};

void FlagStand::setTeamColor(BrickColor value)
{
    teamColor = value;
    raisePropertyChanged(prop_TeamColor);
}
}
