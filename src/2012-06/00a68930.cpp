// roc 2012-06 00a68930  unit: PAVCXTShadowWnd::?$CList  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a68930
//
// 00a68930  56                   push esi
// 00a68931  57                   push edi
// 00a68932  6a0a                 push 0xa
// 00a68934  8bf1                 mov esi, ecx
// 00a68936  e825feffff           call 0xa68760
// 00a6893b  8d7e1c               lea edi, [esi + 0x1c]
// 00a6893e  6a0a                 push 0xa
// 00a68940  8bcf                 mov ecx, edi
// 00a68942  c7063457c200         mov dword ptr [esi], 0xc25734
// 00a68948  e813feffff           call 0xa68760
// 00a6894d  6820d1c000           push 0xc0d120
// 00a68952  c7073457c200         mov dword ptr [edi], 0xc25734
// 00a68958  ff15ac21b200         call dword ptr [0xb221ac]
// 00a6895e  c7463800000000       mov dword ptr [esi + 0x38], 0
// 00a68965  85c0                 test eax, eax
// 00a68967  740f                 je 0xa68978
// 00a68969  68c02cc200           push 0xc22cc0
// 00a6896e  50                   push eax
// 00a6896f  ff15b021b200         call dword ptr [0xb221b0]
// 00a68975  894638               mov dword ptr [esi + 0x38], eax
// 00a68978  5f                   pop edi
// 00a68979  8bc6                 mov eax, esi
// 00a6897b  5e                   pop esi
// 00a6897c  c3                   ret 
// copied from an identical function in another client (function ??0CXTShadowsManager@@AAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTWndShadow.cpp