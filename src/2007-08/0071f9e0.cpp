// from server: 100% by auto
// roc 2007-08 0071f9e0  unit: CXTPDockingPaneAutoHidePanel  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0071f9e0
//
// 0071f9e0  53                   push ebx
// 0071f9e1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0071f9e5  3bd9                 cmp ebx, ecx
// 0071f9e7  7509                 jne 0x71f9f2
// 0071f9e9  b801000000           mov eax, 1
// 0071f9ee  5b                   pop ebx
// 0071f9ef  c20400               ret 4
// 0071f9f2  56                   push esi
// 0071f9f3  8b713c               mov esi, dword ptr [ecx + 0x3c]
// 0071f9f6  85f6                 test esi, esi
// 0071f9f8  57                   push edi
// 0071f9f9  741e                 je 0x71fa19
// 0071f9fb  eb03                 jmp 0x71fa00
// 0071f9fd  8d4900               lea ecx, [ecx]
// 0071fa00  8bc6                 mov eax, esi
// 0071fa02  8b4808               mov ecx, dword ptr [eax + 8]
// 0071fa05  8b01                 mov eax, dword ptr [ecx]
// 0071fa07  8b5008               mov edx, dword ptr [eax + 8]
// 0071fa0a  8bfe                 mov edi, esi
// 0071fa0c  8b36                 mov esi, dword ptr [esi]
// 0071fa0e  53                   push ebx
// 0071fa0f  ffd2                 call edx
// 0071fa11  85c0                 test eax, eax
// 0071fa13  750c                 jne 0x71fa21
// 0071fa15  85f6                 test esi, esi
// 0071fa17  75e7                 jne 0x71fa00
// 0071fa19  5f                   pop edi
// 0071fa1a  5e                   pop esi
// 0071fa1b  33c0                 xor eax, eax
// 0071fa1d  5b                   pop ebx
// 0071fa1e  c20400               ret 4
// 0071fa21  8bc7                 mov eax, edi
// 0071fa23  5f                   pop edi
// 0071fa24  5e                   pop esi
// 0071fa25  5b                   pop ebx
// 0071fa26  c20400               ret 4
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneBaseContainer.cpp (function ?ContainPane@CXTPDockingPaneBaseContainer@@UBEPAU__POSITION@@PAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneBaseContainer.cpp
