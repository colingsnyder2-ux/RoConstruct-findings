// from server: 84% by atomic.potato
struct CWebToolbox
{
    char pad[0xf8];
    int* value;
    void process(int, int, int);
    void cleanup();
};

extern "C" void (__thiscall* call_0098256a)(CWebToolbox*, int, int, int);
extern "C" void (__thiscall* call_009824a4)(int*);

void CWebToolbox::process(int a, int b, int c)
{
    call_0098256a(this, a, b, c);
    if (value)
        call_009824a4(value);
}

void CWebToolbox::cleanup()
{
}
