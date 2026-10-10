// from server: 71% by atomic.potato
struct BallPolyContact
{
    int type;
    int value1;
    int value2;
    int value3;
    int value4;
    int value5;
    void set(int a, int b, const int *values);
};

void BallPolyContact::set(int a, int b, const int *values)
{
    type = 0xA52AD4;
    value3 = values[0];
    value4 = values[1];
    value5 = values[2];
    value1 = a;
    value2 = b;
}
