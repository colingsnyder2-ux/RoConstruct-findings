// from server: 100% by colin
// roc 2007-08 00455350  unit: CRobloxReportView  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00455350
//
// 00455350  8b442404             mov eax, dword ptr [esp + 4]
// 00455354  56                   push esi
// 00455355  50                   push eax
// 00455356  8bf1                 mov esi, ecx
// 00455358  e853ffffff           call 0x4552b0
// 0045535d  c70694257900         mov dword ptr [esi], 0x792594
// 00455363  c746048c257900       mov dword ptr [esi + 4], 0x79258c
// 0045536a  c7461084257900       mov dword ptr [esi + 0x10], 0x792584
// 00455371  c7461474257900       mov dword ptr [esi + 0x14], 0x792574
// 00455378  c7462c64257900       mov dword ptr [esi + 0x2c], 0x792564
// 0045537f  c7464454257900       mov dword ptr [esi + 0x44], 0x792554
// 00455386  c7465c44257900       mov dword ptr [esi + 0x5c], 0x792544
// 0045538d  c7467434257900       mov dword ptr [esi + 0x74], 0x792534
// 00455394  c7868c00000024257900 mov dword ptr [esi + 0x8c], 0x792524
// 0045539e  8bc6                 mov eax, esi
// 004553a0  5e                   pop esi
// 004553a1  c20400               ret 4

struct CRobloxReportView {
    CRobloxReportView* construct(int arg);
};

extern "C" void __stdcall sub_4552B0(int arg);

CRobloxReportView* CRobloxReportView::construct(int arg) {
    sub_4552B0(arg);
    *(int*)((char*)this + 0x00) = 0x792594;
    *(int*)((char*)this + 0x04) = 0x79258c;
    *(int*)((char*)this + 0x10) = 0x792584;
    *(int*)((char*)this + 0x14) = 0x792574;
    *(int*)((char*)this + 0x2c) = 0x792564;
    *(int*)((char*)this + 0x44) = 0x792554;
    *(int*)((char*)this + 0x5c) = 0x792544;
    *(int*)((char*)this + 0x74) = 0x792534;
    *(int*)((char*)this + 0x8c) = 0x792524;
    return this;
}
