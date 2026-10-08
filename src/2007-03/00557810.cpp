// roc 2007-03 00557810  unit: seg_00550000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00557810
//
// 00557810  51                   push ecx
// 00557811  56                   push esi
// 00557812  33c0                 xor eax, eax
// 00557814  89442404             mov dword ptr [esp + 4], eax
// 00557818  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0055781c  50                   push eax
// 0055781d  88442408             mov byte ptr [esp + 8], al
// 00557821  8b542408             mov edx, dword ptr [esp + 8]
// 00557825  8d442410             lea eax, [esp + 0x10]
// 00557829  50                   push eax
// 0055782a  51                   push ecx
// 0055782b  52                   push edx
// 0055782c  56                   push esi
// 0055782d  83c104               add ecx, 4
// 00557830  e88bf0ffff           call 0x5568c0
// 00557835  8bc6                 mov eax, esi
// 00557837  5e                   pop esi
// 00557838  59                   pop ecx
// 00557839  c20400               ret 4
// library rbxgs/v8datamodel\DataModel.cpp (function ??R?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@@ZV?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@@_bi@boost@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
