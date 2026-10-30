// from server: 100% by auto
// roc 2012-06 009c0530  unit: CRobloxTreeCtrl  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c0530
//
// 009c0530  53                   push ebx
// 009c0531  33c0                 xor eax, eax
// 009c0533  39442408             cmp dword ptr [esp + 8], eax
// 009c0537  55                   push ebp
// 009c0538  0f95c0               setne al
// 009c053b  56                   push esi
// 009c053c  57                   push edi
// 009c053d  6a00                 push 0
// 009c053f  8bf9                 mov edi, ecx
// 009c0541  6a00                 push 0
// 009c0543  680a110000           push 0x110a
// 009c0548  8be8                 mov ebp, eax
// 009c054a  8b4734               mov eax, dword ptr [edi + 0x34]
// 009c054d  8b4820               mov ecx, dword ptr [eax + 0x20]
// 009c0550  8bdd                 mov ebx, ebp
// 009c0552  f7db                 neg ebx
// 009c0554  1bdb                 sbb ebx, ebx
// 009c0556  51                   push ecx
// 009c0557  83e302               and ebx, 2
// 009c055a  ff15043cb200         call dword ptr [0xb23c04]
// 009c0560  8bf0                 mov esi, eax
// 009c0562  85f6                 test esi, esi
// 009c0564  7440                 je 0x9c05a6
// 009c0566  3b742418             cmp esi, dword ptr [esp + 0x18]
// 009c056a  741f                 je 0x9c058b
// 009c056c  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 009c056f  6a02                 push 2
// 009c0571  56                   push esi
// 009c0572  e89b920d00           call 0xa99812
// 009c0577  d1e8                 shr eax, 1
// 009c0579  83e001               and eax, 1
// 009c057c  3bc5                 cmp eax, ebp
// 009c057e  740b                 je 0x9c058b
// 009c0580  6a02                 push 2
// 009c0582  53                   push ebx
// 009c0583  56                   push esi
// 009c0584  8bcf                 mov ecx, edi
// 009c0586  e855faffff           call 0x9bffe0
// 009c058b  8b4734               mov eax, dword ptr [edi + 0x34]
// 009c058e  8b5020               mov edx, dword ptr [eax + 0x20]
// 009c0591  56                   push esi
// 009c0592  6a06                 push 6
// 009c0594  680a110000           push 0x110a
// 009c0599  52                   push edx
// 009c059a  ff15043cb200         call dword ptr [0xb23c04]
// 009c05a0  8bf0                 mov esi, eax
// 009c05a2  85f6                 test esi, esi
// 009c05a4  75c0                 jne 0x9c0566
// 009c05a6  5f                   pop edi
// 009c05a7  5e                   pop esi
// 009c05a8  5d                   pop ebp
// 009c05a9  5b                   pop ebx
// 009c05aa  c20800               ret 8
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?SelectAllIgnore@CXTPTreeBase@@MAEXHPAU_TREEITEM@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
