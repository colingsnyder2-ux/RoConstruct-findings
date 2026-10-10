// from server: 80% by colin
extern "C" int __cdecl sub_00416C20(int, int, int);

struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

extern type_info type_info_8837E0;
extern bool (__stdcall *g_fn_77E708)(type_info*, type_info*);

int __cdecl sub_00417530(int a, int b)
{
    if (b == 2) {
        int v = a;
        bool eq = g_fn_77E708(&type_info_8837E0, (type_info*)v);
        return eq ? v : 0;
    }
    return sub_00416C20(a, b, 0);
}
