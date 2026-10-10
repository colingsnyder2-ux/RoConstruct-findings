// from server: 93% by colin
struct CNameItem {
    char pad0[0x14];
    int field14;
    unsigned int field18;
    char pad1c[0xc];
    unsigned int field28;
    unsigned int field2c;
    void grow();
    CNameItem* addName(char c);
};

extern "C" int __stdcall sub_00630688(int, void*);
extern void* __fastcall sub_0077dd98(void*);
extern void sub_0073842a();

CNameItem* CNameItem::addName(char c)
{
    unsigned int v = ~field18;
    if ((v & 1) == 0) {
        void* p = sub_0077dd98(&field14);
        sub_00630688(2, p);
    }
    unsigned int idx = field28 + 1;
    if (idx > field2c) {
        grow();
    }
    char* dst = (char*)field28;
    *dst = c;
    field28 += 1;
    return this;
}
