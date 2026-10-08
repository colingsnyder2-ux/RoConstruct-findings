// from server: 100% by auto
// roc 2010-06 00558cc0  unit: seg_00550000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00558cc0
//
// 00558cc0  6aff                 push -1
// 00558cc2  689cd99900           push 0x99d99c
// 00558cc7  64a100000000         mov eax, dword ptr fs:[0]
// 00558ccd  50                   push eax
// 00558cce  64892500000000       mov dword ptr fs:[0], esp
// 00558cd5  51                   push ecx
// 00558cd6  56                   push esi
// 00558cd7  8bf1                 mov esi, ecx
// 00558cd9  89742404             mov dword ptr [esp + 4], esi
// 00558cdd  c7063009a200         mov dword ptr [esi], 0xa20930
// 00558ce3  807e4800             cmp byte ptr [esi + 0x48], 0
// 00558ce7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00558cef  740c                 je 0x558cfd
// 00558cf1  8b4640               mov eax, dword ptr [esi + 0x40]
// 00558cf4  50                   push eax
// 00558cf5  e8b61efbff           call 0x50abb0
// 00558cfa  83c404               add esp, 4
// 00558cfd  8d4e08               lea ecx, [esi + 8]
// 00558d00  c7464000000000       mov dword ptr [esi + 0x40], 0
// 00558d07  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00558d0f  ff1500a49e00         call dword ptr [0x9ea400]
// 00558d15  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00558d19  5e                   pop esi
// 00558d1a  64890d00000000       mov dword ptr fs:[0], ecx
// 00558d21  83c410               add esp, 0x10
// 00558d24  c3                   ret 
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ??1BinaryInput@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
