// roc 2009-12 008eef20  unit: CXTPRibbonGroupPopupToolBar  size: 201 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008eef20
//
// 008eef20  6aff                 push -1
// 008eef22  6824689600           push 0x966824
// 008eef27  64a100000000         mov eax, dword ptr fs:[0]
// 008eef2d  50                   push eax
// 008eef2e  51                   push ecx
// 008eef2f  56                   push esi
// 008eef30  57                   push edi
// 008eef31  a10052b600           mov eax, dword ptr [0xb65200]
// 008eef36  33c4                 xor eax, esp
// 008eef38  50                   push eax
// 008eef39  8d442410             lea eax, [esp + 0x10]
// 008eef3d  64a300000000         mov dword ptr fs:[0], eax
// 008eef43  8bf1                 mov esi, ecx
// 008eef45  6878010000           push 0x178
// 008eef4a  e81149f0ff           call 0x7f3860
// 008eef4f  83c404               add esp, 4
// 008eef52  8944240c             mov dword ptr [esp + 0xc], eax
// 008eef56  c744241800000000     mov dword ptr [esp + 0x18], 0
// 008eef5e  85c0                 test eax, eax
// 008eef60  740b                 je 0x8eef6d
// 008eef62  6a00                 push 0
// 008eef64  8bc8                 mov ecx, eax
// 008eef66  e895f9ffff           call 0x8ee900
// 008eef6b  eb02                 jmp 0x8eef6f
// 008eef6d  33c0                 xor eax, eax
// 008eef6f  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 008eef73  8b8ffc000000         mov ecx, dword ptr [edi + 0xfc]
// 008eef79  50                   push eax
// 008eef7a  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 008eef82  e81983f5ff           call 0x8472a0
// 008eef87  6878010000           push 0x178
// 008eef8c  894610               mov dword ptr [esi + 0x10], eax
// 008eef8f  e8cc48f0ff           call 0x7f3860
// 008eef94  83c404               add esp, 4
// 008eef97  89442420             mov dword ptr [esp + 0x20], eax
// 008eef9b  c744241801000000     mov dword ptr [esp + 0x18], 1
// 008eefa3  85c0                 test eax, eax
// 008eefa5  740b                 je 0x8eefb2
// 008eefa7  6a01                 push 1
// 008eefa9  8bc8                 mov ecx, eax
// 008eefab  e850f9ffff           call 0x8ee900
// 008eefb0  eb02                 jmp 0x8eefb4
// 008eefb2  33c0                 xor eax, eax
// 008eefb4  8b8ffc000000         mov ecx, dword ptr [edi + 0xfc]
// 008eefba  50                   push eax
// 008eefbb  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 008eefc3  e8d882f5ff           call 0x8472a0
// 008eefc8  89460c               mov dword ptr [esi + 0xc], eax
// 008eefcb  c7460400000000       mov dword ptr [esi + 4], 0
// 008eefd2  897e08               mov dword ptr [esi + 8], edi
// 008eefd5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008eefd9  64890d00000000       mov dword ptr fs:[0], ecx
// 008eefe0  59                   pop ecx
// 008eefe1  5f                   pop edi
// 008eefe2  5e                   pop esi
// 008eefe3  83c410               add esp, 0x10
// 008eefe6  c20400               ret 4
// copied from an identical function in another client (function ?InitScrollableBar@CXTPRibbonScrollableBar@@IAEXPAVCXTPCommandBar@@@Z)

// roc-cl: 30729
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonPopups.cpp