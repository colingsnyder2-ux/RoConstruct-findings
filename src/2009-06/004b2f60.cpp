// roc 2009-06 004b2f60  unit: G3D::VertexAndPixelShader  size: 272 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004b2f60
//
// 004b2f60  6aff                 push -1
// 004b2f62  6808888500           push 0x858808
// 004b2f67  64a100000000         mov eax, dword ptr fs:[0]
// 004b2f6d  50                   push eax
// 004b2f6e  64892500000000       mov dword ptr fs:[0], esp
// 004b2f75  83ec40               sub esp, 0x40
// 004b2f78  53                   push ebx
// 004b2f79  56                   push esi
// 004b2f7a  33db                 xor ebx, ebx
// 004b2f7c  68b0010000           push 0x1b0
// 004b2f81  895c240c             mov dword ptr [esp + 0xc], ebx
// 004b2f85  e8ae5a2600           call 0x718a38
// 004b2f8a  8bf0                 mov esi, eax
// 004b2f8c  83c404               add esp, 4
// 004b2f8f  8974240c             mov dword ptr [esp + 0xc], esi
// 004b2f93  c744245001000000     mov dword ptr [esp + 0x50], 1
// 004b2f9b  85f6                 test esi, esi
// 004b2f9d  7463                 je 0x4b3002
// 004b2f9f  6816d28a00           push 0x8ad216
// 004b2fa4  8d4c2430             lea ecx, [esp + 0x30]
// 004b2fa8  ff15b4e48900         call dword ptr [0x89e4b4]
// 004b2fae  6816d28a00           push 0x8ad216
// 004b2fb3  8d4c2414             lea ecx, [esp + 0x14]
// 004b2fb7  c644245402           mov byte ptr [esp + 0x54], 2
// 004b2fbc  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 004b2fc4  ff15b4e48900         call dword ptr [0x89e4b4]
// 004b2fca  8b442464             mov eax, dword ptr [esp + 0x64]
// 004b2fce  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 004b2fd2  50                   push eax
// 004b2fd3  8b442464             mov eax, dword ptr [esp + 0x64]
// 004b2fd7  51                   push ecx
// 004b2fd8  6a00                 push 0
// 004b2fda  8d542438             lea edx, [esp + 0x38]
// 004b2fde  52                   push edx
// 004b2fdf  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 004b2fe3  50                   push eax
// 004b2fe4  6a00                 push 0
// 004b2fe6  8d4c2428             lea ecx, [esp + 0x28]
// 004b2fea  51                   push ecx
// 004b2feb  bb03000000           mov ebx, 3
// 004b2ff0  52                   push edx
// 004b2ff1  8bce                 mov ecx, esi
// 004b2ff3  895c2470             mov dword ptr [esp + 0x70], ebx
// 004b2ff7  895c2428             mov dword ptr [esp + 0x28], ebx
// 004b2ffb  e890f6ffff           call 0x4b2690
// 004b3000  eb02                 jmp 0x4b3004
// 004b3002  33c0                 xor eax, eax
// 004b3004  8b742458             mov esi, dword ptr [esp + 0x58]
// 004b3008  50                   push eax
// 004b3009  8bce                 mov ecx, esi
// 004b300b  c744245405000000     mov dword ptr [esp + 0x54], 5
// 004b3013  c70600000000         mov dword ptr [esi], 0
// 004b3019  e842c8feff           call 0x49f860
// 004b301e  83cb04               or ebx, 4
// 004b3021  c744245004000000     mov dword ptr [esp + 0x50], 4
// 004b3029  f6c302               test bl, 2
// 004b302c  7411                 je 0x4b303f
// 004b302e  83e3fd               and ebx, 0xfffffffd
// 004b3031  8d4c2410             lea ecx, [esp + 0x10]
// 004b3035  895c2408             mov dword ptr [esp + 8], ebx
// 004b3039  ff15c4e48900         call dword ptr [0x89e4c4]
// 004b303f  c744245000000000     mov dword ptr [esp + 0x50], 0
// 004b3047  f6c301               test bl, 1
// 004b304a  7411                 je 0x4b305d
// 004b304c  83e3fe               and ebx, 0xfffffffe
// 004b304f  8d4c242c             lea ecx, [esp + 0x2c]
// 004b3053  895c2408             mov dword ptr [esp + 8], ebx
// 004b3057  ff15c4e48900         call dword ptr [0x89e4c4]
// 004b305d  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 004b3061  8bc6                 mov eax, esi
// 004b3063  5e                   pop esi
// 004b3064  5b                   pop ebx
// 004b3065  64890d00000000       mov dword ptr fs:[0], ecx
// 004b306c  83c44c               add esp, 0x4c
// 004b306f  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?fromStrings@VertexAndPixelShader@G3D@@SA?AV?$ReferenceCountedPointer@VVertexAndPixelShader@G3D@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0W4UseG3DUniforms@2@_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
