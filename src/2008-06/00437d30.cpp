// from server: 55% by colin
struct String
{
    char data[28];
    const char* c_str() const;
};

struct S
{
    void f(String value);
};

void S::f(String value)
{
    const char* p = value.c_str();
    void* r = (void*)p;
    void** vt = *(void***)this;
    void (*fn)(void*, void*) = (void (*)(void*, void*))vt[24];
    fn(this, r);
}
