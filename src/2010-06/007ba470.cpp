// from server: 83% by atomic.potato
struct S;

extern "C" void __stdcall sub_7e14b0(S*, int, int);

struct S {
    int f(int);
    int member_2c;
};

int S::f(int value)
{
    sub_7e14b0((S*)((char*)this + 0x24), member_2c, value);
    return value;
}
