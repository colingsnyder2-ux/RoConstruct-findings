// from server: 100% by colin
// roc 2007-08 00655f00  unit: CXTPReportControl  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00655f00
//
// 00655f00  8b89ac000000         mov ecx, dword ptr [ecx + 0xac]
// 00655f06  56                   push esi
// 00655f07  8b742408             mov esi, dword ptr [esp + 8]
// 00655f0b  56                   push esi
// 00655f0c  e80fd80700           call 0x6d3720
// 00655f11  8bc6                 mov eax, esi
// 00655f13  5e                   pop esi
// 00655f14  c20400               ret 4

struct Inner {
    int f(int);
};

struct Outer {
    char pad[0xac];
    Inner* inner;
    int g(int);
};

int Outer::g(int x) {
    inner->f(x);
    return x;
}
