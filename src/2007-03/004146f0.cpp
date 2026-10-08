// roc 2007-03 004146f0  unit: seg_00410000  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004146f0
//
// 004146f0  56                   push esi
// 004146f1  8bf1                 mov esi, ecx
// 004146f3  57                   push edi
// 004146f4  8d7e14               lea edi, [esi + 0x14]
// 004146f7  e8f4891500           call 0x56d0f0
// 004146fc  8907                 mov dword ptr [edi], eax
// 004146fe  8d4630               lea eax, [esi + 0x30]
// 00414701  50                   push eax
// 00414702  e8c98a1500           call 0x56d1d0
// 00414707  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0041470b  50                   push eax
// 0041470c  6aff                 push -1
// 0041470e  51                   push ecx
// 0041470f  e8cc911100           call 0x52d8e0
// 00414714  83c408               add esp, 8
// 00414717  50                   push eax
// 00414718  8bcf                 mov ecx, edi
// 0041471a  e871871500           call 0x56ce90
// 0041471f  83c638               add esi, 0x38
// 00414722  56                   push esi
// 00414723  e8a88a1500           call 0x56d1d0
// 00414728  8b542414             mov edx, dword ptr [esp + 0x14]
// 0041472c  50                   push eax
// 0041472d  6aff                 push -1
// 0041472f  52                   push edx
// 00414730  e8ab911100           call 0x52d8e0
// 00414735  83c408               add esp, 8
// 00414738  50                   push eax
// 00414739  8bcf                 mov ecx, edi
// 0041473b  e850871500           call 0x56ce90
// 00414740  5f                   pop edi
// 00414741  5e                   pop esi
// 00414742  c20800               ret 8
// library rbxgs/v8tree\Instance.cpp (function ?declareSignature@?$BoundFuncDesc@VInstance@RBX@@$$A6A?AV?$shared_ptr@VInstance@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z$01@Reflection@RBX@@AAEXPBD0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
