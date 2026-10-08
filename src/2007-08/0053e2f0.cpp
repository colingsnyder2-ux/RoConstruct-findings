// roc 2007-08 0053e2f0  unit: RBX::VInstance::?$NonFactoryProduct  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0053e2f0
//
// 0053e2f0  56                   push esi
// 0053e2f1  8bf1                 mov esi, ecx
// 0053e2f3  57                   push edi
// 0053e2f4  8d7e14               lea edi, [esi + 0x14]
// 0053e2f7  e8f4f30200           call 0x56d6f0
// 0053e2fc  8907                 mov dword ptr [edi], eax
// 0053e2fe  8d4630               lea eax, [esi + 0x30]
// 0053e301  50                   push eax
// 0053e302  e8f9f60200           call 0x56da00
// 0053e307  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0053e30b  50                   push eax
// 0053e30c  6aff                 push -1
// 0053e30e  51                   push ecx
// 0053e30f  e82ce6feff           call 0x52c940
// 0053e314  83c408               add esp, 8
// 0053e317  50                   push eax
// 0053e318  8bcf                 mov ecx, edi
// 0053e31a  e8e1f00200           call 0x56d400
// 0053e31f  83c638               add esi, 0x38
// 0053e322  56                   push esi
// 0053e323  e818f50200           call 0x56d840
// 0053e328  8b542414             mov edx, dword ptr [esp + 0x14]
// 0053e32c  50                   push eax
// 0053e32d  6aff                 push -1
// 0053e32f  52                   push edx
// 0053e330  e80be6feff           call 0x52c940
// 0053e335  83c408               add esp, 8
// 0053e338  50                   push eax
// 0053e339  8bcf                 mov ecx, edi
// 0053e33b  e8c0f00200           call 0x56d400
// 0053e340  5f                   pop edi
// 0053e341  5e                   pop esi
// 0053e342  c20800               ret 8
// library rbxgs/v8tree\Instance.cpp (function ?declareSignature@?$BoundFuncDesc@VInstance@RBX@@$$A6A?AV?$shared_ptr@VInstance@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z$01@Reflection@RBX@@AAEXPBD0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
