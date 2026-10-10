// from server: 69% by colin
struct seg_00740000 {
    void __cdecl func_0074160e(int);
};

void seg_00740000::func_0074160e(int value)
{
    extern void __cdecl func_00630a1e(int);
    extern void __cdecl func_00630a18(int);
    int x = value;
    int y = *(int *)(value - 4) ^ x;
    func_00630a1e(y);
    func_00630a18(0x8486b4);
}
