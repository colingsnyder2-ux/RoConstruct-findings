// from server: 49% by atomic.potato
struct Inner {
    virtual void f(int, int*);
};

struct Outer {
    char pad[0x18];
    Inner* inner;
    int get(int a, int b);
};

extern "C" int __cdecl sub_64BB40(int, int*);

int Outer::get(int a, int b)
{
    int result = 0;
    inner->f(a, &result);
    sub_64BB40(result, &result);
    return result;
}
