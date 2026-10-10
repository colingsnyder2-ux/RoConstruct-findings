// from server: 60% by atomic.potato
extern "C" void __cdecl func_007a94d4(int);

extern "C" int __cdecl func_009ae21e(int unused, int value)
{
    func_007a94d4(value ^ *(int *)(value - 4));
    return 0x00b47594;
}
