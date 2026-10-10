// from server: 42% by atomic.potato
typedef void (__thiscall *Callback)(void *, void *, int);

extern Callback g_callback;

struct S
{
    S *f(void *arg);
};

S *S::f(void *arg)
{
    void *value = 0;
    g_callback(this, (char *)this + 0x7c, (int)value);
    return (S *)arg;
}
