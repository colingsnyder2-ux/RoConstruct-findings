// roc 2007-08 0042dbf0  unit: boost::any::_N::?$holder  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042dbf0
//
// 0042dbf0  53                   push ebx
// 0042dbf1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0042dbf5  56                   push esi
// 0042dbf6  57                   push edi
// 0042dbf7  8bf9                 mov edi, ecx
// 0042dbf9  8b37                 mov esi, dword ptr [edi]
// 0042dbfb  3bde                 cmp ebx, esi
// 0042dbfd  7441                 je 0x42dc40
// 0042dbff  85f6                 test esi, esi
// 0042dc01  743d                 je 0x42dc40
// 0042dc03  8b4604               mov eax, dword ptr [esi + 4]
// 0042dc06  85c0                 test eax, eax
// 0042dc08  7418                 je 0x42dc22
// 0042dc0a  8b4e08               mov ecx, dword ptr [esi + 8]
// 0042dc0d  51                   push ecx
// 0042dc0e  50                   push eax
// 0042dc0f  8bce                 mov ecx, esi
// 0042dc11  e83affffff           call 0x42db50
// 0042dc16  8b5604               mov edx, dword ptr [esi + 4]
// 0042dc19  52                   push edx
// 0042dc1a  e843202000           call 0x62fc62
// 0042dc1f  83c404               add esp, 4
// 0042dc22  56                   push esi
// 0042dc23  c7460400000000       mov dword ptr [esi + 4], 0
// 0042dc2a  c7460800000000       mov dword ptr [esi + 8], 0
// 0042dc31  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0042dc38  e825202000           call 0x62fc62
// 0042dc3d  83c404               add esp, 4
// 0042dc40  891f                 mov dword ptr [edi], ebx
// 0042dc42  5f                   pop edi
// 0042dc43  5e                   pop esi
// 0042dc44  5b                   pop ebx
// 0042dc45  c20400               ret 4
// library rbxgs/script\ScriptContext.cpp (function ?reset@?$auto_ptr@V?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@@std@@QAEXPAV?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptContext.cpp
