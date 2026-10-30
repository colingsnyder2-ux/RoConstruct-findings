// roc 2010-06 008a7bb0  unit: CXTWindowMap  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a7bb0
//
// 008a7bb0  53                   push ebx
// 008a7bb1  56                   push esi
// 008a7bb2  8b742410             mov esi, dword ptr [esp + 0x10]
// 008a7bb6  57                   push edi
// 008a7bb7  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008a7bbb  57                   push edi
// 008a7bbc  8bd9                 mov ebx, ecx
// 008a7bbe  e80dfeffff           call 0x8a79d0
// 008a7bc3  57                   push edi
// 008a7bc4  8bcb                 mov ecx, ebx
// 008a7bc6  89460c               mov dword ptr [esi + 0xc], eax
// 008a7bc9  e8ce570d00           call 0x97d39c
// 008a7bce  8930                 mov dword ptr [eax], esi
// 008a7bd0  8b460c               mov eax, dword ptr [esi + 0xc]
// 008a7bd3  85c0                 test eax, eax
// 008a7bd5  7520                 jne 0x8a7bf7
// 008a7bd7  6afc                 push -4
// 008a7bd9  57                   push edi
// 008a7bda  ff15fcbb9e00         call dword ptr [0x9ebbfc]
// 008a7be0  68007b8a00           push 0x8a7b00
// 008a7be5  6afc                 push -4
// 008a7be7  57                   push edi
// 008a7be8  894608               mov dword ptr [esi + 8], eax
// 008a7beb  ff1500bc9e00         call dword ptr [0x9ebc00]
// 008a7bf1  5f                   pop edi
// 008a7bf2  5e                   pop esi
// 008a7bf3  5b                   pop ebx
// 008a7bf4  c20800               ret 8
// 008a7bf7  8b4008               mov eax, dword ptr [eax + 8]
// 008a7bfa  5f                   pop edi
// 008a7bfb  894608               mov dword ptr [esi + 8], eax
// 008a7bfe  5e                   pop esi
// 008a7bff  5b                   pop ebx
// 008a7c00  c20800               ret 8
// copied from an identical function in another client (function ?Add@CXTWindowMap@@QAEXPAUHWND__@@PAVCXTWndHook@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTWndHook.cpp