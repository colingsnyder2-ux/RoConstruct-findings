// roc 2007-08 00544b80  unit: RBX::Reflection::Metadata::VItem::?$BoundPropGetSet  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00544b80
//
// 00544b80  8b442404             mov eax, dword ptr [esp + 4]
// 00544b84  85c0                 test eax, eax
// 00544b86  56                   push esi
// 00544b87  57                   push edi
// 00544b88  8bf1                 mov esi, ecx
// 00544b8a  7405                 je 0x544b91
// 00544b8c  8d78fc               lea edi, [eax - 4]
// 00544b8f  eb02                 jmp 0x544b93
// 00544b91  33ff                 xor edi, edi
// 00544b93  8b4608               mov eax, dword ptr [esi + 8]
// 00544b96  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00544b9a  8a09                 mov cl, byte ptr [ecx]
// 00544b9c  03c7                 add eax, edi
// 00544b9e  3808                 cmp byte ptr [eax], cl
// 00544ba0  741f                 je 0x544bc1
// 00544ba2  8808                 mov byte ptr [eax], cl
// 00544ba4  8b4610               mov eax, dword ptr [esi + 0x10]
// 00544ba7  85c0                 test eax, eax
// 00544ba9  740b                 je 0x544bb6
// 00544bab  8b5604               mov edx, dword ptr [esi + 4]
// 00544bae  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00544bb1  52                   push edx
// 00544bb2  03cf                 add ecx, edi
// 00544bb4  ffd0                 call eax
// 00544bb6  8b4604               mov eax, dword ptr [esi + 4]
// 00544bb9  50                   push eax
// 00544bba  8bcf                 mov ecx, edi
// 00544bbc  e84ffbefff           call 0x444710
// 00544bc1  5f                   pop edi
// 00544bc2  5e                   pop esi
// 00544bc3  c20800               ret 8
// library rbxgs/script\Script.cpp (function ?setValue@?$BoundPropGetSet@VScript@RBX@@@?$BoundProp@_N$00@Reflection@RBX@@UBEXPAVDescribedBase@34@AB_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/Script.cpp
