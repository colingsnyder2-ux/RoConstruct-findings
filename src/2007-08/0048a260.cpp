// from server: 87% by colin
// roc 2007-08 0048a260  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0048a260

extern "C" int __cdecl sub_5F20F0(int, int, int);

struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

extern type_info type_info_88CD38;

int __cdecl sub_48A260(int a, int b) {
    if (b == 2) {
        int v = a;
        if (type_info_88CD38 == *(type_info*)&a)
            return v;
        return 0;
    }
    char local = 0;
    return sub_5F20F0(a, b, *(int*)&local);
}
