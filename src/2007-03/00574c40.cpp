// roc 2007-03 00574c40  unit: seg_00570000  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00574c40
//
// 00574c40  51                   push ecx
// 00574c41  8b542410             mov edx, dword ptr [esp + 0x10]
// 00574c45  56                   push esi
// 00574c46  8b742410             mov esi, dword ptr [esp + 0x10]
// 00574c4a  57                   push edi
// 00574c4b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00574c4f  c644240800           mov byte ptr [esp + 8], 0
// 00574c54  8b442408             mov eax, dword ptr [esp + 8]
// 00574c58  50                   push eax
// 00574c59  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00574c5d  52                   push edx
// 00574c5e  51                   push ecx
// 00574c5f  50                   push eax
// 00574c60  56                   push esi
// 00574c61  57                   push edi
// 00574c62  e839fdffff           call 0x5749a0
// 00574c67  83c418               add esp, 0x18
// 00574c6a  8d04f7               lea eax, [edi + esi*8]
// 00574c6d  5f                   pop edi
// 00574c6e  5e                   pop esi
// 00574c6f  59                   pop ecx
// 00574c70  c20c00               ret 0xc
// library rbxgs/script\LuaInstanceBridge.cpp (function ?_Ufill@?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@IAEPAVValue@Reflection@RBX@@PAV345@IABV345@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
