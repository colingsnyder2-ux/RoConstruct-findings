// from server: 49% by atomic.potato
extern "C" int __stdcall imported_call(int, int, int);

struct S
{
    int f(int);
};

int S::f(int value)
{
    int result = 0;
    imported_call(0, 0, (int)this + 0x24);
    return value;
}
