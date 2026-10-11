// from server: 82% by atomic.potato
struct S
{
    void f();
};

extern "C" void __stdcall func_0063c3a0(int, const void*, const void*, const void*, int);
extern "C" void __stdcall func_007f4929(const void*);

extern const char global_009bb150;
extern const char global_009cc3ac;
extern const char global_009cc3b4;
extern const char global_00981c80;
extern const char global_00b85954;

void S::f()
{
    func_0063c3a0(0xdc, &global_009cc3ac, &global_009bb150, &global_009cc3b4, 1);
    func_007f4929(&global_00981c80);
}
