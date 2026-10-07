// roc 2008-06 00533c20  unit: seg_00530000  size: 255 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00533c20
//
// 00533c20  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00533c24  83e900               sub ecx, 0
// 00533c27  8b442404             mov eax, dword ptr [esp + 4]
// 00533c2b  56                   push esi
// 00533c2c  8bb08c010000         mov esi, dword ptr [eax + 0x18c]
// 00533c32  0f848d000000         je 0x533cc5
// 00533c38  83e902               sub ecx, 2
// 00533c3b  7458                 je 0x533c95
// 00533c3d  83e901               sub ecx, 1
// 00533c40  7423                 je 0x533c65
// 00533c42  8b08                 mov ecx, dword ptr [eax]
// 00533c44  c7411404000000       mov dword ptr [ecx + 0x14], 4
// 00533c4b  8b10                 mov edx, dword ptr [eax]
// 00533c4d  50                   push eax
// 00533c4e  8b02                 mov eax, dword ptr [edx]
// 00533c50  ffd0                 call eax
// 00533c52  83c404               add esp, 4
// 00533c55  c7461800000000       mov dword ptr [esi + 0x18], 0
// 00533c5c  c7461400000000       mov dword ptr [esi + 0x14], 0
// 00533c63  5e                   pop esi
// 00533c64  c3                   ret 
// 00533c65  837e0800             cmp dword ptr [esi + 8], 0
// 00533c69  7513                 jne 0x533c7e
// 00533c6b  8b08                 mov ecx, dword ptr [eax]
// 00533c6d  c7411404000000       mov dword ptr [ecx + 0x14], 4
// 00533c74  8b10                 mov edx, dword ptr [eax]
// 00533c76  50                   push eax
// 00533c77  8b02                 mov eax, dword ptr [edx]
// 00533c79  ffd0                 call eax
// 00533c7b  83c404               add esp, 4
// 00533c7e  c74604d03a5300       mov dword ptr [esi + 4], 0x533ad0
// 00533c85  c7461800000000       mov dword ptr [esi + 0x18], 0
// 00533c8c  c7461400000000       mov dword ptr [esi + 0x14], 0
// 00533c93  5e                   pop esi
// 00533c94  c3                   ret 
// 00533c95  837e0800             cmp dword ptr [esi + 8], 0
// 00533c99  7513                 jne 0x533cae
// 00533c9b  8b08                 mov ecx, dword ptr [eax]
// 00533c9d  c7411404000000       mov dword ptr [ecx + 0x14], 4
// 00533ca4  8b10                 mov edx, dword ptr [eax]
// 00533ca6  50                   push eax
// 00533ca7  8b02                 mov eax, dword ptr [edx]
// 00533ca9  ffd0                 call eax
// 00533cab  83c404               add esp, 4
// 00533cae  c74604803b5300       mov dword ptr [esi + 4], 0x533b80
// 00533cb5  c7461800000000       mov dword ptr [esi + 0x18], 0
// 00533cbc  c7461400000000       mov dword ptr [esi + 0x14], 0
// 00533cc3  5e                   pop esi
// 00533cc4  c3                   ret 
// 00533cc5  80784a00             cmp byte ptr [eax + 0x4a], 0
// 00533cc9  7438                 je 0x533d03
// 00533ccb  837e0c00             cmp dword ptr [esi + 0xc], 0
// 00533ccf  c74604503a5300       mov dword ptr [esi + 4], 0x533a50
// 00533cd6  7537                 jne 0x533d0f
// 00533cd8  8b5610               mov edx, dword ptr [esi + 0x10]
// 00533cdb  8b4804               mov ecx, dword ptr [eax + 4]
// 00533cde  6a01                 push 1
// 00533ce0  52                   push edx
// 00533ce1  8b5608               mov edx, dword ptr [esi + 8]
// 00533ce4  6a00                 push 0
// 00533ce6  52                   push edx
// 00533ce7  50                   push eax
// 00533ce8  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 00533ceb  ffd0                 call eax
// 00533ced  83c414               add esp, 0x14
// 00533cf0  89460c               mov dword ptr [esi + 0xc], eax
// 00533cf3  c7461800000000       mov dword ptr [esi + 0x18], 0
// 00533cfa  c7461400000000       mov dword ptr [esi + 0x14], 0
// 00533d01  5e                   pop esi
// 00533d02  c3                   ret 
// 00533d03  8b88a0010000         mov ecx, dword ptr [eax + 0x1a0]
// 00533d09  8b5104               mov edx, dword ptr [ecx + 4]
// 00533d0c  895604               mov dword ptr [esi + 4], edx
// 00533d0f  c7461800000000       mov dword ptr [esi + 0x18], 0
// 00533d16  c7461400000000       mov dword ptr [esi + 0x14], 0
// 00533d1d  5e                   pop esi
// 00533d1e  c3                   ret 
// library jpeg-6b/jdpostct.c (function _start_pass_dpost)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdpostct.c
