// roc 2008-06 00720cb0  unit: IIPAVCXTPMenuBarMDIMenuInfo::?$CMap  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00720cb0
//
// 00720cb0  56                   push esi
// 00720cb1  8bf1                 mov esi, ecx
// 00720cb3  e8f2b20900           call 0x7bbfaa
// 00720cb8  6a0a                 push 0xa
// 00720cba  8d4e20               lea ecx, [esi + 0x20]
// 00720cbd  c7061c068600         mov dword ptr [esi], 0x86061c
// 00720cc3  e888ffffff           call 0x720c50
// 00720cc8  8b442408             mov eax, dword ptr [esp + 8]
// 00720ccc  89463c               mov dword ptr [esi + 0x3c], eax
// 00720ccf  8bc6                 mov eax, esi
// 00720cd1  5e                   pop esi
// 00720cd2  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPMenuBar.cpp (function ??0CXTPMenuBarMDIMenus@@QAE@PAVCXTPMenuBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPMenuBar.cpp
