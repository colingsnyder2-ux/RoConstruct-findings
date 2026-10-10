// from server: 56% by atomic.potato
extern "C" void __cdecl func_008af41a(int);

extern void (__cdecl *func_00bec180)();

void __declspec(naked) func_008ab01d()
{
    func_008af41a(1);
    func_00bec180();
    void (__cdecl *terminate)();
    terminate();
}
