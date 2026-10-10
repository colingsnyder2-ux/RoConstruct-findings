// from server: 50% by atomic.potato
extern "C" void __cdecl sub_008fb2b4(int);

extern void (__cdecl *g_00b6b3dc)();

void __declspec(naked) func_008f93df()
{
    sub_008fb2b4(1);
    g_00b6b3dc();
}
