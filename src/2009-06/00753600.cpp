// from server: 100% by atomic.potato
// roc 2009-06 00753600  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00753600
//
// 00753600  56                   push esi
// 00753601  8bf1                 mov esi, ecx
// 00753603  e822890f00           call 0x84bf2a
// 00753608  8b442408             mov eax, dword ptr [esp + 8]
// 0075360c  8d4e2c               lea ecx, [esi + 0x2c]
// 0075360f  c7068c5e8f00         mov dword ptr [esi], 0x8f5e8c
// 00753615  894620               mov dword ptr [esi + 0x20], eax
// 00753618  e8f3f4ffff           call 0x752b10
// 0075361d  33c0                 xor eax, eax
// 0075361f  894628               mov dword ptr [esi + 0x28], eax
// 00753622  894640               mov dword ptr [esi + 0x40], eax
// 00753625  894644               mov dword ptr [esi + 0x44], eax
// 00753628  c74624ffffffff       mov dword ptr [esi + 0x24], 0xffffffff
// 0075362f  8bc6                 mov eax, esi
// 00753631  5e                   pop esi
// 00753632  c20400               ret 4

struct VCXTPReportRows
{
    void* vfptr;
    char pad0[0x1c];
    int field20;
    int field24;
    int field28;
    char pad1[0x14];
    int field40;
    int field44;
    char pad2[0x14];
    void sub_752b10();
    void sub_84bf2a();
    VCXTPReportRows* ctor(int);
};

VCXTPReportRows* VCXTPReportRows::ctor(int arg)
{
    sub_84bf2a();
    vfptr = (void*)0x8f5e8c;
    field20 = arg;
    ((VCXTPReportRows*)((char*)this + 0x2c))->sub_752b10();
    field28 = 0;
    field40 = 0;
    field44 = 0;
    field24 = -1;
    return this;
}
