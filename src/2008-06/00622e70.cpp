// from server: 100% by auto
// roc 2008-06 00622e70  unit: lua_exception  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00622e70
//
// 00622e70  80790600             cmp byte ptr [ecx + 6], 0
// 00622e74  742a                 je 0x622ea0
// 00622e76  83c9ff               or ecx, 0xffffffff
// 00622e79  c74010d0498400       mov dword ptr [eax + 0x10], 0x8449d0
// 00622e80  89481c               mov dword ptr [eax + 0x1c], ecx
// 00622e83  894820               mov dword ptr [eax + 0x20], ecx
// 00622e86  8b4810               mov ecx, dword ptr [eax + 0x10]
// 00622e89  6a3c                 push 0x3c
// 00622e8b  c7400ccc498400       mov dword ptr [eax + 0xc], 0x8449cc
// 00622e92  51                   push ecx
// 00622e93  83c024               add eax, 0x24
// 00622e96  50                   push eax
// 00622e97  e844fcffff           call 0x622ae0
// 00622e9c  83c40c               add esp, 0xc
// 00622e9f  c3                   ret 
// 00622ea0  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00622ea3  8b5220               mov edx, dword ptr [edx + 0x20]
// 00622ea6  83c210               add edx, 0x10
// 00622ea9  895010               mov dword ptr [eax + 0x10], edx
// 00622eac  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00622eaf  8b523c               mov edx, dword ptr [edx + 0x3c]
// 00622eb2  89501c               mov dword ptr [eax + 0x1c], edx
// 00622eb5  83781c00             cmp dword ptr [eax + 0x1c], 0
// 00622eb9  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 00622ebc  8b5140               mov edx, dword ptr [ecx + 0x40]
// 00622ebf  895020               mov dword ptr [eax + 0x20], edx
// 00622ec2  b9c4498400           mov ecx, 0x8449c4
// 00622ec7  7405                 je 0x622ece
// 00622ec9  b98c498300           mov ecx, 0x83498c
// 00622ece  89480c               mov dword ptr [eax + 0xc], ecx
// 00622ed1  8b4810               mov ecx, dword ptr [eax + 0x10]
// 00622ed4  6a3c                 push 0x3c
// 00622ed6  51                   push ecx
// 00622ed7  83c024               add eax, 0x24
// 00622eda  50                   push eax
// 00622edb  e800fcffff           call 0x622ae0
// 00622ee0  83c40c               add esp, 0xc
// 00622ee3  c3                   ret 
// library lua-5.1.4/ldebug.c (function _funcinfo)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
