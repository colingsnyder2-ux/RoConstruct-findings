// roc 2007-03 00643d10  unit: seg_00640000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00643d10
//
// 00643d10  8b89ac000000         mov ecx, dword ptr [ecx + 0xac]
// 00643d16  56                   push esi
// 00643d17  8b742408             mov esi, dword ptr [esp + 8]
// 00643d1b  56                   push esi
// 00643d1c  e87f8c0700           call 0x6bc9a0
// 00643d21  8bc6                 mov eax, esi
// 00643d23  5e                   pop esi
// 00643d24  c20400               ret 4
// copied from an identical function in another client (function ?g@Outer@ns_ROCX00001a@@QAEHH@Z)

namespace ns_ROCX00001a {
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
}
