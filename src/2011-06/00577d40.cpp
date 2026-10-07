// roc 2011-06 00577d40  unit: seg_00570000  size: 255 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00577d40
//
// 00577d40  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00577d44  83e900               sub ecx, 0
// 00577d47  8b442404             mov eax, dword ptr [esp + 4]
// 00577d4b  56                   push esi
// 00577d4c  8bb08c010000         mov esi, dword ptr [eax + 0x18c]
// 00577d52  0f848d000000         je 0x577de5
// 00577d58  83e902               sub ecx, 2
// 00577d5b  7458                 je 0x577db5
// 00577d5d  83e901               sub ecx, 1
// 00577d60  7423                 je 0x577d85
// 00577d62  8b08                 mov ecx, dword ptr [eax]
// 00577d64  c7411404000000       mov dword ptr [ecx + 0x14], 4
// 00577d6b  8b10                 mov edx, dword ptr [eax]
// 00577d6d  50                   push eax
// 00577d6e  8b02                 mov eax, dword ptr [edx]
// 00577d70  ffd0                 call eax
// 00577d72  83c404               add esp, 4
// 00577d75  c7461800000000       mov dword ptr [esi + 0x18], 0
// 00577d7c  c7461400000000       mov dword ptr [esi + 0x14], 0
// 00577d83  5e                   pop esi
// 00577d84  c3                   ret 
// 00577d85  837e0800             cmp dword ptr [esi + 8], 0
// 00577d89  7513                 jne 0x577d9e
// 00577d8b  8b08                 mov ecx, dword ptr [eax]
// 00577d8d  c7411404000000       mov dword ptr [ecx + 0x14], 4
// 00577d94  8b10                 mov edx, dword ptr [eax]
// 00577d96  50                   push eax
// 00577d97  8b02                 mov eax, dword ptr [edx]
// 00577d99  ffd0                 call eax
// 00577d9b  83c404               add esp, 4
// 00577d9e  c74604f07b5700       mov dword ptr [esi + 4], 0x577bf0
// 00577da5  c7461800000000       mov dword ptr [esi + 0x18], 0
// 00577dac  c7461400000000       mov dword ptr [esi + 0x14], 0
// 00577db3  5e                   pop esi
// 00577db4  c3                   ret 
// 00577db5  837e0800             cmp dword ptr [esi + 8], 0
// 00577db9  7513                 jne 0x577dce
// 00577dbb  8b08                 mov ecx, dword ptr [eax]
// 00577dbd  c7411404000000       mov dword ptr [ecx + 0x14], 4
// 00577dc4  8b10                 mov edx, dword ptr [eax]
// 00577dc6  50                   push eax
// 00577dc7  8b02                 mov eax, dword ptr [edx]
// 00577dc9  ffd0                 call eax
// 00577dcb  83c404               add esp, 4
// 00577dce  c74604a07c5700       mov dword ptr [esi + 4], 0x577ca0
// 00577dd5  c7461800000000       mov dword ptr [esi + 0x18], 0
// 00577ddc  c7461400000000       mov dword ptr [esi + 0x14], 0
// 00577de3  5e                   pop esi
// 00577de4  c3                   ret 
// 00577de5  80784a00             cmp byte ptr [eax + 0x4a], 0
// 00577de9  7438                 je 0x577e23
// 00577deb  837e0c00             cmp dword ptr [esi + 0xc], 0
// 00577def  c74604707b5700       mov dword ptr [esi + 4], 0x577b70
// 00577df6  7537                 jne 0x577e2f
// 00577df8  8b5610               mov edx, dword ptr [esi + 0x10]
// 00577dfb  8b4804               mov ecx, dword ptr [eax + 4]
// 00577dfe  6a01                 push 1
// 00577e00  52                   push edx
// 00577e01  8b5608               mov edx, dword ptr [esi + 8]
// 00577e04  6a00                 push 0
// 00577e06  52                   push edx
// 00577e07  50                   push eax
// 00577e08  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 00577e0b  ffd0                 call eax
// 00577e0d  83c414               add esp, 0x14
// 00577e10  89460c               mov dword ptr [esi + 0xc], eax
// 00577e13  c7461800000000       mov dword ptr [esi + 0x18], 0
// 00577e1a  c7461400000000       mov dword ptr [esi + 0x14], 0
// 00577e21  5e                   pop esi
// 00577e22  c3                   ret 
// 00577e23  8b88a0010000         mov ecx, dword ptr [eax + 0x1a0]
// 00577e29  8b5104               mov edx, dword ptr [ecx + 4]
// 00577e2c  895604               mov dword ptr [esi + 4], edx
// 00577e2f  c7461800000000       mov dword ptr [esi + 0x18], 0
// 00577e36  c7461400000000       mov dword ptr [esi + 0x14], 0
// 00577e3d  5e                   pop esi
// 00577e3e  c3                   ret 
// library jpeg-6b/jdpostct.c (function _start_pass_dpost)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdpostct.c
