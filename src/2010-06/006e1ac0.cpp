// from server: 35% by atomic.potato
struct S
{
    int f(float *);
    int (**call)(int, float);
    int offset;
};

int S::f(float *value)
{
    int offset = this->offset;
    float temp = *value;
    return (*call)(offset, temp);
}
