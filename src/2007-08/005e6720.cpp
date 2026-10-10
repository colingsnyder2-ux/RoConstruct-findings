// from server: 80% by colin
struct type_info {
    bool __thiscall operator==(const type_info& rhs) const;
};

extern type_info G1;
extern type_info G2;

extern "C" int __cdecl sub_5d2600(int a, int b, int c);

struct Flag {
    int m1(int a, int b);
};

int Flag::m1(int a, int b)
{
    if (b == 2) {
        return (G1 == G2) ? a : 0;
    }
    char tmp = 0;
    return sub_5d2600(a, b, *(int*)&tmp);
}
