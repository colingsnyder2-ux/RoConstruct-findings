// from server: 76% by atomic.potato
typedef unsigned int DWORD;

extern "C" void __cdecl func_007a94d4(DWORD, DWORD);
extern "C" void __cdecl func_007a8954();

void func_009ae1ee(DWORD, DWORD value)
{
    DWORD v = value ^ *(DWORD *)(value - 4);
    func_007a94d4(v, value);
    func_007a8954();
}
