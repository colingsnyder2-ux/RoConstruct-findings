// from server: 53% by colin
struct String {
    char storage[28];
};

extern "C" void* __stdcall sub_6A0920(unsigned int);
extern "C" void __stdcall sub_45DB40(void*);
extern "C" void __stdcall sub_64B2A0(void*, void*, void*);
extern "C" void __stdcall sub_614DC0(void*);
extern "C" void __stdcall sub_5E9EC0(void*);
extern "C" void __stdcall sub_5A4280(void);
extern "C" void __stdcall sub_583460(void*, int);
extern "C" void __stdcall sub_5C43A0(void*, void*);
extern "C" void __stdcall sub_55AF90(void*, void*);

extern "C" void* __stdcall mfc798(void*, const char*);
extern "C" void __stdcall mfc798_dtor(void*);

struct S {
    char pad0[0x10];
    void* vt10;
    void* vt14;
    char pad18[8];
    void* vt20;
    void* vt24;
    char pad28[0x1c];
    void* vt44;
    char pad48[0x1c];
    void* vt64;
    char pad68[0x1c];
    void* vt84;
    char pad88[0x1c];
    void* vta4;
    char padA8[0x1c];
    void* vtc4;
    char padC8[0x68];
    void* vt130;
    void* vt134;
    char pad138[0x1ac];
    void* field2e4;
    void* vt2e8;
    void* vt2ec;
    char pad2f0[0x98];
    void* vt388;
    void* vt38c;
    void* vt390;
    void* vt394;
    void* vt398;
    void* vt39c;
    void* field3a0;
    void* field3a4;
    void* field3a8;
    char field3ac;
    char pad3ad[3];
    void* field3b0;
    void* field3b4;
    void* field3b8;
    void* field3bc;
    unsigned short field3c0;
    unsigned short field3c2;
    unsigned short field3c4;
    unsigned short field3c6;
    unsigned short field3c8;
    unsigned short field3ca;
    void* field3cc;
    char field3d0;
    char pad3d1[3];
    char field3d4[0x20];
    void* field3f4;
    char field3f8;
    char pad3f9[3];
    void* field3fc;
    void* field400;
    char field404[0xc];
    double field410;
    double field418;
    double field420;
    void* field428;
    void* field42c;
    void* field430;
    void* field434;
    void* field438;
    void* field43c;

    S(int, int);
};

