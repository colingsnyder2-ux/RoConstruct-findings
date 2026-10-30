// from server: 100% by auto
// roc 2012-06 00643b40  unit: seg_00640000  size: 157 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00643b40
//
// 00643b40  56                   push esi
// 00643b41  8b742408             mov esi, dword ptr [esp + 8]
// 00643b45  83be7c01000000       cmp dword ptr [esi + 0x17c], 0
// 00643b4c  7511                 jne 0x643b5f
// 00643b4e  56                   push esi
// 00643b4f  e8acfaffff           call 0x643600
// 00643b54  83c404               add esp, 4
// 00643b57  84c0                 test al, al
// 00643b59  7504                 jne 0x643b5f
// 00643b5b  32c0                 xor al, al
// 00643b5d  5e                   pop esi
// 00643b5e  c3                   ret 
// 00643b5f  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 00643b65  8b4010               mov eax, dword ptr [eax + 0x10]
// 00643b68  8d88d0000000         lea ecx, [eax + 0xd0]
// 00643b6e  398e7c010000         cmp dword ptr [esi + 0x17c], ecx
// 00643b74  7542                 jne 0x643bb8
// 00643b76  8b16                 mov edx, dword ptr [esi]
// 00643b78  c7421462000000       mov dword ptr [edx + 0x14], 0x62
// 00643b7f  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 00643b85  8b0e                 mov ecx, dword ptr [esi]
// 00643b87  8b5010               mov edx, dword ptr [eax + 0x10]
// 00643b8a  895118               mov dword ptr [ecx + 0x18], edx
// 00643b8d  8b06                 mov eax, dword ptr [esi]
// 00643b8f  8b4804               mov ecx, dword ptr [eax + 4]
// 00643b92  6a03                 push 3
// 00643b94  56                   push esi
// 00643b95  ffd1                 call ecx
// 00643b97  c7867c01000000000000 mov dword ptr [esi + 0x17c], 0
// 00643ba1  8bb694010000         mov esi, dword ptr [esi + 0x194]
// 00643ba7  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00643baa  83c408               add esp, 8
// 00643bad  41                   inc ecx
// 00643bae  83e107               and ecx, 7
// 00643bb1  894e10               mov dword ptr [esi + 0x10], ecx
// 00643bb4  b001                 mov al, 1
// 00643bb6  5e                   pop esi
// 00643bb7  c3                   ret 
// 00643bb8  8b5618               mov edx, dword ptr [esi + 0x18]
// 00643bbb  50                   push eax
// 00643bbc  8b4214               mov eax, dword ptr [edx + 0x14]
// 00643bbf  56                   push esi
// 00643bc0  ffd0                 call eax
// 00643bc2  83c408               add esp, 8
// 00643bc5  84c0                 test al, al
// 00643bc7  7492                 je 0x643b5b
// 00643bc9  8bb694010000         mov esi, dword ptr [esi + 0x194]
// 00643bcf  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00643bd2  41                   inc ecx
// 00643bd3  83e107               and ecx, 7
// 00643bd6  894e10               mov dword ptr [esi + 0x10], ecx
// 00643bd9  b001                 mov al, 1
// 00643bdb  5e                   pop esi
// 00643bdc  c3                   ret 
// library jpeg-6b/jdmarker.c (function _read_restart_marker)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
