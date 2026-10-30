// roc 2011-06 00849030  unit: CRobloxTreeCtrl  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00849030
//
// 00849030  53                   push ebx
// 00849031  8b1dc019a400         mov ebx, dword ptr [0xa419c0]
// 00849037  56                   push esi
// 00849038  57                   push edi
// 00849039  8bf9                 mov edi, ecx
// 0084903b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0084903f  8b4734               mov eax, dword ptr [edi + 0x34]
// 00849042  8b5020               mov edx, dword ptr [eax + 0x20]
// 00849045  51                   push ecx
// 00849046  6a07                 push 7
// 00849048  680a110000           push 0x110a
// 0084904d  52                   push edx
// 0084904e  ffd3                 call ebx
// 00849050  8bf0                 mov esi, eax
// 00849052  85f6                 test esi, esi
// 00849054  7425                 je 0x84907b
// 00849056  6a02                 push 2
// 00849058  56                   push esi
// 00849059  8bcf                 mov ecx, edi
// 0084905b  e830eeffff           call 0x847e90
// 00849060  a802                 test al, 2
// 00849062  751f                 jne 0x849083
// 00849064  8b4734               mov eax, dword ptr [edi + 0x34]
// 00849067  8b4020               mov eax, dword ptr [eax + 0x20]
// 0084906a  56                   push esi
// 0084906b  6a07                 push 7
// 0084906d  680a110000           push 0x110a
// 00849072  50                   push eax
// 00849073  ffd3                 call ebx
// 00849075  8bf0                 mov esi, eax
// 00849077  85f6                 test esi, esi
// 00849079  75db                 jne 0x849056
// 0084907b  5f                   pop edi
// 0084907c  5e                   pop esi
// 0084907d  33c0                 xor eax, eax
// 0084907f  5b                   pop ebx
// 00849080  c20400               ret 4
// 00849083  5f                   pop edi
// 00849084  8bc6                 mov eax, esi
// 00849086  5e                   pop esi
// 00849087  5b                   pop ebx
// 00849088  c20400               ret 4
// copied from an identical function in another client (function ?GetPrevSelectedItem@CXTTreeBase@@UBEPAU_TREEITEM@@PAU2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp