// from server: 50% by atomic.potato
extern "C" void __cdecl func_008af41a(int);
extern void (*func_00bec164)();

void __declspec(naked) func_008aa140()
{
    func_008af41a(1);
    func_00bec164();
}
