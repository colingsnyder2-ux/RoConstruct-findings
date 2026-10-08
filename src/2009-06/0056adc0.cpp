// roc 2009-06 0056adc0  unit: G3D::Shader  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0056adc0
//
// 0056adc0  6aff                 push -1
// 0056adc2  68fbfb8500           push 0x85fbfb
// 0056adc7  64a100000000         mov eax, dword ptr fs:[0]
// 0056adcd  50                   push eax
// 0056adce  64892500000000       mov dword ptr fs:[0], esp
// 0056add5  83ec08               sub esp, 8
// 0056add8  56                   push esi
// 0056add9  6a28                 push 0x28
// 0056addb  c744240800000000     mov dword ptr [esp + 8], 0
// 0056ade3  e850dc1a00           call 0x718a38
// 0056ade8  8bf0                 mov esi, eax
// 0056adea  83c404               add esp, 4
// 0056aded  89742404             mov dword ptr [esp + 4], esi
// 0056adf1  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0056adf9  85f6                 test esi, esi
// 0056adfb  742b                 je 0x56ae28
// 0056adfd  8b442428             mov eax, dword ptr [esp + 0x28]
// 0056ae01  8b542424             mov edx, dword ptr [esp + 0x24]
// 0056ae05  50                   push eax
// 0056ae06  51                   push ecx
// 0056ae07  8bcc                 mov ecx, esp
// 0056ae09  89642410             mov dword ptr [esp + 0x10], esp
// 0056ae0d  6a00                 push 0
// 0056ae0f  50                   push eax
// 0056ae10  8b442430             mov eax, dword ptr [esp + 0x30]
// 0056ae14  52                   push edx
// 0056ae15  50                   push eax
// 0056ae16  51                   push ecx
// 0056ae17  e84481f4ff           call 0x4b2f60
// 0056ae1c  83c414               add esp, 0x14
// 0056ae1f  8bce                 mov ecx, esi
// 0056ae21  e80afeffff           call 0x56ac30
// 0056ae26  eb02                 jmp 0x56ae2a
// 0056ae28  33c0                 xor eax, eax
// 0056ae2a  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0056ae2e  50                   push eax
// 0056ae2f  8bce                 mov ecx, esi
// 0056ae31  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0056ae39  c70600000000         mov dword ptr [esi], 0
// 0056ae3f  e81c4af3ff           call 0x49f860
// 0056ae44  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0056ae48  8bc6                 mov eax, esi
// 0056ae4a  64890d00000000       mov dword ptr fs:[0], ecx
// 0056ae51  5e                   pop esi
// 0056ae52  83c414               add esp, 0x14
// 0056ae55  c3                   ret 
// library rbxgs-render/DepthBlur.cpp (function ?fromStrings@Shader@G3D@@SA?AV?$ReferenceCountedPointer@VShader@G3D@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0W4UseG3DUniforms@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render DepthBlur.cpp
