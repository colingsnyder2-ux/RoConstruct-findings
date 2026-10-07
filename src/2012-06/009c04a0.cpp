// roc 2012-06 009c04a0  unit: CRobloxTreeCtrl  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c04a0
//
// 009c04a0  33c0                 xor eax, eax
// 009c04a2  39442404             cmp dword ptr [esp + 4], eax
// 009c04a6  53                   push ebx
// 009c04a7  0f95c0               setne al
// 009c04aa  55                   push ebp
// 009c04ab  56                   push esi
// 009c04ac  8b742414             mov esi, dword ptr [esp + 0x14]
// 009c04b0  57                   push edi
// 009c04b1  8bf9                 mov edi, ecx
// 009c04b3  8be8                 mov ebp, eax
// 009c04b5  8bdd                 mov ebx, ebp
// 009c04b7  f7db                 neg ebx
// 009c04b9  1bdb                 sbb ebx, ebx
// 009c04bb  83e302               and ebx, 2
// 009c04be  85f6                 test esi, esi
// 009c04c0  751e                 jne 0x9c04e0
// 009c04c2  8b4734               mov eax, dword ptr [edi + 0x34]
// 009c04c5  8b4820               mov ecx, dword ptr [eax + 0x20]
// 009c04c8  56                   push esi
// 009c04c9  56                   push esi
// 009c04ca  680a110000           push 0x110a
// 009c04cf  51                   push ecx
// 009c04d0  ff15043cb200         call dword ptr [0xb23c04]
// 009c04d6  8bf0                 mov esi, eax
// 009c04d8  85f6                 test esi, esi
// 009c04da  743e                 je 0x9c051a
// 009c04dc  8d642400             lea esp, [esp]
// 009c04e0  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 009c04e3  6a02                 push 2
// 009c04e5  56                   push esi
// 009c04e6  e827930d00           call 0xa99812
// 009c04eb  d1e8                 shr eax, 1
// 009c04ed  83e001               and eax, 1
// 009c04f0  3bc5                 cmp eax, ebp
// 009c04f2  740b                 je 0x9c04ff
// 009c04f4  6a02                 push 2
// 009c04f6  53                   push ebx
// 009c04f7  56                   push esi
// 009c04f8  8bcf                 mov ecx, edi
// 009c04fa  e8e1faffff           call 0x9bffe0
// 009c04ff  8b4734               mov eax, dword ptr [edi + 0x34]
// 009c0502  8b5020               mov edx, dword ptr [eax + 0x20]
// 009c0505  56                   push esi
// 009c0506  6a06                 push 6
// 009c0508  680a110000           push 0x110a
// 009c050d  52                   push edx
// 009c050e  ff15043cb200         call dword ptr [0xb23c04]
// 009c0514  8bf0                 mov esi, eax
// 009c0516  85f6                 test esi, esi
// 009c0518  75c6                 jne 0x9c04e0
// 009c051a  5f                   pop edi
// 009c051b  5e                   pop esi
// 009c051c  5d                   pop ebp
// 009c051d  5b                   pop ebx
// 009c051e  c20800               ret 8
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?SelectAll@CXTPTreeBase@@QAEXHPAU_TREEITEM@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
