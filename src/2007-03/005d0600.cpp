// roc 2007-03 005d0600  unit: seg_005d0000  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005d0600
//
// 005d0600  53                   push ebx
// 005d0601  8b5c2408             mov ebx, dword ptr [esp + 8]
// 005d0605  85db                 test ebx, ebx
// 005d0607  7437                 je 0x5d0640
// 005d0609  57                   push edi
// 005d060a  8bbb20010000         mov edi, dword ptr [ebx + 0x120]
// 005d0610  85ff                 test edi, edi
// 005d0612  742b                 je 0x5d063f
// 005d0614  56                   push esi
// 005d0615  8bcf                 mov ecx, edi
// 005d0617  e8d4fcffff           call 0x5d02f0
// 005d061c  8bf0                 mov esi, eax
// 005d061e  85f6                 test esi, esi
// 005d0620  741c                 je 0x5d063e
// 005d0622  8bcb                 mov ecx, ebx
// 005d0624  e8675debff           call 0x486390
// 005d0629  50                   push eax
// 005d062a  8bce                 mov ecx, esi
// 005d062c  e8bf16f7ff           call 0x541cf0
// 005d0631  8bcf                 mov ecx, edi
// 005d0633  e8b8fcffff           call 0x5d02f0
// 005d0638  8bf0                 mov esi, eax
// 005d063a  85f6                 test esi, esi
// 005d063c  75e4                 jne 0x5d0622
// 005d063e  5e                   pop esi
// 005d063f  5f                   pop edi
// 005d0640  5b                   pop ebx
// 005d0641  c3                   ret 
// library rbxgs/v8datamodel\Tool.cpp (function ?moveAllToolsToBackpack@Tool@RBX@@CAXPAVPlayer@Network@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Tool.cpp
