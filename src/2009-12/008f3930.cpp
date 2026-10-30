// roc 2009-12 008f3930  unit: CXTWindowMap  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f3930
//
// 008f3930  53                   push ebx
// 008f3931  8b5c2408             mov ebx, dword ptr [esp + 8]
// 008f3935  55                   push ebp
// 008f3936  56                   push esi
// 008f3937  57                   push edi
// 008f3938  8b7b04               mov edi, dword ptr [ebx + 4]
// 008f393b  57                   push edi
// 008f393c  8be9                 mov ebp, ecx
// 008f393e  e85dffffff           call 0x8f38a0
// 008f3943  8bf0                 mov esi, eax
// 008f3945  85f6                 test esi, esi
// 008f3947  7448                 je 0x8f3991
// 008f3949  3bf3                 cmp esi, ebx
// 008f394b  7531                 jne 0x8f397e
// 008f394d  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 008f3950  57                   push edi
// 008f3951  8bcd                 mov ecx, ebp
// 008f3953  85db                 test ebx, ebx
// 008f3955  740e                 je 0x8f3965
// 008f3957  e8fe300300           call 0x926a5a
// 008f395c  5f                   pop edi
// 008f395d  5e                   pop esi
// 008f395e  5d                   pop ebp
// 008f395f  8918                 mov dword ptr [eax], ebx
// 008f3961  5b                   pop ebx
// 008f3962  c20400               ret 4
// 008f3965  e8a4340300           call 0x926e0e
// 008f396a  8b4608               mov eax, dword ptr [esi + 8]
// 008f396d  50                   push eax
// 008f396e  6afc                 push -4
// 008f3970  57                   push edi
// 008f3971  ff15c0c99800         call dword ptr [0x98c9c0]
// 008f3977  5f                   pop edi
// 008f3978  5e                   pop esi
// 008f3979  5d                   pop ebp
// 008f397a  5b                   pop ebx
// 008f397b  c20400               ret 4
// 008f397e  395e0c               cmp dword ptr [esi + 0xc], ebx
// 008f3981  7408                 je 0x8f398b
// 008f3983  8b760c               mov esi, dword ptr [esi + 0xc]
// 008f3986  395e0c               cmp dword ptr [esi + 0xc], ebx
// 008f3989  75f8                 jne 0x8f3983
// 008f398b  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 008f398e  894e0c               mov dword ptr [esi + 0xc], ecx
// 008f3991  5f                   pop edi
// 008f3992  5e                   pop esi
// 008f3993  5d                   pop ebp
// 008f3994  5b                   pop ebx
// 008f3995  c20400               ret 4
// copied from an identical function in another client (function ?Remove@CXTWindowMap@@QAEXPAVCXTWndHook@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTWndHook.cpp