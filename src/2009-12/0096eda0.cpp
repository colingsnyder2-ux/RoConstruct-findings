// from server: 80% by atomic.potato
extern "C" void func_00636110(int, const char*, const char*, const char*, int);
extern "C" void func_007f4929(const void*);

extern const char global_009cc09c;
extern const char global_009cc060;
extern const char global_009cc0ac;
extern const char global_00981a40;

void func_0096eda0()
{
    func_00636110(0x88, &global_009cc09c, &global_009cc060,
                  &global_009cc0ac, 1);
    func_007f4929(&global_00981a40);
}
