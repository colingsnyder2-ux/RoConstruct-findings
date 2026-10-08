// roc 2007-03 0048b5e0  unit: seg_00480000  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0048b5e0
//
// 0048b5e0  56                   push esi
// 0048b5e1  8bf1                 mov esi, ecx
// 0048b5e3  57                   push edi
// 0048b5e4  8d7e14               lea edi, [esi + 0x14]
// 0048b5e7  e8f4170e00           call 0x56cde0
// 0048b5ec  8907                 mov dword ptr [edi], eax
// 0048b5ee  8d4630               lea eax, [esi + 0x30]
// 0048b5f1  50                   push eax
// 0048b5f2  e8f91a0e00           call 0x56d0f0
// 0048b5f7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0048b5fb  50                   push eax
// 0048b5fc  6aff                 push -1
// 0048b5fe  51                   push ecx
// 0048b5ff  e8dc220a00           call 0x52d8e0
// 0048b604  83c408               add esp, 8
// 0048b607  50                   push eax
// 0048b608  8bcf                 mov ecx, edi
// 0048b60a  e881180e00           call 0x56ce90
// 0048b60f  83c638               add esi, 0x38
// 0048b612  56                   push esi
// 0048b613  e8e81d0e00           call 0x56d400
// 0048b618  8b542414             mov edx, dword ptr [esp + 0x14]
// 0048b61c  50                   push eax
// 0048b61d  6aff                 push -1
// 0048b61f  52                   push edx
// 0048b620  e8bb220a00           call 0x52d8e0
// 0048b625  83c408               add esp, 8
// 0048b628  50                   push eax
// 0048b629  8bcf                 mov ecx, edi
// 0048b62b  e860180e00           call 0x56ce90
// 0048b630  5f                   pop edi
// 0048b631  5e                   pop esi
// 0048b632  c20800               ret 8
// library rbxgs/v8tree\Instance.cpp (function ?declareSignature@?$BoundFuncDesc@VInstance@RBX@@$$A6A?AV?$shared_ptr@VInstance@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z$01@Reflection@RBX@@AAEXPBD0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
