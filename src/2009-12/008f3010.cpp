// roc 2009-12 008f3010  unit: CXTPDockingPaneAutoHidePanel  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f3010
//
// 008f3010  53                   push ebx
// 008f3011  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 008f3015  56                   push esi
// 008f3016  57                   push edi
// 008f3017  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008f301b  8bf1                 mov esi, ecx
// 008f301d  397e18               cmp dword ptr [esi + 0x18], edi
// 008f3020  7513                 jne 0x8f3035
// 008f3022  8b06                 mov eax, dword ptr [esi]
// 008f3024  8b5014               mov edx, dword ptr [eax + 0x14]
// 008f3027  ffd2                 call edx
// 008f3029  85c0                 test eax, eax
// 008f302b  7527                 jne 0x8f3054
// 008f302d  56                   push esi
// 008f302e  8bcb                 mov ecx, ebx
// 008f3030  e84b0bfdff           call 0x8c3b80
// 008f3035  8b763c               mov esi, dword ptr [esi + 0x3c]
// 008f3038  85f6                 test esi, esi
// 008f303a  7418                 je 0x8f3054
// 008f303c  8d642400             lea esp, [esp]
// 008f3040  8bc6                 mov eax, esi
// 008f3042  8b4808               mov ecx, dword ptr [eax + 8]
// 008f3045  8b01                 mov eax, dword ptr [ecx]
// 008f3047  8b500c               mov edx, dword ptr [eax + 0xc]
// 008f304a  8b36                 mov esi, dword ptr [esi]
// 008f304c  53                   push ebx
// 008f304d  57                   push edi
// 008f304e  ffd2                 call edx
// 008f3050  85f6                 test esi, esi
// 008f3052  75ec                 jne 0x8f3040
// 008f3054  5f                   pop edi
// 008f3055  5e                   pop esi
// 008f3056  5b                   pop ebx
// 008f3057  c20800               ret 8
// copied from an identical function in another client (function ?FindPane@CXTPDockingPaneBaseContainer@@UBEXW4XTPDockingPaneType@@PAV?$CList@PAVCXTPDockingPaneBase@@PAV1@@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneBaseContainer.cpp