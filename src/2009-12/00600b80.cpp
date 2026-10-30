// roc 2009-12 00600b80  unit: G3D::_internal::DialogTemplate  size: 157 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00600b80
//
// 00600b80  56                   push esi
// 00600b81  8b742408             mov esi, dword ptr [esp + 8]
// 00600b85  83be7c01000000       cmp dword ptr [esi + 0x17c], 0
// 00600b8c  7511                 jne 0x600b9f
// 00600b8e  56                   push esi
// 00600b8f  e8acfaffff           call 0x600640
// 00600b94  83c404               add esp, 4
// 00600b97  84c0                 test al, al
// 00600b99  7504                 jne 0x600b9f
// 00600b9b  32c0                 xor al, al
// 00600b9d  5e                   pop esi
// 00600b9e  c3                   ret 
// 00600b9f  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 00600ba5  8b4010               mov eax, dword ptr [eax + 0x10]
// 00600ba8  8d88d0000000         lea ecx, [eax + 0xd0]
// 00600bae  398e7c010000         cmp dword ptr [esi + 0x17c], ecx
// 00600bb4  7542                 jne 0x600bf8
// 00600bb6  8b16                 mov edx, dword ptr [esi]
// 00600bb8  c7421462000000       mov dword ptr [edx + 0x14], 0x62
// 00600bbf  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 00600bc5  8b0e                 mov ecx, dword ptr [esi]
// 00600bc7  8b5010               mov edx, dword ptr [eax + 0x10]
// 00600bca  895118               mov dword ptr [ecx + 0x18], edx
// 00600bcd  8b06                 mov eax, dword ptr [esi]
// 00600bcf  8b4804               mov ecx, dword ptr [eax + 4]
// 00600bd2  6a03                 push 3
// 00600bd4  56                   push esi
// 00600bd5  ffd1                 call ecx
// 00600bd7  c7867c01000000000000 mov dword ptr [esi + 0x17c], 0
// 00600be1  8bb694010000         mov esi, dword ptr [esi + 0x194]
// 00600be7  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00600bea  83c408               add esp, 8
// 00600bed  41                   inc ecx
// 00600bee  83e107               and ecx, 7
// 00600bf1  894e10               mov dword ptr [esi + 0x10], ecx
// 00600bf4  b001                 mov al, 1
// 00600bf6  5e                   pop esi
// 00600bf7  c3                   ret 
// 00600bf8  8b5618               mov edx, dword ptr [esi + 0x18]
// 00600bfb  50                   push eax
// 00600bfc  8b4214               mov eax, dword ptr [edx + 0x14]
// 00600bff  56                   push esi
// 00600c00  ffd0                 call eax
// 00600c02  83c408               add esp, 8
// 00600c05  84c0                 test al, al
// 00600c07  7492                 je 0x600b9b
// 00600c09  8bb694010000         mov esi, dword ptr [esi + 0x194]
// 00600c0f  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00600c12  41                   inc ecx
// 00600c13  83e107               and ecx, 7
// 00600c16  894e10               mov dword ptr [esi + 0x10], ecx
// 00600c19  b001                 mov al, 1
// 00600c1b  5e                   pop esi
// 00600c1c  c3                   ret 
// library jpeg-6b/jdmarker.c (function _read_restart_marker)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
