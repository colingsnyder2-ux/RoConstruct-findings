// from server: 100% by auto
// roc 2007-08 005c6690  unit: lua_exception  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c6690
//
// 005c6690  80790600             cmp byte ptr [ecx + 6], 0
// 005c6694  742a                 je 0x5c66c0
// 005c6696  83c9ff               or ecx, 0xffffffff
// 005c6699  c7401038977b00       mov dword ptr [eax + 0x10], 0x7b9738
// 005c66a0  89481c               mov dword ptr [eax + 0x1c], ecx
// 005c66a3  894820               mov dword ptr [eax + 0x20], ecx
// 005c66a6  8b4810               mov ecx, dword ptr [eax + 0x10]
// 005c66a9  6a3c                 push 0x3c
// 005c66ab  c7400c34977b00       mov dword ptr [eax + 0xc], 0x7b9734
// 005c66b2  51                   push ecx
// 005c66b3  83c024               add eax, 0x24
// 005c66b6  50                   push eax
// 005c66b7  e8f4870400           call 0x60eeb0
// 005c66bc  83c40c               add esp, 0xc
// 005c66bf  c3                   ret 
// 005c66c0  8b5110               mov edx, dword ptr [ecx + 0x10]
// 005c66c3  8b5220               mov edx, dword ptr [edx + 0x20]
// 005c66c6  83c210               add edx, 0x10
// 005c66c9  895010               mov dword ptr [eax + 0x10], edx
// 005c66cc  8b5110               mov edx, dword ptr [ecx + 0x10]
// 005c66cf  8b523c               mov edx, dword ptr [edx + 0x3c]
// 005c66d2  89501c               mov dword ptr [eax + 0x1c], edx
// 005c66d5  83781c00             cmp dword ptr [eax + 0x1c], 0
// 005c66d9  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 005c66dc  8b5140               mov edx, dword ptr [ecx + 0x40]
// 005c66df  895020               mov dword ptr [eax + 0x20], edx
// 005c66e2  b92c977b00           mov ecx, 0x7b972c
// 005c66e7  7405                 je 0x5c66ee
// 005c66e9  b9185d7a00           mov ecx, 0x7a5d18
// 005c66ee  89480c               mov dword ptr [eax + 0xc], ecx
// 005c66f1  8b4810               mov ecx, dword ptr [eax + 0x10]
// 005c66f4  6a3c                 push 0x3c
// 005c66f6  51                   push ecx
// 005c66f7  83c024               add eax, 0x24
// 005c66fa  50                   push eax
// 005c66fb  e8b0870400           call 0x60eeb0
// 005c6700  83c40c               add esp, 0xc
// 005c6703  c3                   ret 
// library lua-5.1.4/ldebug.c (function _funcinfo)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
