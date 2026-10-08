// from server: 87% by colin
// roc 2007-08 00671e10  unit: CPropertyGridItemBrickColor  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00671e10
//
// 00671e10  56                   push esi
// 00671e11  57                   push edi
// 00671e12  8bf1                 mov esi, ecx
// 00671e14  e857f4ffff           call 0x671270
// 00671e19  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00671e1d  57                   push edi
// 00671e1e  ff157cd27700         call dword ptr [0x77d27c]
// 00671e24  85c0                 test eax, eax
// 00671e26  894608               mov dword ptr [esi + 8], eax
// 00671e29  741b                 je 0x671e46
// 00671e2b  57                   push edi
// 00671e2c  8d4e04               lea ecx, [esi + 4]
// 00671e2f  c7460c02000000       mov dword ptr [esi + 0xc], 2
// 00671e36  ff156cdd7700         call dword ptr [0x77dd6c]
// 00671e3c  5f                   pop edi
// 00671e3d  b801000000           mov eax, 1
// 00671e42  5e                   pop esi
// 00671e43  c20400               ret 4
// 00671e46  5f                   pop edi
// 00671e47  33c0                 xor eax, eax
// 00671e49  5e                   pop esi
// 00671e4a  c20400               ret 4

struct CPropertyGridItemBrickColor {
    char pad0[4];
    int field4;
    int field8;
    int fieldC;
    void sub_671270();
    int init(int);
};

extern "C" void* __stdcall LoadLibraryA(const char*);
extern "C" void __stdcall sub_77DD6C(int);

int CPropertyGridItemBrickColor::init(int a) {
    sub_671270();
    int h = (int)LoadLibraryA((const char*)a);
    field8 = h;
    if (h) {
        fieldC = 2;
        sub_77DD6C(a);
        return 1;
    }
    return 0;
}
