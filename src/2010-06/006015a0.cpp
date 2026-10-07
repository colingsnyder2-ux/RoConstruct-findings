// roc 2010-06 006015a0  unit: RBX::ArrowTool  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006015a0
//
// 006015a0  8b442404             mov eax, dword ptr [esp + 4]
// 006015a4  6a00                 push 0
// 006015a6  50                   push eax
// 006015a7  e834e4ebff           call 0x4bf9e0
// 006015ac  83c408               add esp, 8
// 006015af  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _str_match)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
