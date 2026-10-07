// roc 2008-06 0047f110  unit: G3D::Win32Window  size: 245 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0047f110
//
// 0047f110  c1f818               sar eax, 0x18
// 0047f113  8d4fbf               lea ecx, [edi - 0x41]
// 0047f116  2401                 and al, 1
// 0047f118  83f919               cmp ecx, 0x19
// 0047f11b  7705                 ja 0x47f122
// 0047f11d  8d5720               lea edx, [edi + 0x20]
// 0047f120  eb60                 jmp 0x47f182
// 0047f122  83ff10               cmp edi, 0x10
// 0047f125  7512                 jne 0x47f139
// 0047f127  33c9                 xor ecx, ecx
// 0047f129  84c0                 test al, al
// 0047f12b  0f94c1               sete cl
// 0047f12e  81c12f010000         add ecx, 0x12f
// 0047f134  894e08               mov dword ptr [esi + 8], ecx
// 0047f137  eb4c                 jmp 0x47f185
// 0047f139  83ff11               cmp edi, 0x11
// 0047f13c  750f                 jne 0x47f14d
// 0047f13e  33d2                 xor edx, edx
// 0047f140  84c0                 test al, al
// 0047f142  0f94c2               sete dl
// 0047f145  81c231010000         add edx, 0x131
// 0047f14b  eb35                 jmp 0x47f182
// 0047f14d  83ff12               cmp edi, 0x12
// 0047f150  7512                 jne 0x47f164
// 0047f152  33c9                 xor ecx, ecx
// 0047f154  84c0                 test al, al
// 0047f156  0f94c1               sete cl
// 0047f159  81c133010000         add ecx, 0x133
// 0047f15f  894e08               mov dword ptr [esi + 8], ecx
// 0047f162  eb21                 jmp 0x47f185
// 0047f164  85ff                 test edi, edi
// 0047f166  7f04                 jg 0x47f16c
// 0047f168  33c0                 xor eax, eax
// 0047f16a  eb0f                 jmp 0x47f17b
// 0047f16c  81ff43010000         cmp edi, 0x143
// 0047f172  b843010000           mov eax, 0x143
// 0047f177  7d02                 jge 0x47f17b
// 0047f179  8bc7                 mov eax, edi
// 0047f17b  8b148578f09600       mov edx, dword ptr [eax*4 + 0x96f078]
// 0047f182  895608               mov dword ptr [esi + 8], edx
// 0047f185  6a00                 push 0
// 0047f187  57                   push edi
// 0047f188  ff151c2d8000         call dword ptr [0x802d1c]
// 0047f18e  6890f59600           push 0x96f590
// 0047f193  884604               mov byte ptr [esi + 4], al
// 0047f196  ff15d82c8000         call dword ptr [0x802cd8]
// 0047f19c  b980000000           mov ecx, 0x80
// 0047f1a1  33c0                 xor eax, eax
// 0047f1a3  840d30f69600         test byte ptr [0x96f630], cl
// 0047f1a9  7403                 je 0x47f1ae
// 0047f1ab  8d4181               lea eax, [ecx - 0x7f]
// 0047f1ae  840d31f69600         test byte ptr [0x96f631], cl
// 0047f1b4  7403                 je 0x47f1b9
// 0047f1b6  83c802               or eax, 2
// 0047f1b9  840d32f69600         test byte ptr [0x96f632], cl
// 0047f1bf  7403                 je 0x47f1c4
// 0047f1c1  83c840               or eax, 0x40
// 0047f1c4  840d33f69600         test byte ptr [0x96f633], cl
// 0047f1ca  7402                 je 0x47f1ce
// 0047f1cc  0bc1                 or eax, ecx
// 0047f1ce  840d34f69600         test byte ptr [0x96f634], cl
// 0047f1d4  7405                 je 0x47f1db
// 0047f1d6  0d00010000           or eax, 0x100
// 0047f1db  840d35f69600         test byte ptr [0x96f635], cl
// 0047f1e1  7405                 je 0x47f1e8
// 0047f1e3  0d00020000           or eax, 0x200
// 0047f1e8  0fb64e04             movzx ecx, byte ptr [esi + 4]
// 0047f1ec  6a00                 push 0
// 0047f1ee  6a01                 push 1
// 0047f1f0  89460c               mov dword ptr [esi + 0xc], eax
// 0047f1f3  8d4610               lea eax, [esi + 0x10]
// 0047f1f6  50                   push eax
// 0047f1f7  6890f59600           push 0x96f590
// 0047f1fc  51                   push ecx
// 0047f1fd  57                   push edi
// 0047f1fe  ff15dc2c8000         call dword ptr [0x802cdc]
// 0047f204  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?makeKeyEvent@G3D@@YAXHHAATSDL_Event@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
