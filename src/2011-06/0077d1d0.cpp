// from server: 100% by auto
// roc 2011-06 0077d1d0  unit: seg_00770000  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0077d1d0
//
// 0077d1d0  80790600             cmp byte ptr [ecx + 6], 0
// 0077d1d4  742a                 je 0x77d200
// 0077d1d6  83c9ff               or ecx, 0xffffffff
// 0077d1d9  c740100877ab00       mov dword ptr [eax + 0x10], 0xab7708
// 0077d1e0  89481c               mov dword ptr [eax + 0x1c], ecx
// 0077d1e3  894820               mov dword ptr [eax + 0x20], ecx
// 0077d1e6  8b4810               mov ecx, dword ptr [eax + 0x10]
// 0077d1e9  6a3c                 push 0x3c
// 0077d1eb  c7400c0477ab00       mov dword ptr [eax + 0xc], 0xab7704
// 0077d1f2  51                   push ecx
// 0077d1f3  83c024               add eax, 0x24
// 0077d1f6  50                   push eax
// 0077d1f7  e844fcffff           call 0x77ce40
// 0077d1fc  83c40c               add esp, 0xc
// 0077d1ff  c3                   ret 
// 0077d200  8b5110               mov edx, dword ptr [ecx + 0x10]
// 0077d203  8b5220               mov edx, dword ptr [edx + 0x20]
// 0077d206  83c210               add edx, 0x10
// 0077d209  895010               mov dword ptr [eax + 0x10], edx
// 0077d20c  8b5110               mov edx, dword ptr [ecx + 0x10]
// 0077d20f  8b523c               mov edx, dword ptr [edx + 0x3c]
// 0077d212  89501c               mov dword ptr [eax + 0x1c], edx
// 0077d215  83781c00             cmp dword ptr [eax + 0x1c], 0
// 0077d219  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 0077d21c  8b5140               mov edx, dword ptr [ecx + 0x40]
// 0077d21f  895020               mov dword ptr [eax + 0x20], edx
// 0077d222  b9fc76ab00           mov ecx, 0xab76fc
// 0077d227  7405                 je 0x77d22e
// 0077d229  b9ec4ca900           mov ecx, 0xa94cec
// 0077d22e  89480c               mov dword ptr [eax + 0xc], ecx
// 0077d231  8b4810               mov ecx, dword ptr [eax + 0x10]
// 0077d234  6a3c                 push 0x3c
// 0077d236  51                   push ecx
// 0077d237  83c024               add eax, 0x24
// 0077d23a  50                   push eax
// 0077d23b  e800fcffff           call 0x77ce40
// 0077d240  83c40c               add esp, 0xc
// 0077d243  c3                   ret 
// library lua-5.1.4/ldebug.c (function _funcinfo)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
