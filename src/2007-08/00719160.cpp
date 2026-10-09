// from server: 84% by colin
// roc 2007-08 00719160  unit: CXTPRibbonGroupControlPopup  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00719160
//
// 00719160  8b442404             mov eax, dword ptr [esp + 4]
// 00719164  56                   push esi
// 00719165  57                   push edi
// 00719166  8bf9                 mov edi, ecx
// 00719168  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0071916b  8b11                 mov edx, dword ptr [ecx]
// 0071916d  8b4258               mov eax, dword ptr [edx + 0x58]
// 00719170  ffd0                 call eax
// 00719172  8bf0                 mov esi, eax
// 00719174  85f6                 test esi, esi
// 00719176  7428                 je 0x7191a0
// 00719178  8b16                 mov edx, dword ptr [esi]
// 0071917a  8b828c010000         mov eax, dword ptr [edx + 0x18c]
// 00719180  8bce                 mov ecx, esi
// 00719182  ffd0                 call eax
// 00719184  85c0                 test eax, eax
// 00719186  7418                 je 0x7191a0
// 00719188  8b8784000000         mov eax, dword ptr [edi + 0x84]
// 0071918e  50                   push eax
// 0071918f  8bce                 mov ecx, esi
// 00719191  e81a21f9ff           call 0x6ab2b0
// 00719196  85c0                 test eax, eax
// 00719198  7406                 je 0x7191a0
// 0071919a  898778010000         mov dword ptr [edi + 0x178], eax
// 007191a0  5f                   pop edi
// 007191a1  5e                   pop esi
// 007191a2  c20400               ret 4

struct CXTPRibbonGroupControlPopup {
    char pad[0x84];
    int field84;
    char pad2[0x178 - 0x88];
    int field178;
    void func(int);
};

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

extern "C" int __stdcall sub_6AB2B0(int, int);

void CXTPRibbonGroupControlPopup::func(int arg) {
    Inner* p = *(Inner**)(arg + 0x20);
    int result = p->f58();
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
