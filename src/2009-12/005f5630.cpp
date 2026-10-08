// roc 2009-12 005f5630  unit: seg_005f0000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f5630
//
// 005f5630  6aff                 push -1
// 005f5632  683ce79200           push 0x92e73c
// 005f5637  64a100000000         mov eax, dword ptr fs:[0]
// 005f563d  50                   push eax
// 005f563e  64892500000000       mov dword ptr fs:[0], esp
// 005f5645  51                   push ecx
// 005f5646  56                   push esi
// 005f5647  8bf1                 mov esi, ecx
// 005f5649  89742404             mov dword ptr [esp + 4], esi
// 005f564d  c70684269c00         mov dword ptr [esi], 0x9c2684
// 005f5653  807e4800             cmp byte ptr [esi + 0x48], 0
// 005f5657  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005f565f  740c                 je 0x5f566d
// 005f5661  8b4640               mov eax, dword ptr [esi + 0x40]
// 005f5664  50                   push eax
// 005f5665  e8366bf6ff           call 0x55c1a0
// 005f566a  83c404               add esp, 4
// 005f566d  8d4e08               lea ecx, [esi + 8]
// 005f5670  c7464000000000       mov dword ptr [esi + 0x40], 0
// 005f5677  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005f567f  ff15e4b69800         call dword ptr [0x98b6e4]
// 005f5685  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005f5689  5e                   pop esi
// 005f568a  64890d00000000       mov dword ptr fs:[0], ecx
// 005f5691  83c410               add esp, 0x10
// 005f5694  c3                   ret 
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ??1BinaryInput@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
