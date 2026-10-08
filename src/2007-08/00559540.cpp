// roc 2007-08 00559540  unit: RBX::DataModel  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00559540
//
// 00559540  51                   push ecx
// 00559541  56                   push esi
// 00559542  33c0                 xor eax, eax
// 00559544  89442404             mov dword ptr [esp + 4], eax
// 00559548  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0055954c  50                   push eax
// 0055954d  88442408             mov byte ptr [esp + 8], al
// 00559551  8b542408             mov edx, dword ptr [esp + 8]
// 00559555  8d442410             lea eax, [esp + 0x10]
// 00559559  50                   push eax
// 0055955a  51                   push ecx
// 0055955b  52                   push edx
// 0055955c  56                   push esi
// 0055955d  83c104               add ecx, 4
// 00559560  e82bfcffff           call 0x559190
// 00559565  8bc6                 mov eax, esi
// 00559567  5e                   pop esi
// 00559568  59                   pop ecx
// 00559569  c20400               ret 4
// library rbxgs/v8datamodel\DataModel.cpp (function ??R?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@@ZV?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@@_bi@boost@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
