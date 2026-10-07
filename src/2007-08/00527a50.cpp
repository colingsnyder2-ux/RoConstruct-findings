// roc 2007-08 00527a50  unit: G3D::Line  size: 255 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00527a50
//
// 00527a50  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00527a54  83e900               sub ecx, 0
// 00527a57  8b442404             mov eax, dword ptr [esp + 4]
// 00527a5b  56                   push esi
// 00527a5c  8bb08c010000         mov esi, dword ptr [eax + 0x18c]
// 00527a62  0f848d000000         je 0x527af5
// 00527a68  83e902               sub ecx, 2
// 00527a6b  7458                 je 0x527ac5
// 00527a6d  83e901               sub ecx, 1
// 00527a70  7423                 je 0x527a95
// 00527a72  8b08                 mov ecx, dword ptr [eax]
// 00527a74  c7411404000000       mov dword ptr [ecx + 0x14], 4
// 00527a7b  8b10                 mov edx, dword ptr [eax]
// 00527a7d  50                   push eax
// 00527a7e  8b02                 mov eax, dword ptr [edx]
// 00527a80  ffd0                 call eax
// 00527a82  83c404               add esp, 4
// 00527a85  c7461800000000       mov dword ptr [esi + 0x18], 0
// 00527a8c  c7461400000000       mov dword ptr [esi + 0x14], 0
// 00527a93  5e                   pop esi
// 00527a94  c3                   ret 
// 00527a95  837e0800             cmp dword ptr [esi + 8], 0
// 00527a99  7513                 jne 0x527aae
// 00527a9b  8b08                 mov ecx, dword ptr [eax]
// 00527a9d  c7411404000000       mov dword ptr [ecx + 0x14], 4
// 00527aa4  8b10                 mov edx, dword ptr [eax]
// 00527aa6  50                   push eax
// 00527aa7  8b02                 mov eax, dword ptr [edx]
// 00527aa9  ffd0                 call eax
// 00527aab  83c404               add esp, 4
// 00527aae  c7460400795200       mov dword ptr [esi + 4], 0x527900
// 00527ab5  c7461800000000       mov dword ptr [esi + 0x18], 0
// 00527abc  c7461400000000       mov dword ptr [esi + 0x14], 0
// 00527ac3  5e                   pop esi
// 00527ac4  c3                   ret 
// 00527ac5  837e0800             cmp dword ptr [esi + 8], 0
// 00527ac9  7513                 jne 0x527ade
// 00527acb  8b08                 mov ecx, dword ptr [eax]
// 00527acd  c7411404000000       mov dword ptr [ecx + 0x14], 4
// 00527ad4  8b10                 mov edx, dword ptr [eax]
// 00527ad6  50                   push eax
// 00527ad7  8b02                 mov eax, dword ptr [edx]
// 00527ad9  ffd0                 call eax
// 00527adb  83c404               add esp, 4
// 00527ade  c74604b0795200       mov dword ptr [esi + 4], 0x5279b0
// 00527ae5  c7461800000000       mov dword ptr [esi + 0x18], 0
// 00527aec  c7461400000000       mov dword ptr [esi + 0x14], 0
// 00527af3  5e                   pop esi
// 00527af4  c3                   ret 
// 00527af5  80784a00             cmp byte ptr [eax + 0x4a], 0
// 00527af9  7438                 je 0x527b33
// 00527afb  837e0c00             cmp dword ptr [esi + 0xc], 0
// 00527aff  c7460480785200       mov dword ptr [esi + 4], 0x527880
// 00527b06  7537                 jne 0x527b3f
// 00527b08  8b5610               mov edx, dword ptr [esi + 0x10]
// 00527b0b  8b4804               mov ecx, dword ptr [eax + 4]
// 00527b0e  6a01                 push 1
// 00527b10  52                   push edx
// 00527b11  8b5608               mov edx, dword ptr [esi + 8]
// 00527b14  6a00                 push 0
// 00527b16  52                   push edx
// 00527b17  50                   push eax
// 00527b18  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 00527b1b  ffd0                 call eax
// 00527b1d  83c414               add esp, 0x14
// 00527b20  89460c               mov dword ptr [esi + 0xc], eax
// 00527b23  c7461800000000       mov dword ptr [esi + 0x18], 0
// 00527b2a  c7461400000000       mov dword ptr [esi + 0x14], 0
// 00527b31  5e                   pop esi
// 00527b32  c3                   ret 
// 00527b33  8b88a0010000         mov ecx, dword ptr [eax + 0x1a0]
// 00527b39  8b5104               mov edx, dword ptr [ecx + 4]
// 00527b3c  895604               mov dword ptr [esi + 4], edx
// 00527b3f  c7461800000000       mov dword ptr [esi + 0x18], 0
// 00527b46  c7461400000000       mov dword ptr [esi + 0x14], 0
// 00527b4d  5e                   pop esi
// 00527b4e  c3                   ret 
// library jpeg-6b/jdpostct.c (function _start_pass_dpost)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdpostct.c
