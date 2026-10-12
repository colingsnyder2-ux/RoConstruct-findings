// from server: 73% by king_originala
struct Signal {
    void sub_554960(int, int);
};

struct Listener {
    void sub_4937f0(const float*, float);
};

struct Result {
    char pad[0x10];
    Listener listener;
};

struct Registry {
    Result* sub_56b620(const void*);
};

struct RunService {
    char pad[0x1b8];
    double field1b8;

    void sub_5559a0();
    void func(int);
};

void RunService::func(int arg)
{
    sub_5559a0();

    float f2;
    float f1 = (float)field1b8;
    int i1 = *(volatile int*)&f1;
    f2 = *(float*)&arg;
    int i2 = *(volatile int*)&f2;

    reinterpret_cast<Signal*>(pad + 0x130)->sub_554960(i1, i2);

    Result* r = reinterpret_cast<Registry*>(0x973b40)->sub_56b620(
        pad + 0x14);

    if (r != 0)
        r->listener.sub_4937f0((float*)&arg, *(float*)&arg);
}
