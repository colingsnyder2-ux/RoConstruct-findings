// roc 2010-06 007e6e30  unit: CRobloxTreeCtrl  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007e6e30
//
// 007e6e30  51                   push ecx
// 007e6e31  53                   push ebx
// 007e6e32  55                   push ebp
// 007e6e33  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 007e6e37  56                   push esi
// 007e6e38  57                   push edi
// 007e6e39  8bf9                 mov edi, ecx
// 007e6e3b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007e6e3f  8b07                 mov eax, dword ptr [edi]
// 007e6e41  8b5004               mov edx, dword ptr [eax + 4]
// 007e6e44  f7dd                 neg ebp
// 007e6e46  1bed                 sbb ebp, ebp
// 007e6e48  6a04                 push 4
// 007e6e4a  51                   push ecx
// 007e6e4b  33db                 xor ebx, ebx
// 007e6e4d  8bcf                 mov ecx, edi
// 007e6e4f  83e502               and ebp, 2
// 007e6e52  895c2418             mov dword ptr [esp + 0x18], ebx
// 007e6e56  ffd2                 call edx
// 007e6e58  8bf0                 mov esi, eax
// 007e6e5a  85f6                 test esi, esi
// 007e6e5c  746f                 je 0x7e6ecd
// 007e6e5e  8bff                 mov edi, edi
// 007e6e60  6a23                 push 0x23
// 007e6e62  56                   push esi
// 007e6e63  8bcf                 mov ecx, edi
// 007e6e65  e8d6f7ffff           call 0x7e6640
// 007e6e6a  8bd8                 mov ebx, eax
// 007e6e6c  83e002               and eax, 2
// 007e6e6f  3bc5                 cmp eax, ebp
// 007e6e71  740b                 je 0x7e6e7e
// 007e6e73  6a02                 push 2
// 007e6e75  55                   push ebp
// 007e6e76  56                   push esi
// 007e6e77  8bcf                 mov ecx, edi
// 007e6e79  e892f4ffff           call 0x7e6310
// 007e6e7e  8b442420             mov eax, dword ptr [esp + 0x20]
// 007e6e82  8bcb                 mov ecx, ebx
// 007e6e84  83e101               and ecx, 1
// 007e6e87  094c2410             or dword ptr [esp + 0x10], ecx
// 007e6e8b  85c0                 test eax, eax
// 007e6e8d  7417                 je 0x7e6ea6
// 007e6e8f  f6c320               test bl, 0x20
// 007e6e92  7412                 je 0x7e6ea6
// 007e6e94  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007e6e98  50                   push eax
// 007e6e99  52                   push edx
// 007e6e9a  56                   push esi
// 007e6e9b  8bcf                 mov ecx, edi
// 007e6e9d  e88effffff           call 0x7e6e30
// 007e6ea2  09442410             or dword ptr [esp + 0x10], eax
// 007e6ea6  8b4734               mov eax, dword ptr [edi + 0x34]
// 007e6ea9  8b4020               mov eax, dword ptr [eax + 0x20]
// 007e6eac  56                   push esi
// 007e6ead  6a01                 push 1
// 007e6eaf  680a110000           push 0x110a
// 007e6eb4  50                   push eax
// 007e6eb5  ff1554ba9e00         call dword ptr [0x9eba54]
// 007e6ebb  8bf0                 mov esi, eax
// 007e6ebd  85f6                 test esi, esi
// 007e6ebf  759f                 jne 0x7e6e60
// 007e6ec1  8b442410             mov eax, dword ptr [esp + 0x10]
// 007e6ec5  5f                   pop edi
// 007e6ec6  5e                   pop esi
// 007e6ec7  5d                   pop ebp
// 007e6ec8  5b                   pop ebx
// 007e6ec9  59                   pop ecx
// 007e6eca  c20c00               ret 0xc
// 007e6ecd  5f                   pop edi
// 007e6ece  5e                   pop esi
// 007e6ecf  5d                   pop ebp
// 007e6ed0  8bc3                 mov eax, ebx
// 007e6ed2  5b                   pop ebx
// 007e6ed3  59                   pop ecx
// 007e6ed4  c20c00               ret 0xc
// copied from an identical function in another client (function ?SelectChildren@CXTTreeBase@@QAEHPAU_TREEITEM@@HH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp