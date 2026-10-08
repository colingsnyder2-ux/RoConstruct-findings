// from server: 91% by colin
// roc 2007-08 006d3b80  unit: CXTPReportColumns  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d3b80
//
// 006d3b80  8b442404             mov eax, dword ptr [esp + 4]
// 006d3b84  56                   push esi
// 006d3b85  8b712c               mov esi, dword ptr [ecx + 0x2c]
// 006d3b88  83c124               add ecx, 0x24
// 006d3b8b  50                   push eax
// 006d3b8c  56                   push esi
// 006d3b8d  e87eedffff           call 0x6d2910
// 006d3b92  8bc6                 mov eax, esi
// 006d3b94  5e                   pop esi
// 006d3b95  c20400               ret 4

struct Inner {
    int Add(int, int);
};

struct CXTPReportColumns {
    char pad[0x24];
    Inner inner;
    char pad2[0x4];
    int field_2c;
    int Add(int);
};

int CXTPReportColumns::Add(int arg) {
    int saved = field_2c;
    inner.Add(arg, saved);
    return saved;
}
