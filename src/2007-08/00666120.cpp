// from server: 100% by auto
// roc 2007-08 00666120  unit: CRobloxTreeCtrl  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00666120
//
// 00666120  33c0                 xor eax, eax
// 00666122  39442404             cmp dword ptr [esp + 4], eax
// 00666126  53                   push ebx
// 00666127  0f95c0               setne al
// 0066612a  55                   push ebp
// 0066612b  56                   push esi
// 0066612c  8b742414             mov esi, dword ptr [esp + 0x14]
// 00666130  57                   push edi
// 00666131  8bf9                 mov edi, ecx
// 00666133  8be8                 mov ebp, eax
// 00666135  8bdd                 mov ebx, ebp
// 00666137  f7db                 neg ebx
// 00666139  1bdb                 sbb ebx, ebx
// 0066613b  83e302               and ebx, 2
// 0066613e  85f6                 test esi, esi
// 00666140  751e                 jne 0x666160
// 00666142  8b4734               mov eax, dword ptr [edi + 0x34]
// 00666145  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00666148  56                   push esi
// 00666149  56                   push esi
// 0066614a  680a110000           push 0x110a
// 0066614f  51                   push ecx
// 00666150  ff15d8ec7700         call dword ptr [0x77ecd8]
// 00666156  8bf0                 mov esi, eax
// 00666158  85f6                 test esi, esi
// 0066615a  743e                 je 0x66619a
// 0066615c  8d642400             lea esp, [esp]
// 00666160  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 00666163  6a02                 push 2
// 00666165  56                   push esi
// 00666166  e8cf240d00           call 0x73863a
// 0066616b  d1e8                 shr eax, 1
// 0066616d  83e001               and eax, 1
// 00666170  3bc5                 cmp eax, ebp
// 00666172  740b                 je 0x66617f
// 00666174  6a02                 push 2
// 00666176  53                   push ebx
// 00666177  56                   push esi
// 00666178  8bcf                 mov ecx, edi
// 0066617a  e8b1faffff           call 0x665c30
// 0066617f  8b4734               mov eax, dword ptr [edi + 0x34]
// 00666182  8b5020               mov edx, dword ptr [eax + 0x20]
// 00666185  56                   push esi
// 00666186  6a06                 push 6
// 00666188  680a110000           push 0x110a
// 0066618d  52                   push edx
// 0066618e  ff15d8ec7700         call dword ptr [0x77ecd8]
// 00666194  8bf0                 mov esi, eax
// 00666196  85f6                 test esi, esi
// 00666198  75c6                 jne 0x666160
// 0066619a  5f                   pop edi
// 0066619b  5e                   pop esi
// 0066619c  5d                   pop ebp
// 0066619d  5b                   pop ebx
// 0066619e  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Controls\XTTreeBase.cpp (function ?SelectAll@CXTTreeBase@@QAEXHPAU_TREEITEM@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTTreeBase.cpp
