// from server: 65% by colin
struct CNameItem {
    char pad_0x00[0x4c];
    int field_0x4c;
    char pad_0x50[0x08];
    int field_0x58;
    char pad_0x5c[0x6d4];
    int field_0x730;
    int compare(const CNameItem& other, int arg) const;
};

extern "C" int __stdcall sub_77dcd0(int);

int CNameItem::compare(const CNameItem& other, int arg) const {
    int a = this->field_0x58;
    if (a != -1) {
        return a - other.field_0x58;
    }
    if (sub_77dcd0((int)(this + 0x5c))) {
        int r = ((int (__thiscall *)(const CNameItem*, int))*(int*)(*(int*)this + 0x78))(this, arg);
        if (r > 0) {
            int r2 = ((int (__thiscall *)(const CNameItem*, int))*(int*)(*(int*)&other + 0x78))(&other, arg);
            return r - r2;
        }
        ((void (__thiscall *)(const CNameItem*, int, int))*(int*)(*(int*)this + 0x80))(this, arg, 0);
        return 0;
    }
    int p = *(int*)(this->field_0x4c + 0x50);
    int f = *(int*)(*(int*)p + 0x5c);
    return ((int (__thiscall *)(int, int, int))f)(p, (int)(this + 0x5c), (int)(&other + 0x5c));
}
