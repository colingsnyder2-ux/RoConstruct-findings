// from server: 50% by atomic.potato
extern "C" void __cdecl func_008fb2b4(int);

extern "C" void (__cdecl *func_00b6b324)();

void __declspec(naked) func_008f879c()
{
    func_008fb2b4(1);
    func_00b6b324();
}
