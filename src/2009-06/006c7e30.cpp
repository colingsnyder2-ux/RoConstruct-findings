// roc 2009-06 006c7e30  unit: seg_006c0000  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c7e30
//
// 006c7e30  80790600             cmp byte ptr [ecx + 6], 0
// 006c7e34  742a                 je 0x6c7e60
// 006c7e36  83c9ff               or ecx, 0xffffffff
// 006c7e39  c7401084c28e00       mov dword ptr [eax + 0x10], 0x8ec284
// 006c7e40  89481c               mov dword ptr [eax + 0x1c], ecx
// 006c7e43  894820               mov dword ptr [eax + 0x20], ecx
// 006c7e46  8b4810               mov ecx, dword ptr [eax + 0x10]
// 006c7e49  6a3c                 push 0x3c
// 006c7e4b  c7400c80c28e00       mov dword ptr [eax + 0xc], 0x8ec280
// 006c7e52  51                   push ecx
// 006c7e53  83c024               add eax, 0x24
// 006c7e56  50                   push eax
// 006c7e57  e864120000           call 0x6c90c0
// 006c7e5c  83c40c               add esp, 0xc
// 006c7e5f  c3                   ret 
// 006c7e60  8b5110               mov edx, dword ptr [ecx + 0x10]
// 006c7e63  8b5220               mov edx, dword ptr [edx + 0x20]
// 006c7e66  83c210               add edx, 0x10
// 006c7e69  895010               mov dword ptr [eax + 0x10], edx
// 006c7e6c  8b5110               mov edx, dword ptr [ecx + 0x10]
// 006c7e6f  8b523c               mov edx, dword ptr [edx + 0x3c]
// 006c7e72  89501c               mov dword ptr [eax + 0x1c], edx
// 006c7e75  83781c00             cmp dword ptr [eax + 0x1c], 0
// 006c7e79  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 006c7e7c  8b5140               mov edx, dword ptr [ecx + 0x40]
// 006c7e7f  895020               mov dword ptr [eax + 0x20], edx
// 006c7e82  b978c28e00           mov ecx, 0x8ec278
// 006c7e87  7405                 je 0x6c7e8e
// 006c7e89  b978b88d00           mov ecx, 0x8db878
// 006c7e8e  89480c               mov dword ptr [eax + 0xc], ecx
// 006c7e91  8b4810               mov ecx, dword ptr [eax + 0x10]
// 006c7e94  6a3c                 push 0x3c
// 006c7e96  51                   push ecx
// 006c7e97  83c024               add eax, 0x24
// 006c7e9a  50                   push eax
// 006c7e9b  e820120000           call 0x6c90c0
// 006c7ea0  83c40c               add esp, 0xc
// 006c7ea3  c3                   ret 
// library lua-5.1.4/ldebug.c (function _funcinfo)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
