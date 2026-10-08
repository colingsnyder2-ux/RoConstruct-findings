// from server: 51% by colin
// roc 2007-08 006d6440  unit: CXTPReportGroupRow  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d6440
//
// 006d6440  56                   push esi
// 006d6441  8bf1                 mov esi, ecx
// 006d6443  837e2000             cmp dword ptr [esi + 0x20], 0
// 006d6447  7425                 je 0x6d646e
// 006d6449  8b4620               mov eax, dword ptr [esi + 0x20]
// 006d644c  8b88a0000000         mov ecx, dword ptr [eax + 0xa0]
// 006d6452  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006d6456  8b442408             mov eax, dword ptr [esp + 8]
// 006d645a  52                   push edx
// 006d645b  8b11                 mov edx, dword ptr [ecx]
// 006d645d  50                   push eax
// 006d645e  8b425c               mov eax, dword ptr [edx + 0x5c]
// 006d6461  6a00                 push 0
// 006d6463  ffd0                 call eax
// 006d6465  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006d6468  50                   push eax
// 006d6469  e8e242f8ff           call 0x65a750
// 006d646e  5e                   pop esi
// 006d646f  c20800               ret 8

struct CXTPReportGroupRow {
    int field0;
    int field4;
    int field8;
    int fieldC;
    int field10;
    int field14;
    int field18;
    int field1C;
    int field20;
    int func(int, int);
};

extern "C" int __stdcall sub_65a750(int, int);

int CXTPReportGroupRow::func(int a, int b) {
    if (this->field20 == 0) {
        int* p = (int*)this->field20;
        int* vtable = (int*)*(int*)((char*)p + 0xa0);
        int (*fn)(void*, int, int, int) = (int (*)(void*, int, int, int))vtable[0x5c / 4];
        int r = fn((char*)p + 0xa0, 0, a, b);
        return sub_65a750(this->field20, r);
    }
    return 0;
}
