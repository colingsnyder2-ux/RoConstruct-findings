// from server: 85% by atomic.potato
struct Geometry
{
    int get(int value);
    int unknown0c;
    int unknown10;
    int unknown14;
    int unknown18;
    int unknown1c;
};

int Geometry::get(int value)
{
    if (value == unknown10)
        return unknown18;
    return unknown1c;
}
