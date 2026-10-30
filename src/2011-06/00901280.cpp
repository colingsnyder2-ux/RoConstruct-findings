// roc 2011-06 00901280  unit: CXTWindowMap  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00901280
//
// 00901280  53                   push ebx
// 00901281  56                   push esi
// 00901282  8b742410             mov esi, dword ptr [esp + 0x10]
// 00901286  57                   push edi
// 00901287  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0090128b  57                   push edi
// 0090128c  8bd9                 mov ebx, ecx
// 0090128e  e80dfeffff           call 0x9010a0
// 00901293  57                   push edi
// 00901294  8bcb                 mov ecx, ebx
// 00901296  89460c               mov dword ptr [esi + 0xc], eax
// 00901299  e8f2b60c00           call 0x9cc990
// 0090129e  8930                 mov dword ptr [eax], esi
// 009012a0  8b460c               mov eax, dword ptr [esi + 0xc]
// 009012a3  85c0                 test eax, eax
// 009012a5  7520                 jne 0x9012c7
// 009012a7  6afc                 push -4
// 009012a9  57                   push edi
// 009012aa  ff15981ca400         call dword ptr [0xa41c98]
// 009012b0  68d0119000           push 0x9011d0
// 009012b5  6afc                 push -4
// 009012b7  57                   push edi
// 009012b8  894608               mov dword ptr [esi + 8], eax
// 009012bb  ff15001aa400         call dword ptr [0xa41a00]
// 009012c1  5f                   pop edi
// 009012c2  5e                   pop esi
// 009012c3  5b                   pop ebx
// 009012c4  c20800               ret 8
// 009012c7  8b4008               mov eax, dword ptr [eax + 8]
// 009012ca  5f                   pop edi
// 009012cb  894608               mov dword ptr [esi + 8], eax
// 009012ce  5e                   pop esi
// 009012cf  5b                   pop ebx
// 009012d0  c20800               ret 8
// copied from an identical function in another client (function ?Add@CXTWindowMap@@QAEXPAUHWND__@@PAVCXTWndHook@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTWndHook.cpp