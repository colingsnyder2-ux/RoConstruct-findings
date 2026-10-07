// roc 2008-06 00623740  unit: lua_exception  size: 135 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00623740
//
// 00623740  56                   push esi
// 00623741  8b742408             mov esi, dword ptr [esp + 8]
// 00623745  8b4674               mov eax, dword ptr [esi + 0x74]
// 00623748  85c0                 test eax, eax
// 0062374a  746e                 je 0x6237ba
// 0062374c  57                   push edi
// 0062374d  8b7e20               mov edi, dword ptr [esi + 0x20]
// 00623750  03f8                 add edi, eax
// 00623752  837f0806             cmp dword ptr [edi + 8], 6
// 00623756  740b                 je 0x623763
// 00623758  6a05                 push 5
// 0062375a  56                   push esi
// 0062375b  e8f0e8ffff           call 0x622050
// 00623760  83c408               add esp, 8
// 00623763  8b4608               mov eax, dword ptr [esi + 8]
// 00623766  8b48f0               mov ecx, dword ptr [eax - 0x10]
// 00623769  8908                 mov dword ptr [eax], ecx
// 0062376b  8b50f4               mov edx, dword ptr [eax - 0xc]
// 0062376e  895004               mov dword ptr [eax + 4], edx
// 00623771  8b48f8               mov ecx, dword ptr [eax - 8]
// 00623774  894808               mov dword ptr [eax + 8], ecx
// 00623777  8b4608               mov eax, dword ptr [esi + 8]
// 0062377a  8b17                 mov edx, dword ptr [edi]
// 0062377c  83e810               sub eax, 0x10
// 0062377f  8910                 mov dword ptr [eax], edx
// 00623781  8b4f04               mov ecx, dword ptr [edi + 4]
// 00623784  894804               mov dword ptr [eax + 4], ecx
// 00623787  8b5708               mov edx, dword ptr [edi + 8]
// 0062378a  895008               mov dword ptr [eax + 8], edx
// 0062378d  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00623790  2b4608               sub eax, dword ptr [esi + 8]
// 00623793  5f                   pop edi
// 00623794  83f810               cmp eax, 0x10
// 00623797  7f0b                 jg 0x6237a4
// 00623799  6a01                 push 1
// 0062379b  56                   push esi
// 0062379c  e8afe3ffff           call 0x621b50
// 006237a1  83c408               add esp, 8
// 006237a4  83460810             add dword ptr [esi + 8], 0x10
// 006237a8  8b4608               mov eax, dword ptr [esi + 8]
// 006237ab  6a01                 push 1
// 006237ad  83c0e0               add eax, -0x20
// 006237b0  50                   push eax
// 006237b1  56                   push esi
// 006237b2  e849ebffff           call 0x622300
// 006237b7  83c40c               add esp, 0xc
// 006237ba  6a02                 push 2
// 006237bc  56                   push esi
// 006237bd  e88ee8ffff           call 0x622050
// 006237c2  83c408               add esp, 8
// 006237c5  5e                   pop esi
// 006237c6  c3                   ret 
// library lua-5.1.4/ldebug.c (function _luaG_errormsg)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
