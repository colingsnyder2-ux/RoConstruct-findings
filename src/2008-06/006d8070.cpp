// from server: 80% by atomic.potato
struct CArray
{
    int Add(int);
};

int CArray::Add(int value)
{
    int result;
    int count = *((int *)((char *)this + 0x28));
    result = Add(value);
    *((int *)((char *)value + 0x4c)) = (int)this;
    return value;
}
