// roc 2007-03 00460fc0  unit: seg_00460000  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00460fc0
//
// 00460fc0  56                   push esi
// 00460fc1  8bf1                 mov esi, ecx
// 00460fc3  57                   push edi
// 00460fc4  c70674497900         mov dword ptr [esi], 0x794974
// 00460fca  33ff                 xor edi, edi
// 00460fcc  3935a0778b00         cmp dword ptr [0x8b77a0], esi
// 00460fd2  7506                 jne 0x460fda
// 00460fd4  893da0778b00         mov dword ptr [0x8b77a0], edi
// 00460fda  8b4604               mov eax, dword ptr [esi + 4]
// 00460fdd  50                   push eax
// 00460fde  e89d230900           call 0x4f3380
// 00460fe3  83c404               add esp, 4
// 00460fe6  897e04               mov dword ptr [esi + 4], edi
// 00460fe9  897e08               mov dword ptr [esi + 8], edi
// 00460fec  897e0c               mov dword ptr [esi + 0xc], edi
// 00460fef  5f                   pop edi
// 00460ff0  5e                   pop esi
// 00460ff1  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\SDLWindow.cpp (function ??1GWindow@G3D@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/SDLWindow.cpp
