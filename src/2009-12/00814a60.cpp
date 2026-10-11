// from server: 60% by atomic.potato
extern char G;
char* func_008929c0();
void func_007f4730();
void func_007f3c3e();

struct S {
    char pad0[0xa0];
    int* field_a0;

    int f();
};

int S::f()
{
    int* p = field_a0;
    if (p == 0)
        return 0;
    if (p[8] == 0)
        return 0;
    func_007f4730();
    func_008929c0();
    func_007f3c3e();
    return 0;
}
