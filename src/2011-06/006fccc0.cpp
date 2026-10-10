// from server: 83% by atomic.potato
struct Flag
{
    int value0;
    int value4;
    int reserved8;
    int reservedC;
    int value14;
    int value18;
    int value1C;
    void initialize();
};

void Flag::initialize()
{
    value0 = 0x00AAB844;
    value4 = 0x00AAB83C;
    value18 = 0x00AAB830;
    value1C = 0x00AAB824;
}
