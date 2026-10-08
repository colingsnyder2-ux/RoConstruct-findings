// from server: 68% by colin
// roc 2007-08 006a7f30  unit: CXTPRibbonBar  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a7f30

extern "C" int __cdecl sub_6a7a50();
extern "C" int __cdecl sub_6a7bd0();
extern "C" int __stdcall sub_716bb0(int, int);

struct CXTPRibbonBar {
    int f(int, int);
};

int CXTPRibbonBar::f(int a, int b) {
    int edx = sub_6a7a50();
    if (edx == 0)
        return 0;
    if (sub_6a7bd0() == 0)
        return 0;
    int ecx = *(int*)(edx + 0x84);
    return sub_716bb0(b, a);
}
