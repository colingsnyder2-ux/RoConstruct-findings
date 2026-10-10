// from server: 50% by atomic.potato
extern "C" void __cdecl func_008af41a(int);

extern "C" void (__cdecl *global_00bec090)();

extern "C" void __declspec(naked) __cdecl func_008aaa27()
{
    func_008af41a(1);
    global_00bec090();
}
