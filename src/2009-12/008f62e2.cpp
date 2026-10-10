// from server: 50% by atomic.potato
extern "C" void __cdecl func_008fb2b4(int);

extern void (__cdecl *func_00b6b2e4)();

void __declspec(naked) func_008f62e2()
{
    func_008fb2b4(1);
    func_00b6b2e4();
}
