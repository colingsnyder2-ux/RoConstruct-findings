// from server: 55% by atomic.potato
extern "C" void __cdecl func_008fb2b4(int);

extern "C" void (__cdecl *func_00b6b30c)();

void __declspec(naked) func_008f75a9()
{
    func_008fb2b4(1);
    func_00b6b30c();
}
