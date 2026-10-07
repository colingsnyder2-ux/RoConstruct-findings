// roc 2008-06 007a1660  unit: CXTPDockingPaneAutoHidePanel  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a1660
//
// 007a1660  8b4124               mov eax, dword ptr [ecx + 0x24]
// 007a1663  8b5120               mov edx, dword ptr [ecx + 0x20]
// 007a1666  53                   push ebx
// 007a1667  8b5918               mov ebx, dword ptr [ecx + 0x18]
// 007a166a  56                   push esi
// 007a166b  8b7110               mov esi, dword ptr [ecx + 0x10]
// 007a166e  57                   push edi
// 007a166f  8b791c               mov edi, dword ptr [ecx + 0x1c]
// 007a1672  2bc7                 sub eax, edi
// 007a1674  2bd3                 sub edx, ebx
// 007a1676  85f6                 test esi, esi
// 007a1678  7403                 je 0x7a167d
// 007a167a  8b7604               mov esi, dword ptr [esi + 4]
// 007a167d  682000cc00           push 0xcc0020
// 007a1682  57                   push edi
// 007a1683  53                   push ebx
// 007a1684  56                   push esi
// 007a1685  50                   push eax
// 007a1686  8b4104               mov eax, dword ptr [ecx + 4]
// 007a1689  52                   push edx
// 007a168a  6a00                 push 0
// 007a168c  6a00                 push 0
// 007a168e  50                   push eax
// 007a168f  ff15c4208000         call dword ptr [0x8020c4]
// 007a1695  5f                   pop edi
// 007a1696  5e                   pop esi
// 007a1697  5b                   pop ebx
// 007a1698  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTMemDC.cpp (function ?FromDC@CXTMemDC@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTMemDC.cpp
