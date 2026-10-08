// roc 2007-03 0042e9b0  unit: seg_00420000  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0042e9b0
//
// 0042e9b0  51                   push ecx
// 0042e9b1  8b542410             mov edx, dword ptr [esp + 0x10]
// 0042e9b5  56                   push esi
// 0042e9b6  8b742410             mov esi, dword ptr [esp + 0x10]
// 0042e9ba  57                   push edi
// 0042e9bb  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0042e9bf  c644240800           mov byte ptr [esp + 8], 0
// 0042e9c4  8b442408             mov eax, dword ptr [esp + 8]
// 0042e9c8  50                   push eax
// 0042e9c9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0042e9cd  52                   push edx
// 0042e9ce  51                   push ecx
// 0042e9cf  50                   push eax
// 0042e9d0  56                   push esi
// 0042e9d1  57                   push edi
// 0042e9d2  e8f9feffff           call 0x42e8d0
// 0042e9d7  83c418               add esp, 0x18
// 0042e9da  8d04f7               lea eax, [edi + esi*8]
// 0042e9dd  5f                   pop edi
// 0042e9de  5e                   pop esi
// 0042e9df  59                   pop ecx
// 0042e9e0  c20c00               ret 0xc
// library rbxgs/script\LuaInstanceBridge.cpp (function ?_Ufill@?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@IAEPAVValue@Reflection@RBX@@PAV345@IABV345@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
