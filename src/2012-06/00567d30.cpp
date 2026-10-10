// from server: 88% by atomic.potato
extern "C" void __cdecl sub_00567970(int);

struct S
{
    int value;
    char *data;
    void f();
};

void S::f()
{
    sub_00567970(1);
    if ((value & 7) == 0)
        data[value >> 3] = 0;
    ++value;
}
