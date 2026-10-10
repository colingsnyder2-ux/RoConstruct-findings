// from server: 91% by colin
struct S {
    int f(int, int);
    char pad[0x18];
    int a;
    int b;
    float c;
    float d;
    float e;
    int vtable;
};

extern "C" void __stdcall sub_00618a60(int, int);

int S::f(int x, int y)
{
    sub_00618a60(x, y);
    this->c = 0.0f;
    this->d = 0.0f;
    this->a = -1;
    this->b = -1;
    this->e = 0.0f;
    this->vtable = 0x7ba5c4;
    return (int)this;
}
