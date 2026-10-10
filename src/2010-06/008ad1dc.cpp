// from server: 45% by atomic.potato
extern "C" int __cdecl func_008af41a(int);

extern int (__cdecl *func_008ad1dc_target)();

int __cdecl func_008ad1dc()
{
    func_008af41a(1);
    return func_008ad1dc_target();
}
