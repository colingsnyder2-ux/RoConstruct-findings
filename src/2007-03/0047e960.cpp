// roc 2007-03 0047e960  unit: seg_00470000  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0047e960
//
// 0047e960  83ec24               sub esp, 0x24
// 0047e963  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 0047e968  33c4                 xor eax, esp
// 0047e96a  89442420             mov dword ptr [esp + 0x20], eax
// 0047e96e  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0047e972  8d0424               lea eax, [esp]
// 0047e975  50                   push eax
// 0047e976  51                   push ecx
// 0047e977  ff1560ec7700         call dword ptr [0x77ec60]
// 0047e97d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0047e981  8a0424               mov al, byte ptr [esp]
// 0047e984  33cc                 xor ecx, esp
// 0047e986  e81b051a00           call 0x61eea6
// 0047e98b  83c424               add esp, 0x24
// 0047e98e  c3                   ret 
// library g3d-6.09/GLG3Dcpp\getOpenGLState.cpp (function ?glGetBoolean@G3D@@YAEI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/getOpenGLState.cpp
