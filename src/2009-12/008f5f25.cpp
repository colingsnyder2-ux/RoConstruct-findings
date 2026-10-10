// from server: 55% by atomic.potato
extern "C" void __cdecl func_008fb2b4(int);
extern "C" void (__cdecl *func_008f5f25_target)();

extern "C" void __declspec(naked) func_008f5f25()
{
    func_008fb2b4(1);
    func_008f5f25_target();
}
