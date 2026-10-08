// roc 2007-08 00474590  unit: G3D::VARArea  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00474590
//
// 00474590  53                   push ebx
// 00474591  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00474595  55                   push ebp
// 00474596  8be9                 mov ebp, ecx
// 00474598  83457801             add dword ptr [ebp + 0x78], 1
// 0047459c  57                   push edi
// 0047459d  8dbd38080000         lea edi, [ebp + 0x838]
// 004745a3  53                   push ebx
// 004745a4  8bcf                 mov ecx, edi
// 004745a6  e8156a0900           call 0x50afc0
// 004745ab  84c0                 test al, al
// 004745ad  7433                 je 0x4745e2
// 004745af  56                   push esi
// 004745b0  b910000000           mov ecx, 0x10
// 004745b5  8bf3                 mov esi, ebx
// 004745b7  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004745b9  8b3564eb7700         mov esi, dword ptr [0x77eb64]
// 004745bf  6801170000           push 0x1701
// 004745c4  c6857808000001       mov byte ptr [ebp + 0x878], 1
// 004745cb  ffd6                 call esi
// 004745cd  53                   push ebx
// 004745ce  e84dbb0000           call 0x480120
// 004745d3  83c404               add esp, 4
// 004745d6  6800170000           push 0x1700
// 004745db  ffd6                 call esi
// 004745dd  83457001             add dword ptr [ebp + 0x70], 1
// 004745e1  5e                   pop esi
// 004745e2  5f                   pop edi
// 004745e3  5d                   pop ebp
// 004745e4  5b                   pop ebx
// 004745e5  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setProjectionMatrix@RenderDevice@G3D@@QAEXABVMatrix4@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
