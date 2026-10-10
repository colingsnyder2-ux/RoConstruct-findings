// from server: 90% by atomic.potato
struct ForceField
{
    int field0;
    int field4;
    int field8;
    int fieldC;
    int field10;
    int field14;
    int field18;
    int field1C;

    void Initialize();
};

void ForceField::Initialize()
{
    field0 = 0x00aabec4;
    field4 = 0x00aabebc;
    field18 = 0x00aabeb0;
    field1C = 0x00aabea4;
}
