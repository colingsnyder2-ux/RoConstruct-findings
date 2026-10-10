// from server: 21% by atomic.potato
struct Bucket
{
    int getValue();
    Bucket *setValue(int);
};

int Bucket::getValue()
{
    return *(int *)this;
}

Bucket *Bucket::setValue(int value)
{
    return this;
}
