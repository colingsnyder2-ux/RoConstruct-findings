// from server: 100% by auto
// roc 2008-06 00488fe0  unit: G3D::VertexAndPixelShader  size: 272 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00488fe0
//
// 00488fe0  6aff                 push -1
// 00488fe2  68785d7c00           push 0x7c5d78
// 00488fe7  64a100000000         mov eax, dword ptr fs:[0]
// 00488fed  50                   push eax
// 00488fee  64892500000000       mov dword ptr fs:[0], esp
// 00488ff5  83ec40               sub esp, 0x40
// 00488ff8  53                   push ebx
// 00488ff9  56                   push esi
// 00488ffa  33db                 xor ebx, ebx
// 00488ffc  68b0010000           push 0x1b0
// 00489001  895c240c             mov dword ptr [esp + 0xc], ebx
// 00489005  e816792100           call 0x6a0920
// 0048900a  8bf0                 mov esi, eax
// 0048900c  83c404               add esp, 4
// 0048900f  8974240c             mov dword ptr [esp + 0xc], esi
// 00489013  c744245001000000     mov dword ptr [esp + 0x50], 1
// 0048901b  85f6                 test esi, esi
// 0048901d  7463                 je 0x489082
// 0048901f  6816b78000           push 0x80b716
// 00489024  8d4c2430             lea ecx, [esp + 0x30]
// 00489028  ff1558248000         call dword ptr [0x802458]
// 0048902e  6816b78000           push 0x80b716
// 00489033  8d4c2414             lea ecx, [esp + 0x14]
// 00489037  c644245402           mov byte ptr [esp + 0x54], 2
// 0048903c  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 00489044  ff1558248000         call dword ptr [0x802458]
// 0048904a  8b442464             mov eax, dword ptr [esp + 0x64]
// 0048904e  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00489052  50                   push eax
// 00489053  8b442464             mov eax, dword ptr [esp + 0x64]
// 00489057  51                   push ecx
// 00489058  6a00                 push 0
// 0048905a  8d542438             lea edx, [esp + 0x38]
// 0048905e  52                   push edx
// 0048905f  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 00489063  50                   push eax
// 00489064  6a00                 push 0
// 00489066  8d4c2428             lea ecx, [esp + 0x28]
// 0048906a  51                   push ecx
// 0048906b  bb03000000           mov ebx, 3
// 00489070  52                   push edx
// 00489071  8bce                 mov ecx, esi
// 00489073  895c2470             mov dword ptr [esp + 0x70], ebx
// 00489077  895c2428             mov dword ptr [esp + 0x28], ebx
// 0048907b  e890f6ffff           call 0x488710
// 00489080  eb02                 jmp 0x489084
// 00489082  33c0                 xor eax, eax
// 00489084  8b742458             mov esi, dword ptr [esp + 0x58]
// 00489088  50                   push eax
// 00489089  8bce                 mov ecx, esi
// 0048908b  c744245405000000     mov dword ptr [esp + 0x54], 5
// 00489093  c70600000000         mov dword ptr [esi], 0
// 00489099  e802ff1000           call 0x598fa0
// 0048909e  83cb04               or ebx, 4
// 004890a1  c744245004000000     mov dword ptr [esp + 0x50], 4
// 004890a9  f6c302               test bl, 2
// 004890ac  7411                 je 0x4890bf
// 004890ae  83e3fd               and ebx, 0xfffffffd
// 004890b1  8d4c2410             lea ecx, [esp + 0x10]
// 004890b5  895c2408             mov dword ptr [esp + 8], ebx
// 004890b9  ff1568248000         call dword ptr [0x802468]
// 004890bf  c744245000000000     mov dword ptr [esp + 0x50], 0
// 004890c7  f6c301               test bl, 1
// 004890ca  7411                 je 0x4890dd
// 004890cc  83e3fe               and ebx, 0xfffffffe
// 004890cf  8d4c242c             lea ecx, [esp + 0x2c]
// 004890d3  895c2408             mov dword ptr [esp + 8], ebx
// 004890d7  ff1568248000         call dword ptr [0x802468]
// 004890dd  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 004890e1  8bc6                 mov eax, esi
// 004890e3  5e                   pop esi
// 004890e4  5b                   pop ebx
// 004890e5  64890d00000000       mov dword ptr fs:[0], ecx
// 004890ec  83c44c               add esp, 0x4c
// 004890ef  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shader.cpp (function ?fromStrings@VertexAndPixelShader@G3D@@SA?AV?$ReferenceCountedPointer@VVertexAndPixelShader@G3D@@@2@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0W4UseG3DUniforms@2@_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shader.cpp
