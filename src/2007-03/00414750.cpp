// roc 2007-03 00414750  unit: seg_00410000  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00414750
//
// 00414750  56                   push esi
// 00414751  8bf1                 mov esi, ecx
// 00414753  57                   push edi
// 00414754  8d7e14               lea edi, [esi + 0x14]
// 00414757  e884861500           call 0x56cde0
// 0041475c  8907                 mov dword ptr [edi], eax
// 0041475e  8d4630               lea eax, [esi + 0x30]
// 00414761  50                   push eax
// 00414762  e8698a1500           call 0x56d1d0
// 00414767  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0041476b  50                   push eax
// 0041476c  6aff                 push -1
// 0041476e  51                   push ecx
// 0041476f  e86c911100           call 0x52d8e0
// 00414774  83c408               add esp, 8
// 00414777  50                   push eax
// 00414778  8bcf                 mov ecx, edi
// 0041477a  e811871500           call 0x56ce90
// 0041477f  83c638               add esi, 0x38
// 00414782  56                   push esi
// 00414783  e8488a1500           call 0x56d1d0
// 00414788  8b542414             mov edx, dword ptr [esp + 0x14]
// 0041478c  50                   push eax
// 0041478d  6aff                 push -1
// 0041478f  52                   push edx
// 00414790  e84b911100           call 0x52d8e0
// 00414795  83c408               add esp, 8
// 00414798  50                   push eax
// 00414799  8bcf                 mov ecx, edi
// 0041479b  e8f0861500           call 0x56ce90
// 004147a0  5f                   pop edi
// 004147a1  5e                   pop esi
// 004147a2  c20800               ret 8
// library rbxgs/v8tree\Instance.cpp (function ?declareSignature@?$BoundFuncDesc@VInstance@RBX@@$$A6A?AV?$shared_ptr@VInstance@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z$01@Reflection@RBX@@AAEXPBD0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
