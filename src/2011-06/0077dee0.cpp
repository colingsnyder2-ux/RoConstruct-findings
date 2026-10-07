// roc 2011-06 0077dee0  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0077dee0
//
// 0077dee0  83ec10               sub esp, 0x10
// 0077dee3  56                   push esi
// 0077dee4  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0077dee8  8d442404             lea eax, [esp + 4]
// 0077deec  50                   push eax
// 0077deed  56                   push esi
// 0077deee  e87d950500           call 0x7d7470
// 0077def3  83c408               add esp, 8
// 0077def6  85c0                 test eax, eax
// 0077def8  8bc6                 mov eax, esi
// 0077defa  7404                 je 0x77df00
// 0077defc  8b442420             mov eax, dword ptr [esp + 0x20]
// 0077df00  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0077df04  68a077ab00           push 0xab77a0
// 0077df09  50                   push eax
// 0077df0a  51                   push ecx
// 0077df0b  e810ffffff           call 0x77de20
// 0077df10  83c40c               add esp, 0xc
// 0077df13  5e                   pop esi
// 0077df14  83c410               add esp, 0x10
// 0077df17  c3                   ret 
// library lua-5.1.4/ldebug.c (function _luaG_aritherror)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
