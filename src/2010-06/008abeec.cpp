// from server: 68% by atomic.potato
extern "C" void __stdcall func_008af41a(int);
extern "C" void (__cdecl *func_008abeec_target)();

extern "C" void __cdecl func_008abeec()
{
    func_008af41a(1);
    func_008abeec_target();
}
