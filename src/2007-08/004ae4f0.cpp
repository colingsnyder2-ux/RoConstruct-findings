// from server: 72% by colin
struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

extern "C" type_info type_info_891b88;
extern "C" bool (__stdcall *type_info_equal_77e708)(const type_info*, const type_info*);
extern "C" int __cdecl sub_5f20f0(int, int, int);

int __cdecl sub_4ae4f0(int a, int b, int c)
{
    if (b == 2)
    {
        int v = a;
        if (type_info_equal_77e708(&type_info_891b88, (const type_info*)v))
            return v;
        return 0;
    }
    return sub_5f20f0(a, b, 0);
}
