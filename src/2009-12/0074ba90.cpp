// from server: 41% by atomic.potato
struct GroundStage
{
    void f(int, int*, int);
};

void GroundStage::f(int, int* result, int value)
{
    if (value == 4)
    {
        *result = 0x00b58650;
        result[1] = 0;
        result[2] = 0;
    }
    else
    {
        f(0, result, value);
    }
}
