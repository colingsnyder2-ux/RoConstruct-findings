// from server: 75% by colin
struct DescribedBase {
    char pad[0xec];
};

struct GetSet {
    int pad0;
    int pad4;
    int offset8;
    int offsetc;
    int offset10;
    int offset14;
    int offset18;
    void setValue(DescribedBase* object, const char* value) const;
};

void GetSet::setValue(DescribedBase* object, const char* value) const {
    DescribedBase* c = object ? (DescribedBase*)((char*)object - 4) : 0;
    int idx = *(int*)((char*)c + 0xec);
    int off = *(int*)((char*)this + 0xc);
    int val = *(int*)((char*)idx + off);
    val += *(int*)((char*)this + 8);
    char v = *value;
    char* addr = (char*)c + 0xec + val;
    if (*addr != v) {
        *addr = v;
        void (*changed)(void*, const char*) = *(void(**)(void*, const char*))((char*)this + 0x10);
        if (changed) {
            int idx2 = *(int*)((char*)c + 0xec);
            int off2 = *(int*)((char*)this + 0x18);
            int val2 = *(int*)((char*)off2 + idx2);
            val2 += *(int*)((char*)this + 0x14);
            changed((char*)c + 0xec + val2, (const char*)this + 4);
        }
        extern void __stdcall raisePropertyChanged(void*, const char*);
        raisePropertyChanged(c, (const char*)this + 4);
    }
}
