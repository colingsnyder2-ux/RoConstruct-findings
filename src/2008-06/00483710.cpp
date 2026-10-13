// roc 2008-06 00483710  unit: G3D::Win32Window  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00483710
//
// 00483710  8b442404             mov eax, dword ptr [esp + 4]
// 00483714  3d508b0000           cmp eax, 0x8b50
// 00483719  7731                 ja 0x48374c
// 0048371b  7423                 je 0x483740
// 0048371d  0500ecffff           add eax, 0xffffec00
// 00483722  83f80a               cmp eax, 0xa
// 00483725  774e                 ja 0x483775
// 00483727  ff248578374800       jmp dword ptr [eax*4 + 0x483778]
// 0048372e  b802000000           mov eax, 2
// 00483733  c3                   ret 
// 00483734  b803000000           mov eax, 3
// 00483739  c3                   ret 
// 0048373a  b804000000           mov eax, 4
// 0048373f  c3                   ret 
// 00483740  b808000000           mov eax, 8
// 00483745  c3                   ret 
// 00483746  b801000000           mov eax, 1
// 0048374b  c3                   ret 
// 0048374c  05af74ffff           add eax, 0xffff74af
// 00483751  83f80b               cmp eax, 0xb
// 00483754  771f                 ja 0x483775
// 00483756  ff2485a4374800       jmp dword ptr [eax*4 + 0x4837a4]
// 0048375d  b80c000000           mov eax, 0xc
// 00483762  c3                   ret 
// 00483763  b810000000           mov eax, 0x10
// 00483768  c3                   ret 
// 00483769  b824000000           mov eax, 0x24
// 0048376e  c3                   ret 
// 0048376f  b840000000           mov eax, 0x40
// 00483774  c3                   ret 
// 00483775  33c0                 xor eax, eax
// 00483777  c3                   ret 
// 00483778  46                   inc esi
// 00483779  37                   aaa 
// 0048377a  48                   dec eax
// 0048377b  004637               add byte ptr [esi + 0x37], al
// 0048377e  48                   dec eax
// 0048377f  002e                 add byte ptr [esi], ch
// 00483781  37                   aaa 
// 00483782  48                   dec eax
// 00483783  002e                 add byte ptr [esi], ch
// 00483785  37                   aaa 
// 00483786  48                   dec eax
// 00483787  003a                 add byte ptr [edx], bh
// 00483789  37                   aaa 
// 0048378a  48                   dec eax
// 0048378b  003a                 add byte ptr [edx], bh
// 0048378d  37                   aaa 
// 0048378e  48                   dec eax
// 0048378f  003a                 add byte ptr [edx], bh
// 00483791  37                   aaa 
// 00483792  48                   dec eax
// 00483793  002e                 add byte ptr [esi], ch
// 00483795  37                   aaa 
// 00483796  48                   dec eax
// 00483797  003437               add byte ptr [edi + esi], dh
// 0048379a  48                   dec eax
// 0048379b  003a                 add byte ptr [edx], bh
// 0048379d  37                   aaa 
// 0048379e  48                   dec eax
// 0048379f  004037               add byte ptr [eax + 0x37], al
// 004837a2  48                   dec eax
// 004837a3  005d37               add byte ptr [ebp + 0x37], bl
// 004837a6  48                   dec eax
// 004837a7  006337               add byte ptr [ebx + 0x37], ah
// 004837aa  48                   dec eax
// 004837ab  004037               add byte ptr [eax + 0x37], al
// 004837ae  48                   dec eax
// 004837af  005d37               add byte ptr [ebp + 0x37], bl
// 004837b2  48                   dec eax
// 004837b3  006337               add byte ptr [ebx + 0x37], ah
// 004837b6  48                   dec eax
// 004837b7  007537               add byte ptr [ebp + 0x37], dh
// 004837ba  48                   dec eax
// 004837bb  007537               add byte ptr [ebp + 0x37], dh
// 004837be  48                   dec eax
// 004837bf  007537               add byte ptr [ebp + 0x37], dh
// 004837c2  48                   dec eax
// 004837c3  007537               add byte ptr [ebp + 0x37], dh
// 004837c6  48                   dec eax
// 004837c7  006337               add byte ptr [ebx + 0x37], ah
// 004837ca  48                   dec eax
// 004837cb  006937               add byte ptr [ecx + 0x37], ch
// 004837ce  48                   dec eax
// 004837cf  006f37               add byte ptr [edi + 0x37], ch
// 004837d2  48                   dec eax
// library g3d-6.09-rbx2008/GLG3Dcpp\getOpenGLState.cpp (function ?sizeOfGLFormat@G3D@@YAII@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09-rbx2008 GLG3Dcpp/getOpenGLState.cpp
