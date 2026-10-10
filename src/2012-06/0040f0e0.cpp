// from server: 90% by atomic.potato
extern "C" int __cdecl sub_006c1360();
extern "C" void __cdecl sub_0040e280(void*, int);

struct S
{
    int value;
    char data[1];

    S* f(int arg);
};

S* S::f(int arg)
{
    value = sub_006c1360();
    sub_0040e280(data, arg);
    return this;
}
