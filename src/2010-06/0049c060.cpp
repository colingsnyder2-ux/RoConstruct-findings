// from server: 100% by auto
// roc 2010-06 0049c060  unit: G3D::VertexAndPixelShader  size: 272 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0049c060
//
// 0049c060  6aff                 push -1
// 0049c062  6868759800           push 0x987568
// 0049c067  64a100000000         mov eax, dword ptr fs:[0]
// 0049c06d  50                   push eax
// 0049c06e  64892500000000       mov dword ptr fs:[0], esp
// 0049c075  83ec40               sub esp, 0x40
// 0049c078  53                   push ebx
// 0049c079  56                   push esi
// 0049c07a  33db                 xor ebx, ebx
// 0049c07c  68b0010000           push 0x1b0
// 0049c081  895c240c             mov dword ptr [esp + 0xc], ebx
// 0049c085  e816b93000           call 0x7a79a0
// 0049c08a  8bf0                 mov esi, eax
// 0049c08c  83c404               add esp, 4
// 0049c08f  8974240c             mov dword ptr [esp + 0xc], esi
// 0049c093  c744245001000000     mov dword ptr [esp + 0x50], 1
// 0049c09b  85f6                 test esi, esi
// 0049c09d  7463                 je 0x49c102
// 0049c09f  68fe08a000           push 0xa008fe
// 0049c0a4  8d4c2430             lea ecx, [esp + 0x30]
// 0049c0a8  ff1510a49e00         call dword ptr [0x9ea410]
// 0049c0ae  68fe08a000           push 0xa008fe
// 0049c0b3  8d4c2414             lea ecx, [esp + 0x14]
// 0049c0b7  c644245402           mov byte ptr [esp + 0x54], 2
// 0049c0bc  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 0049c0c4  ff1510a49e00         call dword ptr [0x9ea410]
// 0049c0ca  8b442464             mov eax, dword ptr [esp + 0x64]
// 0049c0ce  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 0049c0d2  50                   push eax
// 0049c0d3  8b442464             mov eax, dword ptr [esp + 0x64]
// 0049c0d7  51                   push ecx
// 0049c0d8  6a00                 push 0
// 0049c0da  8d542438             lea edx, [esp + 0x38]
// 0049c0de  52                   push edx
// 0049c0df  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 0049c0e3  50                   push eax
// 0049c0e4  6a00                 push 0
// 0049c0e6  8d4c2428             lea ecx, [esp + 0x28]
// 0049c0ea  51                   push ecx
// 0049c0eb  bb03000000           mov ebx, 3
// 0049c0f0  52                   push edx
// 0049c0f1  8bce                 mov ecx, esi
// 0049c0f3  895c2470             mov dword ptr [esp + 0x70], ebx
// 0049c0f7  895c2428             mov dword ptr [esp + 0x28], ebx
// 0049c0fb  e890f6ffff           call 0x49b790
// 0049c100  eb02                 jmp 0x49c104
// 0049c102  33c0                 xor eax, eax
// 0049c104  8b742458             mov esi, dword ptr [esp + 0x58]
// 0049c108  50                   push eax
// 0049c109  8bce                 mov ecx, esi
// 0049c10b  c744245405000000     mov dword ptr [esp + 0x54], 5
// 0049c113  c70600000000         mov dword ptr [esi], 0
// 0049c119  e802acfeff           call 0x486d20
// 0049c11e  83cb04               or ebx, 4
// 0049c121  c744245004000000     mov dword ptr [esp + 0x50], 4
// 0049c129  f6c302               test bl, 2
// 0049c12c  7411                 je 0x49c13f
// 0049c12e  83e3fd               and ebx, 0xfffffffd
// 0049c131  8d4c2410             lea ecx, [esp + 0x10]
// 0049c135  895c2408             mov dword ptr [esp + 8], ebx
// 0049c139  ff1500a49e00         call dword ptr [0x9ea400]
// 0049c13f  c744245000000000     mov dword ptr [esp + 0x50], 0
// 0049c147  f6c301               test bl, 1
// 0049c14a  7411                 je 0x49c15d
// 0049c14c  83e3fe               and ebx, 0xfffffffe
// 0049c14f  8d4c242c             lea ecx, [esp + 0x2c]
// 0049c153  895c2408             mov dword ptr [esp + 8], ebx
// 0049c157  ff1500a49e00         call dword ptr [0x9ea400]
// 0049c15d  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 0049c161  8bc6                 mov eax, esi
// 0049c163  5e                   pop esi
// 0049c164  5b                   pop ebx
// 0049c165  64890d00000000       mov dword ptr fs:[0], ecx
// 0049c16c  83c44c               add esp, 0x4c
// 0049c16f  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?fromStrings@VertexAndPixelShader@G3D@@SA?AV?$ReferenceCountedPointer@VVertexAndPixelShader@G3D@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0W4UseG3DUniforms@2@_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
