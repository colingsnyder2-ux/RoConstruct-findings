// from server: 100% by colin
// roc 2007-08 00664110  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00664110
//
// 00664110  56                   push esi
// 00664111  8bf1                 mov esi, ecx
// 00664113  e822420d00           call 0x73833a
// 00664118  8b442408             mov eax, dword ptr [esp + 8]
// 0066411c  8d4e2c               lea ecx, [esi + 0x2c]
// 0066411f  c7061c977c00         mov dword ptr [esi], 0x7c971c
// 00664125  894620               mov dword ptr [esi + 0x20], eax
// 00664128  e8a3fcffff           call 0x663dd0
// 0066412d  33c0                 xor eax, eax
// 0066412f  894628               mov dword ptr [esi + 0x28], eax
// 00664132  894640               mov dword ptr [esi + 0x40], eax
// 00664135  c74624ffffffff       mov dword ptr [esi + 0x24], 0xffffffff
// 0066413c  8bc6                 mov eax, esi
// 0066413e  5e                   pop esi
// 0066413f  c20400               ret 4

struct VCXTPReportRows_CXTPHeapObjectT {
    char pad[0x20];
    int field20;
    int field24;
    int field28;
    char pad2[0x14];
    int field40;
    char pad3[0x0c];
    int field50;

    VCXTPReportRows_CXTPHeapObjectT* construct(int);
};

extern "C" void __fastcall sub_73833a(void*);
extern "C" void __fastcall sub_663dd0(void*);

VCXTPReportRows_CXTPHeapObjectT* VCXTPReportRows_CXTPHeapObjectT::construct(int arg) {
    sub_73833a(this);
    *(int*)this = 0x7c971c;
    this->field20 = arg;
    sub_663dd0((char*)this + 0x2c);
    this->field28 = 0;
    this->field40 = 0;
    this->field24 = -1;
    return this;
}
