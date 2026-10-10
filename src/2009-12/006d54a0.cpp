// from server: 56% by atomic.potato
extern "C" void *construct_string(void *, const char *);

struct S
{
    S(const char *);
};

S::S(const char *value)
{
    construct_string(this, value);
}
