// roc 2011-06 008a4c50  unit: IIPAVCXTPMenuBarMDIMenuInfo::?$CMap  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008a4c50
//
// 008a4c50  56                   push esi
// 008a4c51  8bf1                 mov esi, ecx
// 008a4c53  e872791200           call 0x9cc5ca
// 008a4c58  6a0a                 push 0xa
// 008a4c5a  8d4e20               lea ecx, [esi + 0x20]
// 008a4c5d  c706cc2ead00         mov dword ptr [esi], 0xad2ecc
// 008a4c63  e888ffffff           call 0x8a4bf0
// 008a4c68  8b442408             mov eax, dword ptr [esp + 8]
// 008a4c6c  89463c               mov dword ptr [esi + 0x3c], eax
// 008a4c6f  8bc6                 mov eax, esi
// 008a4c71  5e                   pop esi
// 008a4c72  c20400               ret 4
// copied from an identical function in another client (function ??0CXTPMenuBarMDIMenus@@QAE@PAVCXTPMenuBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPMenuBar.cpp