// roc 2011-06 00556cc0  unit: seg_00550000  size: 157 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00556cc0
//
// 00556cc0  56                   push esi
// 00556cc1  8b742408             mov esi, dword ptr [esp + 8]
// 00556cc5  83be7c01000000       cmp dword ptr [esi + 0x17c], 0
// 00556ccc  7511                 jne 0x556cdf
// 00556cce  56                   push esi
// 00556ccf  e8acfaffff           call 0x556780
// 00556cd4  83c404               add esp, 4
// 00556cd7  84c0                 test al, al
// 00556cd9  7504                 jne 0x556cdf
// 00556cdb  32c0                 xor al, al
// 00556cdd  5e                   pop esi
// 00556cde  c3                   ret 
// 00556cdf  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 00556ce5  8b4010               mov eax, dword ptr [eax + 0x10]
// 00556ce8  8d88d0000000         lea ecx, [eax + 0xd0]
// 00556cee  398e7c010000         cmp dword ptr [esi + 0x17c], ecx
// 00556cf4  7542                 jne 0x556d38
// 00556cf6  8b16                 mov edx, dword ptr [esi]
// 00556cf8  c7421462000000       mov dword ptr [edx + 0x14], 0x62
// 00556cff  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 00556d05  8b0e                 mov ecx, dword ptr [esi]
// 00556d07  8b5010               mov edx, dword ptr [eax + 0x10]
// 00556d0a  895118               mov dword ptr [ecx + 0x18], edx
// 00556d0d  8b06                 mov eax, dword ptr [esi]
// 00556d0f  8b4804               mov ecx, dword ptr [eax + 4]
// 00556d12  6a03                 push 3
// 00556d14  56                   push esi
// 00556d15  ffd1                 call ecx
// 00556d17  c7867c01000000000000 mov dword ptr [esi + 0x17c], 0
// 00556d21  8bb694010000         mov esi, dword ptr [esi + 0x194]
// 00556d27  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00556d2a  83c408               add esp, 8
// 00556d2d  41                   inc ecx
// 00556d2e  83e107               and ecx, 7
// 00556d31  894e10               mov dword ptr [esi + 0x10], ecx
// 00556d34  b001                 mov al, 1
// 00556d36  5e                   pop esi
// 00556d37  c3                   ret 
// 00556d38  8b5618               mov edx, dword ptr [esi + 0x18]
// 00556d3b  50                   push eax
// 00556d3c  8b4214               mov eax, dword ptr [edx + 0x14]
// 00556d3f  56                   push esi
// 00556d40  ffd0                 call eax
// 00556d42  83c408               add esp, 8
// 00556d45  84c0                 test al, al
// 00556d47  7492                 je 0x556cdb
// 00556d49  8bb694010000         mov esi, dword ptr [esi + 0x194]
// 00556d4f  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00556d52  41                   inc ecx
// 00556d53  83e107               and ecx, 7
// 00556d56  894e10               mov dword ptr [esi + 0x10], ecx
// 00556d59  b001                 mov al, 1
// 00556d5b  5e                   pop esi
// 00556d5c  c3                   ret 
// library jpeg-6b/jdmarker.c (function _read_restart_marker)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
