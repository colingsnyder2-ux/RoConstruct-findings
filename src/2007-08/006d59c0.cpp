// from server: 79% by colin
// roc 2007-08 006d59c0  unit: CXTPReportRow_Batch  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d59c0
//
// 006d59c0  56                   push esi
// 006d59c1  8bf1                 mov esi, ecx
// 006d59c3  e812acf5ff           call 0x6305da
// 006d59c8  8d4e68               lea ecx, [esi + 0x68]
// 006d59cb  c706d4847d00         mov dword ptr [esi], 0x7d84d4
// 006d59d1  ff15acdd7700         call dword ptr [0x77ddac]
// 006d59d7  33c0                 xor eax, eax
// 006d59d9  894678               mov dword ptr [esi + 0x78], eax
// 006d59dc  c74674084a7900       mov dword ptr [esi + 0x74], 0x794a08
// 006d59e3  894664               mov dword ptr [esi + 0x64], eax
// 006d59e6  89466c               mov dword ptr [esi + 0x6c], eax
// 006d59e9  c74670ffffffff       mov dword ptr [esi + 0x70], 0xffffffff
// 006d59f0  8bc6                 mov eax, esi
// 006d59f2  5e                   pop esi
// 006d59f3  c3                   ret 

struct CXTPReportRow_Batch
{
    char pad0[0x64];
    int field_64;
    char pad68[0x4];
    int field_6c;
    int field_70;
    int field_74;
    int field_78;
    void construct();
};

extern "C" void __stdcall sub_6305da();
extern "C" void __stdcall sub_77ddac();

void CXTPReportRow_Batch::construct()
{
    sub_6305da();
    *(int*)this = 0x7d84d4;
    sub_77ddac();
    field_78 = 0;
    field_74 = 0x794a08;
    field_64 = 0;
    field_6c = 0;
    field_70 = -1;
}
