// from server: 100% by auto
// roc 2012-06 00a1d100  unit: IIPAVCXTPMenuBarMDIMenuInfo::?$CMap  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a1d100
//
// 00a1d100  56                   push esi
// 00a1d101  8bf1                 mov esi, ecx
// 00a1d103  e87cc40700           call 0xa99584
// 00a1d108  6a0a                 push 0xa
// 00a1d10a  8d4e20               lea ecx, [esi + 0x20]
// 00a1d10d  c70664e5c100         mov dword ptr [esi], 0xc1e564
// 00a1d113  e818ffffff           call 0xa1d030
// 00a1d118  8b442408             mov eax, dword ptr [esp + 8]
// 00a1d11c  89463c               mov dword ptr [esi + 0x3c], eax
// 00a1d11f  8bc6                 mov eax, esi
// 00a1d121  5e                   pop esi
// 00a1d122  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPMenuBar.cpp (function ??0CXTPMenuBarMDIMenus@@QAE@PAVCXTPMenuBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPMenuBar.cpp
