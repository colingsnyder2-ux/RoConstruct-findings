// from server: 100% by auto
// roc 2010-06 005624f0  unit: G3D::_internal::DialogTemplate  size: 157 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005624f0
//
// 005624f0  56                   push esi
// 005624f1  8b742408             mov esi, dword ptr [esp + 8]
// 005624f5  83be7c01000000       cmp dword ptr [esi + 0x17c], 0
// 005624fc  7511                 jne 0x56250f
// 005624fe  56                   push esi
// 005624ff  e8acfaffff           call 0x561fb0
// 00562504  83c404               add esp, 4
// 00562507  84c0                 test al, al
// 00562509  7504                 jne 0x56250f
// 0056250b  32c0                 xor al, al
// 0056250d  5e                   pop esi
// 0056250e  c3                   ret 
// 0056250f  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 00562515  8b4010               mov eax, dword ptr [eax + 0x10]
// 00562518  8d88d0000000         lea ecx, [eax + 0xd0]
// 0056251e  398e7c010000         cmp dword ptr [esi + 0x17c], ecx
// 00562524  7542                 jne 0x562568
// 00562526  8b16                 mov edx, dword ptr [esi]
// 00562528  c7421462000000       mov dword ptr [edx + 0x14], 0x62
// 0056252f  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 00562535  8b0e                 mov ecx, dword ptr [esi]
// 00562537  8b5010               mov edx, dword ptr [eax + 0x10]
// 0056253a  895118               mov dword ptr [ecx + 0x18], edx
// 0056253d  8b06                 mov eax, dword ptr [esi]
// 0056253f  8b4804               mov ecx, dword ptr [eax + 4]
// 00562542  6a03                 push 3
// 00562544  56                   push esi
// 00562545  ffd1                 call ecx
// 00562547  c7867c01000000000000 mov dword ptr [esi + 0x17c], 0
// 00562551  8bb694010000         mov esi, dword ptr [esi + 0x194]
// 00562557  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0056255a  83c408               add esp, 8
// 0056255d  41                   inc ecx
// 0056255e  83e107               and ecx, 7
// 00562561  894e10               mov dword ptr [esi + 0x10], ecx
// 00562564  b001                 mov al, 1
// 00562566  5e                   pop esi
// 00562567  c3                   ret 
// 00562568  8b5618               mov edx, dword ptr [esi + 0x18]
// 0056256b  50                   push eax
// 0056256c  8b4214               mov eax, dword ptr [edx + 0x14]
// 0056256f  56                   push esi
// 00562570  ffd0                 call eax
// 00562572  83c408               add esp, 8
// 00562575  84c0                 test al, al
// 00562577  7492                 je 0x56250b
// 00562579  8bb694010000         mov esi, dword ptr [esi + 0x194]
// 0056257f  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00562582  41                   inc ecx
// 00562583  83e107               and ecx, 7
// 00562586  894e10               mov dword ptr [esi + 0x10], ecx
// 00562589  b001                 mov al, 1
// 0056258b  5e                   pop esi
// 0056258c  c3                   ret 
// library jpeg-6b/jdmarker.c (function _read_restart_marker)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
