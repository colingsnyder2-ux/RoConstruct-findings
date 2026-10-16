// from server: 27% by colin
struct CValueItem {
    void f(int, int);
};

struct Obj {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27(void*);
};

extern "C" {
    int __stdcall sub_6da050(void*);
    void* __stdcall sub_6d7920(void*, int);
    void* __stdcall sub_6a17c6(void*, int, const char*, const char*, int);
    void* __stdcall sub_6d8180(void*);
    void __stdcall sub_455f40(void*, void*, void*);
    void __stdcall sub_40e160(void*, void*, const char*);
    int __stdcall sub_802ff0(void*, const char*);
    void __stdcall sub_803f14(void*);
    void* __stdcall sub_803ee0(void*);
    int __stdcall sub_80281c(void*, const char*, void*);
}

extern void* g_96dd84;

void CValueItem::f(int a, int b)
{
    void* self = this;
    int i = 0;
    int total = sub_6da050(self);
    if (total <= 0) return;

    while (i < total) {
        void* inner = sub_6d7920(self, i);
        int cnt = *(int*)((char*)inner + 0x28);
        void* found1 = 0;
        void* found2 = 0;
        int j = 0;
        while (j < cnt) {
            int* arr = *(int**)((char*)inner + 0x24);
            int item = arr[j];
            void* r1 = sub_6a17c6((void*)item, 0, (const char*)0x92de3c, (const char*)0x932114, 0);
            if (r1) {
                found1 = sub_6a17c6((void*)item, 0, (const char*)0x92de3c, (const char*)0x932114, 0);
            }
            void* r2 = sub_6a17c6((void*)item, 0, (const char*)0x92de3c, (const char*)0x932168, 0);
            if (r2) {
                found2 = sub_6a17c6((void*)item, 0, (const char*)0x92de3c, (const char*)0x932168, 0);
            }
            j++;
        }

        Obj* o1 = (Obj*)found2;
        char buf1[0x18];
        o1->v27(buf1);
        int ok1 = sub_802ff0(buf1, (const char*)0x80b716);

        if (ok1) {
            Obj* o2 = (Obj*)found1;
            char buf2[0x18];
            o2->v27(buf2);
            int ok2 = sub_802ff0(buf2, (const char*)0x818750);

            if (ok2) {
                Obj* o3 = (Obj*)found1;
                char buf3[0x18];
                o3->v27(buf3);
                int ok3 = sub_802ff0(buf3, (const char*)0x818748);

                if (ok3) {
                    char buf4[0x18];
                    char buf5[0x18];
                    char buf6[0x18];
                    char buf7[0x18];
                    char buf8[0x18];
                    char buf9[0x18];
                    Obj* o4 = (Obj*)found2;
                    o4->v27(buf4);
                    Obj* o5 = (Obj*)found1;
                    o5->v27(buf5);
                    sub_455f40(buf6, buf5, buf4);
                    sub_40e160(buf7, buf6, (const char*)0x812e54);
                    sub_455f40(buf8, buf7, buf4);
                    sub_40e160(buf9, buf8, (const char*)0x818744);
                    sub_803f14(buf6);
                    sub_803f14(buf7);
                    sub_803f14(buf8);
                    sub_803f14(buf9);
                    sub_803f14(buf5);
                    sub_803f14(buf4);
                    void* s = sub_803ee0(buf3);
                    sub_80281c(g_96dd84, (const char*)0x8103ac, s);
                    sub_803f14(buf3);
                }
            }
        }

        Obj* o6 = (Obj*)found1;
        char b1[0x18];
        o6->v27(b1);
        int k1 = sub_802ff0(b1, (const char*)0x818750);
        int flag = 0;
        if (k1) {
            Obj* o7 = (Obj*)found1;
            char b2[0x18];
            o7->v27(b2);
            int k2 = sub_802ff0(b2, (const char*)0x818748);
            if (k2) flag = 1;
        }

        if (flag) {
            void* p = sub_6d8180(inner);
            if (p) {
                Obj* o8 = (Obj*)found1;
                char b3[0x18];
                char b4[0x18];
                char b5[0x18];
                o8->v27(b3);
                sub_455f40(b4, b3, b3);
                sub_40e160(b5, b4, (const char*)0x818740);
                ((CValueItem*)p)->f(0, 0);
                sub_803f14(b4);
                sub_803f14(b5);
            }
        }

        i++;
        total = sub_6da050(self);
    }
}
