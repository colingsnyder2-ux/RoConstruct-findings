// from server: 100% by auto
// roc 2008-06 00515c20  unit: seg_00510000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00515c20
//
// 00515c20  6aff                 push -1
// 00515c22  68cc6f7c00           push 0x7c6fcc
// 00515c27  64a100000000         mov eax, dword ptr fs:[0]
// 00515c2d  50                   push eax
// 00515c2e  64892500000000       mov dword ptr fs:[0], esp
// 00515c35  51                   push ecx
// 00515c36  56                   push esi
// 00515c37  8bf1                 mov esi, ecx
// 00515c39  89742404             mov dword ptr [esp + 4], esi
// 00515c3d  c70648898200         mov dword ptr [esi], 0x828948
// 00515c43  807e4800             cmp byte ptr [esi + 0x48], 0
// 00515c47  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00515c4f  740c                 je 0x515c5d
// 00515c51  8b4640               mov eax, dword ptr [esi + 0x40]
// 00515c54  50                   push eax
// 00515c55  e8a620ffff           call 0x507d00
// 00515c5a  83c404               add esp, 4
// 00515c5d  8d4e08               lea ecx, [esi + 8]
// 00515c60  c7464000000000       mov dword ptr [esi + 0x40], 0
// 00515c67  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00515c6f  ff1568248000         call dword ptr [0x802468]
// 00515c75  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00515c79  5e                   pop esi
// 00515c7a  64890d00000000       mov dword ptr fs:[0], ecx
// 00515c81  83c410               add esp, 0x10
// 00515c84  c3                   ret 
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ??1BinaryInput@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
