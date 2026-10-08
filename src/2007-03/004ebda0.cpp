// roc 2007-03 004ebda0  unit: seg_004e0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004ebda0
//
// 004ebda0  56                   push esi
// 004ebda1  8bf1                 mov esi, ecx
// 004ebda3  8b4640               mov eax, dword ptr [esi + 0x40]
// 004ebda6  85c0                 test eax, eax
// 004ebda8  742c                 je 0x4ebdd6
// 004ebdaa  83c004               add eax, 4
// 004ebdad  50                   push eax
// 004ebdae  ff15a8d27700         call dword ptr [0x77d2a8]
// 004ebdb4  85c0                 test eax, eax
// 004ebdb6  7517                 jne 0x4ebdcf
// 004ebdb8  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 004ebdbb  e80076f7ff           call 0x4633c0
// 004ebdc0  8b4e40               mov ecx, dword ptr [esi + 0x40]
// 004ebdc3  85c9                 test ecx, ecx
// 004ebdc5  7408                 je 0x4ebdcf
// 004ebdc7  8b01                 mov eax, dword ptr [ecx]
// 004ebdc9  8b10                 mov edx, dword ptr [eax]
// 004ebdcb  6a01                 push 1
// 004ebdcd  ffd2                 call edx
// 004ebdcf  c7464000000000       mov dword ptr [esi + 0x40], 0
// 004ebdd6  5e                   pop esi
// 004ebdd7  c3                   ret 
// library rbxgs-render/DepthBlur.cpp (function ??1Arg@ArgList@VertexAndPixelShader@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render DepthBlur.cpp
