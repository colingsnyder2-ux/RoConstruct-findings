// from server: 78% by atomic.potato
extern "C" int __cdecl sprintf(char *, const char *, ...);

struct Item
{
    void f(float *);
};

void Item::f(float *value)
{
    sprintf((char *)this, "%.3g", (double)*value);
}
