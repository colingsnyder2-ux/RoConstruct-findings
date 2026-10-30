// roc 2009-06 00757df0  unit: CRobloxTreeCtrl  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00757df0
//
// 00757df0  51                   push ecx
// 00757df1  53                   push ebx
// 00757df2  55                   push ebp
// 00757df3  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00757df7  56                   push esi
// 00757df8  57                   push edi
// 00757df9  8bf9                 mov edi, ecx
// 00757dfb  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00757dff  8b07                 mov eax, dword ptr [edi]
// 00757e01  8b5004               mov edx, dword ptr [eax + 4]
// 00757e04  f7dd                 neg ebp
// 00757e06  1bed                 sbb ebp, ebp
// 00757e08  6a04                 push 4
// 00757e0a  51                   push ecx
// 00757e0b  33db                 xor ebx, ebx
// 00757e0d  8bcf                 mov ecx, edi
// 00757e0f  83e502               and ebp, 2
// 00757e12  895c2418             mov dword ptr [esp + 0x18], ebx
// 00757e16  ffd2                 call edx
// 00757e18  8bf0                 mov esi, eax
// 00757e1a  85f6                 test esi, esi
// 00757e1c  746f                 je 0x757e8d
// 00757e1e  8bff                 mov edi, edi
// 00757e20  6a23                 push 0x23
// 00757e22  56                   push esi
// 00757e23  8bcf                 mov ecx, edi
// 00757e25  e8d6f7ffff           call 0x757600
// 00757e2a  8bd8                 mov ebx, eax
// 00757e2c  83e002               and eax, 2
// 00757e2f  3bc5                 cmp eax, ebp
// 00757e31  740b                 je 0x757e3e
// 00757e33  6a02                 push 2
// 00757e35  55                   push ebp
// 00757e36  56                   push esi
// 00757e37  8bcf                 mov ecx, edi
// 00757e39  e892f4ffff           call 0x7572d0
// 00757e3e  8b442420             mov eax, dword ptr [esp + 0x20]
// 00757e42  8bcb                 mov ecx, ebx
// 00757e44  83e101               and ecx, 1
// 00757e47  094c2410             or dword ptr [esp + 0x10], ecx
// 00757e4b  85c0                 test eax, eax
// 00757e4d  7417                 je 0x757e66
// 00757e4f  f6c320               test bl, 0x20
// 00757e52  7412                 je 0x757e66
// 00757e54  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00757e58  50                   push eax
// 00757e59  52                   push edx
// 00757e5a  56                   push esi
// 00757e5b  8bcf                 mov ecx, edi
// 00757e5d  e88effffff           call 0x757df0
// 00757e62  09442410             or dword ptr [esp + 0x10], eax
// 00757e66  8b4734               mov eax, dword ptr [edi + 0x34]
// 00757e69  8b4020               mov eax, dword ptr [eax + 0x20]
// 00757e6c  56                   push esi
// 00757e6d  6a01                 push 1
// 00757e6f  680a110000           push 0x110a
// 00757e74  50                   push eax
// 00757e75  ff1590ee8900         call dword ptr [0x89ee90]
// 00757e7b  8bf0                 mov esi, eax
// 00757e7d  85f6                 test esi, esi
// 00757e7f  759f                 jne 0x757e20
// 00757e81  8b442410             mov eax, dword ptr [esp + 0x10]
// 00757e85  5f                   pop edi
// 00757e86  5e                   pop esi
// 00757e87  5d                   pop ebp
// 00757e88  5b                   pop ebx
// 00757e89  59                   pop ecx
// 00757e8a  c20c00               ret 0xc
// 00757e8d  5f                   pop edi
// 00757e8e  5e                   pop esi
// 00757e8f  5d                   pop ebp
// 00757e90  8bc3                 mov eax, ebx
// 00757e92  5b                   pop ebx
// 00757e93  59                   pop ecx
// 00757e94  c20c00               ret 0xc
// copied from an identical function in another client (function ?SelectChildren@CXTTreeBase@@QAEHPAU_TREEITEM@@HH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTTreeBase.cpp