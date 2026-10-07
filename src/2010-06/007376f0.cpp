// roc 2010-06 007376f0  unit: seg_00730000  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007376f0
//
// 007376f0  56                   push esi
// 007376f1  8b742408             mov esi, dword ptr [esp + 8]
// 007376f5  6a01                 push 1
// 007376f7  56                   push esi
// 007376f8  e8f3b7feff           call 0x722ef0
// 007376fd  6a01                 push 1
// 007376ff  56                   push esi
// 00737700  e83b9afeff           call 0x721140
// 00737705  50                   push eax
// 00737706  56                   push esi
// 00737707  e8549afeff           call 0x721160
// 0073770c  50                   push eax
// 0073770d  56                   push esi
// 0073770e  e87d9efeff           call 0x721590
// 00737713  83c420               add esp, 0x20
// 00737716  b801000000           mov eax, 1
// 0073771b  5e                   pop esi
// 0073771c  c3                   ret 
// library lua-5.1.4/lbaselib.c (function _luaB_type)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lbaselib.c
