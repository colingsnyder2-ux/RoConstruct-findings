// roc 2009-06 00574ba0  unit: G3D::GCamera  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00574ba0
//
// 00574ba0  6aff                 push -1
// 00574ba2  684c3a8500           push 0x853a4c
// 00574ba7  64a100000000         mov eax, dword ptr fs:[0]
// 00574bad  50                   push eax
// 00574bae  64892500000000       mov dword ptr fs:[0], esp
// 00574bb5  51                   push ecx
// 00574bb6  56                   push esi
// 00574bb7  8bf1                 mov esi, ecx
// 00574bb9  89742404             mov dword ptr [esp + 4], esi
// 00574bbd  c706acb78c00         mov dword ptr [esi], 0x8cb7ac
// 00574bc3  807e4800             cmp byte ptr [esi + 0x48], 0
// 00574bc7  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00574bcf  740c                 je 0x574bdd
// 00574bd1  8b4640               mov eax, dword ptr [esi + 0x40]
// 00574bd4  50                   push eax
// 00574bd5  e88665ffff           call 0x56b160
// 00574bda  83c404               add esp, 4
// 00574bdd  8d4e08               lea ecx, [esi + 8]
// 00574be0  c7464000000000       mov dword ptr [esi + 0x40], 0
// 00574be7  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00574bef  ff15c4e48900         call dword ptr [0x89e4c4]
// 00574bf5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00574bf9  5e                   pop esi
// 00574bfa  64890d00000000       mov dword ptr fs:[0], ecx
// 00574c01  83c410               add esp, 0x10
// 00574c04  c3                   ret 
// library g3d-6.09/G3Dcpp\BinaryInput.cpp (function ??1BinaryInput@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/BinaryInput.cpp
