// roc 2008-06 00505730  unit: RBX::Render::RenderScene  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00505730
//
// 00505730  56                   push esi
// 00505731  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00505735  57                   push edi
// 00505736  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0050573a  2bf7                 sub esi, edi
// 0050573c  8bc6                 mov eax, esi
// 0050573e  c1f802               sar eax, 2
// 00505741  83f801               cmp eax, 1
// 00505744  7e31                 jle 0x505777
// 00505746  53                   push ebx
// 00505747  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0050574b  8b4437fc             mov eax, dword ptr [edi + esi - 4]
// 0050574f  8b0f                 mov ecx, dword ptr [edi]
// 00505751  53                   push ebx
// 00505752  50                   push eax
// 00505753  8d56fc               lea edx, [esi - 4]
// 00505756  c1fa02               sar edx, 2
// 00505759  52                   push edx
// 0050575a  6a00                 push 0
// 0050575c  57                   push edi
// 0050575d  894c37fc             mov dword ptr [edi + esi - 4], ecx
// 00505761  e8dafbffff           call 0x505340
// 00505766  83ee04               sub esi, 4
// 00505769  8bc6                 mov eax, esi
// 0050576b  c1f802               sar eax, 2
// 0050576e  83c414               add esp, 0x14
// 00505771  83f801               cmp eax, 1
// 00505774  7fd5                 jg 0x50574b
// 00505776  5b                   pop ebx
// 00505777  5f                   pop edi
// 00505778  5e                   pop esi
// 00505779  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ??$_Sort_heap@PAPAVMotorJoint@RBX@@P6A_NPBV12@0@Z@std@@YAXPAPAVMotorJoint@RBX@@0P6A_NPBV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
