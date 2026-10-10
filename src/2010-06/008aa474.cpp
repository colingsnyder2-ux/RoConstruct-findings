// from server: 50% by atomic.potato
extern "C" void __cdecl func_008af41a(int);
extern "C" void (__cdecl *func_008aa474_target)();

extern "C" void __declspec(naked) __cdecl func_008aa474()
{
    func_008af41a(1);
    func_008aa474_target();
}
