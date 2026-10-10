// from server: 82% by atomic.potato
extern "C" void __stdcall func_00509be0(int, const char*, const char*, int);
extern "C" void __cdecl func_007f4929(const char*);

extern char data_0097f3b0;
extern char data_009bb128;
extern char data_009bb134;

void func_0096bd10()
{
    func_00509be0(0x128, &data_009bb134, &data_009bb128, 1);
    func_007f4929(&data_0097f3b0);
}
