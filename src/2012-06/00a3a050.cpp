// roc 2012-06 00a3a050  unit: CXTPDockingPaneAutoHidePanel  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3a050
//
// 00a3a050  8b542408             mov edx, dword ptr [esp + 8]
// 00a3a054  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a3a058  53                   push ebx
// 00a3a059  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00a3a05d  56                   push esi
// 00a3a05e  8b742414             mov esi, dword ptr [esp + 0x14]
// 00a3a062  89511c               mov dword ptr [ecx + 0x1c], edx
// 00a3a065  897120               mov dword ptr [ecx + 0x20], esi
// 00a3a068  57                   push edi
// 00a3a069  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00a3a06d  897924               mov dword ptr [ecx + 0x24], edi
// 00a3a070  895928               mov dword ptr [ecx + 0x28], ebx
// 00a3a073  895004               mov dword ptr [eax + 4], edx
// 00a3a076  897008               mov dword ptr [eax + 8], esi
// 00a3a079  89780c               mov dword ptr [eax + 0xc], edi
// 00a3a07c  5f                   pop edi
// 00a3a07d  5e                   pop esi
// 00a3a07e  895810               mov dword ptr [eax + 0x10], ebx
// 00a3a081  5b                   pop ebx
// 00a3a082  c21800               ret 0x18
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneBase.cpp (function ?OnSizeParent@CXTPDockingPaneBase@@MAEXPAVCWnd@@VCRect@@PAX@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneBase.cpp
