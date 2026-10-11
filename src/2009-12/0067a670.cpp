// from server: 47% by atomic.potato
extern "C" void construct_string(void *, const char *);

struct S
{
    S *f(const char *);
};

S *S::f(const char *value)
{
    char buffer[28];
    construct_string(buffer, "Duplicate");
    return this;
}
