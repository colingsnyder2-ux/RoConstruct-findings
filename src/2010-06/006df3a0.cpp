// from server: 50% by atomic.potato
extern "C" void __stdcall basic_string_copy(void *, const void *);

struct ImageLabel
{
    int f(const void *);
};

int ImageLabel::f(const void *value)
{
    basic_string_copy((char *)this + 4, value);
    return (int)this;
}
