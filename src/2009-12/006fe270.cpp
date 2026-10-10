// from server: 79% by atomic.potato
struct S
{
    int a0;
    int a4;
    int a18;
    int a1c;
    int a94;

    void f();
};

extern "C" void S_637b00();

void S::f()
{
    a0 = 0x9dd6a4;
    a4 = 0x9dd69c;
    a18 = 0x9dd690;
    a1c = 0x9dd688;
    a94 = 0x9dd680;
    S_637b00();
}
