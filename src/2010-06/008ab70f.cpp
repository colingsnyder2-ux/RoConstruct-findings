// from server: 55% by atomic.potato
extern "C" void __cdecl func_008af41a(int);

extern void (__cdecl *func_00bec0c4)();

void __declspec(naked) func_008ab70f()
{
    func_008af41a(1);
    func_00bec0c4();
}
