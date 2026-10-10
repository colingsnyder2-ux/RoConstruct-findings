// from server: 69% by atomic.potato
extern "C" void __cdecl func_007a94d4(int);

void __cdecl func_007a8954();

void func_009aefae(int, int value)
{
    func_007a94d4(*(int *)(value - 4) ^ value);
    func_007a8954();
}
