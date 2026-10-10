// from server: 92% by atomic.potato
struct VehicleController
{
    int value0;
    int value4;
    int value8;
    int valueC;
    int value10;
    int value14;
    int value18;
    int value1C;
    int reserved[28];
    int value90;

    void initialize();
};

void VehicleController::initialize()
{
    value0 = 0xA9C4C4;
    value4 = 0xA9C4B8;
    value18 = 0xA9C4AC;
    value1C = 0xA9C4A0;
    value90 = 0xA9C494;
}
