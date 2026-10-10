// from server: 50% by atomic.potato
extern "C" void __cdecl func_008af41a(int);

extern "C" void (__cdecl *func_00bec15c)();

void __declspec(naked) func_008ace09()
{
    func_008af41a(1);
    func_00bec15c();
}
