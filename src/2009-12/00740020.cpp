// from server: 90% by atomic.potato
struct EventDesc
{
    int value0;
    int value1;
    int value2;
    int value3;
    int value4;
    int value5;
    int value6;
    int value7;

    void set();
};

void EventDesc::set()
{
    value0 = 0x9e26f4;
    value1 = 0x9e26ec;
    value6 = 0x9e26e0;
    value7 = 0x9e26d8;
}
