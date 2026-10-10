// from server: 69% by colin
struct seg_00750000 {
};

extern "C" void __cdecl func_00630a1e(int);
extern "C" void __cdecl func_00630a18();

void __cdecl func_0075f19e(int, int arg2)
{
    int v = arg2;
    int x = v;
    int y = *(int *)(v - 4) ^ x;
    func_00630a1e(y);
    func_00630a18();
}
