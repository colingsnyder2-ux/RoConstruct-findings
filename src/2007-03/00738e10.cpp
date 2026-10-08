// roc 2007-03 00738e10  unit: seg_00730000  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00738e10
//
// 00738e10  6aff                 push -1
// 00738e12  6858f47400           push 0x74f458
// 00738e17  64a100000000         mov eax, dword ptr fs:[0]
// 00738e1d  50                   push eax
// 00738e1e  51                   push ecx
// 00738e1f  56                   push esi
// 00738e20  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00738e25  33c4                 xor eax, esp
// 00738e27  50                   push eax
// 00738e28  8d44240c             lea eax, [esp + 0xc]
// 00738e2c  64a300000000         mov dword ptr fs:[0], eax
// 00738e32  8bf1                 mov esi, ecx
// 00738e34  89742408             mov dword ptr [esp + 8], esi
// 00738e38  8b8618020000         mov eax, dword ptr [esi + 0x218]
// 00738e3e  85c0                 test eax, eax
// 00738e40  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00738e48  7435                 je 0x738e7f
// 00738e4a  83c004               add eax, 4
// 00738e4d  50                   push eax
// 00738e4e  ff15a8d27700         call dword ptr [0x77d2a8]
// 00738e54  85c0                 test eax, eax
// 00738e56  751d                 jne 0x738e75
// 00738e58  8b8e18020000         mov ecx, dword ptr [esi + 0x218]
// 00738e5e  e85da5d2ff           call 0x4633c0
// 00738e63  8b8e18020000         mov ecx, dword ptr [esi + 0x218]
// 00738e69  85c9                 test ecx, ecx
// 00738e6b  7408                 je 0x738e75
// 00738e6d  8b01                 mov eax, dword ptr [ecx]
// 00738e6f  8b10                 mov edx, dword ptr [eax]
// 00738e71  6a01                 push 1
// 00738e73  ffd2                 call edx
// 00738e75  c7861802000000000000 mov dword ptr [esi + 0x218], 0
// 00738e7f  c706946d7900         mov dword ptr [esi], 0x796d94
// 00738e85  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00738e89  64890d00000000       mov dword ptr fs:[0], ecx
// 00738e90  59                   pop ecx
// 00738e91  5e                   pop esi
// 00738e92  83c410               add esp, 0x10
// 00738e95  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GFont.cpp (function ??1GFont@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GFont.cpp
