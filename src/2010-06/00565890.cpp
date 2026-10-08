// from server: 100% by auto
// roc 2010-06 00565890  unit: seg_00560000  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00565890
//
// 00565890  56                   push esi
// 00565891  8b742408             mov esi, dword ptr [esp + 8]
// 00565895  8b4614               mov eax, dword ptr [esi + 0x14]
// 00565898  3dcd000000           cmp eax, 0xcd
// 0056589d  7407                 je 0x5658a6
// 0056589f  3dce000000           cmp eax, 0xce
// 005658a4  7536                 jne 0x5658dc
// 005658a6  807e4000             cmp byte ptr [esi + 0x40], 0
// 005658aa  7530                 jne 0x5658dc
// 005658ac  8b4678               mov eax, dword ptr [esi + 0x78]
// 005658af  3b4660               cmp eax, dword ptr [esi + 0x60]
// 005658b2  7313                 jae 0x5658c7
// 005658b4  8b0e                 mov ecx, dword ptr [esi]
// 005658b6  c7411443000000       mov dword ptr [ecx + 0x14], 0x43
// 005658bd  8b16                 mov edx, dword ptr [esi]
// 005658bf  8b02                 mov eax, dword ptr [edx]
// 005658c1  56                   push esi
// 005658c2  ffd0                 call eax
// 005658c4  83c404               add esp, 4
// 005658c7  8b8e80010000         mov ecx, dword ptr [esi + 0x180]
// 005658cd  8b5104               mov edx, dword ptr [ecx + 4]
// 005658d0  56                   push esi
// 005658d1  ffd2                 call edx
// 005658d3  c74614d2000000       mov dword ptr [esi + 0x14], 0xd2
// 005658da  eb2f                 jmp 0x56590b
// 005658dc  3dcf000000           cmp eax, 0xcf
// 005658e1  7509                 jne 0x5658ec
// 005658e3  c74614d2000000       mov dword ptr [esi + 0x14], 0xd2
// 005658ea  eb22                 jmp 0x56590e
// 005658ec  3dd2000000           cmp eax, 0xd2
// 005658f1  741b                 je 0x56590e
// 005658f3  8b06                 mov eax, dword ptr [esi]
// 005658f5  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 005658fc  8b0e                 mov ecx, dword ptr [esi]
// 005658fe  8b5614               mov edx, dword ptr [esi + 0x14]
// 00565901  895118               mov dword ptr [ecx + 0x18], edx
// 00565904  8b06                 mov eax, dword ptr [esi]
// 00565906  8b08                 mov ecx, dword ptr [eax]
// 00565908  56                   push esi
// 00565909  ffd1                 call ecx
// 0056590b  83c404               add esp, 4
// 0056590e  8b9690010000         mov edx, dword ptr [esi + 0x190]
// 00565914  807a1100             cmp byte ptr [edx + 0x11], 0
// 00565918  7524                 jne 0x56593e
// 0056591a  8d9b00000000         lea ebx, [ebx]
// 00565920  8b8690010000         mov eax, dword ptr [esi + 0x190]
// 00565926  8b08                 mov ecx, dword ptr [eax]
// 00565928  56                   push esi
// 00565929  ffd1                 call ecx
// 0056592b  83c404               add esp, 4
// 0056592e  85c0                 test eax, eax
// 00565930  7422                 je 0x565954
// 00565932  8b9690010000         mov edx, dword ptr [esi + 0x190]
// 00565938  807a1100             cmp byte ptr [edx + 0x11], 0
// 0056593c  74e2                 je 0x565920
// 0056593e  8b4618               mov eax, dword ptr [esi + 0x18]
// 00565941  8b4818               mov ecx, dword ptr [eax + 0x18]
// 00565944  56                   push esi
// 00565945  ffd1                 call ecx
// 00565947  56                   push esi
// 00565948  e813ceffff           call 0x562760
// 0056594d  83c408               add esp, 8
// 00565950  b001                 mov al, 1
// 00565952  5e                   pop esi
// 00565953  c3                   ret 
// 00565954  32c0                 xor al, al
// 00565956  5e                   pop esi
// 00565957  c3                   ret 
// library jpeg-6b/jdapimin.c (function _jpeg_finish_decompress)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdapimin.c
