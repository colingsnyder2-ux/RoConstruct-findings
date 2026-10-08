// roc 2008-06 0063b3a0  unit: RBX::VBodyGyro::?$BoundPropGetSet  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063b3a0
//
// 0063b3a0  56                   push esi
// 0063b3a1  8bf1                 mov esi, ecx
// 0063b3a3  57                   push edi
// 0063b3a4  8d7e14               lea edi, [esi + 0x14]
// 0063b3a7  e8a496f5ff           call 0x594a50
// 0063b3ac  8907                 mov dword ptr [edi], eax
// 0063b3ae  8d4640               lea eax, [esi + 0x40]
// 0063b3b1  50                   push eax
// 0063b3b2  e82917f3ff           call 0x56cae0
// 0063b3b7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0063b3bb  50                   push eax
// 0063b3bc  6aff                 push -1
// 0063b3be  51                   push ecx
// 0063b3bf  e8cc8bf1ff           call 0x553f90
// 0063b3c4  83c408               add esp, 8
// 0063b3c7  50                   push eax
// 0063b3c8  8bcf                 mov ecx, edi
// 0063b3ca  e87197f5ff           call 0x594b40
// 0063b3cf  83c648               add esi, 0x48
// 0063b3d2  56                   push esi
// 0063b3d3  e83819f3ff           call 0x56cd10
// 0063b3d8  8b542414             mov edx, dword ptr [esp + 0x14]
// 0063b3dc  50                   push eax
// 0063b3dd  6aff                 push -1
// 0063b3df  52                   push edx
// 0063b3e0  e8ab8bf1ff           call 0x553f90
// 0063b3e5  83c408               add esp, 8
// 0063b3e8  50                   push eax
// 0063b3e9  8bcf                 mov ecx, edi
// 0063b3eb  e85097f5ff           call 0x594b40
// 0063b3f0  5f                   pop edi
// 0063b3f1  5e                   pop esi
// 0063b3f2  c20800               ret 8
// library rbxgs/v8tree\Instance.cpp (function ?declareSignature@?$BoundFuncDesc@VInstance@RBX@@$$A6A?AV?$shared_ptr@VInstance@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z$01@Reflection@RBX@@AAEXPBD0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
