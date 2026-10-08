// from server: 100% by auto
// roc 2011-06 0060e3b0  unit: RBX::VChangeHistoryService::?$FactoryProduct  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0060e3b0
//
// 0060e3b0  8b442404             mov eax, dword ptr [esp + 4]
// 0060e3b4  53                   push ebx
// 0060e3b5  56                   push esi
// 0060e3b6  57                   push edi
// 0060e3b7  8bf1                 mov esi, ecx
// 0060e3b9  8b7e04               mov edi, dword ptr [esi + 4]
// 0060e3bc  8b4f04               mov ecx, dword ptr [edi + 4]
// 0060e3bf  50                   push eax
// 0060e3c0  51                   push ecx
// 0060e3c1  57                   push edi
// 0060e3c2  8bce                 mov ecx, esi
// 0060e3c4  e8e7f8ffff           call 0x60dcb0
// 0060e3c9  6a01                 push 1
// 0060e3cb  8bce                 mov ecx, esi
// 0060e3cd  8bd8                 mov ebx, eax
// 0060e3cf  e88c330d00           call 0x6e1760
// 0060e3d4  895f04               mov dword ptr [edi + 4], ebx
// 0060e3d7  8b5304               mov edx, dword ptr [ebx + 4]
// 0060e3da  5f                   pop edi
// 0060e3db  5e                   pop esi
// 0060e3dc  891a                 mov dword ptr [edx], ebx
// 0060e3de  5b                   pop ebx
// 0060e3df  c20400               ret 4
// library boost-1.34.1/libs\regex\src\cregex.cpp (function ?push_back@?$list@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/regex/src/cregex.cpp
