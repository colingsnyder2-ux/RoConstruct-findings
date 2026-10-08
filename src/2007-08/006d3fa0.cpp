// from server: 100% by colin
// roc 2007-08 006d3fa0  unit: CXTPReportRow_Batch  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d3fa0
//
// 006d3fa0  8b4124               mov eax, dword ptr [ecx + 0x24]
// 006d3fa3  8b90cc000000         mov edx, dword ptr [eax + 0xcc]
// 006d3fa9  33c0                 xor eax, eax
// 006d3fab  3b5128               cmp edx, dword ptr [ecx + 0x28]
// 006d3fae  0f94c0               sete al
// 006d3fb1  c3                   ret 

struct CXTPReportRow_Batch_Inner {
    int pad[0x33];
    int value;
};

struct CXTPReportRow_Batch {
    int pad[9];
    CXTPReportRow_Batch_Inner* ptr24;
    int val28;
    bool IsSame();
};

bool CXTPReportRow_Batch::IsSame() {
    return ptr24->value == val28;
}
