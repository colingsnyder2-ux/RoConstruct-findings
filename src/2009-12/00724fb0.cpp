// from server: 35% by atomic.potato
extern "C" void __cdecl func_00724430(int, int, int, int, int);

void __declspec(naked) func_00724fb0(int a, int b, int c)
{
    func_00724430(a, c, c < 0 ? -1 : 0, c, b);
}
