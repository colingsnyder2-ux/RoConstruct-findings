// from server: 50% by atomic.potato
extern "C" void __cdecl func_008fb2b4(int);
extern "C" void (__cdecl *func_008f7d86_tail)(void);

extern "C" void __declspec(naked) __cdecl func_008f7d86()
{
    func_008fb2b4(1);
    func_008f7d86_tail();
}
