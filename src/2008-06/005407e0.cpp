// from server: 32% by tester
struct S
{
    int value;
    char f();
};

char S::f()
{
    return value != 0;
}
