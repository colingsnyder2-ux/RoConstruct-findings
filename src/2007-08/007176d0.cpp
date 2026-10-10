// from server: 84% by colin
struct Inner;

struct Vtbl {
    char pad[0x19c];
    int (*fn)();
};

struct Inner {
    Vtbl* vtbl;
};

struct Outer {
    char pad[0x7c];
    Inner* inner;
    int method();
};

int Outer::method()
{
    Inner* p = *(Inner**)((char*)this - 0x7c);
    return p->vtbl->fn();
}
