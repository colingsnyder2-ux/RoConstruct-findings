// from server: 56% by atomic.potato
typedef unsigned long DWORD;

extern "C" void ConstructString(void *, const char *);
extern "C" void Initialize(void *);

struct S
{
    int f(void *);
};

int S::f(void *value)
{
    char buffer[28];
    ConstructString(buffer, "Duplicate");
    Initialize(this);
    *(DWORD *)this = 0x009cfdac;
    return (int)this;
}
