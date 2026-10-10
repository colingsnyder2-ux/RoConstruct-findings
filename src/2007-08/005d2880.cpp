// from server: 94% by colin
struct type_info
{
    bool operator==(const type_info& other) const;
};

extern "C" type_info type_info_8ac748;

extern "C" int __cdecl sub_5d2600(int a, int b, int c);

struct Tool
{
};

int __cdecl method(int a, int b)
{
    if (b == 2)
    {
        int esi = a;
        bool eq = type_info_8ac748.operator==(*(type_info*)a);
        return eq ? esi : 0;
    }
    char local = 0;
    return sub_5d2600(a, b, *(int*)&local);
}
