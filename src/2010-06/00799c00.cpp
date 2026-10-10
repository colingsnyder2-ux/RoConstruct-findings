// from server: 37% by atomic.potato
extern "C" void construct_string(void *, const char *);
extern const char *g_ExclusiveArbiter;

struct ExclusiveArbiter
{
    int f(const char *);
};

int ExclusiveArbiter::f(const char *value)
{
    construct_string(this, g_ExclusiveArbiter);
    return 0;
}
