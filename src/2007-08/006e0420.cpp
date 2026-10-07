// roc 2007-08 006e0420  unit: CXTPDockingPaneAutoHidePanel  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e0420
//
// 006e0420  8b542408             mov edx, dword ptr [esp + 8]
// 006e0424  8b442418             mov eax, dword ptr [esp + 0x18]
// 006e0428  53                   push ebx
// 006e0429  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 006e042d  56                   push esi
// 006e042e  8b742414             mov esi, dword ptr [esp + 0x14]
// 006e0432  89511c               mov dword ptr [ecx + 0x1c], edx
// 006e0435  897120               mov dword ptr [ecx + 0x20], esi
// 006e0438  57                   push edi
// 006e0439  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 006e043d  897924               mov dword ptr [ecx + 0x24], edi
// 006e0440  895928               mov dword ptr [ecx + 0x28], ebx
// 006e0443  895004               mov dword ptr [eax + 4], edx
// 006e0446  897008               mov dword ptr [eax + 8], esi
// 006e0449  89780c               mov dword ptr [eax + 0xc], edi
// 006e044c  5f                   pop edi
// 006e044d  5e                   pop esi
// 006e044e  895810               mov dword ptr [eax + 0x10], ebx
// 006e0451  5b                   pop ebx
// 006e0452  c21800               ret 0x18
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneBase.cpp (function ?OnSizeParent@CXTPDockingPaneBase@@MAEXPAVCWnd@@VCRect@@PAX@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneBase.cpp
