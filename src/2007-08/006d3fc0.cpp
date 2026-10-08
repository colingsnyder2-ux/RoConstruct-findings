// from server: 70% by colin
// roc 2007-08 006d3fc0  unit: CXTPReportRow_Batch  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d3fc0
//
// 006d3fc0  8bc1                 mov eax, ecx
// 006d3fc2  8b4824               mov ecx, dword ptr [eax + 0x24]
// 006d3fc5  8b89d0000000         mov ecx, dword ptr [ecx + 0xd0]
// 006d3fcb  50                   push eax
// 006d3fcc  e82f07f9ff           call 0x664700
// 006d3fd1  c3                   ret 

struct CXTPReportRow_Batch
{
    char pad[0x24];
    void* field_24;
    void func_00664700(void*);
    void method_006d3fc0();
};

void CXTPReportRow_Batch::method_006d3fc0()
{
    void* p = field_24;
    void* q = *(void**)((char*)p + 0xd0);
    func_00664700(q);
}
