// from server: 57% by atomic.potato
extern "C" void __cdecl func_008af41a(int);

extern "C" void __cdecl func_00bec160();

void __declspec(naked) func_008aa08b()
{
    func_008af41a(1);
    func_00bec160();
}
