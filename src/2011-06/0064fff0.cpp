// from server: 61% by atomic.potato
extern "C" void sub_64A404C(void*, const char*);

struct S
{
    void* f(void*, void*, char*);
};

void* S::f(void*, void*, char* p)
{
    const char* s = *p ? "u<h\\" : "false";
    sub_64A404C((void*)this, s);
    return (void*)this;
}
