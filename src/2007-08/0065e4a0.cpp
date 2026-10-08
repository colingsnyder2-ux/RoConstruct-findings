// from server: 89% by colin
// roc 2007-08 0065e4a0  unit: CXTPReportControl  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0065e4a0
//
// 0065e4a0  8b4954               mov ecx, dword ptr [ecx + 0x54]
// 0065e4a3  e8b84f0700           call 0x6d3460
// 0065e4a8  8bc8                 mov ecx, eax
// 0065e4aa  e851080000           call 0x65ed00
// 0065e4af  83b81402000000       cmp dword ptr [eax + 0x214], 0
// 0065e4b6  8b442404             mov eax, dword ptr [esp + 4]
// 0065e4ba  740d                 je 0x65e4c9
// 0065e4bc  a802                 test al, 2
// 0065e4be  7406                 je 0x65e4c6
// 0065e4c0  83c0fe               add eax, -2
// 0065e4c3  c20400               ret 4
// 0065e4c6  83c002               add eax, 2
// 0065e4c9  c20400               ret 4

struct CXTPReportControl {
    int field_0x54;
    int sub_65e4a0(int);
};

struct Inner {
    char pad[0x214];
    int field_0x214;
};

extern "C" Inner* __stdcall sub_6d3460(int);
extern "C" Inner* __stdcall sub_65ed00(Inner*);

int CXTPReportControl::sub_65e4a0(int arg) {
    Inner* p = sub_6d3460(field_0x54);
    p = sub_65ed00(p);
    if (p->field_0x214 != 0) {
        if ((arg & 2) != 0) {
            return arg - 2;
        }
        return arg + 2;
    }
    return arg;
}
