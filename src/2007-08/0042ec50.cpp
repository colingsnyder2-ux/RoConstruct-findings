// roc 2007-08 0042ec50  unit: CMainFrame  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042ec50
//
// 0042ec50  56                   push esi
// 0042ec51  8bf1                 mov esi, ecx
// 0042ec53  e8187e2000           call 0x636a70
// 0042ec58  c7062ca87800         mov dword ptr [esi], 0x78a82c
// 0042ec5e  c74620cca77800       mov dword ptr [esi + 0x20], 0x78a7cc
// 0042ec65  8bc6                 mov eax, esi
// 0042ec67  5e                   pop esi
// 0042ec68  c3                   ret 
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControlExt.cpp (function ??0CXTPControlWindowList@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControlExt.cpp
