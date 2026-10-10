// from server: 76% by atomic.potato
extern "C" void __cdecl func_006e18e0(void *);
extern "C" void __cdecl func_0080b0ac(const void *, const void *);

extern const char global_00bbfbf8;

void func_006e4a60()
{
    char buffer[40];
    func_006e18e0(buffer);
    func_0080b0ac(&global_00bbfbf8, buffer);
}
