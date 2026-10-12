// roc-cl: 50727
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
};

class SpawnLocation
{
    char gap0[0x140];
    BrickColor teamColor;
public:
    static Reflection::PropertyDescriptor prop_teamColor;
    void raisePropertyChanged(const Reflection::PropertyDescriptor& descriptor);
    void setTeamColor(BrickColor value);
};

void SpawnLocation::setTeamColor(BrickColor value)
{
    if (value.number != teamColor.number) {
        teamColor = value;
        raisePropertyChanged(prop_teamColor);
    }
}
}
