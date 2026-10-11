// from server: 59% by atomic.potato
struct Inner {
    virtual int f(int, int*);
};

struct Outer {
    char pad[0x18];
    Inner* inner;
    int method(int, int*);
};

extern "C" int __cdecl sub_0056ce60();
extern "C" void __cdecl sub_0056d1d0(int*);

int Outer::method(int a, int* b)
{
    int tmp;
    int r = inner->f(a, &tmp);
    *b = sub_0056ce60();
    sub_0056d1d0(b + 1);
    return r;
}
