// from server: 50% by atomic.potato
extern "C" void __cdecl func_008af41a(int);

extern void (__cdecl *func_00bec0dc)();

void __declspec(naked) func_008ac902()
{
    func_008af41a(1);
    func_00bec0dc();
}
