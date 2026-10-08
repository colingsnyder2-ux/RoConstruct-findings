// roc 2007-03 0053ef40  unit: seg_00530000  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0053ef40
//
// 0053ef40  56                   push esi
// 0053ef41  8bf1                 mov esi, ecx
// 0053ef43  57                   push edi
// 0053ef44  8d7e14               lea edi, [esi + 0x14]
// 0053ef47  e8a4e10200           call 0x56d0f0
// 0053ef4c  8907                 mov dword ptr [edi], eax
// 0053ef4e  8d4630               lea eax, [esi + 0x30]
// 0053ef51  50                   push eax
// 0053ef52  e8a9e40200           call 0x56d400
// 0053ef57  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0053ef5b  50                   push eax
// 0053ef5c  6aff                 push -1
// 0053ef5e  51                   push ecx
// 0053ef5f  e87ce9feff           call 0x52d8e0
// 0053ef64  83c408               add esp, 8
// 0053ef67  50                   push eax
// 0053ef68  8bcf                 mov ecx, edi
// 0053ef6a  e821df0200           call 0x56ce90
// 0053ef6f  83c638               add esi, 0x38
// 0053ef72  56                   push esi
// 0053ef73  e8c8e20200           call 0x56d240
// 0053ef78  8b542414             mov edx, dword ptr [esp + 0x14]
// 0053ef7c  50                   push eax
// 0053ef7d  6aff                 push -1
// 0053ef7f  52                   push edx
// 0053ef80  e85be9feff           call 0x52d8e0
// 0053ef85  83c408               add esp, 8
// 0053ef88  50                   push eax
// 0053ef89  8bcf                 mov ecx, edi
// 0053ef8b  e800df0200           call 0x56ce90
// 0053ef90  5f                   pop edi
// 0053ef91  5e                   pop esi
// 0053ef92  c20800               ret 8
// library rbxgs/v8tree\Instance.cpp (function ?declareSignature@?$BoundFuncDesc@VInstance@RBX@@$$A6A?AV?$shared_ptr@VInstance@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z$01@Reflection@RBX@@AAEXPBD0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
