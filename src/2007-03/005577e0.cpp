// roc 2007-03 005577e0  unit: seg_00550000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005577e0
//
// 005577e0  51                   push ecx
// 005577e1  56                   push esi
// 005577e2  33c0                 xor eax, eax
// 005577e4  89442404             mov dword ptr [esp + 4], eax
// 005577e8  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005577ec  50                   push eax
// 005577ed  88442408             mov byte ptr [esp + 8], al
// 005577f1  8b542408             mov edx, dword ptr [esp + 8]
// 005577f5  8d442410             lea eax, [esp + 0x10]
// 005577f9  50                   push eax
// 005577fa  51                   push ecx
// 005577fb  52                   push edx
// 005577fc  56                   push esi
// 005577fd  83c104               add ecx, 4
// 00557800  e82bf0ffff           call 0x556830
// 00557805  8bc6                 mov eax, esi
// 00557807  5e                   pop esi
// 00557808  59                   pop ecx
// 00557809  c20400               ret 4
// library rbxgs/v8datamodel\DataModel.cpp (function ??R?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@@ZV?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@@_bi@boost@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
