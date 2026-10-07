// roc 2009-06 0057eda0  unit: G3D::_internal::DialogTemplate  size: 157 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057eda0
//
// 0057eda0  56                   push esi
// 0057eda1  8b742408             mov esi, dword ptr [esp + 8]
// 0057eda5  83be7c01000000       cmp dword ptr [esi + 0x17c], 0
// 0057edac  7511                 jne 0x57edbf
// 0057edae  56                   push esi
// 0057edaf  e8acfaffff           call 0x57e860
// 0057edb4  83c404               add esp, 4
// 0057edb7  84c0                 test al, al
// 0057edb9  7504                 jne 0x57edbf
// 0057edbb  32c0                 xor al, al
// 0057edbd  5e                   pop esi
// 0057edbe  c3                   ret 
// 0057edbf  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 0057edc5  8b4010               mov eax, dword ptr [eax + 0x10]
// 0057edc8  8d88d0000000         lea ecx, [eax + 0xd0]
// 0057edce  398e7c010000         cmp dword ptr [esi + 0x17c], ecx
// 0057edd4  7542                 jne 0x57ee18
// 0057edd6  8b16                 mov edx, dword ptr [esi]
// 0057edd8  c7421462000000       mov dword ptr [edx + 0x14], 0x62
// 0057eddf  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 0057ede5  8b0e                 mov ecx, dword ptr [esi]
// 0057ede7  8b5010               mov edx, dword ptr [eax + 0x10]
// 0057edea  895118               mov dword ptr [ecx + 0x18], edx
// 0057eded  8b06                 mov eax, dword ptr [esi]
// 0057edef  8b4804               mov ecx, dword ptr [eax + 4]
// 0057edf2  6a03                 push 3
// 0057edf4  56                   push esi
// 0057edf5  ffd1                 call ecx
// 0057edf7  c7867c01000000000000 mov dword ptr [esi + 0x17c], 0
// 0057ee01  8bb694010000         mov esi, dword ptr [esi + 0x194]
// 0057ee07  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0057ee0a  83c408               add esp, 8
// 0057ee0d  41                   inc ecx
// 0057ee0e  83e107               and ecx, 7
// 0057ee11  894e10               mov dword ptr [esi + 0x10], ecx
// 0057ee14  b001                 mov al, 1
// 0057ee16  5e                   pop esi
// 0057ee17  c3                   ret 
// 0057ee18  8b5618               mov edx, dword ptr [esi + 0x18]
// 0057ee1b  50                   push eax
// 0057ee1c  8b4214               mov eax, dword ptr [edx + 0x14]
// 0057ee1f  56                   push esi
// 0057ee20  ffd0                 call eax
// 0057ee22  83c408               add esp, 8
// 0057ee25  84c0                 test al, al
// 0057ee27  7492                 je 0x57edbb
// 0057ee29  8bb694010000         mov esi, dword ptr [esi + 0x194]
// 0057ee2f  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0057ee32  41                   inc ecx
// 0057ee33  83e107               and ecx, 7
// 0057ee36  894e10               mov dword ptr [esi + 0x10], ecx
// 0057ee39  b001                 mov al, 1
// 0057ee3b  5e                   pop esi
// 0057ee3c  c3                   ret 
// library jpeg-6b/jdmarker.c (function _read_restart_marker)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
