// roc 2007-08 00485fa0  unit: G3D::VertexAndPixelShader  size: 284 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00485fa0
//
// 00485fa0  6aff                 push -1
// 00485fa2  68d8687400           push 0x7468d8
// 00485fa7  64a100000000         mov eax, dword ptr fs:[0]
// 00485fad  50                   push eax
// 00485fae  83ec40               sub esp, 0x40
// 00485fb1  53                   push ebx
// 00485fb2  56                   push esi
// 00485fb3  a188518b00           mov eax, dword ptr [0x8b5188]
// 00485fb8  33c4                 xor eax, esp
// 00485fba  50                   push eax
// 00485fbb  8d44244c             lea eax, [esp + 0x4c]
// 00485fbf  64a300000000         mov dword ptr fs:[0], eax
// 00485fc5  33db                 xor ebx, ebx
// 00485fc7  68b0010000           push 0x1b0
// 00485fcc  895c2410             mov dword ptr [esp + 0x10], ebx
// 00485fd0  e8219f1a00           call 0x62fef6
// 00485fd5  8bf0                 mov esi, eax
// 00485fd7  83c404               add esp, 4
// 00485fda  89742410             mov dword ptr [esp + 0x10], esi
// 00485fde  85f6                 test esi, esi
// 00485fe0  c744245401000000     mov dword ptr [esp + 0x54], 1
// 00485fe8  7463                 je 0x48604d
// 00485fea  6854597800           push 0x785954
// 00485fef  8d4c2434             lea ecx, [esp + 0x34]
// 00485ff3  ff1598e67700         call dword ptr [0x77e698]
// 00485ff9  6854597800           push 0x785954
// 00485ffe  8d4c2418             lea ecx, [esp + 0x18]
// 00486002  c644245802           mov byte ptr [esp + 0x58], 2
// 00486007  c744241001000000     mov dword ptr [esp + 0x10], 1
// 0048600f  ff1598e67700         call dword ptr [0x77e698]
// 00486015  8b442468             mov eax, dword ptr [esp + 0x68]
// 00486019  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 0048601d  50                   push eax
// 0048601e  8b442468             mov eax, dword ptr [esp + 0x68]
// 00486022  51                   push ecx
// 00486023  6a00                 push 0
// 00486025  8d54243c             lea edx, [esp + 0x3c]
// 00486029  52                   push edx
// 0048602a  8b542470             mov edx, dword ptr [esp + 0x70]
// 0048602e  50                   push eax
// 0048602f  6a00                 push 0
// 00486031  8d4c242c             lea ecx, [esp + 0x2c]
// 00486035  51                   push ecx
// 00486036  bb03000000           mov ebx, 3
// 0048603b  52                   push edx
// 0048603c  8bce                 mov ecx, esi
// 0048603e  895c2474             mov dword ptr [esp + 0x74], ebx
// 00486042  895c242c             mov dword ptr [esp + 0x2c], ebx
// 00486046  e875f6ffff           call 0x4856c0
// 0048604b  eb02                 jmp 0x48604f
// 0048604d  33c0                 xor eax, eax
// 0048604f  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 00486053  50                   push eax
// 00486054  8bce                 mov ecx, esi
// 00486056  c744245805000000     mov dword ptr [esp + 0x58], 5
// 0048605e  c70600000000         mov dword ptr [esi], 0
// 00486064  e807effeff           call 0x474f70
// 00486069  83cb04               or ebx, 4
// 0048606c  f6c302               test bl, 2
// 0048606f  c744245404000000     mov dword ptr [esp + 0x54], 4
// 00486077  7411                 je 0x48608a
// 00486079  83e3fd               and ebx, 0xfffffffd
// 0048607c  8d4c2414             lea ecx, [esp + 0x14]
// 00486080  895c240c             mov dword ptr [esp + 0xc], ebx
// 00486084  ff15ace67700         call dword ptr [0x77e6ac]
// 0048608a  f6c301               test bl, 1
// 0048608d  c744245400000000     mov dword ptr [esp + 0x54], 0
// 00486095  7411                 je 0x4860a8
// 00486097  83e3fe               and ebx, 0xfffffffe
// 0048609a  8d4c2430             lea ecx, [esp + 0x30]
// 0048609e  895c240c             mov dword ptr [esp + 0xc], ebx
// 004860a2  ff15ace67700         call dword ptr [0x77e6ac]
// 004860a8  8bc6                 mov eax, esi
// 004860aa  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 004860ae  64890d00000000       mov dword ptr fs:[0], ecx
// 004860b5  59                   pop ecx
// 004860b6  5e                   pop esi
// 004860b7  5b                   pop ebx
// 004860b8  83c44c               add esp, 0x4c
// 004860bb  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?fromStrings@VertexAndPixelShader@G3D@@SA?AV?$ReferenceCountedPointer@VVertexAndPixelShader@G3D@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0W4UseG3DUniforms@2@_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
