// roc 2007-08 005f8a60  unit: RBX::VBrickColor::V?$Value::?$SignalDesc  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f8a60
//
// 005f8a60  56                   push esi
// 005f8a61  8bf1                 mov esi, ecx
// 005f8a63  57                   push edi
// 005f8a64  8d7e14               lea edi, [esi + 0x14]
// 005f8a67  e8e448f7ff           call 0x56d350
// 005f8a6c  8907                 mov dword ptr [edi], eax
// 005f8a6e  8d4630               lea eax, [esi + 0x30]
// 005f8a71  50                   push eax
// 005f8a72  e8794cf7ff           call 0x56d6f0
// 005f8a77  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005f8a7b  50                   push eax
// 005f8a7c  6aff                 push -1
// 005f8a7e  51                   push ecx
// 005f8a7f  e8bc3ef3ff           call 0x52c940
// 005f8a84  83c408               add esp, 8
// 005f8a87  50                   push eax
// 005f8a88  8bcf                 mov ecx, edi
// 005f8a8a  e87149f7ff           call 0x56d400
// 005f8a8f  83c638               add esi, 0x38
// 005f8a92  56                   push esi
// 005f8a93  e8884ef7ff           call 0x56d920
// 005f8a98  8b542414             mov edx, dword ptr [esp + 0x14]
// 005f8a9c  50                   push eax
// 005f8a9d  6aff                 push -1
// 005f8a9f  52                   push edx
// 005f8aa0  e89b3ef3ff           call 0x52c940
// 005f8aa5  83c408               add esp, 8
// 005f8aa8  50                   push eax
// 005f8aa9  8bcf                 mov ecx, edi
// 005f8aab  e85049f7ff           call 0x56d400
// 005f8ab0  5f                   pop edi
// 005f8ab1  5e                   pop esi
// 005f8ab2  c20800               ret 8
// library rbxgs/v8tree\Instance.cpp (function ?declareSignature@?$BoundFuncDesc@VInstance@RBX@@$$A6A?AV?$shared_ptr@VInstance@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z$01@Reflection@RBX@@AAEXPBD0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
