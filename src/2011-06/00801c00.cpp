// from server: 36% by atomic.potato
struct SequenceBase
{
    void *first;
    void *second;
    void f(void *, void *);
};

void SequenceBase::f(void *a, void *b)
{
    first = a;
    second = b;
}
