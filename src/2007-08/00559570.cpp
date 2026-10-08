// roc 2007-08 00559570  unit: RBX::DataModel  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00559570
//
// 00559570  51                   push ecx
// 00559571  56                   push esi
// 00559572  33c0                 xor eax, eax
// 00559574  89442404             mov dword ptr [esp + 4], eax
// 00559578  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0055957c  50                   push eax
// 0055957d  88442408             mov byte ptr [esp + 8], al
// 00559581  8b542408             mov edx, dword ptr [esp + 8]
// 00559585  8d442410             lea eax, [esp + 0x10]
// 00559589  50                   push eax
// 0055958a  51                   push ecx
// 0055958b  52                   push edx
// 0055958c  56                   push esi
// 0055958d  83c104               add ecx, 4
// 00559590  e88bfcffff           call 0x559220
// 00559595  8bc6                 mov eax, esi
// 00559597  5e                   pop esi
// 00559598  59                   pop ecx
// 00559599  c20400               ret 4
// library rbxgs/v8datamodel\DataModel.cpp (function ??R?$bind_t@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6A?AV12@V12@@ZV?$list1@V?$value@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@_bi@boost@@@_bi@boost@@@_bi@boost@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DataModel.cpp
