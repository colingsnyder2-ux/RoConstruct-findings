// from server: 91% by king_originala
struct S
{
    unsigned char padding0[8];
    unsigned int count;
    unsigned char padding1[12];
    float scale;
    unsigned int result;

    void update();
};

void S::update()
{
    double value = (double)count * scale;
    result = 0xffffffffU;
    if (value >= 4294967296.0)
        result = (unsigned int)value;
}
