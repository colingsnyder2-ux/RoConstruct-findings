// from server: 75% by colin
struct DescribedBase {
    char pad[0xf8];
    int memberOffset;
};

struct GetSet {
    char pad0[0x18];
    int offset;
    int index;
    int func;
};

struct BoundPropGetSet {
    void invoke(DescribedBase* object, int* value) const;
};

void BoundPropGetSet::invoke(DescribedBase* object, int* value) const
{
    DescribedBase* base = object ? (DescribedBase*)((char*)object - 4) : 0;
    int idx = *value;
    int* table = *(int**)((char*)base + 0xf8);
    int off = *(int*)((char*)table + *(int*)((char*)this + 0x20)) + *(int*)((char*)this + 0x1c);
    void (__stdcall *fn)(void*, int) = *(void (__stdcall **)(void*, int))((char*)this + 0x18);
    fn((char*)base + off + 0xf8, idx);
}
