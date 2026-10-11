// from server: 45% by atomic.potato
extern "C" char __cdecl sub_5B96C0(int* a, int* b);
extern "C" void __cdecl sub_5BDFE0(int a, int b, int c, char d);

void __cdecl sub_5BDF10(int a, int b, int c)
{
    char v = sub_5B96C0(&b, &c);
    sub_5BDFE0(a, b, c, v);
}
