// roc 2010-06 00733190  unit: lua_exception  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00733190
//
// 00733190  80790600             cmp byte ptr [ecx + 6], 0
// 00733194  742a                 je 0x7331c0
// 00733196  83c9ff               or ecx, 0xffffffff
// 00733199  c74010c8dda400       mov dword ptr [eax + 0x10], 0xa4ddc8
// 007331a0  89481c               mov dword ptr [eax + 0x1c], ecx
// 007331a3  894820               mov dword ptr [eax + 0x20], ecx
// 007331a6  8b4810               mov ecx, dword ptr [eax + 0x10]
// 007331a9  6a3c                 push 0x3c
// 007331ab  c7400cc4dda400       mov dword ptr [eax + 0xc], 0xa4ddc4
// 007331b2  51                   push ecx
// 007331b3  83c024               add eax, 0x24
// 007331b6  50                   push eax
// 007331b7  e844fcffff           call 0x732e00
// 007331bc  83c40c               add esp, 0xc
// 007331bf  c3                   ret 
// 007331c0  8b5110               mov edx, dword ptr [ecx + 0x10]
// 007331c3  8b5220               mov edx, dword ptr [edx + 0x20]
// 007331c6  83c210               add edx, 0x10
// 007331c9  895010               mov dword ptr [eax + 0x10], edx
// 007331cc  8b5110               mov edx, dword ptr [ecx + 0x10]
// 007331cf  8b523c               mov edx, dword ptr [edx + 0x3c]
// 007331d2  89501c               mov dword ptr [eax + 0x1c], edx
// 007331d5  83781c00             cmp dword ptr [eax + 0x1c], 0
// 007331d9  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 007331dc  8b5140               mov edx, dword ptr [ecx + 0x40]
// 007331df  895020               mov dword ptr [eax + 0x20], edx
// 007331e2  b9bcdda400           mov ecx, 0xa4ddbc
// 007331e7  7405                 je 0x7331ee
// 007331e9  b9741aa300           mov ecx, 0xa31a74
// 007331ee  89480c               mov dword ptr [eax + 0xc], ecx
// 007331f1  8b4810               mov ecx, dword ptr [eax + 0x10]
// 007331f4  6a3c                 push 0x3c
// 007331f6  51                   push ecx
// 007331f7  83c024               add eax, 0x24
// 007331fa  50                   push eax
// 007331fb  e800fcffff           call 0x732e00
// 00733200  83c40c               add esp, 0xc
// 00733203  c3                   ret 
// library lua-5.1.4/ldebug.c (function _funcinfo)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
