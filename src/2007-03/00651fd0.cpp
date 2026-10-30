// roc 2007-03 00651fd0  unit: seg_00650000  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00651fd0
//
// 00651fd0  53                   push ebx
// 00651fd1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00651fd5  55                   push ebp
// 00651fd6  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00651fda  56                   push esi
// 00651fdb  57                   push edi
// 00651fdc  8bc3                 mov eax, ebx
// 00651fde  83e0fe               and eax, 0xfffffffe
// 00651fe1  8bf1                 mov esi, ecx
// 00651fe3  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00651fe6  50                   push eax
// 00651fe7  55                   push ebp
// 00651fe8  e8998d0e00           call 0x73ad86
// 00651fed  f6c301               test bl, 1
// 00651ff0  8bf8                 mov edi, eax
// 00651ff2  741f                 je 0x652013
// 00651ff4  8b7634               mov esi, dword ptr [esi + 0x34]
// 00651ff7  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00651ffa  6a00                 push 0
// 00651ffc  6a09                 push 9
// 00651ffe  680a110000           push 0x110a
// 00652003  51                   push ecx
// 00652004  ff1550ee7700         call dword ptr [0x77ee50]
// 0065200a  3bc5                 cmp eax, ebp
// 0065200c  7503                 jne 0x652011
// 0065200e  83cf01               or edi, 1
// 00652011  8bc7                 mov eax, edi
// 00652013  5f                   pop edi
// 00652014  5e                   pop esi
// 00652015  5d                   pop ebp
// 00652016  5b                   pop ebx
// 00652017  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Controls\XTTreeBase.cpp (function ?GetItemState@CXTTreeBase@@QBEIPAU_TREEITEM@@I@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTTreeBase.cpp
