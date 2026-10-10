// from server: 50% by atomic.potato
extern "C" void __cdecl func_008af41a(int);
extern "C" void (__cdecl *func_008ad3aa_target)();

extern "C" void __declspec(naked) func_008ad3aa()
{
    func_008af41a(1);
    func_008ad3aa_target();
}
