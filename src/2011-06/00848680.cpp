// roc 2011-06 00848680  unit: CRobloxTreeCtrl  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00848680
//
// 00848680  51                   push ecx
// 00848681  53                   push ebx
// 00848682  55                   push ebp
// 00848683  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00848687  56                   push esi
// 00848688  57                   push edi
// 00848689  8bf9                 mov edi, ecx
// 0084868b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0084868f  8b07                 mov eax, dword ptr [edi]
// 00848691  8b5004               mov edx, dword ptr [eax + 4]
// 00848694  f7dd                 neg ebp
// 00848696  1bed                 sbb ebp, ebp
// 00848698  6a04                 push 4
// 0084869a  51                   push ecx
// 0084869b  33db                 xor ebx, ebx
// 0084869d  8bcf                 mov ecx, edi
// 0084869f  83e502               and ebp, 2
// 008486a2  895c2418             mov dword ptr [esp + 0x18], ebx
// 008486a6  ffd2                 call edx
// 008486a8  8bf0                 mov esi, eax
// 008486aa  85f6                 test esi, esi
// 008486ac  746f                 je 0x84871d
// 008486ae  8bff                 mov edi, edi
// 008486b0  6a23                 push 0x23
// 008486b2  56                   push esi
// 008486b3  8bcf                 mov ecx, edi
// 008486b5  e8d6f7ffff           call 0x847e90
// 008486ba  8bd8                 mov ebx, eax
// 008486bc  83e002               and eax, 2
// 008486bf  3bc5                 cmp eax, ebp
// 008486c1  740b                 je 0x8486ce
// 008486c3  6a02                 push 2
// 008486c5  55                   push ebp
// 008486c6  56                   push esi
// 008486c7  8bcf                 mov ecx, edi
// 008486c9  e892f4ffff           call 0x847b60
// 008486ce  8b442420             mov eax, dword ptr [esp + 0x20]
// 008486d2  8bcb                 mov ecx, ebx
// 008486d4  83e101               and ecx, 1
// 008486d7  094c2410             or dword ptr [esp + 0x10], ecx
// 008486db  85c0                 test eax, eax
// 008486dd  7417                 je 0x8486f6
// 008486df  f6c320               test bl, 0x20
// 008486e2  7412                 je 0x8486f6
// 008486e4  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008486e8  50                   push eax
// 008486e9  52                   push edx
// 008486ea  56                   push esi
// 008486eb  8bcf                 mov ecx, edi
// 008486ed  e88effffff           call 0x848680
// 008486f2  09442410             or dword ptr [esp + 0x10], eax
// 008486f6  8b4734               mov eax, dword ptr [edi + 0x34]
// 008486f9  8b4020               mov eax, dword ptr [eax + 0x20]
// 008486fc  56                   push esi
// 008486fd  6a01                 push 1
// 008486ff  680a110000           push 0x110a
// 00848704  50                   push eax
// 00848705  ff15c019a400         call dword ptr [0xa419c0]
// 0084870b  8bf0                 mov esi, eax
// 0084870d  85f6                 test esi, esi
// 0084870f  759f                 jne 0x8486b0
// 00848711  8b442410             mov eax, dword ptr [esp + 0x10]
// 00848715  5f                   pop edi
// 00848716  5e                   pop esi
// 00848717  5d                   pop ebp
// 00848718  5b                   pop ebx
// 00848719  59                   pop ecx
// 0084871a  c20c00               ret 0xc
// 0084871d  5f                   pop edi
// 0084871e  5e                   pop esi
// 0084871f  5d                   pop ebp
// 00848720  8bc3                 mov eax, ebx
// 00848722  5b                   pop ebx
// 00848723  59                   pop ecx
// 00848724  c20c00               ret 0xc
// copied from an identical function in another client (function ?SelectChildren@CXTTreeBase@@QAEHPAU_TREEITEM@@HH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp