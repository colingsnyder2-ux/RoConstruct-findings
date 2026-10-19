// from server: 77% by TrollStein
struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

extern "C" void __cdecl sub_4acaf0(int, int, char);

struct DeleteInstanceItem {
};

int __cdecl method(int a, int b)
{
    if (b == 2) {
        type_info* t = (type_info*)0x8917d0;
        if (*t == *(type_info*)a)
            return a;
        return 0;
    }
    sub_4acaf0(a, b, 0);
}
