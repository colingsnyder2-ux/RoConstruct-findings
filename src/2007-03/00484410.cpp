// roc 2007-03 00484410  unit: seg_00480000  size: 284 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00484410
//
// 00484410  6aff                 push -1
// 00484412  68e8897400           push 0x7489e8
// 00484417  64a100000000         mov eax, dword ptr fs:[0]
// 0048441d  50                   push eax
// 0048441e  83ec40               sub esp, 0x40
// 00484421  53                   push ebx
// 00484422  56                   push esi
// 00484423  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00484428  33c4                 xor eax, esp
// 0048442a  50                   push eax
// 0048442b  8d44244c             lea eax, [esp + 0x4c]
// 0048442f  64a300000000         mov dword ptr fs:[0], eax
// 00484435  33db                 xor ebx, ebx
// 00484437  68b0010000           push 0x1b0
// 0048443c  895c2410             mov dword ptr [esp + 0x10], ebx
// 00484440  e8c39c1900           call 0x61e108
// 00484445  8bf0                 mov esi, eax
// 00484447  83c404               add esp, 4
// 0048444a  89742410             mov dword ptr [esp + 0x10], esi
// 0048444e  85f6                 test esi, esi
// 00484450  c744245401000000     mov dword ptr [esp + 0x54], 1
// 00484458  7463                 je 0x4844bd
// 0048445a  68ac497800           push 0x7849ac
// 0048445f  8d4c2434             lea ecx, [esp + 0x34]
// 00484463  ff1578e77700         call dword ptr [0x77e778]
// 00484469  68ac497800           push 0x7849ac
// 0048446e  8d4c2418             lea ecx, [esp + 0x18]
// 00484472  c644245802           mov byte ptr [esp + 0x58], 2
// 00484477  c744241001000000     mov dword ptr [esp + 0x10], 1
// 0048447f  ff1578e77700         call dword ptr [0x77e778]
// 00484485  8b442468             mov eax, dword ptr [esp + 0x68]
// 00484489  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 0048448d  50                   push eax
// 0048448e  8b442468             mov eax, dword ptr [esp + 0x68]
// 00484492  51                   push ecx
// 00484493  6a00                 push 0
// 00484495  8d54243c             lea edx, [esp + 0x3c]
// 00484499  52                   push edx
// 0048449a  8b542470             mov edx, dword ptr [esp + 0x70]
// 0048449e  50                   push eax
// 0048449f  6a00                 push 0
// 004844a1  8d4c242c             lea ecx, [esp + 0x2c]
// 004844a5  51                   push ecx
// 004844a6  bb03000000           mov ebx, 3
// 004844ab  52                   push edx
// 004844ac  8bce                 mov ecx, esi
// 004844ae  895c2474             mov dword ptr [esp + 0x74], ebx
// 004844b2  895c242c             mov dword ptr [esp + 0x2c], ebx
// 004844b6  e875f6ffff           call 0x483b30
// 004844bb  eb02                 jmp 0x4844bf
// 004844bd  33c0                 xor eax, eax
// 004844bf  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 004844c3  50                   push eax
// 004844c4  8bce                 mov ecx, esi
// 004844c6  c744245805000000     mov dword ptr [esp + 0x58], 5
// 004844ce  c70600000000         mov dword ptr [esi], 0
// 004844d4  e8b70bffff           call 0x475090
// 004844d9  83cb04               or ebx, 4
// 004844dc  f6c302               test bl, 2
// 004844df  c744245404000000     mov dword ptr [esp + 0x54], 4
// 004844e7  7411                 je 0x4844fa
// 004844e9  83e3fd               and ebx, 0xfffffffd
// 004844ec  8d4c2414             lea ecx, [esp + 0x14]
// 004844f0  895c240c             mov dword ptr [esp + 0xc], ebx
// 004844f4  ff158ce77700         call dword ptr [0x77e78c]
// 004844fa  f6c301               test bl, 1
// 004844fd  c744245400000000     mov dword ptr [esp + 0x54], 0
// 00484505  7411                 je 0x484518
// 00484507  83e3fe               and ebx, 0xfffffffe
// 0048450a  8d4c2430             lea ecx, [esp + 0x30]
// 0048450e  895c240c             mov dword ptr [esp + 0xc], ebx
// 00484512  ff158ce77700         call dword ptr [0x77e78c]
// 00484518  8bc6                 mov eax, esi
// 0048451a  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0048451e  64890d00000000       mov dword ptr fs:[0], ecx
// 00484525  59                   pop ecx
// 00484526  5e                   pop esi
// 00484527  5b                   pop ebx
// 00484528  83c44c               add esp, 0x4c
// 0048452b  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?fromStrings@VertexAndPixelShader@G3D@@SA?AV?$ReferenceCountedPointer@VVertexAndPixelShader@G3D@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0W4UseG3DUniforms@2@_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
