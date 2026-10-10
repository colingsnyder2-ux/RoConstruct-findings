// from server: 44% by colin
struct C1 { char pad[0x24]; int v; };
struct C2 { char pad[0x7c]; unsigned short w; };
struct C3 { char pad[0x20]; };

extern "C" int __stdcall sub_654BA0(int);
extern "C" int __stdcall sub_655910(void*, unsigned short, int);
extern "C" int __stdcall sub_662700(void*, void*, void*);
extern "C" void __stdcall sub_7385F2(void*, int, int);
extern "C" void __stdcall sub_7385D4(void*, void*);
extern "C" void __stdcall VariantClear(void*);
extern "C" int __stdcall sub_77DD98(void*);

struct CXTPReportRecordItemVariant {
    void f(int, int);
};

void CXTPReportRecordItemVariant::f(int a, int b) {
    C1* p1 = (C1*)sub_654BA0(*(int*)(b + 0xc));
    if (p1->v == 0) {
        char buf[16];
        sub_7385F2(buf, p1->v, 3);
        C2* self = (C2*)this;
        unsigned short w = self->w;
        int r = sub_655910(buf, w, 0);
        if (r != 0) {
            if (sub_662700(this, (void*)b, buf) != 0) {
                sub_7385D4(&self->w, buf);
            }
        }
        VariantClear(buf);
    } else {
        int* vt = *(int**)this;
        int r = sub_77DD98((char*)this + 0x20);
        void (*fn)(void*, int, int) = *(void(**)(void*, int, int))(vt + 0x124);
        fn(this, b, r);
    }
}
