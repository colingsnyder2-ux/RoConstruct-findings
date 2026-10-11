// from server: 63% by atomic.potato
struct CXTPControlGalleryOffice2007Theme;

struct Inner {
    char pad0[0xf8];
    int field_f8;
    int field_100;
};

struct Obj {
    char pad0[0x9c];
    int field_9c;
    char pad_a0[0x100 - 0xa0];
    Inner* field_100;
    char pad104[0x15c - 0x104];
    void* field_15c;
    char pad160[0x230 - 0x160];
    int field_230;
};

extern "C" int __stdcall sub_7fd640(int);
extern "C" int __stdcall sub_7f65b0(void*);
extern "C" void __stdcall sub_7f45fe(void*, void*, int);
extern "C" void __stdcall sub_7f45f8(void*, void*, int);
extern "C" int __stdcall sub_877460(Obj*);
extern "C" void __stdcall sub_926496(void*, int, int, int, int, int);

struct CXTPControlGalleryOffice2007Theme {
    char pad0[0x2c];
    void* field_2c;
    int field_30;
    int field_34;
    int field_38;
    int Draw(Obj* p, void* out);
};

int CXTPControlGalleryOffice2007Theme::Draw(Obj* p, void* out) {
    Inner* inner = p->field_100;
    int val;
    if (inner->field_100 == 5 && inner->field_f8 == 2) {
        sub_7fd640(0x29);
        val = 0;
    } else {
        int r = ((int (__stdcall*)(Obj*))((*(int**)p)[0x6c / 4]))(p);
        if (r) {
            int a = p->field_9c;
            if (a == -1) {
                void* q = p->field_15c;
                if (q) {
                    a = sub_7f65b0(q);
                }
            }
            if (a) {
                val = this->field_30;
            } else {
                val = this->field_34;
            }
        } else {
            val = this->field_34;
        }
    }
    sub_7f45fe(out, (char*)out + 0x10, val);
    if (p->field_230) {
        int v = this->field_38;
        sub_7f45f8(out, (char*)out + 0x10, v);
    }
    if (sub_877460(p)) {
        int x1 = *(int*)((char*)out + 0x18);
        int x2 = *(int*)((char*)out + 0x20);
        int y = *(int*)((char*)out + 0x24);
        sub_926496(out, x1, y - 2, x2 - x1, 1, 0xc5c5c5);
    }
    return 0;
}
