// from server: 69% by tester
extern "C" void __cdecl func_00630a1e(int);
extern "C" void __cdecl func_00630a18();

void __cdecl func_0075dcee(int a1, int a2)
{
    int v = a2;
    func_00630a1e(*(int*)(a2 - 4) ^ v);
    func_00630a18();
}
