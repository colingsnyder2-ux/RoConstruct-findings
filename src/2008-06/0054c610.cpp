// from server: 56% by atomic.potato
extern "C" int __cdecl sub_00543640(int);
extern "C" void __cdecl sub_0054c630(int);

struct S
{
    void __cdecl f(int);
};

void __cdecl S::f(int value)
{
    sub_0054c630(sub_00543640(value));
}
