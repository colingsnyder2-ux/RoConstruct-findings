// roc 2007-03 00474690  unit: seg_00470000  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00474690
//
// 00474690  53                   push ebx
// 00474691  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00474695  55                   push ebp
// 00474696  8be9                 mov ebp, ecx
// 00474698  83457801             add dword ptr [ebp + 0x78], 1
// 0047469c  57                   push edi
// 0047469d  8dbd38080000         lea edi, [ebp + 0x838]
// 004746a3  53                   push ebx
// 004746a4  8bcf                 mov ecx, edi
// 004746a6  e855c00800           call 0x500700
// 004746ab  84c0                 test al, al
// 004746ad  7433                 je 0x4746e2
// 004746af  56                   push esi
// 004746b0  b910000000           mov ecx, 0x10
// 004746b5  8bf3                 mov esi, ebx
// 004746b7  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004746b9  8b352ceb7700         mov esi, dword ptr [0x77eb2c]
// 004746bf  6801170000           push 0x1701
// 004746c4  c6857808000001       mov byte ptr [ebp + 0x878], 1
// 004746cb  ffd6                 call esi
// 004746cd  53                   push ebx
// 004746ce  e8fd9e0000           call 0x47e5d0
// 004746d3  83c404               add esp, 4
// 004746d6  6800170000           push 0x1700
// 004746db  ffd6                 call esi
// 004746dd  83457001             add dword ptr [ebp + 0x70], 1
// 004746e1  5e                   pop esi
// 004746e2  5f                   pop edi
// 004746e3  5d                   pop ebp
// 004746e4  5b                   pop ebx
// 004746e5  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setProjectionMatrix@RenderDevice@G3D@@QAEXABVMatrix4@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
