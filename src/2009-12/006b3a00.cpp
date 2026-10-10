// from server: 66% by atomic.potato
struct S
{
    unsigned char padding[205];
    unsigned char field;
    bool f();
};

bool S::f()
{
    return (field >> 1) & 1;
}
