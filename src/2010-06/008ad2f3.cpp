// from server: 45% by atomic.potato
extern "C" void __cdecl func_008af41a(int);
extern "C" void (__cdecl *func_008ad2f3_target)();

extern "C" void __cdecl func_008ad2f3()
{
    func_008af41a(1);
    func_008ad2f3_target();
}
