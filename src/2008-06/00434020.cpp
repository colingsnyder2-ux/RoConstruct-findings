// from server: 32% by colin
extern "C" {
    void* __stdcall sub_802944(void*);
    void* __stdcall sub_802464(void*);
    void* __stdcall sub_803F10(void*);
    void* __stdcall sub_802FD8(void*);
    void* __stdcall sub_803EE0(void*);
    void* __stdcall sub_803F14(void*);
}

struct CStr {
    void* rep;
    CStr(const char*);
    ~CStr();
    const char* c_str() const;
};

struct VTable {
    void* pad[16];
    void* slot40;
    void* pad2[0x40];
    void* slotE4;
    void* pad3[0x49];
    void* slot20C;
};

struct Obj {
    VTable* vt;
};

struct CMemberTreeView {
    char pad[0xF8];
    Obj* field_F8;
    Obj* field_FC;
    Obj* field_100;
    Obj* field_104;
    Obj* field_108;
    Obj* field_10C;
    Obj* field_110;
    void func(const char*, Obj*, Obj*, Obj*);
};

void CMemberTreeView::func(const char* a, Obj* b, Obj* c, Obj* d)
{
    Obj* o = field_F8;
    if (o) {
        const char* s = a ? a : "none";
        CStr cs(s);
        void* p = *(void**)&cs;
        VTable* vt = o->vt;
        void (*fn)(Obj*, void*) = (void (*)(Obj*, void*))vt->slotE4;
        fn(o, p);
        sub_802944(p);
    }
    if (field_FC) {
        void* out = 0;
        VTable* vt = field_FC->vt;
        void (*fn)(Obj*, void**) = (void (*)(Obj*, void**))vt->slot40;
        fn(field_FC, &out);
        Obj* r = (Obj*)out;
        if (r) {
            CStr cs("block");
            void* p = *(void**)&cs;
            VTable* vt2 = r->vt;
            void (*fn2)(Obj*, void*) = (void (*)(Obj*, void*))vt2->slot20C;
            fn2(r, p);
            sub_802944(p);
        } else {
            CStr cs("none");
            void* p = *(void**)&cs;
            VTable* vt2 = r->vt;
            void (*fn2)(Obj*, void*) = (void (*)(Obj*, void*))vt2->slot20C;
            fn2(r, p);
            sub_802944(p);
        }
        if (field_100) {
            CStr cs("block");
            void* p = *(void**)&cs;
            VTable* vt3 = field_100->vt;
            void (*fn3)(Obj*, void*) = (void (*)(Obj*, void*))vt3->slotE4;
            fn3(field_100, p);
            sub_802944(p);
        }
        if (out) {
            VTable* vt4 = ((Obj*)out)->vt;
            void (*fn4)(Obj*) = (void (*)(Obj*))vt4->pad[1];
            fn4((Obj*)out);
        }
    }
    if (field_104) {
        void* out2 = 0;
        VTable* vt = field_104->vt;
        void (*fn)(Obj*, void**) = (void (*)(Obj*, void**))vt->slot40;
        fn(field_104, &out2);
        Obj* r = (Obj*)out2;
        if (r) {
            CStr cs("block");
            void* p = *(void**)&cs;
            VTable* vt2 = r->vt;
            void (*fn2)(Obj*, void*) = (void (*)(Obj*, void*))vt2->slot20C;
            fn2(r, p);
            sub_802944(p);
        } else {
            CStr cs("none");
            void* p = *(void**)&cs;
            VTable* vt2 = r->vt;
            void (*fn2)(Obj*, void*) = (void (*)(Obj*, void*))vt2->slot20C;
            fn2(r, p);
            sub_802944(p);
        }
        if (out2) {
            VTable* vt4 = ((Obj*)out2)->vt;
            void (*fn4)(Obj*) = (void (*)(Obj*))vt4->pad[1];
            fn4((Obj*)out2);
        }
    }
    if (field_10C) {
        void* out3 = 0;
        VTable* vt = field_10C->vt;
        void (*fn)(Obj*, void**) = (void (*)(Obj*, void**))vt->slot40;
        fn(field_10C, &out3);
        Obj* r = (Obj*)out3;
        if (r) {
            CStr cs("block");
            void* p = *(void**)&cs;
            VTable* vt2 = r->vt;
            void (*fn2)(Obj*, void*) = (void (*)(Obj*, void*))vt2->slot20C;
            fn2(r, p);
            sub_802944(p);
        } else {
            CStr cs("none");
            void* p = *(void**)&cs;
            VTable* vt2 = r->vt;
            void (*fn2)(Obj*, void*) = (void (*)(Obj*, void*))vt2->slot20C;
            fn2(r, p);
            sub_802944(p);
        }
        if (out3) {
            VTable* vt4 = ((Obj*)out3)->vt;
            void (*fn4)(Obj*) = (void (*)(Obj*))vt4->pad[1];
            fn4((Obj*)out3);
        }
    }
    if (field_110) {
        void* out4 = 0;
        VTable* vt = field_110->vt;
        void (*fn)(Obj*, void**) = (void (*)(Obj*, void**))vt->slot40;
        fn(field_110, &out4);
        Obj* r = (Obj*)out4;
        if (r) {
            CStr cs("block");
            void* p = *(void**)&cs;
            VTable* vt2 = r->vt;
            void (*fn2)(Obj*, void*) = (void (*)(Obj*, void*))vt2->slot20C;
            fn2(r, p);
            sub_802944(p);
        } else {
            CStr cs("none");
            void* p = *(void**)&cs;
            VTable* vt2 = r->vt;
            void (*fn2)(Obj*, void*) = (void (*)(Obj*, void*))vt2->slot20C;
            fn2(r, p);
            sub_802944(p);
        }
        if (out4) {
            VTable* vt4 = ((Obj*)out4)->vt;
            void (*fn4)(Obj*) = (void (*)(Obj*))vt4->pad[1];
            fn4((Obj*)out4);
        }
    }
}
