// from server: 45% by atomic.potato
extern "C" void __cdecl func_008fb2b4(int);
extern "C" void (__cdecl *func_008f92f8_target)();

extern "C" void __cdecl func_008f92f8()
{
    func_008fb2b4(1);
    func_008f92f8_target();
}
