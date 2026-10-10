// from server: 50% by atomic.potato
extern "C" void __cdecl func_008af41a(int);

extern void (__cdecl *func_00bec078)();

void __declspec(naked) func_008aa41c()
{
    func_008af41a(1);
    func_00bec078();
}
