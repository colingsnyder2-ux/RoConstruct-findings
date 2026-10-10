// from server: 77% by colin
struct type_info {
    bool operator==(const type_info&) const;
};

struct VCLuaFunction {
};

int __cdecl sub_42C0C0(int, int, int);

int __cdecl compare(int a, int b) {
    if (b == 2) {
        int r = (*(const type_info*)0x886880 == *(const type_info*)a) ? a : 0;
        return r;
    }
    return sub_42C0C0(a, b, 0);
}
