// roc 2007-08 004fe4f0  unit: RBX::Render::AggregateChunk  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004fe4f0
//
// 004fe4f0  83ec50               sub esp, 0x50
// 004fe4f3  53                   push ebx
// 004fe4f4  8b5c2458             mov ebx, dword ptr [esp + 0x58]
// 004fe4f8  55                   push ebp
// 004fe4f9  56                   push esi
// 004fe4fa  8b742464             mov esi, dword ptr [esp + 0x64]
// 004fe4fe  2bf3                 sub esi, ebx
// 004fe500  b867666666           mov eax, 0x66666667
// 004fe505  f7ee                 imul esi
// 004fe507  c1fa05               sar edx, 5
// 004fe50a  8bc2                 mov eax, edx
// 004fe50c  c1e81f               shr eax, 0x1f
// 004fe50f  03c2                 add eax, edx
// 004fe511  83f801               cmp eax, 1
// 004fe514  57                   push edi
// 004fe515  7e63                 jle 0x4fe57a
// 004fe517  8b6c246c             mov ebp, dword ptr [esp + 0x6c]
// 004fe51b  8d7c33b0             lea edi, [ebx + esi - 0x50]
// 004fe51f  57                   push edi
// 004fe520  8d4c2414             lea ecx, [esp + 0x14]
// 004fe524  e84764f7ff           call 0x474970
// 004fe529  53                   push ebx
// 004fe52a  8bcf                 mov ecx, edi
// 004fe52c  e89f4ff7ff           call 0x4734d0
// 004fe531  55                   push ebp
// 004fe532  83ec50               sub esp, 0x50
// 004fe535  8d442464             lea eax, [esp + 0x64]
// 004fe539  8bcc                 mov ecx, esp
// 004fe53b  50                   push eax
// 004fe53c  e82f64f7ff           call 0x474970
// 004fe541  8d4eb0               lea ecx, [esi - 0x50]
// 004fe544  b867666666           mov eax, 0x66666667
// 004fe549  f7e9                 imul ecx
// 004fe54b  c1fa05               sar edx, 5
// 004fe54e  8bca                 mov ecx, edx
// 004fe550  c1e91f               shr ecx, 0x1f
// 004fe553  03ca                 add ecx, edx
// 004fe555  51                   push ecx
// 004fe556  6a00                 push 0
// 004fe558  53                   push ebx
// 004fe559  e822f3ffff           call 0x4fd880
// 004fe55e  83ee50               sub esi, 0x50
// 004fe561  b867666666           mov eax, 0x66666667
// 004fe566  f7ee                 imul esi
// 004fe568  c1fa05               sar edx, 5
// 004fe56b  8bc2                 mov eax, edx
// 004fe56d  c1e81f               shr eax, 0x1f
// 004fe570  03c2                 add eax, edx
// 004fe572  83c460               add esp, 0x60
// 004fe575  83f801               cmp eax, 1
// 004fe578  7fa1                 jg 0x4fe51b
// 004fe57a  5f                   pop edi
// 004fe57b  5e                   pop esi
// 004fe57c  5d                   pop ebp
// 004fe57d  5b                   pop ebx
// 004fe57e  83c450               add esp, 0x50
// 004fe581  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??$_Sort_heap@PAVGLight@G3D@@P6A_NABV12@0@Z@std@@YAXPAVGLight@G3D@@0P6A_NABV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
