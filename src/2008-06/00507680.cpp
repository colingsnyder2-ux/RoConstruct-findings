// roc 2008-06 00507680  unit: G3D::Shader  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00507680
//
// 00507680  6aff                 push -1
// 00507682  682bf57b00           push 0x7bf52b
// 00507687  64a100000000         mov eax, dword ptr fs:[0]
// 0050768d  50                   push eax
// 0050768e  64892500000000       mov dword ptr fs:[0], esp
// 00507695  83ec08               sub esp, 8
// 00507698  56                   push esi
// 00507699  6a28                 push 0x28
// 0050769b  c744240800000000     mov dword ptr [esp + 8], 0
// 005076a3  e878921900           call 0x6a0920
// 005076a8  8bf0                 mov esi, eax
// 005076aa  83c404               add esp, 4
// 005076ad  89742404             mov dword ptr [esp + 4], esi
// 005076b1  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005076b9  85f6                 test esi, esi
// 005076bb  742b                 je 0x5076e8
// 005076bd  8b442428             mov eax, dword ptr [esp + 0x28]
// 005076c1  8b542424             mov edx, dword ptr [esp + 0x24]
// 005076c5  50                   push eax
// 005076c6  51                   push ecx
// 005076c7  8bcc                 mov ecx, esp
// 005076c9  89642410             mov dword ptr [esp + 0x10], esp
// 005076cd  6a00                 push 0
// 005076cf  50                   push eax
// 005076d0  8b442430             mov eax, dword ptr [esp + 0x30]
// 005076d4  52                   push edx
// 005076d5  50                   push eax
// 005076d6  51                   push ecx
// 005076d7  e80419f8ff           call 0x488fe0
// 005076dc  83c414               add esp, 0x14
// 005076df  8bce                 mov ecx, esi
// 005076e1  e80afeffff           call 0x5074f0
// 005076e6  eb02                 jmp 0x5076ea
// 005076e8  33c0                 xor eax, eax
// 005076ea  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005076ee  50                   push eax
// 005076ef  8bce                 mov ecx, esi
// 005076f1  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 005076f9  c70600000000         mov dword ptr [esi], 0
// 005076ff  e89c180900           call 0x598fa0
// 00507704  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00507708  8bc6                 mov eax, esi
// 0050770a  64890d00000000       mov dword ptr fs:[0], ecx
// 00507711  5e                   pop esi
// 00507712  83c414               add esp, 0x14
// 00507715  c3                   ret 
// library rbxgs-render/DepthBlur.cpp (function ?fromStrings@Shader@G3D@@SA?AV?$ReferenceCountedPointer@VShader@G3D@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0W4UseG3DUniforms@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render DepthBlur.cpp
