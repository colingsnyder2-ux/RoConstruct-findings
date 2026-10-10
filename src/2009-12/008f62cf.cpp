// from server: 50% by atomic.potato
extern "C" void __cdecl sub_008fb2b4(int);

extern "C" void (__cdecl *g_00b6b3b0)();

void __declspec(naked) func_008f62cf()
{
    sub_008fb2b4(1);
    g_00b6b3b0();
}
