// from server: 100% by auto
// roc 2011-06 00901610  unit: CXTPDockingPaneAutoHidePanel  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00901610
//
// 00901610  8b4124               mov eax, dword ptr [ecx + 0x24]
// 00901613  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00901616  53                   push ebx
// 00901617  8b5918               mov ebx, dword ptr [ecx + 0x18]
// 0090161a  56                   push esi
// 0090161b  8b7110               mov esi, dword ptr [ecx + 0x10]
// 0090161e  57                   push edi
// 0090161f  8b791c               mov edi, dword ptr [ecx + 0x1c]
// 00901622  2bc7                 sub eax, edi
// 00901624  2bd3                 sub edx, ebx
// 00901626  85f6                 test esi, esi
// 00901628  7403                 je 0x90162d
// 0090162a  8b7604               mov esi, dword ptr [esi + 4]
// 0090162d  682000cc00           push 0xcc0020
// 00901632  57                   push edi
// 00901633  53                   push ebx
// 00901634  56                   push esi
// 00901635  50                   push eax
// 00901636  8b4104               mov eax, dword ptr [ecx + 4]
// 00901639  52                   push edx
// 0090163a  6a00                 push 0
// 0090163c  6a00                 push 0
// 0090163e  50                   push eax
// 0090163f  ff159001a400         call dword ptr [0xa40190]
// 00901645  5f                   pop edi
// 00901646  5e                   pop esi
// 00901647  5b                   pop ebx
// 00901648  c3                   ret 
// library xtp-15.2.1/Source\Controls\Deprecated\XTMemDC.cpp (function ?FromDC@CXTMemDC@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Deprecated/XTMemDC.cpp
