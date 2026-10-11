// from server: 56% by atomic.potato
extern "C" void construct_string(void *, const char *);
extern "C" void initialize(void *);

struct S
{
    int f(const char *);
};

int S::f(const char *value)
{
    char object[28];
    construct_string(object, "SelectionRotate");
    initialize(this);
    *(int *)this = 0x830a9c;
    return (int)this;
}
