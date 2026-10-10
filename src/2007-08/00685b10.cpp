// from server: 93% by colin
struct CNameItem {
    char pad0[0x14];
    int field14;
    char pad18[0x10];
    int field28;
    int field2c;
    CNameItem* method(unsigned short* out);
};

struct CNameItemHelper {
    void* get(int* p);
};

extern "C" void* __stdcall sub_630688(int, void*);
extern "C" void __stdcall sub_738430(int);

CNameItem* CNameItem::method(unsigned short* out)
{
    if ((*(unsigned char*)((char*)this + 0x18) & 1) == 0) {
        CNameItemHelper* h = (CNameItemHelper*)((char*)this + 0x14);
        void* p = h->get((int*)((char*)this + 0x14));
        sub_630688(4, p);
    }
    int a = this->field28;
    int b = this->field2c;
    if ((unsigned)(a + 2) > (unsigned)b) {
        sub_738430(a - b + 2);
    }
    unsigned short v = *(unsigned short*)this->field28;
    *out = v;
    this->field28 += 2;
    return this;
}
