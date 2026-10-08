// from server: 79% by colin
// roc 2007-08 006d4200  unit: CXTPReportRow_Batch  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d4200
//
// 006d4200  8b414c               mov eax, dword ptr [ecx + 0x4c]
// 006d4203  85c0                 test eax, eax
// 006d4205  7503                 jne 0x6d420a
// 006d4207  c20400               ret 4
// 006d420a  8b542404             mov edx, dword ptr [esp + 4]
// 006d420e  3bd0                 cmp edx, eax
// 006d4210  7508                 jne 0x6d421a
// 006d4212  b801000000           mov eax, 1
// 006d4217  c20400               ret 4
// 006d421a  8bc8                 mov ecx, eax
// 006d421c  8b01                 mov eax, dword ptr [ecx]
// 006d421e  89542404             mov dword ptr [esp + 4], edx
// 006d4222  8b90b4000000         mov edx, dword ptr [eax + 0xb4]
// 006d4228  ffe2                 jmp edx

struct CXTPReportRow_Batch {
    int Compare(int) const;
};

int CXTPReportRow_Batch::Compare(int arg) const {
    int* p = *(int**)((char*)this + 0x4c);
    if (p == 0)
        return 0;
    if (arg == (int)p)
        return 1;
    int* q = p;
    int vtable = *q;
    int (*fn)(void*, int) = *(int (**)(void*, int))((char*)vtable + 0xb4);
    return fn(q, arg);
}
