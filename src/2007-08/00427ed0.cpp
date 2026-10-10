// from server: 85% by tester
struct type_info {
    bool operator==(const type_info&) const;
};

extern "C" type_info type_info_0088642c;
extern "C" bool (__thiscall *ptr_0077e708)(const type_info*, const type_info*);

int func_00427ed0(int arg1, int arg2)
{
    if (arg2 == 2) {
        if (ptr_0077e708(&type_info_0088642c, (const type_info*)arg1))
            return arg1;
        return 0;
    }
    if (arg2 == 0)
        return arg1;
    return 0;
}
