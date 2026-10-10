// from server: 69% by colin
extern char G;

extern void __cdecl func_00630a1e(int);
extern void __cdecl func_00630a18();

void func_00747cde(int a, int b)
{
    int* p = (int*)b;
    int v = *(int*)((char*)p - 4);
    func_00630a1e(v ^ (int)p);
    func_00630a18();
}
