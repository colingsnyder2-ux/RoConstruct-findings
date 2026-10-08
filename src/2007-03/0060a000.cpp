// roc 2007-03 0060a000  unit: seg_00600000  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0060a000
//
// 0060a000  51                   push ecx
// 0060a001  8b542410             mov edx, dword ptr [esp + 0x10]
// 0060a005  56                   push esi
// 0060a006  8b742410             mov esi, dword ptr [esp + 0x10]
// 0060a00a  57                   push edi
// 0060a00b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0060a00f  c644240800           mov byte ptr [esp + 8], 0
// 0060a014  8b442408             mov eax, dword ptr [esp + 8]
// 0060a018  50                   push eax
// 0060a019  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0060a01d  52                   push edx
// 0060a01e  51                   push ecx
// 0060a01f  50                   push eax
// 0060a020  56                   push esi
// 0060a021  57                   push edi
// 0060a022  e819f2ffff           call 0x609240
// 0060a027  8bc6                 mov eax, esi
// 0060a029  83c418               add esp, 0x18
// 0060a02c  c1e004               shl eax, 4
// 0060a02f  03c7                 add eax, edi
// 0060a031  5f                   pop edi
// 0060a032  5e                   pop esi
// 0060a033  59                   pop ecx
// 0060a034  c20c00               ret 0xc
// library rbxgs/script\ScriptEvent.cpp (function ?_Ufill@?$vector@UWaitingThread@YieldingThreads@Lua@RBX@@V?$allocator@UWaitingThread@YieldingThreads@Lua@RBX@@@std@@@std@@IAEPAUWaitingThread@YieldingThreads@Lua@RBX@@PAU3456@IABU3456@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptEvent.cpp
