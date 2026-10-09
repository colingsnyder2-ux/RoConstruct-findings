// from server: 100% by colin
// roc 2007-08 004553b0  unit: CRobloxReportView  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004553b0
//
// 004553b0  56                   push esi
// 004553b1  6890267900           push 0x792690
// 004553b6  8bf1                 mov esi, ecx
// 004553b8  e893ffffff           call 0x455350
// 004553bd  c7064c267900         mov dword ptr [esi], 0x79264c
// 004553c3  c7460444267900       mov dword ptr [esi + 4], 0x792644
// 004553ca  c746103c267900       mov dword ptr [esi + 0x10], 0x79263c
// 004553d1  c746142c267900       mov dword ptr [esi + 0x14], 0x79262c
// 004553d8  c7462c1c267900       mov dword ptr [esi + 0x2c], 0x79261c
// 004553df  c746440c267900       mov dword ptr [esi + 0x44], 0x79260c
// 004553e6  c7465cfc257900       mov dword ptr [esi + 0x5c], 0x7925fc
// 004553ed  c74674ec257900       mov dword ptr [esi + 0x74], 0x7925ec
// 004553f4  c7868c000000dc257900 mov dword ptr [esi + 0x8c], 0x7925dc
// 004553fe  8bc6                 mov eax, esi
// 00455400  5e                   pop esi
// 00455401  c3                   ret 

struct CRobloxReportView {
    char pad[0x90];
    CRobloxReportView* ctor();
};

extern "C" void __stdcall sub_455350(void*);

CRobloxReportView* CRobloxReportView::ctor()
{
    sub_455350((void*)0x792690);
    *(int*)((char*)this + 0x00) = 0x79264c;
    *(int*)((char*)this + 0x04) = 0x792644;
    *(int*)((char*)this + 0x10) = 0x79263c;
    *(int*)((char*)this + 0x14) = 0x79262c;
    *(int*)((char*)this + 0x2c) = 0x79261c;
    *(int*)((char*)this + 0x44) = 0x79260c;
    *(int*)((char*)this + 0x5c) = 0x7925fc;
    *(int*)((char*)this + 0x74) = 0x7925ec;
    *(int*)((char*)this + 0x8c) = 0x7925dc;
    return this;
}
