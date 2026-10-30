// roc 2009-06 00818c60  unit: CXTWindowMap  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00818c60
//
// 00818c60  53                   push ebx
// 00818c61  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00818c65  55                   push ebp
// 00818c66  56                   push esi
// 00818c67  57                   push edi
// 00818c68  8b7b04               mov edi, dword ptr [ebx + 4]
// 00818c6b  57                   push edi
// 00818c6c  8be9                 mov ebp, ecx
// 00818c6e  e85dffffff           call 0x818bd0
// 00818c73  8bf0                 mov esi, eax
// 00818c75  85f6                 test esi, esi
// 00818c77  7448                 je 0x818cc1
// 00818c79  3bf3                 cmp esi, ebx
// 00818c7b  7531                 jne 0x818cae
// 00818c7d  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 00818c80  57                   push edi
// 00818c81  8bcd                 mov ecx, ebp
// 00818c83  85db                 test ebx, ebx
// 00818c85  740e                 je 0x818c95
// 00818c87  e862380300           call 0x84c4ee
// 00818c8c  5f                   pop edi
// 00818c8d  5e                   pop esi
// 00818c8e  5d                   pop ebp
// 00818c8f  8918                 mov dword ptr [eax], ebx
// 00818c91  5b                   pop ebx
// 00818c92  c20400               ret 4
// 00818c95  e8083c0300           call 0x84c8a2
// 00818c9a  8b4608               mov eax, dword ptr [esi + 8]
// 00818c9d  50                   push eax
// 00818c9e  6afc                 push -4
// 00818ca0  57                   push edi
// 00818ca1  ff1534ed8900         call dword ptr [0x89ed34]
// 00818ca7  5f                   pop edi
// 00818ca8  5e                   pop esi
// 00818ca9  5d                   pop ebp
// 00818caa  5b                   pop ebx
// 00818cab  c20400               ret 4
// 00818cae  395e0c               cmp dword ptr [esi + 0xc], ebx
// 00818cb1  7408                 je 0x818cbb
// 00818cb3  8b760c               mov esi, dword ptr [esi + 0xc]
// 00818cb6  395e0c               cmp dword ptr [esi + 0xc], ebx
// 00818cb9  75f8                 jne 0x818cb3
// 00818cbb  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 00818cbe  894e0c               mov dword ptr [esi + 0xc], ecx
// 00818cc1  5f                   pop edi
// 00818cc2  5e                   pop esi
// 00818cc3  5d                   pop ebp
// 00818cc4  5b                   pop ebx
// 00818cc5  c20400               ret 4
// copied from an identical function in another client (function ?Remove@CXTWindowMap@@QAEXPAVCXTWndHook@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTWndHook.cpp