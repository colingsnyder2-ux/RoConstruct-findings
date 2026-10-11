// from server: 84% by atomic.potato
extern "C" void __stdcall func_0052d9b0(int, const void*, const void*, const void*, int);
extern "C" void __cdecl func_007f4929(const void*);

extern const char global_009bbf24;
extern const char global_009bbf1c;
extern const char global_009bcbf0;
extern const char global_00980520;

struct seg_00960000
{
    void f();
};

void seg_00960000::f()
{
    func_0052d9b0(0x178, &global_009bcbf0, &global_009bbf1c, &global_009bbf24, 1);
    func_007f4929(&global_00980520);
}
