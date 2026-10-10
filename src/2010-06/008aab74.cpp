// from server: 50% by atomic.potato
extern "C" void __cdecl func_008af41a(int);
extern "C" void (__cdecl *func_00bec188)();

extern "C" void __declspec(naked) __cdecl func_008aab74()
{
    func_008af41a(1);
    func_00bec188();
}
