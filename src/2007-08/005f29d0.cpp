// from server: 87% by colin
// roc 2007-08 005f29d0  unit: seg_005f0000  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f29d0

struct type_info {
    bool operator==(const type_info& other) const;
};

extern type_info type_info_8b1b98;

int __cdecl sub_5f20f0(int a, int b, int c);

struct GenericSlotAdapter {
    int compare(int a, int b);
};

int GenericSlotAdapter::compare(int a, int b)
{
    if (b == 2) {
        int v = a;
        int r = (type_info_8b1b98 == *(type_info*)v);
        return r ? v : 0;
    }
    char tmp = 0;
    return sub_5f20f0(a, b, *(int*)&tmp);
}
