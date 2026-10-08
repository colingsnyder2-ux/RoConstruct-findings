// roc 2008-06 00477890  unit: G3D::VARArea  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00477890
//
// 00477890  53                   push ebx
// 00477891  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00477895  55                   push ebp
// 00477896  8be9                 mov ebp, ecx
// 00477898  ff4578               inc dword ptr [ebp + 0x78]
// 0047789b  57                   push edi
// 0047789c  8dbd38080000         lea edi, [ebp + 0x838]
// 004778a2  53                   push ebx
// 004778a3  8bcf                 mov ecx, edi
// 004778a5  e896cf0900           call 0x514840
// 004778aa  84c0                 test al, al
// 004778ac  7432                 je 0x4778e0
// 004778ae  56                   push esi
// 004778af  b910000000           mov ecx, 0x10
// 004778b4  8bf3                 mov esi, ebx
// 004778b6  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004778b8  8b3580298000         mov esi, dword ptr [0x802980]
// 004778be  6801170000           push 0x1701
// 004778c3  c6857808000001       mov byte ptr [ebp + 0x878], 1
// 004778ca  ffd6                 call esi
// 004778cc  53                   push ebx
// 004778cd  e8debb0000           call 0x4834b0
// 004778d2  83c404               add esp, 4
// 004778d5  6800170000           push 0x1700
// 004778da  ffd6                 call esi
// 004778dc  ff4570               inc dword ptr [ebp + 0x70]
// 004778df  5e                   pop esi
// 004778e0  5f                   pop edi
// 004778e1  5d                   pop ebp
// 004778e2  5b                   pop ebx
// 004778e3  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setProjectionMatrix@RenderDevice@G3D@@QAEXABVMatrix4@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
