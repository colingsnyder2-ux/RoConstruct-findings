// from server: 45% by atomic.potato
extern "C" void __cdecl func_008fb2b4(int);
extern "C" void __cdecl func_008f630e();

extern "C" void (__cdecl *g_008f630e_tail)();

void __cdecl func_008f630e()
{
    func_008fb2b4(1);
    g_008f630e_tail();
}
