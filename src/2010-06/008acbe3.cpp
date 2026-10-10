// from server: 50% by atomic.potato
extern "C" void __cdecl func_008af41a(int);

extern "C" void (__cdecl *global_func_00bec0c8)();

void __declspec(naked) func_008acbe3()
{
    func_008af41a(1);
    global_func_00bec0c8();
}
