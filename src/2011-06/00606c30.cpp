// from server: 59% by atomic.potato
struct S
{
    S(char const *);
};

extern "C" void G1_func_00606b80(S *, char const *);
extern "C" void G2_func_00a404c4(S *, char const *);

struct T
{
    T(char const *);
};

T::T(char const *value)
{
    S local("Dupl");
    G2_func_00a404c4(&local, "Dupl");
    G1_func_00606b80((S *)this, value);
    *(int *)this = 0x00a9323c;
}
