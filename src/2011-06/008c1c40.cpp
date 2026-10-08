// from server: 100% by auto
// roc 2011-06 008c1c40  unit: CXTPDockingPaneAutoHidePanel  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c1c40
//
// 008c1c40  8b542408             mov edx, dword ptr [esp + 8]
// 008c1c44  8b442418             mov eax, dword ptr [esp + 0x18]
// 008c1c48  53                   push ebx
// 008c1c49  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 008c1c4d  56                   push esi
// 008c1c4e  8b742414             mov esi, dword ptr [esp + 0x14]
// 008c1c52  89511c               mov dword ptr [ecx + 0x1c], edx
// 008c1c55  897120               mov dword ptr [ecx + 0x20], esi
// 008c1c58  57                   push edi
// 008c1c59  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 008c1c5d  897924               mov dword ptr [ecx + 0x24], edi
// 008c1c60  895928               mov dword ptr [ecx + 0x28], ebx
// 008c1c63  895004               mov dword ptr [eax + 4], edx
// 008c1c66  897008               mov dword ptr [eax + 8], esi
// 008c1c69  89780c               mov dword ptr [eax + 0xc], edi
// 008c1c6c  5f                   pop edi
// 008c1c6d  5e                   pop esi
// 008c1c6e  895810               mov dword ptr [eax + 0x10], ebx
// 008c1c71  5b                   pop ebx
// 008c1c72  c21800               ret 0x18
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneBase.cpp (function ?OnSizeParent@CXTPDockingPaneBase@@MAEXPAVCWnd@@VCRect@@PAX@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneBase.cpp
