// roc 2007-03 00507da0  unit: seg_00500000  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00507da0
//
// 00507da0  56                   push esi
// 00507da1  8b742408             mov esi, dword ptr [esp + 8]
// 00507da5  83be7c01000000       cmp dword ptr [esi + 0x17c], 0
// 00507dac  7511                 jne 0x507dbf
// 00507dae  56                   push esi
// 00507daf  e88cfaffff           call 0x507840
// 00507db4  83c404               add esp, 4
// 00507db7  84c0                 test al, al
// 00507db9  7504                 jne 0x507dbf
// 00507dbb  32c0                 xor al, al
// 00507dbd  5e                   pop esi
// 00507dbe  c3                   ret 
// 00507dbf  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 00507dc5  8b4010               mov eax, dword ptr [eax + 0x10]
// 00507dc8  8d88d0000000         lea ecx, [eax + 0xd0]
// 00507dce  398e7c010000         cmp dword ptr [esi + 0x17c], ecx
// 00507dd4  7530                 jne 0x507e06
// 00507dd6  8b16                 mov edx, dword ptr [esi]
// 00507dd8  c7421462000000       mov dword ptr [edx + 0x14], 0x62
// 00507ddf  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 00507de5  8b0e                 mov ecx, dword ptr [esi]
// 00507de7  8b5010               mov edx, dword ptr [eax + 0x10]
// 00507dea  895118               mov dword ptr [ecx + 0x18], edx
// 00507ded  8b06                 mov eax, dword ptr [esi]
// 00507def  8b4804               mov ecx, dword ptr [eax + 4]
// 00507df2  6a03                 push 3
// 00507df4  56                   push esi
// 00507df5  ffd1                 call ecx
// 00507df7  83c408               add esp, 8
// 00507dfa  c7867c01000000000000 mov dword ptr [esi + 0x17c], 0
// 00507e04  eb11                 jmp 0x507e17
// 00507e06  8b5618               mov edx, dword ptr [esi + 0x18]
// 00507e09  50                   push eax
// 00507e0a  8b4214               mov eax, dword ptr [edx + 0x14]
// 00507e0d  56                   push esi
// 00507e0e  ffd0                 call eax
// 00507e10  83c408               add esp, 8
// 00507e13  84c0                 test al, al
// 00507e15  74a4                 je 0x507dbb
// 00507e17  8bb694010000         mov esi, dword ptr [esi + 0x194]
// 00507e1d  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00507e20  83c101               add ecx, 1
// 00507e23  83e107               and ecx, 7
// 00507e26  894e10               mov dword ptr [esi + 0x10], ecx
// 00507e29  b001                 mov al, 1
// 00507e2b  5e                   pop esi
// 00507e2c  c3                   ret 
// library jpeg-6b/jdmarker.c (function _read_restart_marker)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
