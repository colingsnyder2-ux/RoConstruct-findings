// from server: 69% by colin
extern "C" int __cdecl func_00630a1e(int);
extern "C" int __cdecl func_00630a18();

int __cdecl func_007400ce(int a, int b)
{
    int v = b;
    int x = v ^ *(int *)(v - 4);
    func_00630a1e(x);
    return func_00630a18();
}
