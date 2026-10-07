// roc 2008-06 0075d380  unit: CXTPDockingPaneAutoHidePanel  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075d380
//
// 0075d380  8b542408             mov edx, dword ptr [esp + 8]
// 0075d384  8b442418             mov eax, dword ptr [esp + 0x18]
// 0075d388  53                   push ebx
// 0075d389  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0075d38d  56                   push esi
// 0075d38e  8b742414             mov esi, dword ptr [esp + 0x14]
// 0075d392  89511c               mov dword ptr [ecx + 0x1c], edx
// 0075d395  897120               mov dword ptr [ecx + 0x20], esi
// 0075d398  57                   push edi
// 0075d399  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0075d39d  897924               mov dword ptr [ecx + 0x24], edi
// 0075d3a0  895928               mov dword ptr [ecx + 0x28], ebx
// 0075d3a3  895004               mov dword ptr [eax + 4], edx
// 0075d3a6  897008               mov dword ptr [eax + 8], esi
// 0075d3a9  89780c               mov dword ptr [eax + 0xc], edi
// 0075d3ac  5f                   pop edi
// 0075d3ad  5e                   pop esi
// 0075d3ae  895810               mov dword ptr [eax + 0x10], ebx
// 0075d3b1  5b                   pop ebx
// 0075d3b2  c21800               ret 0x18
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneBase.cpp (function ?OnSizeParent@CXTPDockingPaneBase@@MAEXPAVCWnd@@VCRect@@PAX@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneBase.cpp
