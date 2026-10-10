// from server: 85% by colin
struct CXTPCustomizeSheet {
    char pad[0xb8];
    void* field_b8;
    void func_00763100(int);
};

struct Inner {
    virtual void v0();
    virtual void v1(int);
};

struct ColorSel {
    int sub_0071f670();
};

extern "C" int __stdcall sub_00763080(void*);

void CXTPCustomizeSheet::func_00763100(int arg)
{
    void* p = *(void**)((char*)field_b8 + 0x58);
    int r = sub_00763080(p);
    Inner* obj = (Inner*)arg;
    if (r) {
        obj->v0();
        int x = ((ColorSel*)p)->sub_0071f670();
        if (x == 0 || ((ColorSel*)p)->sub_0071f670() == 2) {
            obj->v1(1);
        } else {
            obj->v1(0);
        }
    } else {
        obj->v1(0);
        obj->v0();
    }
}
