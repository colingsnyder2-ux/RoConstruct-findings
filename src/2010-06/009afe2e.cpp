// from server: 69% by atomic.potato
extern "C" void __cdecl func_007a94d4(int);

extern "C" int __cdecl func_007a8954();

int func_009afe2e(int, int value)
{
    func_007a94d4(value ^ *(int *)(value - 4));
    return func_007a8954();
}
