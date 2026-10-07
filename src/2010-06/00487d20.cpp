// roc 2010-06 00487d20  unit: G3D::Win32Window  size: 245 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00487d20
//
// 00487d20  c1f818               sar eax, 0x18
// 00487d23  8d4fbf               lea ecx, [edi - 0x41]
// 00487d26  2401                 and al, 1
// 00487d28  83f919               cmp ecx, 0x19
// 00487d2b  7705                 ja 0x487d32
// 00487d2d  8d5720               lea edx, [edi + 0x20]
// 00487d30  eb60                 jmp 0x487d92
// 00487d32  83ff10               cmp edi, 0x10
// 00487d35  7512                 jne 0x487d49
// 00487d37  33c9                 xor ecx, ecx
// 00487d39  84c0                 test al, al
// 00487d3b  0f94c1               sete cl
// 00487d3e  81c12f010000         add ecx, 0x12f
// 00487d44  894e08               mov dword ptr [esi + 8], ecx
// 00487d47  eb4c                 jmp 0x487d95
// 00487d49  83ff11               cmp edi, 0x11
// 00487d4c  750f                 jne 0x487d5d
// 00487d4e  33d2                 xor edx, edx
// 00487d50  84c0                 test al, al
// 00487d52  0f94c2               sete dl
// 00487d55  81c231010000         add edx, 0x131
// 00487d5b  eb35                 jmp 0x487d92
// 00487d5d  83ff12               cmp edi, 0x12
// 00487d60  7512                 jne 0x487d74
// 00487d62  33c9                 xor ecx, ecx
// 00487d64  84c0                 test al, al
// 00487d66  0f94c1               sete cl
// 00487d69  81c133010000         add ecx, 0x133
// 00487d6f  894e08               mov dword ptr [esi + 8], ecx
// 00487d72  eb21                 jmp 0x487d95
// 00487d74  85ff                 test edi, edi
// 00487d76  7f04                 jg 0x487d7c
// 00487d78  33c0                 xor eax, eax
// 00487d7a  eb0f                 jmp 0x487d8b
// 00487d7c  81ff43010000         cmp edi, 0x143
// 00487d82  b843010000           mov eax, 0x143
// 00487d87  7d02                 jge 0x487d8b
// 00487d89  8bc7                 mov eax, edi
// 00487d8b  8b14853831c000       mov edx, dword ptr [eax*4 + 0xc03138]
// 00487d92  895608               mov dword ptr [esi + 8], edx
// 00487d95  6a00                 push 0
// 00487d97  57                   push edi
// 00487d98  ff1588bb9e00         call dword ptr [0x9ebb88]
// 00487d9e  685036c000           push 0xc03650
// 00487da3  884604               mov byte ptr [esi + 4], al
// 00487da6  ff158cbb9e00         call dword ptr [0x9ebb8c]
// 00487dac  b980000000           mov ecx, 0x80
// 00487db1  33c0                 xor eax, eax
// 00487db3  840df036c000         test byte ptr [0xc036f0], cl
// 00487db9  7403                 je 0x487dbe
// 00487dbb  8d4181               lea eax, [ecx - 0x7f]
// 00487dbe  840df136c000         test byte ptr [0xc036f1], cl
// 00487dc4  7403                 je 0x487dc9
// 00487dc6  83c802               or eax, 2
// 00487dc9  840df236c000         test byte ptr [0xc036f2], cl
// 00487dcf  7403                 je 0x487dd4
// 00487dd1  83c840               or eax, 0x40
// 00487dd4  840df336c000         test byte ptr [0xc036f3], cl
// 00487dda  7402                 je 0x487dde
// 00487ddc  0bc1                 or eax, ecx
// 00487dde  840df436c000         test byte ptr [0xc036f4], cl
// 00487de4  7405                 je 0x487deb
// 00487de6  0d00010000           or eax, 0x100
// 00487deb  840df536c000         test byte ptr [0xc036f5], cl
// 00487df1  7405                 je 0x487df8
// 00487df3  0d00020000           or eax, 0x200
// 00487df8  0fb64e04             movzx ecx, byte ptr [esi + 4]
// 00487dfc  6a00                 push 0
// 00487dfe  6a01                 push 1
// 00487e00  89460c               mov dword ptr [esi + 0xc], eax
// 00487e03  8d4610               lea eax, [esi + 0x10]
// 00487e06  50                   push eax
// 00487e07  685036c000           push 0xc03650
// 00487e0c  51                   push ecx
// 00487e0d  57                   push edi
// 00487e0e  ff1590bb9e00         call dword ptr [0x9ebb90]
// 00487e14  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?makeKeyEvent@G3D@@YAXHHAATSDL_Event@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
