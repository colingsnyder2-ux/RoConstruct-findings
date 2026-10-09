// from server: 60% by colin
// roc 2007-08 006d62a0  unit: CXTPReportGroupRow  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d62a0
//
// 006d62a0  56                   push esi
// 006d62a1  8bf1                 mov esi, ecx
// 006d62a3  837e2000             cmp dword ptr [esi + 0x20], 0
// 006d62a7  743d                 je 0x6d62e6
// 006d62a9  8b4620               mov eax, dword ptr [esi + 0x20]
// 006d62ac  8b88a0000000         mov ecx, dword ptr [eax + 0xa0]
// 006d62b2  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006d62b6  57                   push edi
// 006d62b7  8b39                 mov edi, dword ptr [ecx]
// 006d62b9  8bc8                 mov ecx, eax
// 006d62bb  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006d62bf  52                   push edx
// 006d62c0  8b917c010000         mov edx, dword ptr [ecx + 0x17c]
// 006d62c6  50                   push eax
// 006d62c7  52                   push edx
// 006d62c8  e86305f8ff           call 0x656830
// 006d62cd  8b5770               mov edx, dword ptr [edi + 0x70]
// 006d62d0  50                   push eax
// 006d62d1  8b4620               mov eax, dword ptr [esi + 0x20]
// 006d62d4  8b88a0000000         mov ecx, dword ptr [eax + 0xa0]
// 006d62da  ffd2                 call edx
// 006d62dc  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006d62df  50                   push eax
// 006d62e0  e86b44f8ff           call 0x65a750
// 006d62e5  5f                   pop edi
// 006d62e6  5e                   pop esi
// 006d62e7  c20800               ret 8

struct CXTPReportGroupRow {
    char pad[0x20];
    void* field20;
    void func(int, int);
};

extern "C" int __stdcall sub_656830(int, int, int);
extern "C" void __stdcall sub_65A750(void*);

void CXTPReportGroupRow::func(int a, int b) {
    if (field20 != 0) {
        void* p = field20;
        int* vtable = *(int**)((char*)p + 0xa0);
        int (*fn)(void*, int) = *(int (**)(void*, int))((char*)vtable + 0x70);
        int r = sub_656830(*(int*)((char*)p + 0x17c), a, b);
        void* obj = *(void**)((char*)field20 + 0xa0);
        int r2 = fn(obj, r);
        sub_65A750((void*)r2);
    }
}
