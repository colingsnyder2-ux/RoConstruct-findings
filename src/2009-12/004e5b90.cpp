// from server: 33% by atomic.potato
struct S
{
    unsigned int *begin;
    unsigned int count;
    unsigned int f();
};

unsigned int S::f()
{
    unsigned int result;
    result = (count - 1) * 16 + *begin;
    return result;
}
