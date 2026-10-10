// from server: 50% by atomic.potato
extern "C" void __cdecl func_008fb2b4(int);
extern "C" void (__cdecl *func_008f8b2e_target)();

extern "C" void __declspec(naked) __cdecl func_008f8b2e()
{
    func_008fb2b4(1);
    func_008f8b2e_target();
}
