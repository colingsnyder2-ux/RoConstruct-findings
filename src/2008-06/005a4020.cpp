// from server: 93% by atomic.potato
extern "C" double __fastcall Function42afc0(void*);

extern "C" void __fastcall Function5c90b0(void*, double*);

struct S
{
    void f();
    char data[0x15c];
};

void S::f()
{
    double value = Function42afc0(data + 0x158);
    Function5c90b0(this, &value);
}
