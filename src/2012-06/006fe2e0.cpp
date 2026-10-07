// roc 2012-06 006fe2e0  unit: RBX::VChangeHistoryService::?$FactoryProduct  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006fe2e0
//
// 006fe2e0  8b442404             mov eax, dword ptr [esp + 4]
// 006fe2e4  53                   push ebx
// 006fe2e5  56                   push esi
// 006fe2e6  57                   push edi
// 006fe2e7  8bf1                 mov esi, ecx
// 006fe2e9  8b7e04               mov edi, dword ptr [esi + 4]
// 006fe2ec  8b4f04               mov ecx, dword ptr [edi + 4]
// 006fe2ef  50                   push eax
// 006fe2f0  51                   push ecx
// 006fe2f1  57                   push edi
// 006fe2f2  8bce                 mov ecx, esi
// 006fe2f4  e8f7b51500           call 0x8598f0
// 006fe2f9  6a01                 push 1
// 006fe2fb  8bce                 mov ecx, esi
// 006fe2fd  8bd8                 mov ebx, eax
// 006fe2ff  e82cb61500           call 0x859930
// 006fe304  895f04               mov dword ptr [edi + 4], ebx
// 006fe307  8b5304               mov edx, dword ptr [ebx + 4]
// 006fe30a  5f                   pop edi
// 006fe30b  5e                   pop esi
// 006fe30c  891a                 mov dword ptr [edx], ebx
// 006fe30e  5b                   pop ebx
// 006fe30f  c20400               ret 4
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ?push_back@?$list@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
