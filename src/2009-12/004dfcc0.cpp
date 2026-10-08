// roc 2009-12 004dfcc0  unit: G3D::VertexAndPixelShader  size: 272 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004dfcc0
//
// 004dfcc0  6aff                 push -1
// 004dfcc2  6808479300           push 0x934708
// 004dfcc7  64a100000000         mov eax, dword ptr fs:[0]
// 004dfccd  50                   push eax
// 004dfcce  64892500000000       mov dword ptr fs:[0], esp
// 004dfcd5  83ec40               sub esp, 0x40
// 004dfcd8  53                   push ebx
// 004dfcd9  56                   push esi
// 004dfcda  33db                 xor ebx, ebx
// 004dfcdc  68b0010000           push 0x1b0
// 004dfce1  895c240c             mov dword ptr [esp + 0xc], ebx
// 004dfce5  e8763b3100           call 0x7f3860
// 004dfcea  8bf0                 mov esi, eax
// 004dfcec  83c404               add esp, 4
// 004dfcef  8974240c             mov dword ptr [esp + 0xc], esi
// 004dfcf3  c744245001000000     mov dword ptr [esp + 0x50], 1
// 004dfcfb  85f6                 test esi, esi
// 004dfcfd  7463                 je 0x4dfd62
// 004dfcff  6856fd9900           push 0x99fd56
// 004dfd04  8d4c2430             lea ecx, [esp + 0x30]
// 004dfd08  ff15f4b69800         call dword ptr [0x98b6f4]
// 004dfd0e  6856fd9900           push 0x99fd56
// 004dfd13  8d4c2414             lea ecx, [esp + 0x14]
// 004dfd17  c644245402           mov byte ptr [esp + 0x54], 2
// 004dfd1c  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 004dfd24  ff15f4b69800         call dword ptr [0x98b6f4]
// 004dfd2a  8b442464             mov eax, dword ptr [esp + 0x64]
// 004dfd2e  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 004dfd32  50                   push eax
// 004dfd33  8b442464             mov eax, dword ptr [esp + 0x64]
// 004dfd37  51                   push ecx
// 004dfd38  6a00                 push 0
// 004dfd3a  8d542438             lea edx, [esp + 0x38]
// 004dfd3e  52                   push edx
// 004dfd3f  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 004dfd43  50                   push eax
// 004dfd44  6a00                 push 0
// 004dfd46  8d4c2428             lea ecx, [esp + 0x28]
// 004dfd4a  51                   push ecx
// 004dfd4b  bb03000000           mov ebx, 3
// 004dfd50  52                   push edx
// 004dfd51  8bce                 mov ecx, esi
// 004dfd53  895c2470             mov dword ptr [esp + 0x70], ebx
// 004dfd57  895c2428             mov dword ptr [esp + 0x28], ebx
// 004dfd5b  e890f6ffff           call 0x4df3f0
// 004dfd60  eb02                 jmp 0x4dfd64
// 004dfd62  33c0                 xor eax, eax
// 004dfd64  8b742458             mov esi, dword ptr [esp + 0x58]
// 004dfd68  50                   push eax
// 004dfd69  8bce                 mov ecx, esi
// 004dfd6b  c744245405000000     mov dword ptr [esp + 0x54], 5
// 004dfd73  c70600000000         mov dword ptr [esi], 0
// 004dfd79  e8f2bdf6ff           call 0x44bb70
// 004dfd7e  83cb04               or ebx, 4
// 004dfd81  c744245004000000     mov dword ptr [esp + 0x50], 4
// 004dfd89  f6c302               test bl, 2
// 004dfd8c  7411                 je 0x4dfd9f
// 004dfd8e  83e3fd               and ebx, 0xfffffffd
// 004dfd91  8d4c2410             lea ecx, [esp + 0x10]
// 004dfd95  895c2408             mov dword ptr [esp + 8], ebx
// 004dfd99  ff15e4b69800         call dword ptr [0x98b6e4]
// 004dfd9f  c744245000000000     mov dword ptr [esp + 0x50], 0
// 004dfda7  f6c301               test bl, 1
// 004dfdaa  7411                 je 0x4dfdbd
// 004dfdac  83e3fe               and ebx, 0xfffffffe
// 004dfdaf  8d4c242c             lea ecx, [esp + 0x2c]
// 004dfdb3  895c2408             mov dword ptr [esp + 8], ebx
// 004dfdb7  ff15e4b69800         call dword ptr [0x98b6e4]
// 004dfdbd  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 004dfdc1  8bc6                 mov eax, esi
// 004dfdc3  5e                   pop esi
// 004dfdc4  5b                   pop ebx
// 004dfdc5  64890d00000000       mov dword ptr fs:[0], ecx
// 004dfdcc  83c44c               add esp, 0x4c
// 004dfdcf  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?fromStrings@VertexAndPixelShader@G3D@@SA?AV?$ReferenceCountedPointer@VVertexAndPixelShader@G3D@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0W4UseG3DUniforms@2@_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
