// from server: 47% by atomic.potato
struct S
{
    int value;
    int pad[7];
    int count;
    int f(int);
};

int S::f(int value)
{
    this->value = value;
    if (this->count > 0)
        return 0;
    return 0;
}
