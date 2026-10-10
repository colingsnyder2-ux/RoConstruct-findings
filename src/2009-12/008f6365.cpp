// from server: 50% by atomic.potato
extern "C" void __cdecl func_008fb2b4(int);

extern "C" void (__cdecl *func_00b6b3b8)();

extern "C" void __declspec(naked) func_008f6365()
{
    func_008fb2b4(1);
    func_00b6b3b8();
}
