// roc 2009-12 005e9f20  unit: G3D::Shader  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005e9f20
//
// 005e9f20  6aff                 push -1
// 005e9f22  685be59300           push 0x93e55b
// 005e9f27  64a100000000         mov eax, dword ptr fs:[0]
// 005e9f2d  50                   push eax
// 005e9f2e  64892500000000       mov dword ptr fs:[0], esp
// 005e9f35  83ec08               sub esp, 8
// 005e9f38  56                   push esi
// 005e9f39  6a28                 push 0x28
// 005e9f3b  c744240800000000     mov dword ptr [esp + 8], 0
// 005e9f43  e818992000           call 0x7f3860
// 005e9f48  8bf0                 mov esi, eax
// 005e9f4a  83c404               add esp, 4
// 005e9f4d  89742404             mov dword ptr [esp + 4], esi
// 005e9f51  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005e9f59  85f6                 test esi, esi
// 005e9f5b  742b                 je 0x5e9f88
// 005e9f5d  8b442428             mov eax, dword ptr [esp + 0x28]
// 005e9f61  8b542424             mov edx, dword ptr [esp + 0x24]
// 005e9f65  50                   push eax
// 005e9f66  51                   push ecx
// 005e9f67  8bcc                 mov ecx, esp
// 005e9f69  89642410             mov dword ptr [esp + 0x10], esp
// 005e9f6d  6a00                 push 0
// 005e9f6f  50                   push eax
// 005e9f70  8b442430             mov eax, dword ptr [esp + 0x30]
// 005e9f74  52                   push edx
// 005e9f75  50                   push eax
// 005e9f76  51                   push ecx
// 005e9f77  e8445defff           call 0x4dfcc0
// 005e9f7c  83c414               add esp, 0x14
// 005e9f7f  8bce                 mov ecx, esi
// 005e9f81  e81afeffff           call 0x5e9da0
// 005e9f86  eb02                 jmp 0x5e9f8a
// 005e9f88  33c0                 xor eax, eax
// 005e9f8a  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005e9f8e  50                   push eax
// 005e9f8f  8bce                 mov ecx, esi
// 005e9f91  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 005e9f99  c70600000000         mov dword ptr [esi], 0
// 005e9f9f  e8cc1be6ff           call 0x44bb70
// 005e9fa4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005e9fa8  8bc6                 mov eax, esi
// 005e9faa  64890d00000000       mov dword ptr fs:[0], ecx
// 005e9fb1  5e                   pop esi
// 005e9fb2  83c414               add esp, 0x14
// 005e9fb5  c3                   ret 
// library rbxgs-render/DepthBlur.cpp (function ?fromStrings@Shader@G3D@@SA?AV?$ReferenceCountedPointer@VShader@G3D@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0W4UseG3DUniforms@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render DepthBlur.cpp
