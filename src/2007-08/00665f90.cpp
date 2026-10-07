// roc 2007-08 00665f90  unit: CRobloxTreeCtrl  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00665f90
//
// 00665f90  53                   push ebx
// 00665f91  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00665f95  55                   push ebp
// 00665f96  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00665f9a  56                   push esi
// 00665f9b  57                   push edi
// 00665f9c  8bc3                 mov eax, ebx
// 00665f9e  83e0fe               and eax, 0xfffffffe
// 00665fa1  8bf1                 mov esi, ecx
// 00665fa3  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00665fa6  50                   push eax
// 00665fa7  55                   push ebp
// 00665fa8  e88d260d00           call 0x73863a
// 00665fad  f6c301               test bl, 1
// 00665fb0  8bf8                 mov edi, eax
// 00665fb2  741f                 je 0x665fd3
// 00665fb4  8b7634               mov esi, dword ptr [esi + 0x34]
// 00665fb7  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00665fba  6a00                 push 0
// 00665fbc  6a09                 push 9
// 00665fbe  680a110000           push 0x110a
// 00665fc3  51                   push ecx
// 00665fc4  ff15d8ec7700         call dword ptr [0x77ecd8]
// 00665fca  3bc5                 cmp eax, ebp
// 00665fcc  7503                 jne 0x665fd1
// 00665fce  83cf01               or edi, 1
// 00665fd1  8bc7                 mov eax, edi
// 00665fd3  5f                   pop edi
// 00665fd4  5e                   pop esi
// 00665fd5  5d                   pop ebp
// 00665fd6  5b                   pop ebx
// 00665fd7  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Controls\XTTreeBase.cpp (function ?GetItemState@CXTTreeBase@@QBEIPAU_TREEITEM@@I@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTTreeBase.cpp
