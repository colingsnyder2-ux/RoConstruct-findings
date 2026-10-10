// from server: 76% by colin
struct type_info
{
    bool __thiscall operator==(const type_info&) const;
};

extern type_info type_info_0088e290;

int __cdecl func_0048f050(int, int, char);

int __cdecl func_0048f670(int a, int b, int c)
{
    if (b == 2)
    {
        int v = a;
        if (type_info_0088e290.operator==(*(type_info*)&a))
            return v;
        return 0;
    }
    char local = 0;
    return func_0048f050(a, b, local);
}
