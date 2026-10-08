// roc 2007-03 005c0c40  unit: seg_005c0000  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005c0c40
//
// 005c0c40  51                   push ecx
// 005c0c41  8b542410             mov edx, dword ptr [esp + 0x10]
// 005c0c45  56                   push esi
// 005c0c46  8b742410             mov esi, dword ptr [esp + 0x10]
// 005c0c4a  57                   push edi
// 005c0c4b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005c0c4f  c644240800           mov byte ptr [esp + 8], 0
// 005c0c54  8b442408             mov eax, dword ptr [esp + 8]
// 005c0c58  50                   push eax
// 005c0c59  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005c0c5d  52                   push edx
// 005c0c5e  51                   push ecx
// 005c0c5f  50                   push eax
// 005c0c60  56                   push esi
// 005c0c61  57                   push edi
// 005c0c62  e839ffffff           call 0x5c0ba0
// 005c0c67  8bc6                 mov eax, esi
// 005c0c69  83c418               add esp, 0x18
// 005c0c6c  c1e004               shl eax, 4
// 005c0c6f  03c7                 add eax, edi
// 005c0c71  5f                   pop edi
// 005c0c72  5e                   pop esi
// 005c0c73  59                   pop ecx
// 005c0c74  c20c00               ret 0xc
// library rbxgs/script\ScriptEvent.cpp (function ?_Ufill@?$vector@UWaitingThread@YieldingThreads@Lua@RBX@@V?$allocator@UWaitingThread@YieldingThreads@Lua@RBX@@@std@@@std@@IAEPAUWaitingThread@YieldingThreads@Lua@RBX@@PAU3456@IABU3456@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/ScriptEvent.cpp
