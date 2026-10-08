// from server: 100% by auto
// roc 2008-06 007b6f40  unit: G3D::Sky  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007b6f40
//
// 007b6f40  6aff                 push -1
// 007b6f42  6848e47e00           push 0x7ee448
// 007b6f47  64a100000000         mov eax, dword ptr fs:[0]
// 007b6f4d  50                   push eax
// 007b6f4e  64892500000000       mov dword ptr fs:[0], esp
// 007b6f55  51                   push ecx
// 007b6f56  56                   push esi
// 007b6f57  8bf1                 mov esi, ecx
// 007b6f59  89742404             mov dword ptr [esp + 4], esi
// 007b6f5d  8b8618020000         mov eax, dword ptr [esi + 0x218]
// 007b6f63  c744241000000000     mov dword ptr [esp + 0x10], 0
// 007b6f6b  85c0                 test eax, eax
// 007b6f6d  7435                 je 0x7b6fa4
// 007b6f6f  83c004               add eax, 4
// 007b6f72  50                   push eax
// 007b6f73  ff15ac218000         call dword ptr [0x8021ac]
// 007b6f79  85c0                 test eax, eax
// 007b6f7b  751d                 jne 0x7b6f9a
// 007b6f7d  8b8e18020000         mov ecx, dword ptr [esi + 0x218]
// 007b6f83  e8083ecaff           call 0x45ad90
// 007b6f88  8b8e18020000         mov ecx, dword ptr [esi + 0x218]
// 007b6f8e  85c9                 test ecx, ecx
// 007b6f90  7408                 je 0x7b6f9a
// 007b6f92  8b01                 mov eax, dword ptr [ecx]
// 007b6f94  8b10                 mov edx, dword ptr [eax]
// 007b6f96  6a01                 push 1
// 007b6f98  ffd2                 call edx
// 007b6f9a  c7861802000000000000 mov dword ptr [esi + 0x218], 0
// 007b6fa4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007b6fa8  c706e0e18100         mov dword ptr [esi], 0x81e1e0
// 007b6fae  5e                   pop esi
// 007b6faf  64890d00000000       mov dword ptr fs:[0], ecx
// 007b6fb6  83c410               add esp, 0x10
// 007b6fb9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GFont.cpp (function ??1GFont@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GFont.cpp
