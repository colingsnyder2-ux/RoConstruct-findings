// roc 2007-08 007367a0  unit: G3D::Sky  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007367a0
//
// 007367a0  6aff                 push -1
// 007367a2  68d8e57400           push 0x74e5d8
// 007367a7  64a100000000         mov eax, dword ptr fs:[0]
// 007367ad  50                   push eax
// 007367ae  51                   push ecx
// 007367af  56                   push esi
// 007367b0  a188518b00           mov eax, dword ptr [0x8b5188]
// 007367b5  33c4                 xor eax, esp
// 007367b7  50                   push eax
// 007367b8  8d44240c             lea eax, [esp + 0xc]
// 007367bc  64a300000000         mov dword ptr fs:[0], eax
// 007367c2  8bf1                 mov esi, ecx
// 007367c4  89742408             mov dword ptr [esp + 8], esi
// 007367c8  8b8618020000         mov eax, dword ptr [esi + 0x218]
// 007367ce  85c0                 test eax, eax
// 007367d0  c744241400000000     mov dword ptr [esp + 0x14], 0
// 007367d8  7435                 je 0x73680f
// 007367da  83c004               add eax, 4
// 007367dd  50                   push eax
// 007367de  ff15e8d27700         call dword ptr [0x77d2e8]
// 007367e4  85c0                 test eax, eax
// 007367e6  751d                 jne 0x736805
// 007367e8  8b8e18020000         mov ecx, dword ptr [esi + 0x218]
// 007367ee  e8dd15d2ff           call 0x457dd0
// 007367f3  8b8e18020000         mov ecx, dword ptr [esi + 0x218]
// 007367f9  85c9                 test ecx, ecx
// 007367fb  7408                 je 0x736805
// 007367fd  8b01                 mov eax, dword ptr [ecx]
// 007367ff  8b10                 mov edx, dword ptr [eax]
// 00736801  6a01                 push 1
// 00736803  ffd2                 call edx
// 00736805  c7861802000000000000 mov dword ptr [esi + 0x218], 0
// 0073680f  c70684797900         mov dword ptr [esi], 0x797984
// 00736815  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00736819  64890d00000000       mov dword ptr fs:[0], ecx
// 00736820  59                   pop ecx
// 00736821  5e                   pop esi
// 00736822  83c410               add esp, 0x10
// 00736825  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GFont.cpp (function ??1GFont@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GFont.cpp
