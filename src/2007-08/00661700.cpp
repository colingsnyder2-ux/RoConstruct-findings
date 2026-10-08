// from server: 43% by colin
// roc 2007-08 00661700  unit: VCXTPReportRecords::?$CXTPHeapObjectT  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00661700
//
// 00661700  83793400             cmp dword ptr [ecx + 0x34], 0
// 00661704  8b542404             mov edx, dword ptr [esp + 4]
// 00661708  740c                 je 0x661716
// 0066170a  8b4134               mov eax, dword ptr [ecx + 0x34]
// 0066170d  89504c               mov dword ptr [eax + 0x4c], edx
// 00661710  8b4134               mov eax, dword ptr [ecx + 0x34]
// 00661713  c20400               ret 4
// 00661716  85d2                 test edx, edx
// 00661718  7c1c                 jl 0x661736
// 0066171a  e831250000           call 0x663c50
// 0066171f  3bd0                 cmp edx, eax
// 00661721  7d13                 jge 0x661736
// 00661723  3b5128               cmp edx, dword ptr [ecx + 0x28]
// 00661726  7d09                 jge 0x661731
// 00661728  8b4124               mov eax, dword ptr [ecx + 0x24]
// 0066172b  8b0490               mov eax, dword ptr [eax + edx*4]
// 0066172e  c20400               ret 4
// 00661731  e8eae7fcff           call 0x62ff20
// 00661736  33c0                 xor eax, eax
// 00661738  c20400               ret 4

struct VCXTPReportRecords_CXTPHeapObjectT {
    char pad[0x24];
    int field_24;
    int field_28;
    char pad2[0x8];
    void* field_34;
    void* GetAt(int);
    int GetCount();
    void* GetAt2(int);
    void* SetAt(void*);
};

void* VCXTPReportRecords_CXTPHeapObjectT::GetAt(int index) {
    if (field_34 != 0) {
        *(int*)((char*)field_34 + 0x4c) = index;
        return field_34;
    }
    if (index < 0)
        return 0;
    if (index >= GetCount())
        return 0;
    if (index < field_28)
        return (void*)((int*)field_24)[index];
    return GetAt2(index);
}
