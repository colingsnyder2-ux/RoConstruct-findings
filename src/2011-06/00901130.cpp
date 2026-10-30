// roc 2011-06 00901130  unit: CXTWindowMap  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00901130
//
// 00901130  53                   push ebx
// 00901131  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00901135  55                   push ebp
// 00901136  56                   push esi
// 00901137  57                   push edi
// 00901138  8b7b04               mov edi, dword ptr [ebx + 4]
// 0090113b  57                   push edi
// 0090113c  8be9                 mov ebp, ecx
// 0090113e  e85dffffff           call 0x9010a0
// 00901143  8bf0                 mov esi, eax
// 00901145  85f6                 test esi, esi
// 00901147  7448                 je 0x901191
// 00901149  3bf3                 cmp esi, ebx
// 0090114b  7531                 jne 0x90117e
// 0090114d  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 00901150  57                   push edi
// 00901151  8bcd                 mov ecx, ebp
// 00901153  85db                 test ebx, ebx
// 00901155  740e                 je 0x901165
// 00901157  e834b80c00           call 0x9cc990
// 0090115c  5f                   pop edi
// 0090115d  5e                   pop esi
// 0090115e  5d                   pop ebp
// 0090115f  8918                 mov dword ptr [eax], ebx
// 00901161  5b                   pop ebx
// 00901162  c20400               ret 4
// 00901165  e80cbd0c00           call 0x9cce76
// 0090116a  8b4608               mov eax, dword ptr [esi + 8]
// 0090116d  50                   push eax
// 0090116e  6afc                 push -4
// 00901170  57                   push edi
// 00901171  ff15001aa400         call dword ptr [0xa41a00]
// 00901177  5f                   pop edi
// 00901178  5e                   pop esi
// 00901179  5d                   pop ebp
// 0090117a  5b                   pop ebx
// 0090117b  c20400               ret 4
// 0090117e  395e0c               cmp dword ptr [esi + 0xc], ebx
// 00901181  7408                 je 0x90118b
// 00901183  8b760c               mov esi, dword ptr [esi + 0xc]
// 00901186  395e0c               cmp dword ptr [esi + 0xc], ebx
// 00901189  75f8                 jne 0x901183
// 0090118b  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 0090118e  894e0c               mov dword ptr [esi + 0xc], ecx
// 00901191  5f                   pop edi
// 00901192  5e                   pop esi
// 00901193  5d                   pop ebp
// 00901194  5b                   pop ebx
// 00901195  c20400               ret 4
// copied from an identical function in another client (function ?Remove@CXTWindowMap@@QAEXPAVCXTWndHook@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTWndHook.cpp