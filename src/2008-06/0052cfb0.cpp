// from server: 100% by auto
// roc 2008-06 0052cfb0  unit: seg_00520000  size: 444 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052cfb0
//
// 0052cfb0  83ec10               sub esp, 0x10
// 0052cfb3  53                   push ebx
// 0052cfb4  55                   push ebp
// 0052cfb5  56                   push esi
// 0052cfb6  8b742420             mov esi, dword ptr [esp + 0x20]
// 0052cfba  f6466801             test byte ptr [esi + 0x68], 1
// 0052cfbe  57                   push edi
// 0052cfbf  740e                 je 0x52cfcf
// 0052cfc1  686cbd8200           push 0x82bd6c
// 0052cfc6  56                   push esi
// 0052cfc7  e8e4c9ffff           call 0x5299b0
// 0052cfcc  83c408               add esp, 8
// 0052cfcf  837c242c0d           cmp dword ptr [esp + 0x2c], 0xd
// 0052cfd4  740e                 je 0x52cfe4
// 0052cfd6  6858bd8200           push 0x82bd58
// 0052cfdb  56                   push esi
// 0052cfdc  e8cfc9ffff           call 0x5299b0
// 0052cfe1  83c408               add esp, 8
// 0052cfe4  834e6801             or dword ptr [esi + 0x68], 1
// 0052cfe8  6a0d                 push 0xd
// 0052cfea  8d442414             lea eax, [esp + 0x14]
// 0052cfee  50                   push eax
// 0052cfef  56                   push esi
// 0052cff0  e8bb7affff           call 0x524ab0
// 0052cff5  6a0d                 push 0xd
// 0052cff7  8d4c2420             lea ecx, [esp + 0x20]
// 0052cffb  51                   push ecx
// 0052cffc  56                   push esi
// 0052cffd  e87e0dffff           call 0x51dd80
// 0052d002  6a00                 push 0
// 0052d004  56                   push esi
// 0052d005  e8d6feffff           call 0x52cee0
// 0052d00a  0fb67c2430           movzx edi, byte ptr [esp + 0x30]
// 0052d00f  0fb6542431           movzx edx, byte ptr [esp + 0x31]
// 0052d014  0fb6442432           movzx eax, byte ptr [esp + 0x32]
// 0052d019  0fb64c2433           movzx ecx, byte ptr [esp + 0x33]
// 0052d01e  c1e708               shl edi, 8
// 0052d021  03fa                 add edi, edx
// 0052d023  c1e708               shl edi, 8
// 0052d026  03f8                 add edi, eax
// 0052d028  c1e708               shl edi, 8
// 0052d02b  03f9                 add edi, ecx
// 0052d02d  83c420               add esp, 0x20
// 0052d030  81ffffffff7f         cmp edi, 0x7fffffff
// 0052d036  760e                 jbe 0x52d046
// 0052d038  6828bd8200           push 0x82bd28
// 0052d03d  56                   push esi
// 0052d03e  e86dc9ffff           call 0x5299b0
// 0052d043  83c408               add esp, 8
// 0052d046  0fb66c2414           movzx ebp, byte ptr [esp + 0x14]
// 0052d04b  0fb6542415           movzx edx, byte ptr [esp + 0x15]
// 0052d050  0fb6442416           movzx eax, byte ptr [esp + 0x16]
// 0052d055  0fb64c2417           movzx ecx, byte ptr [esp + 0x17]
// 0052d05a  c1e508               shl ebp, 8
// 0052d05d  03ea                 add ebp, edx
// 0052d05f  c1e508               shl ebp, 8
// 0052d062  03e8                 add ebp, eax
// 0052d064  c1e508               shl ebp, 8
// 0052d067  03e9                 add ebp, ecx
// 0052d069  81fdffffff7f         cmp ebp, 0x7fffffff
// 0052d06f  760e                 jbe 0x52d07f
// 0052d071  6828bd8200           push 0x82bd28
// 0052d076  56                   push esi
// 0052d077  e834c9ffff           call 0x5299b0
// 0052d07c  83c408               add esp, 8
// 0052d07f  0fb644241b           movzx eax, byte ptr [esp + 0x1b]
// 0052d084  0fb64c2419           movzx ecx, byte ptr [esp + 0x19]
// 0052d089  0fb6542418           movzx edx, byte ptr [esp + 0x18]
// 0052d08e  0fb65c241a           movzx ebx, byte ptr [esp + 0x1a]
// 0052d093  89442424             mov dword ptr [esp + 0x24], eax
// 0052d097  0fb644241c           movzx eax, byte ptr [esp + 0x1c]
// 0052d09c  8944242c             mov dword ptr [esp + 0x2c], eax
// 0052d0a0  888623010000         mov byte ptr [esi + 0x123], al
// 0052d0a6  8a442424             mov al, byte ptr [esp + 0x24]
// 0052d0aa  888638020000         mov byte ptr [esi + 0x238], al
// 0052d0b0  0fb6c1               movzx eax, cl
// 0052d0b3  89bec8000000         mov dword ptr [esi + 0xc8], edi
// 0052d0b9  89aecc000000         mov dword ptr [esi + 0xcc], ebp
// 0052d0bf  889627010000         mov byte ptr [esi + 0x127], dl
// 0052d0c5  888e26010000         mov byte ptr [esi + 0x126], cl
// 0052d0cb  889e60020000         mov byte ptr [esi + 0x260], bl
// 0052d0d1  83f806               cmp eax, 6
// 0052d0d4  7729                 ja 0x52d0ff
// 0052d0d6  ff248550d15200       jmp dword ptr [eax*4 + 0x52d150]
// 0052d0dd  c6862a01000001       mov byte ptr [esi + 0x12a], 1
// 0052d0e4  eb19                 jmp 0x52d0ff
// 0052d0e6  c6862a01000003       mov byte ptr [esi + 0x12a], 3
// 0052d0ed  eb10                 jmp 0x52d0ff
// 0052d0ef  c6862a01000002       mov byte ptr [esi + 0x12a], 2
// 0052d0f6  eb07                 jmp 0x52d0ff
// 0052d0f8  c6862a01000004       mov byte ptr [esi + 0x12a], 4
// 0052d0ff  8a862a010000         mov al, byte ptr [esi + 0x12a]
// 0052d105  f6ea                 imul dl
// 0052d107  888629010000         mov byte ptr [esi + 0x129], al
// 0052d10d  3c08                 cmp al, 8
// 0052d10f  0fb6c0               movzx eax, al
// 0052d112  7208                 jb 0x52d11c
// 0052d114  c1e803               shr eax, 3
// 0052d117  0fafc7               imul eax, edi
// 0052d11a  eb09                 jmp 0x52d125
// 0052d11c  0fafc7               imul eax, edi
// 0052d11f  83c007               add eax, 7
// 0052d122  c1e803               shr eax, 3
// 0052d125  8986d8000000         mov dword ptr [esi + 0xd8], eax
// 0052d12b  8b442424             mov eax, dword ptr [esp + 0x24]
// 0052d12f  50                   push eax
// 0052d130  8b442430             mov eax, dword ptr [esp + 0x30]
// 0052d134  53                   push ebx
// 0052d135  50                   push eax
// 0052d136  51                   push ecx
// 0052d137  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0052d13b  52                   push edx
// 0052d13c  55                   push ebp
// 0052d13d  57                   push edi
// 0052d13e  51                   push ecx
// 0052d13f  56                   push esi
// 0052d140  e83bfdfeff           call 0x51ce80
// 0052d145  83c424               add esp, 0x24
// 0052d148  5f                   pop edi
// 0052d149  5e                   pop esi
// 0052d14a  5d                   pop ebp
// 0052d14b  5b                   pop ebx
// 0052d14c  83c410               add esp, 0x10
// 0052d14f  c3                   ret 
// 0052d150  ddd0                 fst st(0)
// 0052d152  52                   push edx
// 0052d153  00ff                 add bh, bh
// 0052d155  d05200               rcl byte ptr [edx]
// 0052d158  e6d0                 out 0xd0, al
// 0052d15a  52                   push edx
// 0052d15b  00dd                 add ch, bl
// 0052d15d  d05200               rcl byte ptr [edx]
// 0052d160  ef                   out dx, eax
// 0052d161  d05200               rcl byte ptr [edx]
// 0052d164  ffd0                 call eax
// 0052d166  52                   push edx
// 0052d167  00f8                 add al, bh
// 0052d169  d05200               rcl byte ptr [edx]
// library libpng-1.2.6/pngrutil.c (function _png_handle_IHDR)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.6 pngrutil.c
