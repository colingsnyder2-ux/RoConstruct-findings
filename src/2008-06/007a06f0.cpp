// roc 2008-06 007a06f0  unit: CXTPDockingPaneAutoHidePanel  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a06f0
//
// 007a06f0  53                   push ebx
// 007a06f1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 007a06f5  3bd9                 cmp ebx, ecx
// 007a06f7  7509                 jne 0x7a0702
// 007a06f9  b801000000           mov eax, 1
// 007a06fe  5b                   pop ebx
// 007a06ff  c20400               ret 4
// 007a0702  56                   push esi
// 007a0703  8b713c               mov esi, dword ptr [ecx + 0x3c]
// 007a0706  57                   push edi
// 007a0707  85f6                 test esi, esi
// 007a0709  741e                 je 0x7a0729
// 007a070b  eb03                 jmp 0x7a0710
// 007a070d  8d4900               lea ecx, [ecx]
// 007a0710  8bc6                 mov eax, esi
// 007a0712  8b4808               mov ecx, dword ptr [eax + 8]
// 007a0715  8b01                 mov eax, dword ptr [ecx]
// 007a0717  8b5008               mov edx, dword ptr [eax + 8]
// 007a071a  8bfe                 mov edi, esi
// 007a071c  8b36                 mov esi, dword ptr [esi]
// 007a071e  53                   push ebx
// 007a071f  ffd2                 call edx
// 007a0721  85c0                 test eax, eax
// 007a0723  750c                 jne 0x7a0731
// 007a0725  85f6                 test esi, esi
// 007a0727  75e7                 jne 0x7a0710
// 007a0729  5f                   pop edi
// 007a072a  5e                   pop esi
// 007a072b  33c0                 xor eax, eax
// 007a072d  5b                   pop ebx
// 007a072e  c20400               ret 4
// 007a0731  8bc7                 mov eax, edi
// 007a0733  5f                   pop edi
// 007a0734  5e                   pop esi
// 007a0735  5b                   pop ebx
// 007a0736  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneBaseContainer.cpp (function ?ContainPane@CXTPDockingPaneBaseContainer@@UBEPAU__POSITION@@PAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneBaseContainer.cpp
