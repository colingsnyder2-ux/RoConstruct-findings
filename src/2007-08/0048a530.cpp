// from server: 70% by colin
// roc 2007-08 0048a530  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0048a530

extern "C" int __stdcall sub_5f20f0(int, int, int);

struct type_info {
    bool __thiscall operator==(const type_info&) const;
};

extern type_info type_info_88ce80;

int __cdecl sub_48a530(int a, int b, int c) {
    if (c == 2) {
        int v = b;
        if (type_info_88ce80 == *(type_info*)0) {
            return 0;
        }
        return v;
    }
    char tmp = 0;
    return sub_5f20f0(a, c, *(int*)&tmp);
}
