// roc 2008-06 006dcec0  unit: CRobloxTreeCtrl  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006dcec0
//
// 006dcec0  33c0                 xor eax, eax
// 006dcec2  39442404             cmp dword ptr [esp + 4], eax
// 006dcec6  53                   push ebx
// 006dcec7  0f95c0               setne al
// 006dceca  55                   push ebp
// 006dcecb  56                   push esi
// 006dcecc  8b742414             mov esi, dword ptr [esp + 0x14]
// 006dced0  57                   push edi
// 006dced1  8bf9                 mov edi, ecx
// 006dced3  8be8                 mov ebp, eax
// 006dced5  8bdd                 mov ebx, ebp
// 006dced7  f7db                 neg ebx
// 006dced9  1bdb                 sbb ebx, ebx
// 006dcedb  83e302               and ebx, 2
// 006dcede  85f6                 test esi, esi
// 006dcee0  751e                 jne 0x6dcf00
// 006dcee2  8b4734               mov eax, dword ptr [edi + 0x34]
// 006dcee5  8b4820               mov ecx, dword ptr [eax + 0x20]
// 006dcee8  56                   push esi
// 006dcee9  56                   push esi
// 006dceea  680a110000           push 0x110a
// 006dceef  51                   push ecx
// 006dcef0  ff15142e8000         call dword ptr [0x802e14]
// 006dcef6  8bf0                 mov esi, eax
// 006dcef8  85f6                 test esi, esi
// 006dcefa  743e                 je 0x6dcf3a
// 006dcefc  8d642400             lea esp, [esp]
// 006dcf00  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 006dcf03  6a02                 push 2
// 006dcf05  56                   push esi
// 006dcf06  e811f40d00           call 0x7bc31c
// 006dcf0b  d1e8                 shr eax, 1
// 006dcf0d  83e001               and eax, 1
// 006dcf10  3bc5                 cmp eax, ebp
// 006dcf12  740b                 je 0x6dcf1f
// 006dcf14  6a02                 push 2
// 006dcf16  53                   push ebx
// 006dcf17  56                   push esi
// 006dcf18  8bcf                 mov ecx, edi
// 006dcf1a  e8e1faffff           call 0x6dca00
// 006dcf1f  8b4734               mov eax, dword ptr [edi + 0x34]
// 006dcf22  8b5020               mov edx, dword ptr [eax + 0x20]
// 006dcf25  56                   push esi
// 006dcf26  6a06                 push 6
// 006dcf28  680a110000           push 0x110a
// 006dcf2d  52                   push edx
// 006dcf2e  ff15142e8000         call dword ptr [0x802e14]
// 006dcf34  8bf0                 mov esi, eax
// 006dcf36  85f6                 test esi, esi
// 006dcf38  75c6                 jne 0x6dcf00
// 006dcf3a  5f                   pop edi
// 006dcf3b  5e                   pop esi
// 006dcf3c  5d                   pop ebp
// 006dcf3d  5b                   pop ebx
// 006dcf3e  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTTreeBase.cpp (function ?SelectAll@CXTTreeBase@@QAEXHPAU_TREEITEM@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTreeBase.cpp
