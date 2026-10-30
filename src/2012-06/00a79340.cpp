// roc 2012-06 00a79340  unit: CXTWindowMap  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a79340
//
// 00a79340  53                   push ebx
// 00a79341  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00a79345  55                   push ebp
// 00a79346  56                   push esi
// 00a79347  57                   push edi
// 00a79348  8b7b04               mov edi, dword ptr [ebx + 4]
// 00a7934b  57                   push edi
// 00a7934c  8be9                 mov ebp, ecx
// 00a7934e  e85dffffff           call 0xa792b0
// 00a79353  8bf0                 mov esi, eax
// 00a79355  85f6                 test esi, esi
// 00a79357  7448                 je 0xa793a1
// 00a79359  3bf3                 cmp esi, ebx
// 00a7935b  7531                 jne 0xa7938e
// 00a7935d  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 00a79360  57                   push edi
// 00a79361  8bcd                 mov ecx, ebp
// 00a79363  85db                 test ebx, ebx
// 00a79365  740e                 je 0xa79375
// 00a79367  e8d2050200           call 0xa9993e
// 00a7936c  5f                   pop edi
// 00a7936d  5e                   pop esi
// 00a7936e  5d                   pop ebp
// 00a7936f  8918                 mov dword ptr [eax], ebx
// 00a79371  5b                   pop ebx
// 00a79372  c20400               ret 4
// 00a79375  e8aa0a0200           call 0xa99e24
// 00a7937a  8b4608               mov eax, dword ptr [esi + 8]
// 00a7937d  50                   push eax
// 00a7937e  6afc                 push -4
// 00a79380  57                   push edi
// 00a79381  ff15943ab200         call dword ptr [0xb23a94]
// 00a79387  5f                   pop edi
// 00a79388  5e                   pop esi
// 00a79389  5d                   pop ebp
// 00a7938a  5b                   pop ebx
// 00a7938b  c20400               ret 4
// 00a7938e  395e0c               cmp dword ptr [esi + 0xc], ebx
// 00a79391  7408                 je 0xa7939b
// 00a79393  8b760c               mov esi, dword ptr [esi + 0xc]
// 00a79396  395e0c               cmp dword ptr [esi + 0xc], ebx
// 00a79399  75f8                 jne 0xa79393
// 00a7939b  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 00a7939e  894e0c               mov dword ptr [esi + 0xc], ecx
// 00a793a1  5f                   pop edi
// 00a793a2  5e                   pop esi
// 00a793a3  5d                   pop ebp
// 00a793a4  5b                   pop ebx
// 00a793a5  c20400               ret 4
// copied from an identical function in another client (function ?Remove@CXTWindowMap@@QAEXPAVCXTWndHook@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTWndHook.cpp