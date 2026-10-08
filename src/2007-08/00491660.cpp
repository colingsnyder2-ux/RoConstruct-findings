// roc 2007-08 00491660  unit: RBX::Network::Players  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00491660
//
// 00491660  56                   push esi
// 00491661  8bf1                 mov esi, ecx
// 00491663  57                   push edi
// 00491664  8d7e14               lea edi, [esi + 0x14]
// 00491667  e8e4bc0d00           call 0x56d350
// 0049166c  8907                 mov dword ptr [edi], eax
// 0049166e  8d4630               lea eax, [esi + 0x30]
// 00491671  50                   push eax
// 00491672  e879c00d00           call 0x56d6f0
// 00491677  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0049167b  50                   push eax
// 0049167c  6aff                 push -1
// 0049167e  51                   push ecx
// 0049167f  e8bcb20900           call 0x52c940
// 00491684  83c408               add esp, 8
// 00491687  50                   push eax
// 00491688  8bcf                 mov ecx, edi
// 0049168a  e871bd0d00           call 0x56d400
// 0049168f  83c638               add esi, 0x38
// 00491692  56                   push esi
// 00491693  e868c30d00           call 0x56da00
// 00491698  8b542414             mov edx, dword ptr [esp + 0x14]
// 0049169c  50                   push eax
// 0049169d  6aff                 push -1
// 0049169f  52                   push edx
// 004916a0  e89bb20900           call 0x52c940
// 004916a5  83c408               add esp, 8
// 004916a8  50                   push eax
// 004916a9  8bcf                 mov ecx, edi
// 004916ab  e850bd0d00           call 0x56d400
// 004916b0  5f                   pop edi
// 004916b1  5e                   pop esi
// 004916b2  c20800               ret 8
// library rbxgs/v8tree\Instance.cpp (function ?declareSignature@?$BoundFuncDesc@VInstance@RBX@@$$A6A?AV?$shared_ptr@VInstance@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z$01@Reflection@RBX@@AAEXPBD0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
