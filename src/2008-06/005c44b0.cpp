// roc 2008-06 005c44b0  unit: RBX::Profiling::Profiler  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c44b0
//
// 005c44b0  56                   push esi
// 005c44b1  8bf1                 mov esi, ecx
// 005c44b3  57                   push edi
// 005c44b4  8d7e14               lea edi, [esi + 0x14]
// 005c44b7  e89405fdff           call 0x594a50
// 005c44bc  8907                 mov dword ptr [edi], eax
// 005c44be  8d4640               lea eax, [esi + 0x40]
// 005c44c1  50                   push eax
// 005c44c2  e82989faff           call 0x56cdf0
// 005c44c7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005c44cb  50                   push eax
// 005c44cc  6aff                 push -1
// 005c44ce  51                   push ecx
// 005c44cf  e8bcfaf8ff           call 0x553f90
// 005c44d4  83c408               add esp, 8
// 005c44d7  50                   push eax
// 005c44d8  8bcf                 mov ecx, edi
// 005c44da  e86106fdff           call 0x594b40
// 005c44df  83c648               add esi, 0x48
// 005c44e2  56                   push esi
// 005c44e3  e8d886faff           call 0x56cbc0
// 005c44e8  8b542414             mov edx, dword ptr [esp + 0x14]
// 005c44ec  50                   push eax
// 005c44ed  6aff                 push -1
// 005c44ef  52                   push edx
// 005c44f0  e89bfaf8ff           call 0x553f90
// 005c44f5  83c408               add esp, 8
// 005c44f8  50                   push eax
// 005c44f9  8bcf                 mov ecx, edi
// 005c44fb  e84006fdff           call 0x594b40
// 005c4500  5f                   pop edi
// 005c4501  5e                   pop esi
// 005c4502  c20800               ret 8
// library rbxgs/v8tree\Instance.cpp (function ?declareSignature@?$BoundFuncDesc@VInstance@RBX@@$$A6A?AV?$shared_ptr@VInstance@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z$01@Reflection@RBX@@AAEXPBD0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
