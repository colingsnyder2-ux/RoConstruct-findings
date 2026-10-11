// from server: 59% by atomic.potato
typedef unsigned long DWORD;

struct String
{
    void *data[7];
    String(const char *);
};

extern "C" void Initialize(void *);

struct S
{
    int f(void *);
};

int S::f(void *value)
{
    String buffer("Duplicate");
    Initialize(this);
    *(DWORD *)this = 0x009cfdac;
    return (int)this;
}
