// from server: 65% by atomic.potato
struct S
{
    int f(const char *);
};

extern "C" void sub_67a5c0(S *, const char *);
extern "C" void string_ctor(char *, const char *);

int S::f(const char *value)
{
    char buffer[28];
    string_ctor(buffer, "TrackCamera");
    sub_67a5c0(this, value);
    *(int *)this = 0x9cfe18;
    return (int)this;
}
