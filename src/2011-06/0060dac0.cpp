// from server: 83% by atomic.potato
struct S {
    int a;
    int b;
    int c;
    int d;
    int e;
    int value;
    int g;

    void f();
};

void S::f()
{
    a = 0xA93ACC;
    b = 0xA93AC4;
    e = 0xA93AB8;
    value = 0xA93AAC;
}
