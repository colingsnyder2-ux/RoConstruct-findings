// from server: 56% by atomic.potato
extern "C" void std_string_ctor(void *, const char *);
extern "C" void function_0057e330(void *);

struct InsertDecal
{
    int f(const char *);
};

int InsertDecal::f(const char *value)
{
    char storage[28];
    std_string_ctor(storage, "Insert Service");
    function_0057e330(this);
    *(void **)this = (void *)0x80f22c;
    return (int)this;
}
