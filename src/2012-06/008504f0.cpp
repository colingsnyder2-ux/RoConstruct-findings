// roc 2012-06 008504f0  unit: RBX::Reflection::PAUTuple::?$sp_counted_impl_pd  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008504f0
//
// 008504f0  80790600             cmp byte ptr [ecx + 6], 0
// 008504f4  742a                 je 0x850520
// 008504f6  83c9ff               or ecx, 0xffffffff
// 008504f9  c74010702ebd00       mov dword ptr [eax + 0x10], 0xbd2e70
// 00850500  89481c               mov dword ptr [eax + 0x1c], ecx
// 00850503  894820               mov dword ptr [eax + 0x20], ecx
// 00850506  8b4810               mov ecx, dword ptr [eax + 0x10]
// 00850509  6a3c                 push 0x3c
// 0085050b  c7400c6c2ebd00       mov dword ptr [eax + 0xc], 0xbd2e6c
// 00850512  51                   push ecx
// 00850513  83c024               add eax, 0x24
// 00850516  50                   push eax
// 00850517  e844fcffff           call 0x850160
// 0085051c  83c40c               add esp, 0xc
// 0085051f  c3                   ret 
// 00850520  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00850523  8b5220               mov edx, dword ptr [edx + 0x20]
// 00850526  83c210               add edx, 0x10
// 00850529  895010               mov dword ptr [eax + 0x10], edx
// 0085052c  8b5110               mov edx, dword ptr [ecx + 0x10]
// 0085052f  8b523c               mov edx, dword ptr [edx + 0x3c]
// 00850532  89501c               mov dword ptr [eax + 0x1c], edx
// 00850535  83781c00             cmp dword ptr [eax + 0x1c], 0
// 00850539  8b4910               mov ecx, dword ptr [ecx + 0x10]
// 0085053c  8b5140               mov edx, dword ptr [ecx + 0x40]
// 0085053f  895020               mov dword ptr [eax + 0x20], edx
// 00850542  b9642ebd00           mov ecx, 0xbd2e64
// 00850547  7405                 je 0x85054e
// 00850549  b9844eb900           mov ecx, 0xb94e84
// 0085054e  89480c               mov dword ptr [eax + 0xc], ecx
// 00850551  8b4810               mov ecx, dword ptr [eax + 0x10]
// 00850554  6a3c                 push 0x3c
// 00850556  51                   push ecx
// 00850557  83c024               add eax, 0x24
// 0085055a  50                   push eax
// 0085055b  e800fcffff           call 0x850160
// 00850560  83c40c               add esp, 0xc
// 00850563  c3                   ret 
// library lua-5.1.4/ldebug.c (function _funcinfo)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
