// from server: 79% by colin
struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

extern type_info g_type_886990;
extern bool (__stdcall *g_fn_77e708)(const type_info&, const type_info&);

void* __cdecl sub_42c6f0(int unused, int which, void* p)
{
    if (which == 2) {
        return g_fn_77e708(g_type_886990, *(type_info*)p) ? p : 0;
    }
    if (which == 0) {
        return p;
    }
    return 0;
}
