// from server: 96% by colin
// roc 2007-08 0065a5d0  unit: CXTPReportControlLocale::UXTP_TIMESPEC::?$CArray  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0065a5d0
//
// 0065a5d0  83ec0c               sub esp, 0xc
// 0065a5d3  8b442410             mov eax, dword ptr [esp + 0x10]
// 0065a5d7  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0065a5db  8b542418             mov edx, dword ptr [esp + 0x18]
// 0065a5df  890424               mov dword ptr [esp], eax
// 0065a5e2  894c2404             mov dword ptr [esp + 4], ecx
// 0065a5e6  8b0dd8878c00         mov ecx, dword ptr [0x8c87d8]
// 0065a5ec  8d0424               lea eax, [esp]
// 0065a5ef  50                   push eax
// 0065a5f0  51                   push ecx
// 0065a5f1  b9d0878c00           mov ecx, 0x8c87d0
// 0065a5f6  89542410             mov dword ptr [esp + 0x10], edx
// 0065a5fa  e8b1c7ffff           call 0x656db0
// 0065a5ff  83c40c               add esp, 0xc
// 0065a602  c3                   ret 

struct CXTPReportControlLocale
{
};

struct Sub656db0
{
    void Call(unsigned int a, const void* p);
};

extern unsigned int G_8c87d8;
extern unsigned int G_8c87d0;

void __cdecl AddTimespec(const void* p, unsigned int a, unsigned int b)
{
    unsigned int local[3];
    local[0] = (unsigned int)p;
    local[1] = a;
    local[2] = b;
    ((Sub656db0*)&G_8c87d0)->Call(G_8c87d8, local);
}
