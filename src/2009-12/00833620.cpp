// roc 2009-12 00833620  unit: CRobloxTreeCtrl  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00833620
//
// 00833620  53                   push ebx
// 00833621  8b1dc4cb9800         mov ebx, dword ptr [0x98cbc4]
// 00833627  56                   push esi
// 00833628  57                   push edi
// 00833629  8bf9                 mov edi, ecx
// 0083362b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0083362f  8b4734               mov eax, dword ptr [edi + 0x34]
// 00833632  8b5020               mov edx, dword ptr [eax + 0x20]
// 00833635  51                   push ecx
// 00833636  6a07                 push 7
// 00833638  680a110000           push 0x110a
// 0083363d  52                   push edx
// 0083363e  ffd3                 call ebx
// 00833640  8bf0                 mov esi, eax
// 00833642  85f6                 test esi, esi
// 00833644  7425                 je 0x83366b
// 00833646  6a02                 push 2
// 00833648  56                   push esi
// 00833649  8bcf                 mov ecx, edi
// 0083364b  e830eeffff           call 0x832480
// 00833650  a802                 test al, 2
// 00833652  751f                 jne 0x833673
// 00833654  8b4734               mov eax, dword ptr [edi + 0x34]
// 00833657  8b4020               mov eax, dword ptr [eax + 0x20]
// 0083365a  56                   push esi
// 0083365b  6a07                 push 7
// 0083365d  680a110000           push 0x110a
// 00833662  50                   push eax
// 00833663  ffd3                 call ebx
// 00833665  8bf0                 mov esi, eax
// 00833667  85f6                 test esi, esi
// 00833669  75db                 jne 0x833646
// 0083366b  5f                   pop edi
// 0083366c  5e                   pop esi
// 0083366d  33c0                 xor eax, eax
// 0083366f  5b                   pop ebx
// 00833670  c20400               ret 4
// 00833673  5f                   pop edi
// 00833674  8bc6                 mov eax, esi
// 00833676  5e                   pop esi
// 00833677  5b                   pop ebx
// 00833678  c20400               ret 4
// copied from an identical function in another client (function ?GetPrevSelectedItem@CXTTreeBase@@UBEPAU_TREEITEM@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp