// from server: 92% by atomic.potato
struct VTextureIdHolder
{
    int value0;
    int value4;
    int padding[4];
    int value18;
    int value1c;
    int padding2[28];
    int value90;

    void set();
};

void VTextureIdHolder::set()
{
    value0 = 0xa95904;
    value4 = 0xa958fc;
    value18 = 0xa958f0;
    value1c = 0xa958e4;
    value90 = 0xa958dc;
}
