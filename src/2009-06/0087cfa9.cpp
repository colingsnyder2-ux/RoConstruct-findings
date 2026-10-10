// from server: 60% by atomic.potato
extern "C" void __cdecl sub_71a57a(int);

struct S {
};

int __cdecl f(int a, int b)
{
    int x = *(int *)((char *)b - 4) ^ b;
    sub_71a57a(x);
    return 0x009ba948;
}
