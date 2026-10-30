// roc 2009-12 008f3a80  unit: CXTWindowMap  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f3a80
//
// 008f3a80  53                   push ebx
// 008f3a81  56                   push esi
// 008f3a82  8b742410             mov esi, dword ptr [esp + 0x10]
// 008f3a86  57                   push edi
// 008f3a87  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008f3a8b  57                   push edi
// 008f3a8c  8bd9                 mov ebx, ecx
// 008f3a8e  e80dfeffff           call 0x8f38a0
// 008f3a93  57                   push edi
// 008f3a94  8bcb                 mov ecx, ebx
// 008f3a96  89460c               mov dword ptr [esi + 0xc], eax
// 008f3a99  e8bc2f0300           call 0x926a5a
// 008f3a9e  8930                 mov dword ptr [eax], esi
// 008f3aa0  8b460c               mov eax, dword ptr [esi + 0xc]
// 008f3aa3  85c0                 test eax, eax
// 008f3aa5  7520                 jne 0x8f3ac7
// 008f3aa7  6afc                 push -4
// 008f3aa9  57                   push edi
// 008f3aaa  ff15d8c99800         call dword ptr [0x98c9d8]
// 008f3ab0  68d0398f00           push 0x8f39d0
// 008f3ab5  6afc                 push -4
// 008f3ab7  57                   push edi
// 008f3ab8  894608               mov dword ptr [esi + 8], eax
// 008f3abb  ff15c0c99800         call dword ptr [0x98c9c0]
// 008f3ac1  5f                   pop edi
// 008f3ac2  5e                   pop esi
// 008f3ac3  5b                   pop ebx
// 008f3ac4  c20800               ret 8
// 008f3ac7  8b4008               mov eax, dword ptr [eax + 8]
// 008f3aca  5f                   pop edi
// 008f3acb  894608               mov dword ptr [esi + 8], eax
// 008f3ace  5e                   pop esi
// 008f3acf  5b                   pop ebx
// 008f3ad0  c20800               ret 8
// copied from an identical function in another client (function ?Add@CXTWindowMap@@QAEXPAUHWND__@@PAVCXTWndHook@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTWndHook.cpp