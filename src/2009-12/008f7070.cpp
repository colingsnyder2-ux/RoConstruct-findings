// from server: 50% by atomic.potato
extern "C" void __cdecl func_008fb2b4(int);

extern "C" void (__cdecl *global_00b6b2f0)();

extern "C" void __declspec(naked) func_008f7070()
{
    func_008fb2b4(1);
    global_00b6b2f0();
}
