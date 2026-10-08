// roc 2010-06 0054d500  unit: G3D::Shader  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0054d500
//
// 0054d500  6aff                 push -1
// 0054d502  68ab089900           push 0x9908ab
// 0054d507  64a100000000         mov eax, dword ptr fs:[0]
// 0054d50d  50                   push eax
// 0054d50e  64892500000000       mov dword ptr fs:[0], esp
// 0054d515  83ec08               sub esp, 8
// 0054d518  56                   push esi
// 0054d519  6a28                 push 0x28
// 0054d51b  c744240800000000     mov dword ptr [esp + 8], 0
// 0054d523  e878a42500           call 0x7a79a0
// 0054d528  8bf0                 mov esi, eax
// 0054d52a  83c404               add esp, 4
// 0054d52d  89742404             mov dword ptr [esp + 4], esi
// 0054d531  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0054d539  85f6                 test esi, esi
// 0054d53b  742b                 je 0x54d568
// 0054d53d  8b442428             mov eax, dword ptr [esp + 0x28]
// 0054d541  8b542424             mov edx, dword ptr [esp + 0x24]
// 0054d545  50                   push eax
// 0054d546  51                   push ecx
// 0054d547  8bcc                 mov ecx, esp
// 0054d549  89642410             mov dword ptr [esp + 0x10], esp
// 0054d54d  6a00                 push 0
// 0054d54f  50                   push eax
// 0054d550  8b442430             mov eax, dword ptr [esp + 0x30]
// 0054d554  52                   push edx
// 0054d555  50                   push eax
// 0054d556  51                   push ecx
// 0054d557  e804ebf4ff           call 0x49c060
// 0054d55c  83c414               add esp, 0x14
// 0054d55f  8bce                 mov ecx, esi
// 0054d561  e80afeffff           call 0x54d370
// 0054d566  eb02                 jmp 0x54d56a
// 0054d568  33c0                 xor eax, eax
// 0054d56a  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0054d56e  50                   push eax
// 0054d56f  8bce                 mov ecx, esi
// 0054d571  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0054d579  c70600000000         mov dword ptr [esi], 0
// 0054d57f  e89c97f3ff           call 0x486d20
// 0054d584  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0054d588  8bc6                 mov eax, esi
// 0054d58a  64890d00000000       mov dword ptr fs:[0], ecx
// 0054d591  5e                   pop esi
// 0054d592  83c414               add esp, 0x14
// 0054d595  c3                   ret 
// library rbxgs-render/DepthBlur.cpp (function ?fromStrings@Shader@G3D@@SA?AV?$ReferenceCountedPointer@VShader@G3D@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0W4UseG3DUniforms@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render DepthBlur.cpp
