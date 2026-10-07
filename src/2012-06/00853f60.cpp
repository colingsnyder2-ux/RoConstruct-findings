// roc 2012-06 00853f60  unit: RBX::LuaStatsItem  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00853f60
//
// 00853f60  8b442404             mov eax, dword ptr [esp + 4]
// 00853f64  50                   push eax
// 00853f65  e876ef0d00           call 0x932ee0
// 00853f6a  59                   pop ecx
// 00853f6b  c3                   ret 
// library lua-5.1.4/lstate.c (function _callallgcTM)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstate.c
