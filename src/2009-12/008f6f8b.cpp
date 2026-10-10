// from server: 50% by atomic.potato
extern "C" void __cdecl callee(int);
extern "C" void (__cdecl *target)();

void __declspec(naked) func_008f6f8b()
{
    callee(1);
    target();
}
