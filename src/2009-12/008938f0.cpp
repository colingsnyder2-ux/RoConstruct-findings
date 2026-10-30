// roc 2009-12 008938f0  unit: IIPAVCXTPMenuBarMDIMenuInfo::?$CMap  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008938f0
//
// 008938f0  56                   push esi
// 008938f1  8bf1                 mov esi, ecx
// 008938f3  e84a2b0900           call 0x926442
// 008938f8  6a0a                 push 0xa
// 008938fa  8d4e20               lea ecx, [esi + 0x20]
// 008938fd  c706cc41a000         mov dword ptr [esi], 0xa041cc
// 00893903  e888ffffff           call 0x893890
// 00893908  8b442408             mov eax, dword ptr [esp + 8]
// 0089390c  89463c               mov dword ptr [esi + 0x3c], eax
// 0089390f  8bc6                 mov eax, esi
// 00893911  5e                   pop esi
// 00893912  c20400               ret 4
// copied from an identical function in another client (function ??0CXTPMenuBarMDIMenus@@QAE@PAVCXTPMenuBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPMenuBar.cpp