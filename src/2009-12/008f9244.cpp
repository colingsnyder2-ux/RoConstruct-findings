// from server: 68% by atomic.potato
extern "C" void __stdcall helper(int);

extern void (__cdecl *global_function)();

void function_008f9244()
{
    helper(1);
    global_function();
}
