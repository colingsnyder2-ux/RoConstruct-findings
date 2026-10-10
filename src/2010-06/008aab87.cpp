// from server: 45% by atomic.potato
extern "C" void __cdecl func_008af41a(int);
extern "C" void (__cdecl *func_008aab87_target)();

void __cdecl func_008aab87()
{
    func_008af41a(1);
    func_008aab87_target();
}
