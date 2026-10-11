// from server: 37% by atomic.potato
extern "C" int __cdecl sub_6A158C(int, int);

struct S {
    void f();
};

void S::f()
{
    int local = 0;
    sub_6A158C((int)&local, 0x90e47c);
}
