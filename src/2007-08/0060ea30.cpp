// from server: 100% by auto
// roc 2007-08 0060ea30  unit: RBX::Ball  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060ea30
//
// 0060ea30  8b442404             mov eax, dword ptr [esp + 4]
// 0060ea34  8bc8                 mov ecx, eax
// 0060ea36  c1f903               sar ecx, 3
// 0060ea39  83e11f               and ecx, 0x1f
// 0060ea3c  740b                 je 0x60ea49
// 0060ea3e  83e007               and eax, 7
// 0060ea41  83c008               add eax, 8
// 0060ea44  83c1ff               add ecx, -1
// 0060ea47  d3e0                 shl eax, cl
// 0060ea49  c3                   ret 
// library lua-5.1.4/lobject.c (function _luaO_fb2int)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lobject.c
