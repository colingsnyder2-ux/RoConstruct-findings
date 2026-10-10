// from server: 90% by colin
struct Inner {
    virtual int f0();
    virtual int f1();
    virtual int f2();
    virtual int f3();
    virtual int f4();
    virtual int f5();
    virtual int f6();
    virtual int f7();
    virtual int f8();
    virtual int f9();
    virtual int f10();
    virtual int f11();
    virtual int f12();
    virtual int f13();
    virtual int f14();
    virtual int f15();
    virtual int f16();
    virtual int f17();
    virtual int f18();
    virtual int f19();
    virtual int f20();
    virtual int f21();
    virtual int f22();
    virtual int f23();
    virtual int f24();
    virtual int f25();
    virtual int f26();
    virtual int f27();
    virtual int f28();
    virtual int f29();
    virtual int f30();
    virtual int f31();
    virtual int f32();
    virtual int f33();
    virtual int f34();
    virtual int f35();
    virtual int f36();
    virtual int f37();
    virtual int f38();
    virtual int f39();
    virtual int f40();
    virtual int f41();
    virtual int f42();
    virtual int f43();
    virtual int f44();
    virtual int f45();
    virtual int f46();
    virtual int f47();
    virtual int f48();
    virtual int f49();
    virtual int f50();
    virtual int f51();
    virtual int f52();
    virtual int f53();
    virtual int f54();
    virtual int f55();
    virtual int f56();
    virtual int f57();
    virtual int f58();
    virtual int f59();
    virtual int f60();
    virtual int f61();
    virtual int f62();
    virtual int f63();
    virtual int f64();
    virtual int f65();
    virtual int f66();
    virtual int f67();
    virtual int f68();
    virtual int f69();
    virtual int f70();
    virtual int f71();
    virtual int f72();
    virtual int f73();
    virtual int f74();
    virtual int f75();
    virtual int f76();
    virtual int f77();
    virtual int f78();
    virtual int f79();
    virtual int f80();
    virtual int f81();
    virtual int f82();
    virtual int f83();
    virtual int f84();
    virtual int f85();
    virtual int f86();
    virtual int f87();
    virtual int f88();
    virtual int f89();
    virtual int f90();
    virtual int f91();
    virtual int f92();
    virtual int f93();
    virtual int f94();
    virtual int f95();
    virtual int f96();
    virtual int f97();
    virtual int f98();
    virtual int f99();
};

struct CXTPRibbonGroupControlPopup {
    char pad[0x84];
    int field84;
    char pad2[0x178 - 0x88];
    int field178;
    void func(int);
};

extern "C" int __stdcall sub_6AB2B0(int, int);

void CXTPRibbonGroupControlPopup::func(int arg) {
    Inner* p = *(Inner**)(arg + 0x20);
    int result = p->f22();
    if (result != 0) {
        Inner* q = (Inner*)result;
        int r2 = q->f99();
        if (r2 != 0) {
            int r3 = sub_6AB2B0(field84, result);
            if (r3 != 0) {
                field178 = r3;
            }
        }
    }
}
