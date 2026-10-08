// from server: 71% by colin
// roc 2007-08 0067f930  unit: CXTPPrintPageHeaderFooter  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067f930
//
// 0067f930  56                   push esi
// 0067f931  8bf1                 mov esi, ecx
// 0067f933  8d4e6c               lea ecx, [esi + 0x6c]
// 0067f936  c7063ceb7c00         mov dword ptr [esi], 0x7ceb3c
// 0067f93c  ff15bcdd7700         call dword ptr [0x77ddbc]
// 0067f942  8d4e68               lea ecx, [esi + 0x68]
// 0067f945  ff15bcdd7700         call dword ptr [0x77ddbc]
// 0067f94b  8d4e64               lea ecx, [esi + 0x64]
// 0067f94e  ff15bcdd7700         call dword ptr [0x77ddbc]
// 0067f954  8d4e60               lea ecx, [esi + 0x60]
// 0067f957  ff15bcdd7700         call dword ptr [0x77ddbc]
// 0067f95d  8bce                 mov ecx, esi
// 0067f95f  5e                   pop esi
// 0067f960  e9350dfbff           jmp 0x63069a

struct CXTPPrintPageHeaderFooter
{
    char pad[0x60];
    int field60;
    int field64;
    int field68;
    int field6c;
    void Destruct();
};

extern "C" void __stdcall sub_77ddbc();
extern "C" void __fastcall sub_63069a(CXTPPrintPageHeaderFooter*);

void CXTPPrintPageHeaderFooter::Destruct()
{
    field6c = 0;
    *(int*)this = 0x7ceb3c;
    sub_77ddbc();
    field68 = 0;
    sub_77ddbc();
    field64 = 0;
    sub_77ddbc();
    field60 = 0;
    sub_77ddbc();
    sub_63069a(this);
}
