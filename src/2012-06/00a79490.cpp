// roc 2012-06 00a79490  unit: CXTWindowMap  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a79490
//
// 00a79490  53                   push ebx
// 00a79491  56                   push esi
// 00a79492  8b742410             mov esi, dword ptr [esp + 0x10]
// 00a79496  57                   push edi
// 00a79497  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00a7949b  57                   push edi
// 00a7949c  8bd9                 mov ebx, ecx
// 00a7949e  e80dfeffff           call 0xa792b0
// 00a794a3  57                   push edi
// 00a794a4  8bcb                 mov ecx, ebx
// 00a794a6  89460c               mov dword ptr [esi + 0xc], eax
// 00a794a9  e890040200           call 0xa9993e
// 00a794ae  8930                 mov dword ptr [eax], esi
// 00a794b0  8b460c               mov eax, dword ptr [esi + 0xc]
// 00a794b3  85c0                 test eax, eax
// 00a794b5  7520                 jne 0xa794d7
// 00a794b7  6afc                 push -4
// 00a794b9  57                   push edi
// 00a794ba  ff15bc3ab200         call dword ptr [0xb23abc]
// 00a794c0  68e093a700           push 0xa793e0
// 00a794c5  6afc                 push -4
// 00a794c7  57                   push edi
// 00a794c8  894608               mov dword ptr [esi + 8], eax
// 00a794cb  ff15943ab200         call dword ptr [0xb23a94]
// 00a794d1  5f                   pop edi
// 00a794d2  5e                   pop esi
// 00a794d3  5b                   pop ebx
// 00a794d4  c20800               ret 8
// 00a794d7  8b4008               mov eax, dword ptr [eax + 8]
// 00a794da  5f                   pop edi
// 00a794db  894608               mov dword ptr [esi + 8], eax
// 00a794de  5e                   pop esi
// 00a794df  5b                   pop ebx
// 00a794e0  c20800               ret 8
// copied from an identical function in another client (function ?Add@CXTWindowMap@@QAEXPAUHWND__@@PAVCXTWndHook@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTWndHook.cpp