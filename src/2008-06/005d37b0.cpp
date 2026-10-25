// from server: 100% by colin
// roc 2008-06 005d37b0  unit: RBX::SpawnLocation  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d37b0
//
// 005d37b0  8b442404             mov eax, dword ptr [esp + 4]
// 005d37b4  68c49e9700           push 0x979ec4
// 005d37b9  8981e8030000         mov dword ptr [ecx + 0x3e8], eax
// 005d37bf  e83ca3e3ff           call 0x40db00
// 005d37c4  c20400               ret 4

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
    char gap0[0x3e8];
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
