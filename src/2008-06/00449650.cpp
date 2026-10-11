// from server: 26% by colin
struct S
{
    int f();
    char pad[0x20];
    int value;
};

extern char G;

char* func_0040df80();
char* func_00432fc0();
char* func_0040dfa0();
void* func_006a0920(unsigned int size);
void func_006a117e();
void func_006a1172();
void func_006a1178(void* p, int a, char* b);

int S::f()
{
    func_006a117e();
    *(int*)this = 0x81663c;
    void* p = func_006a0920(0x6c);
    if (p)
    {
        func_006a1178(p, 0xb9, func_0040dfa0());
    }
    else
    {
        p = 0;
    }
    value = (int)p;
    func_006a1172();
    return (int)this;
}
