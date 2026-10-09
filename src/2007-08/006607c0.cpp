// from server: 85% by colin
// roc 2007-08 006607c0  unit: CXTPReportHeader  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006607c0
//
// 006607c0  8b442404             mov eax, dword ptr [esp + 4]
// 006607c4  56                   push esi
// 006607c5  8bf1                 mov esi, ecx
// 006607c7  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 006607ca  89868c000000         mov dword ptr [esi + 0x8c], eax
// 006607d0  c781bc00000000000000 mov dword ptr [ecx + 0xbc], 0
// 006607da  83be8c00000000       cmp dword ptr [esi + 0x8c], 0
// 006607e1  7412                 je 0x6607f5
// 006607e3  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 006607e6  83792000             cmp dword ptr [ecx + 0x20], 0
// 006607ea  7409                 je 0x6607f5
// 006607ec  6a00                 push 0
// 006607ee  6a00                 push 0
// 006607f0  e8af7d0d00           call 0x7385a4
// 006607f5  8b4624               mov eax, dword ptr [esi + 0x24]
// 006607f8  8b5078               mov edx, dword ptr [eax + 0x78]
// 006607fb  2b5070               sub edx, dword ptr [eax + 0x70]
// 006607fe  83c070               add eax, 0x70
// 00660801  6a00                 push 0
// 00660803  52                   push edx
// 00660804  8bce                 mov ecx, esi
// 00660806  e8f5ebffff           call 0x65f400
// 0066080b  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0066080e  e8fd6bffff           call 0x657410
// 00660813  5e                   pop esi
// 00660814  c20400               ret 4

struct CXTPReportHeader {
    char pad[0x24];
    void* field24;
    char pad2[0x8c - 0x28];
    int field8c;
    char pad3[0xbc - 0x90];
    int fieldbc;
    void SetActiveColumn(int);
    void AdjustColumns(int, int);
    void Update();
};

extern "C" void __stdcall sub_7385a4(int, int);

void CXTPReportHeader::SetActiveColumn(int col) {
    field8c = col;
    void* p = field24;
    *(int*)((char*)p + 0xbc) = 0;
    if (field8c != 0) {
        void* q = field24;
        if (*(int*)((char*)q + 0x20) != 0) {
            sub_7385a4(0, 0);
        }
    }
    void* r = field24;
    int edx = *(int*)((char*)r + 0x78);
    edx -= *(int*)((char*)r + 0x70);
    AdjustColumns(edx, 0);
    void* s = field24;
    ((CXTPReportHeader*)s)->Update();
}
