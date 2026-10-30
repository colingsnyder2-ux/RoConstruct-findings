// roc 2012-06 009c0b00  unit: CRobloxTreeCtrl  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c0b00
//
// 009c0b00  51                   push ecx
// 009c0b01  53                   push ebx
// 009c0b02  55                   push ebp
// 009c0b03  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 009c0b07  56                   push esi
// 009c0b08  57                   push edi
// 009c0b09  8bf9                 mov edi, ecx
// 009c0b0b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 009c0b0f  8b07                 mov eax, dword ptr [edi]
// 009c0b11  8b5004               mov edx, dword ptr [eax + 4]
// 009c0b14  f7dd                 neg ebp
// 009c0b16  1bed                 sbb ebp, ebp
// 009c0b18  6a04                 push 4
// 009c0b1a  51                   push ecx
// 009c0b1b  33db                 xor ebx, ebx
// 009c0b1d  8bcf                 mov ecx, edi
// 009c0b1f  83e502               and ebp, 2
// 009c0b22  895c2418             mov dword ptr [esp + 0x18], ebx
// 009c0b26  ffd2                 call edx
// 009c0b28  8bf0                 mov esi, eax
// 009c0b2a  85f6                 test esi, esi
// 009c0b2c  746f                 je 0x9c0b9d
// 009c0b2e  8bff                 mov edi, edi
// 009c0b30  6a23                 push 0x23
// 009c0b32  56                   push esi
// 009c0b33  8bcf                 mov ecx, edi
// 009c0b35  e8d6f7ffff           call 0x9c0310
// 009c0b3a  8bd8                 mov ebx, eax
// 009c0b3c  83e002               and eax, 2
// 009c0b3f  3bc5                 cmp eax, ebp
// 009c0b41  740b                 je 0x9c0b4e
// 009c0b43  6a02                 push 2
// 009c0b45  55                   push ebp
// 009c0b46  56                   push esi
// 009c0b47  8bcf                 mov ecx, edi
// 009c0b49  e892f4ffff           call 0x9bffe0
// 009c0b4e  8b442420             mov eax, dword ptr [esp + 0x20]
// 009c0b52  8bcb                 mov ecx, ebx
// 009c0b54  83e101               and ecx, 1
// 009c0b57  094c2410             or dword ptr [esp + 0x10], ecx
// 009c0b5b  85c0                 test eax, eax
// 009c0b5d  7417                 je 0x9c0b76
// 009c0b5f  f6c320               test bl, 0x20
// 009c0b62  7412                 je 0x9c0b76
// 009c0b64  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 009c0b68  50                   push eax
// 009c0b69  52                   push edx
// 009c0b6a  56                   push esi
// 009c0b6b  8bcf                 mov ecx, edi
// 009c0b6d  e88effffff           call 0x9c0b00
// 009c0b72  09442410             or dword ptr [esp + 0x10], eax
// 009c0b76  8b4734               mov eax, dword ptr [edi + 0x34]
// 009c0b79  8b4020               mov eax, dword ptr [eax + 0x20]
// 009c0b7c  56                   push esi
// 009c0b7d  6a01                 push 1
// 009c0b7f  680a110000           push 0x110a
// 009c0b84  50                   push eax
// 009c0b85  ff15043cb200         call dword ptr [0xb23c04]
// 009c0b8b  8bf0                 mov esi, eax
// 009c0b8d  85f6                 test esi, esi
// 009c0b8f  759f                 jne 0x9c0b30
// 009c0b91  8b442410             mov eax, dword ptr [esp + 0x10]
// 009c0b95  5f                   pop edi
// 009c0b96  5e                   pop esi
// 009c0b97  5d                   pop ebp
// 009c0b98  5b                   pop ebx
// 009c0b99  59                   pop ecx
// 009c0b9a  c20c00               ret 0xc
// 009c0b9d  5f                   pop edi
// 009c0b9e  5e                   pop esi
// 009c0b9f  5d                   pop ebp
// 009c0ba0  8bc3                 mov eax, ebx
// 009c0ba2  5b                   pop ebx
// 009c0ba3  59                   pop ecx
// 009c0ba4  c20c00               ret 0xc
// copied from an identical function in another client (function ?SelectChildren@CXTTreeBase@@QAEHPAU_TREEITEM@@HH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp