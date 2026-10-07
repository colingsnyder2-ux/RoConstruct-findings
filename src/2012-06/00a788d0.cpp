// roc 2012-06 00a788d0  unit: CXTPDockingPaneAutoHidePanel  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a788d0
//
// 00a788d0  53                   push ebx
// 00a788d1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00a788d5  3bd9                 cmp ebx, ecx
// 00a788d7  7509                 jne 0xa788e2
// 00a788d9  b801000000           mov eax, 1
// 00a788de  5b                   pop ebx
// 00a788df  c20400               ret 4
// 00a788e2  56                   push esi
// 00a788e3  8b713c               mov esi, dword ptr [ecx + 0x3c]
// 00a788e6  57                   push edi
// 00a788e7  85f6                 test esi, esi
// 00a788e9  741e                 je 0xa78909
// 00a788eb  eb03                 jmp 0xa788f0
// 00a788ed  8d4900               lea ecx, [ecx]
// 00a788f0  8bc6                 mov eax, esi
// 00a788f2  8b4808               mov ecx, dword ptr [eax + 8]
// 00a788f5  8b01                 mov eax, dword ptr [ecx]
// 00a788f7  8b5008               mov edx, dword ptr [eax + 8]
// 00a788fa  8bfe                 mov edi, esi
// 00a788fc  8b36                 mov esi, dword ptr [esi]
// 00a788fe  53                   push ebx
// 00a788ff  ffd2                 call edx
// 00a78901  85c0                 test eax, eax
// 00a78903  750c                 jne 0xa78911
// 00a78905  85f6                 test esi, esi
// 00a78907  75e7                 jne 0xa788f0
// 00a78909  5f                   pop edi
// 00a7890a  5e                   pop esi
// 00a7890b  33c0                 xor eax, eax
// 00a7890d  5b                   pop ebx
// 00a7890e  c20400               ret 4
// 00a78911  8bc7                 mov eax, edi
// 00a78913  5f                   pop edi
// 00a78914  5e                   pop esi
// 00a78915  5b                   pop ebx
// 00a78916  c20400               ret 4
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneBaseContainer.cpp (function ?ContainPane@CXTPDockingPaneBaseContainer@@UBEPAU__POSITION@@PAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneBaseContainer.cpp
