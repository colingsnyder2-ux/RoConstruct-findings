// from server: 94% by TrollStein
struct type_info {
    bool operator==(const type_info&) const;
};

struct S_func_00559c90 {
};

extern "C" int __cdecl sub_00559b10(int, int, int);

int __cdecl f(int a1, int a2)
{
    if (a2 == 2) {
        type_info* p = (type_info*)0x89e368;
        if (*p == *(type_info*)a1)
            return a1;
        return 0;
    }
    char b = 0;
    return sub_00559b10(a1, a2, *(int*)&b);
}
