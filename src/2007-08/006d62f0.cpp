// from server: 62% by colin
// roc 2007-08 006d62f0  unit: CXTPReportGroupRow  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d62f0
//
// 006d62f0  56                   push esi
// 006d62f1  8bf1                 mov esi, ecx
// 006d62f3  837e2000             cmp dword ptr [esi + 0x20], 0
// 006d62f7  743d                 je 0x6d6336
// 006d62f9  8b4620               mov eax, dword ptr [esi + 0x20]
// 006d62fc  8b88a0000000         mov ecx, dword ptr [eax + 0xa0]
// 006d6302  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006d6306  57                   push edi
// 006d6307  8b39                 mov edi, dword ptr [ecx]
// 006d6309  8bc8                 mov ecx, eax
// 006d630b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006d630f  52                   push edx
// 006d6310  8b917c010000         mov edx, dword ptr [ecx + 0x17c]
// 006d6316  50                   push eax
// 006d6317  52                   push edx
// 006d6318  e81305f8ff           call 0x656830
// 006d631d  8b5774               mov edx, dword ptr [edi + 0x74]
// 006d6320  50                   push eax
// 006d6321  8b4620               mov eax, dword ptr [esi + 0x20]
// 006d6324  8b88a0000000         mov ecx, dword ptr [eax + 0xa0]
// 006d632a  ffd2                 call edx
// 006d632c  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006d632f  50                   push eax
// 006d6330  e81b44f8ff           call 0x65a750
// 006d6335  5f                   pop edi
// 006d6336  5e                   pop esi
// 006d6337  c20800               ret 8

struct CXTPReportGroupRow {
    char pad[0x20];
    void* field_20;
    int func(int, int);
};

extern "C" int __cdecl sub_656830(int, int, int);
extern "C" int __cdecl sub_65A750(int);

int CXTPReportGroupRow::func(int a, int b) {
    if (field_20 != 0) {
        void* p = field_20;
        void* v = *(void**)((char*)p + 0xa0);
        int (*fn)(void*, int, int, int) = *(int (**)(void*, int, int, int))v;
        int r = sub_656830(*(int*)((char*)p + 0x17c), a, b);
        int (*fn2)(void*, int) = *(int (**)(void*, int))((char*)fn + 0x74);
        int r2 = fn2(*(void**)((char*)field_20 + 0xa0), r);
        return sub_65A750(r2);
    }
    return 0;
}
