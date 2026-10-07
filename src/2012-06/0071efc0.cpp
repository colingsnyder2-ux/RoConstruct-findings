// roc 2012-06 0071efc0  unit: RBX::AdvArrowToolBase  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0071efc0
//
// 0071efc0  8b442404             mov eax, dword ptr [esp + 4]
// 0071efc4  6a00                 push 0
// 0071efc6  50                   push eax
// 0071efc7  e8d410e2ff           call 0x5400a0
// 0071efcc  83c408               add esp, 8
// 0071efcf  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _str_match)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
