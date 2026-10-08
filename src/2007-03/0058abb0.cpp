// roc 2007-03 0058abb0  unit: seg_00580000  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0058abb0
//
// 0058abb0  56                   push esi
// 0058abb1  8bf1                 mov esi, ecx
// 0058abb3  57                   push edi
// 0058abb4  8d7e14               lea edi, [esi + 0x14]
// 0058abb7  e82422feff           call 0x56cde0
// 0058abbc  8907                 mov dword ptr [edi], eax
// 0058abbe  8d4630               lea eax, [esi + 0x30]
// 0058abc1  50                   push eax
// 0058abc2  e83928feff           call 0x56d400
// 0058abc7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0058abcb  50                   push eax
// 0058abcc  6aff                 push -1
// 0058abce  51                   push ecx
// 0058abcf  e80c2dfaff           call 0x52d8e0
// 0058abd4  83c408               add esp, 8
// 0058abd7  50                   push eax
// 0058abd8  8bcf                 mov ecx, edi
// 0058abda  e8b122feff           call 0x56ce90
// 0058abdf  83c638               add esi, 0x38
// 0058abe2  56                   push esi
// 0058abe3  e8e825feff           call 0x56d1d0
// 0058abe8  8b542414             mov edx, dword ptr [esp + 0x14]
// 0058abec  50                   push eax
// 0058abed  6aff                 push -1
// 0058abef  52                   push edx
// 0058abf0  e8eb2cfaff           call 0x52d8e0
// 0058abf5  83c408               add esp, 8
// 0058abf8  50                   push eax
// 0058abf9  8bcf                 mov ecx, edi
// 0058abfb  e89022feff           call 0x56ce90
// 0058ac00  5f                   pop edi
// 0058ac01  5e                   pop esi
// 0058ac02  c20800               ret 8
// library rbxgs/v8tree\Instance.cpp (function ?declareSignature@?$BoundFuncDesc@VInstance@RBX@@$$A6A?AV?$shared_ptr@VInstance@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z$01@Reflection@RBX@@AAEXPBD0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
