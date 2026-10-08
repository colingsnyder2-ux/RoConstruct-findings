// roc 2007-03 0050ace0  unit: seg_00500000  size: 242 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0050ace0
//
// 0050ace0  8b442408             mov eax, dword ptr [esp + 8]
// 0050ace4  53                   push ebx
// 0050ace5  55                   push ebp
// 0050ace6  56                   push esi
// 0050ace7  8b742410             mov esi, dword ptr [esp + 0x10]
// 0050aceb  57                   push edi
// 0050acec  33ff                 xor edi, edi
// 0050acee  83f83e               cmp eax, 0x3e
// 0050acf1  897e04               mov dword ptr [esi + 4], edi
// 0050acf4  7421                 je 0x50ad17
// 0050acf6  8b0e                 mov ecx, dword ptr [esi]
// 0050acf8  c741140c000000       mov dword ptr [ecx + 0x14], 0xc
// 0050acff  8b16                 mov edx, dword ptr [esi]
// 0050ad01  c742183e000000       mov dword ptr [edx + 0x18], 0x3e
// 0050ad08  8b0e                 mov ecx, dword ptr [esi]
// 0050ad0a  89411c               mov dword ptr [ecx + 0x1c], eax
// 0050ad0d  8b16                 mov edx, dword ptr [esi]
// 0050ad0f  8b02                 mov eax, dword ptr [edx]
// 0050ad11  56                   push esi
// 0050ad12  ffd0                 call eax
// 0050ad14  83c404               add esp, 4
// 0050ad17  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0050ad1b  3db0010000           cmp eax, 0x1b0
// 0050ad20  7421                 je 0x50ad43
// 0050ad22  8b0e                 mov ecx, dword ptr [esi]
// 0050ad24  c7411415000000       mov dword ptr [ecx + 0x14], 0x15
// 0050ad2b  8b16                 mov edx, dword ptr [esi]
// 0050ad2d  c74218b0010000       mov dword ptr [edx + 0x18], 0x1b0
// 0050ad34  8b0e                 mov ecx, dword ptr [esi]
// 0050ad36  89411c               mov dword ptr [ecx + 0x1c], eax
// 0050ad39  8b16                 mov edx, dword ptr [esi]
// 0050ad3b  8b02                 mov eax, dword ptr [edx]
// 0050ad3d  56                   push esi
// 0050ad3e  ffd0                 call eax
// 0050ad40  83c404               add esp, 4
// 0050ad43  8b1e                 mov ebx, dword ptr [esi]
// 0050ad45  8b6e0c               mov ebp, dword ptr [esi + 0xc]
// 0050ad48  68b0010000           push 0x1b0
// 0050ad4d  57                   push edi
// 0050ad4e  56                   push esi
// 0050ad4f  e8c8421100           call 0x61f01c
// 0050ad54  56                   push esi
// 0050ad55  891e                 mov dword ptr [esi], ebx
// 0050ad57  896e0c               mov dword ptr [esi + 0xc], ebp
// 0050ad5a  c6461001             mov byte ptr [esi + 0x10], 1
// 0050ad5e  e8edf30000           call 0x51a150
// 0050ad63  897e08               mov dword ptr [esi + 8], edi
// 0050ad66  897e18               mov dword ptr [esi + 0x18], edi
// 0050ad69  89be90000000         mov dword ptr [esi + 0x90], edi
// 0050ad6f  89be94000000         mov dword ptr [esi + 0x94], edi
// 0050ad75  89be98000000         mov dword ptr [esi + 0x98], edi
// 0050ad7b  89be9c000000         mov dword ptr [esi + 0x9c], edi
// 0050ad81  89bea0000000         mov dword ptr [esi + 0xa0], edi
// 0050ad87  89beb0000000         mov dword ptr [esi + 0xb0], edi
// 0050ad8d  89bea4000000         mov dword ptr [esi + 0xa4], edi
// 0050ad93  89beb4000000         mov dword ptr [esi + 0xb4], edi
// 0050ad99  89bea8000000         mov dword ptr [esi + 0xa8], edi
// 0050ad9f  89beb8000000         mov dword ptr [esi + 0xb8], edi
// 0050ada5  89beac000000         mov dword ptr [esi + 0xac], edi
// 0050adab  89bebc000000         mov dword ptr [esi + 0xbc], edi
// 0050adb1  56                   push esi
// 0050adb2  89be0c010000         mov dword ptr [esi + 0x10c], edi
// 0050adb8  e8a3d1ffff           call 0x507f60
// 0050adbd  56                   push esi
// 0050adbe  e84de80000           call 0x519610
// 0050adc3  83c418               add esp, 0x18
// 0050adc6  5f                   pop edi
// 0050adc7  c74614c8000000       mov dword ptr [esi + 0x14], 0xc8
// 0050adce  5e                   pop esi
// 0050adcf  5d                   pop ebp
// 0050add0  5b                   pop ebx
// 0050add1  c3                   ret 
// library jpeg-6b/jdapimin.c (function _jpeg_CreateDecompress)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdapimin.c
