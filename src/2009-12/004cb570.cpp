// roc 2009-12 004cb570  unit: G3D::VARArea  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004cb570
//
// 004cb570  53                   push ebx
// 004cb571  8b5c2408             mov ebx, dword ptr [esp + 8]
// 004cb575  55                   push ebp
// 004cb576  8be9                 mov ebp, ecx
// 004cb578  ff4578               inc dword ptr [ebp + 0x78]
// 004cb57b  57                   push edi
// 004cb57c  8dbd38080000         lea edi, [ebp + 0x838]
// 004cb582  53                   push ebx
// 004cb583  8bcf                 mov ecx, edi
// 004cb585  e846b71200           call 0x5f6cd0
// 004cb58a  84c0                 test al, al
// 004cb58c  7432                 je 0x4cb5c0
// 004cb58e  56                   push esi
// 004cb58f  b910000000           mov ecx, 0x10
// 004cb594  8bf3                 mov esi, ebx
// 004cb596  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004cb598  8b35acba9800         mov esi, dword ptr [0x98baac]
// 004cb59e  6801170000           push 0x1701
// 004cb5a3  c6857808000001       mov byte ptr [ebp + 0x878], 1
// 004cb5aa  ffd6                 call esi
// 004cb5ac  53                   push ebx
// 004cb5ad  e84ee90000           call 0x4d9f00
// 004cb5b2  83c404               add esp, 4
// 004cb5b5  6800170000           push 0x1700
// 004cb5ba  ffd6                 call esi
// 004cb5bc  ff4570               inc dword ptr [ebp + 0x70]
// 004cb5bf  5e                   pop esi
// 004cb5c0  5f                   pop edi
// 004cb5c1  5d                   pop ebp
// 004cb5c2  5b                   pop ebx
// 004cb5c3  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?setProjectionMatrix@RenderDevice@G3D@@QAEXABVMatrix4@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
