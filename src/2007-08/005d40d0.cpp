// from server: 68% by colin
struct DescribedBase {
    char pad[0x168];
    int memberTable;
};

struct BoundPropGetSet {
    char pad0[4];
    int offset;
    int changed;
    int memberOffset;
    int memberIndex;
    int descOffset;
    void setValue(DescribedBase* object, const unsigned char* value) const;
};

extern "C" void __stdcall raisePropertyChanged(int);

void BoundPropGetSet::setValue(DescribedBase* object, const unsigned char* value) const {
    const DescribedBase* c = object;
    if (c) {
        c = (const DescribedBase*)((const char*)c - 4);
    } else {
        c = 0;
    }
    int idx = *(int*)((const char*)this + 0xc);
    int table = *(int*)((const char*)c + 0x168);
    int off = *(int*)(table + idx);
    off += *(int*)((const char*)this + 8);
    unsigned char* target = (unsigned char*)((const char*)c + off + 0x168);
    unsigned char newValue = *value;
    if (*target != newValue) {
        *target = newValue;
        int changed = *(int*)((const char*)this + 0x10);
        if (changed) {
            int desc = *(int*)((const char*)this + 4);
            int memberIdx = *(int*)((const char*)this + 0x18);
            int memberTable = *(int*)((const char*)c + 0x168);
            int memberOff = *(int*)(memberTable + memberIdx);
            memberOff += *(int*)((const char*)this + 0x14);
            void* memberPtr = (void*)((const char*)c + memberOff + 0x168);
            ((void (__thiscall*)(void*, int))changed)(memberPtr, desc);
        }
        int desc2 = *(int*)((const char*)this + 4);
        raisePropertyChanged(desc2);
    }
}
