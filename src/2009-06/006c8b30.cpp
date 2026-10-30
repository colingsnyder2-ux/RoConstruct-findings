// from server: 100% by auto
// roc 2009-06 006c8b30  unit: seg_006c0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c8b30
//
// 006c8b30  83ec10               sub esp, 0x10
// 006c8b33  56                   push esi
// 006c8b34  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 006c8b38  8d442404             lea eax, [esp + 4]
// 006c8b3c  50                   push eax
// 006c8b3d  56                   push esi
// 006c8b3e  e84d130200           call 0x6e9e90
// 006c8b43  83c408               add esp, 8
// 006c8b46  85c0                 test eax, eax
// 006c8b48  8bc6                 mov eax, esi
// 006c8b4a  7404                 je 0x6c8b50
// 006c8b4c  8b442420             mov eax, dword ptr [esp + 0x20]
// 006c8b50  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006c8b54  681cc38e00           push 0x8ec31c
// 006c8b59  50                   push eax
// 006c8b5a  51                   push ecx
// 006c8b5b  e810ffffff           call 0x6c8a70
// 006c8b60  83c40c               add esp, 0xc
// 006c8b63  5e                   pop esi
// 006c8b64  83c410               add esp, 0x10
// 006c8b67  c3                   ret 
// library lua-5.1.4/ldebug.c (function _luaG_aritherror)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
