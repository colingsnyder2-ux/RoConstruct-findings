// roc 2007-03 004a1150  unit: seg_004a0000  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004a1150
//
// 004a1150  51                   push ecx
// 004a1151  8b542410             mov edx, dword ptr [esp + 0x10]
// 004a1155  56                   push esi
// 004a1156  8b742410             mov esi, dword ptr [esp + 0x10]
// 004a115a  57                   push edi
// 004a115b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004a115f  c644240800           mov byte ptr [esp + 8], 0
// 004a1164  8b442408             mov eax, dword ptr [esp + 8]
// 004a1168  50                   push eax
// 004a1169  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004a116d  52                   push edx
// 004a116e  51                   push ecx
// 004a116f  50                   push eax
// 004a1170  56                   push esi
// 004a1171  57                   push edi
// 004a1172  e839e8ffff           call 0x49f9b0
// 004a1177  83c418               add esp, 0x18
// 004a117a  8d04f7               lea eax, [edi + esi*8]
// 004a117d  5f                   pop edi
// 004a117e  5e                   pop esi
// 004a117f  59                   pop ecx
// 004a1180  c20c00               ret 0xc
// library rbxgs/script\LuaInstanceBridge.cpp (function ?_Ufill@?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@IAEPAVValue@Reflection@RBX@@PAV345@IABV345@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
