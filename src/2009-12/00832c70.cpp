// roc 2009-12 00832c70  unit: CRobloxTreeCtrl  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00832c70
//
// 00832c70  51                   push ecx
// 00832c71  53                   push ebx
// 00832c72  55                   push ebp
// 00832c73  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00832c77  56                   push esi
// 00832c78  57                   push edi
// 00832c79  8bf9                 mov edi, ecx
// 00832c7b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00832c7f  8b07                 mov eax, dword ptr [edi]
// 00832c81  8b5004               mov edx, dword ptr [eax + 4]
// 00832c84  f7dd                 neg ebp
// 00832c86  1bed                 sbb ebp, ebp
// 00832c88  6a04                 push 4
// 00832c8a  51                   push ecx
// 00832c8b  33db                 xor ebx, ebx
// 00832c8d  8bcf                 mov ecx, edi
// 00832c8f  83e502               and ebp, 2
// 00832c92  895c2418             mov dword ptr [esp + 0x18], ebx
// 00832c96  ffd2                 call edx
// 00832c98  8bf0                 mov esi, eax
// 00832c9a  85f6                 test esi, esi
// 00832c9c  746f                 je 0x832d0d
// 00832c9e  8bff                 mov edi, edi
// 00832ca0  6a23                 push 0x23
// 00832ca2  56                   push esi
// 00832ca3  8bcf                 mov ecx, edi
// 00832ca5  e8d6f7ffff           call 0x832480
// 00832caa  8bd8                 mov ebx, eax
// 00832cac  83e002               and eax, 2
// 00832caf  3bc5                 cmp eax, ebp
// 00832cb1  740b                 je 0x832cbe
// 00832cb3  6a02                 push 2
// 00832cb5  55                   push ebp
// 00832cb6  56                   push esi
// 00832cb7  8bcf                 mov ecx, edi
// 00832cb9  e892f4ffff           call 0x832150
// 00832cbe  8b442420             mov eax, dword ptr [esp + 0x20]
// 00832cc2  8bcb                 mov ecx, ebx
// 00832cc4  83e101               and ecx, 1
// 00832cc7  094c2410             or dword ptr [esp + 0x10], ecx
// 00832ccb  85c0                 test eax, eax
// 00832ccd  7417                 je 0x832ce6
// 00832ccf  f6c320               test bl, 0x20
// 00832cd2  7412                 je 0x832ce6
// 00832cd4  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00832cd8  50                   push eax
// 00832cd9  52                   push edx
// 00832cda  56                   push esi
// 00832cdb  8bcf                 mov ecx, edi
// 00832cdd  e88effffff           call 0x832c70
// 00832ce2  09442410             or dword ptr [esp + 0x10], eax
// 00832ce6  8b4734               mov eax, dword ptr [edi + 0x34]
// 00832ce9  8b4020               mov eax, dword ptr [eax + 0x20]
// 00832cec  56                   push esi
// 00832ced  6a01                 push 1
// 00832cef  680a110000           push 0x110a
// 00832cf4  50                   push eax
// 00832cf5  ff15c4cb9800         call dword ptr [0x98cbc4]
// 00832cfb  8bf0                 mov esi, eax
// 00832cfd  85f6                 test esi, esi
// 00832cff  759f                 jne 0x832ca0
// 00832d01  8b442410             mov eax, dword ptr [esp + 0x10]
// 00832d05  5f                   pop edi
// 00832d06  5e                   pop esi
// 00832d07  5d                   pop ebp
// 00832d08  5b                   pop ebx
// 00832d09  59                   pop ecx
// 00832d0a  c20c00               ret 0xc
// 00832d0d  5f                   pop edi
// 00832d0e  5e                   pop esi
// 00832d0f  5d                   pop ebp
// 00832d10  8bc3                 mov eax, ebx
// 00832d12  5b                   pop ebx
// 00832d13  59                   pop ecx
// 00832d14  c20c00               ret 0xc
// copied from an identical function in another client (function ?SelectChildren@CXTTreeBase@@QAEHPAU_TREEITEM@@HH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp