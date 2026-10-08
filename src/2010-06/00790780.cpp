// from server: 100% by auto
// roc 2010-06 00790780  unit: RBX::GroupDragTool  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00790780
//
// 00790780  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00790784  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00790788  50                   push eax
// 00790789  51                   push ecx
// 0079078a  e8d1faffff           call 0x790260
// 0079078f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00790793  83c408               add esp, 8
// 00790796  89410c               mov dword ptr [ecx + 0xc], eax
// 00790799  c70109000000         mov dword ptr [ecx], 9
// 0079079f  c3                   ret 
// library lua-5.1.4/lcode.c (function _luaK_indexed)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
