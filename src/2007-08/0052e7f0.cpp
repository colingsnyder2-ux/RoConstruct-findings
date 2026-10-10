// from server: 72% by colin
struct type_info {
    bool operator==(const type_info&) const;
};

extern "C" type_info G1_type_info_00898c30;
extern "C" bool (__stdcall *G2_func_0077e708)(const type_info*, const type_info*);
extern "C" int __cdecl func_005f20f0(int, int, int);

int func_0052e7f0(int a, int b, int c)
{
    if (b == 2) {
        int v = a;
        bool r = G2_func_0077e708(&G1_type_info_00898c30, (const type_info*)v);
        return r ? v : 0;
    }
    return func_005f20f0(a, b, 0);
}