S::S(int a, int b)
{
    if (a != 0) {
        *(void**)((char*)this + 0x134) = (void*)0x833e98;
        *(void**)((char*)this + 0x458) = (void*)0x846144;
    }

    sub_5A4280();

    *(void**)((char*)this + 0x2e8) = (void*)0x82f848;
    sub_583460((char*)this + 0x2ec, 0);

    *(void**)((char*)this + 0x38c) = 0;
    *(void**)((char*)this + 0x390) = 0;
    *(void**)((char*)this + 0x388) = 0;
    *(void**)((char*)this + 0x398) = 0;
    *(void**)((char*)this + 0x39c) = 0;
    *(void**)((char*)this + 0x394) = 0;

    sub_614DC0((char*)this + 0x314);
    sub_5E9EC0((char*)this + 0x344);
    sub_5E9EC0((char*)this + 0x364);

    *(void**)((char*)this + 0x0) = (void*)0x833a54;
    *(void**)((char*)this + 0x10) = (void*)0x833a44;
    *(void**)((char*)this + 0x14) = (void*)0x833a3c;
    *(void**)((char*)this + 0x20) = (void*)0x833a34;
    *(void**)((char*)this + 0x24) = (void*)0x833a24;
    *(void**)((char*)this + 0x44) = (void*)0x833a14;
    *(void**)((char*)this + 0x64) = (void*)0x833a04;
    *(void**)((char*)this + 0x84) = (void*)0x8339f4;
    *(void**)((char*)this + 0xa4) = (void*)0x8339e4;
    *(void**)((char*)this + 0xc4) = (void*)0x8339d4;
    *(void**)((char*)this + 0x130) = (void*)0x8339c8;
    *(void**)((char*)this + 0x1a0) = (void*)0x8339b0;
    *(void**)((char*)this + 0x288) = (void*)0x833998;
    *(void**)((char*)this + 0x2e8) = (void*)0x833990;
    *(void**)((char*)this + 0x2ec) = (void*)0x833988;
    *(void**)((char*)this + 0x314) = (void*)0x833980;
    *(void**)((char*)this + 0x340) = (void*)0x833970;
    *(void**)((char*)this + 0x344) = (void*)0x833960;
    *(void**)((char*)this + 0x364) = (void*)0x833950;
    *(void**)((char*)this + 0x384) = (void*)0x833944;

    {
        void* p = *(void**)((char*)this + 0x134);
        void* q = *(void**)((char*)p + 4);
        *(void**)((char*)q + (int)this + 0x134) = (void*)0x833938;
    }
    {
        void* p = *(void**)((char*)this + 0x134);
        void* q = *(void**)((char*)p + 8);
        *(void**)((char*)q + (int)this + 0x134) = (void*)0x833930;
    }
    {
        void* p = *(void**)((char*)this + 0x134);
        void* q = *(void**)((char*)p + 0xc);
        *(void**)((char*)q + (int)this + 0x134) = (void*)0x833914;
    }
    {
        void* p = *(void**)((char*)this + 0x134);
        void* q = *(void**)((char*)p + 4);
        *(void**)((char*)q + (int)this + 0x130) = (void*)((char*)q - 0x310);
    }
    {
        void* p = *(void**)((char*)this + 0x134);
        void* q = *(void**)((char*)p + 8);
        *(void**)((char*)q + (int)this + 0x130) = (void*)((char*)q - 0x318);
    }
    {
        void* p = *(void**)((char*)this + 0x134);
        void* q = *(void**)((char*)p + 0xc);
        *(void**)((char*)q + (int)this + 0x130) = (void*)((char*)q - 0x320);
    }

    *(void**)((char*)this + 0x3a0) = 0;
    *(void**)((char*)this + 0x3a4) = 0;
    *(void**)((char*)this + 0x3a8) = (void*)b;
    *(char*)((char*)this + 0x3ac) = 0;
    *(void**)((char*)this + 0x3b0) = 0;
    *(void**)((char*)this + 0x3b4) = 0;
    *(void**)((char*)this + 0x3b8) = 0;
    *(void**)((char*)this + 0x3bc) = 0;
    *(unsigned short*)((char*)this + 0x3c0) = 0;
    *(unsigned short*)((char*)this + 0x3c2) = 0;
    *(unsigned short*)((char*)this + 0x3c6) = 0;
    *(unsigned short*)((char*)this + 0x3c4) = 0;
    *(unsigned short*)((char*)this + 0x3ca) = 0;
    *(unsigned short*)((char*)this + 0x3c8) = 0;

    {
        char* p1 = (char*)this + 0x3d4;
        char* p2 = (char*)this + 0x3d0;
        char* p3 = (char*)this + 0x3cc;
        sub_64B2A0(p1, p2, p3);
    }

    *(void**)((char*)this + 0x3cc) = 0;
    *(char*)((char*)this + 0x3d0) = 0;
    *(void**)((char*)this + 0x3f4) = 0;
    *(char*)((char*)this + 0x3f8) = 0;
    *(void**)((char*)this + 0x3fc) = 0;
    *(void**)((char*)this + 0x400) = 0;

    sub_45DB40((char*)this + 0x404);

    *(double*)((char*)this + 0x410) = 0.0;
    *(double*)((char*)this + 0x418) = 0.0;
    *(double*)((char*)this + 0x420) = 0.0;

    {
        void* p = sub_6A0920(0xc048);
        if (p != 0) {
            sub_5C43A0(p, (void*)0x833e88);
        } else {
            p = 0;
        }
        *(void**)((char*)this + 0x428) = p;
    }
    {
        void* p = sub_6A0920(0xc048);
        if (p != 0) {
            sub_5C43A0(p, (void*)0x833e78);
        } else {
            p = 0;
        }
        *(void**)((char*)this + 0x42c) = p;
    }
    {
        void* p = sub_6A0920(0xc048);
        if (p != 0) {
            sub_5C43A0(p, (void*)0x833e64);
        } else {
            p = 0;
        }
        *(void**)((char*)this + 0x430) = p;
    }
    {
        void* p = sub_6A0920(0xc048);
        if (p != 0) {
            sub_5C43A0(p, (void*)0x833e50);
        } else {
            p = 0;
        }
        *(void**)((char*)this + 0x434) = p;
    }
    {
        void* p = sub_6A0920(0xc048);
        if (p != 0) {
            sub_5C43A0(p, (void*)0x833e38);
        } else {
            p = 0;
        }
        *(void**)((char*)this + 0x438) = p;
    }

    *(void**)((char*)this + 0x43c) = 0;

    {
        String s;
        mfc798(&s, "Workspace");
        sub_55AF90(this, &s);
        mfc798_dtor(&s);
    }

    {
        void* p = *(void**)((char*)this + 0x42c);
        void* q = *(void**)((char*)this + 0x428);
        *(void**)((char*)p + 0xc040) = q;
    }
    {
        void* p = *(void**)((char*)this + 0x2e4);
        void* q = *(void**)((char*)p + 0xfc);
        void* r = *(void**)((char*)this + 0x42c);
        *(void**)((char*)q + 0xc040) = r;
    }
    {
        void* p = *(void**)((char*)this + 0x430);
        void* q = *(void**)((char*)this + 0x428);
        *(void**)((char*)p + 0xc040) = q;
    }
    {
        void* p = *(void**)((char*)this + 0x434);
        void* q = *(void**)((char*)this + 0x428);
        *(void**)((char*)p + 0xc040) = q;
    }
    {
        void* p = *(void**)((char*)this + 0x428);
        void* q = *(void**)((char*)this + 0x438);
        *(void**)((char*)q + 0xc040) = p;
    }
}
