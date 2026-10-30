// from server: 100% by auto
// roc 2007-08 006a6380  unit: IIPAVCXTPMenuBarMDIMenuInfo::?$CMap  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a6380
//
// 006a6380  56                   push esi
// 006a6381  8bf1                 mov esi, ecx
// 006a6383  e8b21f0900           call 0x73833a
// 006a6388  6a0a                 push 0xa
// 006a638a  8d4e20               lea ecx, [esi + 0x20]
// 006a638d  c7065c417d00         mov dword ptr [esi], 0x7d415c
// 006a6393  e888ffffff           call 0x6a6320
// 006a6398  8b442408             mov eax, dword ptr [esp + 8]
// 006a639c  89463c               mov dword ptr [esi + 0x3c], eax
// 006a639f  8bc6                 mov eax, esi
// 006a63a1  5e                   pop esi
// 006a63a2  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPMenuBar.cpp (function ??0CXTPMenuBarMDIMenus@@QAE@PAVCXTPMenuBar@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPMenuBar.cpp
