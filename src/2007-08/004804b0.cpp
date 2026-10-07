// roc 2007-08 004804b0  unit: G3D::Win32Window  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004804b0
//
// 004804b0  83ec24               sub esp, 0x24
// 004804b3  a188518b00           mov eax, dword ptr [0x8b5188]
// 004804b8  33c4                 xor eax, esp
// 004804ba  89442420             mov dword ptr [esp + 0x20], eax
// 004804be  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004804c2  8d0424               lea eax, [esp]
// 004804c5  50                   push eax
// 004804c6  51                   push ecx
// 004804c7  ff155cea7700         call dword ptr [0x77ea5c]
// 004804cd  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004804d1  8a0424               mov al, byte ptr [esp]
// 004804d4  33cc                 xor ecx, esp
// 004804d6  e843051b00           call 0x630a1e
// 004804db  83c424               add esp, 0x24
// 004804de  c3                   ret 
// library g3d-6.09/GLG3Dcpp\getOpenGLState.cpp (function ?glGetBoolean@G3D@@YAEI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/getOpenGLState.cpp
