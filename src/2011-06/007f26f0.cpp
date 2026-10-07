// roc 2011-06 007f26f0  unit: RBX::AdvLuaDragTool  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007f26f0
//
// 007f26f0  8b442404             mov eax, dword ptr [esp + 4]
// 007f26f4  8b10                 mov edx, dword ptr [eax]
// 007f26f6  8b4818               mov ecx, dword ptr [eax + 0x18]
// 007f26f9  8b4214               mov eax, dword ptr [edx + 0x14]
// 007f26fc  8b542408             mov edx, dword ptr [esp + 8]
// 007f2700  895488fc             mov dword ptr [eax + ecx*4 - 4], edx
// 007f2704  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_fixline)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
