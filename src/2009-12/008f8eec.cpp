// from server: 45% by atomic.potato
extern "C" void __cdecl func_008fb2b4(int);
extern "C" void (__cdecl *func_008f8eec_target)(void) = 0;

extern "C" void __cdecl func_008f8eec()
{
    func_008fb2b4(1);
    func_008f8eec_target();
}
