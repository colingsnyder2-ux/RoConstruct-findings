// from server: 90% by colin
extern "C" void __cdecl func_00725520(int, int);
extern "C" int __cdecl func_00725f70(int);

extern int G_008C2548;
extern int G_008C254C;
extern int G_0089FE8C;

int func_00572180()
{
    func_00725520(0x8C254C, 0x572070);
    int result = func_00725f70(G_008C2548);
    if (result != 0) {
        if (*(unsigned int*)(result + 0x18) >= 0x10) {
            return *(int*)(result + 4);
        }
        return result + 4;
    }
    return G_0089FE8C;
}
