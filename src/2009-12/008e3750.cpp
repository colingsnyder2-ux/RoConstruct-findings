// roc 2009-12 008e3750  unit: PAVCXTShadowWnd::?$CList  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e3750
//
// 008e3750  56                   push esi
// 008e3751  57                   push edi
// 008e3752  6a0a                 push 0xa
// 008e3754  8bf1                 mov esi, ecx
// 008e3756  e8e5fdffff           call 0x8e3540
// 008e375b  8d7e1c               lea edi, [esi + 0x1c]
// 008e375e  6a0a                 push 0xa
// 008e3760  8bcf                 mov ecx, edi
// 008e3762  c7067cc2a000         mov dword ptr [esi], 0xa0c27c
// 008e3768  e8d3fdffff           call 0x8e3540
// 008e376d  6874299f00           push 0x9f2974
// 008e3772  c7077cc2a000         mov dword ptr [edi], 0xa0c27c
// 008e3778  ff151cb29800         call dword ptr [0x98b21c]
// 008e377e  c7463800000000       mov dword ptr [esi + 0x38], 0
// 008e3785  85c0                 test eax, eax
// 008e3787  740f                 je 0x8e3798
// 008e3789  683089a000           push 0xa08930
// 008e378e  50                   push eax
// 008e378f  ff1520b29800         call dword ptr [0x98b220]
// 008e3795  894638               mov dword ptr [esi + 0x38], eax
// 008e3798  5f                   pop edi
// 008e3799  8bc6                 mov eax, esi
// 008e379b  5e                   pop esi
// 008e379c  c3                   ret 
// copied from an identical function in another client (function ??0CXTShadowsManager@@AAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTWndShadow.cpp