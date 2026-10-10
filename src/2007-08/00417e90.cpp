// from server: 98% by colin
// roc 2007-08 00417e90  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00417e90

extern "C" int __cdecl sub_5F20F0(int, int, int);

struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

extern type_info type_info_883C90;
extern bool (__thiscall *type_info_compare_77E708)(const type_info*, const type_info*);

int __cdecl sub_00417E90(int a, int b, int c)
{
    if (b == 2) {
        int v = a;
        if (type_info_compare_77E708(&type_info_883C90, (const type_info*)v))
            return v;
        return 0;
    }
    char tmp = 0;
    sub_5F20F0(a, b, *(int*)&tmp);
    return 0;
}
