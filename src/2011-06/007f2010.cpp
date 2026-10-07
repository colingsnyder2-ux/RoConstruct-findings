// roc 2011-06 007f2010  unit: RBX::AdvLuaDragTool  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007f2010
//
// 007f2010  8b4c2404             mov ecx, dword ptr [esp + 4]
// 007f2014  8b4118               mov eax, dword ptr [ecx + 0x18]
// 007f2017  89411c               mov dword ptr [ecx + 0x1c], eax
// 007f201a  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_getlabel)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
