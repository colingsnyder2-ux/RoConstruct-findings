// roc 2009-12 004d5de0  unit: G3D::Win32Window  size: 245 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004d5de0
//
// 004d5de0  c1f818               sar eax, 0x18
// 004d5de3  8d4fbf               lea ecx, [edi - 0x41]
// 004d5de6  2401                 and al, 1
// 004d5de8  83f919               cmp ecx, 0x19
// 004d5deb  7705                 ja 0x4d5df2
// 004d5ded  8d5720               lea edx, [edi + 0x20]
// 004d5df0  eb60                 jmp 0x4d5e52
// 004d5df2  83ff10               cmp edi, 0x10
// 004d5df5  7512                 jne 0x4d5e09
// 004d5df7  33c9                 xor ecx, ecx
// 004d5df9  84c0                 test al, al
// 004d5dfb  0f94c1               sete cl
// 004d5dfe  81c12f010000         add ecx, 0x12f
// 004d5e04  894e08               mov dword ptr [esi + 8], ecx
// 004d5e07  eb4c                 jmp 0x4d5e55
// 004d5e09  83ff11               cmp edi, 0x11
// 004d5e0c  750f                 jne 0x4d5e1d
// 004d5e0e  33d2                 xor edx, edx
// 004d5e10  84c0                 test al, al
// 004d5e12  0f94c2               sete dl
// 004d5e15  81c231010000         add edx, 0x131
// 004d5e1b  eb35                 jmp 0x4d5e52
// 004d5e1d  83ff12               cmp edi, 0x12
// 004d5e20  7512                 jne 0x4d5e34
// 004d5e22  33c9                 xor ecx, ecx
// 004d5e24  84c0                 test al, al
// 004d5e26  0f94c1               sete cl
// 004d5e29  81c133010000         add ecx, 0x133
// 004d5e2f  894e08               mov dword ptr [esi + 8], ecx
// 004d5e32  eb21                 jmp 0x4d5e55
// 004d5e34  85ff                 test edi, edi
// 004d5e36  7f04                 jg 0x4d5e3c
// 004d5e38  33c0                 xor eax, eax
// 004d5e3a  eb0f                 jmp 0x4d5e4b
// 004d5e3c  81ff43010000         cmp edi, 0x143
// 004d5e42  b843010000           mov eax, 0x143
// 004d5e47  7d02                 jge 0x4d5e4b
// 004d5e49  8bc7                 mov eax, edi
// 004d5e4b  8b148588d1b700       mov edx, dword ptr [eax*4 + 0xb7d188]
// 004d5e52  895608               mov dword ptr [esi + 8], edx
// 004d5e55  6a00                 push 0
// 004d5e57  57                   push edi
// 004d5e58  ff15fcc99800         call dword ptr [0x98c9fc]
// 004d5e5e  68a0d6b700           push 0xb7d6a0
// 004d5e63  884604               mov byte ptr [esi + 4], al
// 004d5e66  ff1500ca9800         call dword ptr [0x98ca00]
// 004d5e6c  b980000000           mov ecx, 0x80
// 004d5e71  33c0                 xor eax, eax
// 004d5e73  840d40d7b700         test byte ptr [0xb7d740], cl
// 004d5e79  7403                 je 0x4d5e7e
// 004d5e7b  8d4181               lea eax, [ecx - 0x7f]
// 004d5e7e  840d41d7b700         test byte ptr [0xb7d741], cl
// 004d5e84  7403                 je 0x4d5e89
// 004d5e86  83c802               or eax, 2
// 004d5e89  840d42d7b700         test byte ptr [0xb7d742], cl
// 004d5e8f  7403                 je 0x4d5e94
// 004d5e91  83c840               or eax, 0x40
// 004d5e94  840d43d7b700         test byte ptr [0xb7d743], cl
// 004d5e9a  7402                 je 0x4d5e9e
// 004d5e9c  0bc1                 or eax, ecx
// 004d5e9e  840d44d7b700         test byte ptr [0xb7d744], cl
// 004d5ea4  7405                 je 0x4d5eab
// 004d5ea6  0d00010000           or eax, 0x100
// 004d5eab  840d45d7b700         test byte ptr [0xb7d745], cl
// 004d5eb1  7405                 je 0x4d5eb8
// 004d5eb3  0d00020000           or eax, 0x200
// 004d5eb8  0fb64e04             movzx ecx, byte ptr [esi + 4]
// 004d5ebc  6a00                 push 0
// 004d5ebe  6a01                 push 1
// 004d5ec0  89460c               mov dword ptr [esi + 0xc], eax
// 004d5ec3  8d4610               lea eax, [esi + 0x10]
// 004d5ec6  50                   push eax
// 004d5ec7  68a0d6b700           push 0xb7d6a0
// 004d5ecc  51                   push ecx
// 004d5ecd  57                   push edi
// 004d5ece  ff1504ca9800         call dword ptr [0x98ca04]
// 004d5ed4  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?makeKeyEvent@G3D@@YAXHHAATSDL_Event@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
