// from server: 63% by atomic.potato
extern "C" void AssignString(void *, const char *);
extern "C" void AssignStringObject(void *, const void *);

struct S {
    int value;
    char padding1[3];
    void *name;
    char padding2[27];
    unsigned short flag;
    unsigned char state;
    void f();
};

void S::f()
{
    AssignString(this + 1, "The Roblox scene manager");
    AssignStringObject((char *)this + 0x20, (const void *)0x009b32c8);
    flag = 1;
    state = 0;
}
