// from server: 49% by colin
struct RBX_VTool_FactoryProduct {
    char pad[0x16c];
    int field_16c;
    int field_170;
    void sub_5d4620(int);
    void method(int);
};

extern "C" void __cdecl sub_444710(const char*);
extern "C" int __cdecl sub_486830(void*);
extern "C" char __cdecl sub_4915f0(void*, int);

void RBX_VTool_FactoryProduct::method(int arg) {
    int old = field_170;
    if (arg > old) {
        sub_444710((const char*)0x8c69d4);
        field_170 = arg;
        if (sub_486830(this)) {
            if (sub_4915f0(this, 1)) {
                if (field_16c >= 5) {
                    int v = arg - 1;
                    if (v > old) {
                        int t = v & 0x80000001;
                        if (t < 0) {
                            t = (t - 1) | 0xfffffffe;
                            t = t + 1;
                        }
                        t = -t;
                        t = (t < 0) ? -1 : 0;
                        t = -t;
                        t = t + 5;
                        sub_5d4620(t);
                    }
                    int u = arg & 0x80000001;
                    if (u < 0) {
                        u = (u - 1) | 0xfffffffe;
                        u = u + 1;
                    }
                    u = -u;
                    u = (u < 0) ? -1 : 0;
                    u = -u;
                    u = u + 5;
                    sub_5d4620(u);
                }
            }
        }
    }
}
