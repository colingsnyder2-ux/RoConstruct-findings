// from server: 93% by atomic.potato
extern "C" void func_00509aa0(void*, unsigned int, const void*, const void*, const void*, int);
extern "C" void func_007f4929(const void*);

extern const char global_009bb0fc;
extern const char global_009bb104;
extern const char global_009bb10c;
extern const char global_0097f8b0;

void func_0096bcb0()
{
    func_00509aa0((void*)0x00b7e6e0, 0x120, &global_009bb0fc,
                  &global_009bb104, &global_009bb10c, 1);
    func_007f4929(&global_0097f8b0);
}
