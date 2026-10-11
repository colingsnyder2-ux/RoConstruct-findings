// from server: 42% by atomic.potato
extern "C" void __cdecl func_004ff1e0(unsigned short, float, unsigned short);

struct S
{
    char pad[32];
    float value;
    unsigned int code;
    void f(unsigned short);
};

void S::f(unsigned short arg)
{
    func_004ff1e0((unsigned short)code, value, (unsigned short)code);
}
