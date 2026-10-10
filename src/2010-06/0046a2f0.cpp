// from server: 95% by atomic.potato
extern "C" int __stdcall sub_7A8BEA(int, int, int, int, int);

struct S
{
    int f(int);
};

int S::f(int value)
{
    return sub_7A8BEA(value, 0, 0xB78E40, 0xB83B6C, 0) != 0;
}
