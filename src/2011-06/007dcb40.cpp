// roc 2011-06 007dcb40  unit: seg_007d0000  size: 296 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007dcb40
//
// 007dcb40  83ec24               sub esp, 0x24
// 007dcb43  55                   push ebp
// 007dcb44  56                   push esi
// 007dcb45  8bf0                 mov esi, eax
// 007dcb47  8b6e30               mov ebp, dword ptr [esi + 0x30]
// 007dcb4a  57                   push edi
// 007dcb4b  56                   push esi
// 007dcb4c  e8cf300000           call 0x7dfc20
// 007dcb51  55                   push ebp
// 007dcb52  e8b9540100           call 0x7f2010
// 007dcb57  8bf8                 mov edi, eax
// 007dcb59  6a00                 push 0
// 007dcb5b  8d442424             lea eax, [esp + 0x24]
// 007dcb5f  50                   push eax
// 007dcb60  56                   push esi
// 007dcb61  e81afcffff           call 0x7dc780
// 007dcb66  83c414               add esp, 0x14
// 007dcb69  837c241801           cmp dword ptr [esp + 0x18], 1
// 007dcb6e  7508                 jne 0x7dcb78
// 007dcb70  c744241803000000     mov dword ptr [esp + 0x18], 3
// 007dcb78  8b5630               mov edx, dword ptr [esi + 0x30]
// 007dcb7b  8d4c2418             lea ecx, [esp + 0x18]
// 007dcb7f  51                   push ecx
// 007dcb80  52                   push edx
// 007dcb81  e89a660100           call 0x7f3220
// 007dcb86  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 007dcb8e  c644241e01           mov byte ptr [esp + 0x1e], 1
// 007dcb93  8a4532               mov al, byte ptr [ebp + 0x32]
// 007dcb96  8844241c             mov byte ptr [esp + 0x1c], al
// 007dcb9a  c644241d00           mov byte ptr [esp + 0x1d], 0
// 007dcb9f  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 007dcba2  8d542414             lea edx, [esp + 0x14]
// 007dcba6  894c2414             mov dword ptr [esp + 0x14], ecx
// 007dcbaa  83c408               add esp, 8
// 007dcbad  895514               mov dword ptr [ebp + 0x14], edx
// 007dcbb0  817e1003010000       cmp dword ptr [esi + 0x10], 0x103
// 007dcbb7  7424                 je 0x7dcbdd
// 007dcbb9  6803010000           push 0x103
// 007dcbbe  56                   push esi
// 007dcbbf  e8ac1d0000           call 0x7de970
// 007dcbc4  50                   push eax
// 007dcbc5  8b4634               mov eax, dword ptr [esi + 0x34]
// 007dcbc8  682ce1ab00           push 0xabe12c
// 007dcbcd  50                   push eax
// 007dcbce  e84d02faff           call 0x77ce20
// 007dcbd3  50                   push eax
// 007dcbd4  56                   push esi
// 007dcbd5  e8961e0000           call 0x7dea70
// 007dcbda  83c41c               add esp, 0x1c
// 007dcbdd  56                   push esi
// 007dcbde  e83d300000           call 0x7dfc20
// 007dcbe3  83c404               add esp, 4
// 007dcbe6  8bc6                 mov eax, esi
// 007dcbe8  e8b3fcffff           call 0x7dc8a0
// 007dcbed  57                   push edi
// 007dcbee  55                   push ebp
// 007dcbef  e84c5d0100           call 0x7f2940
// 007dcbf4  83c404               add esp, 4
// 007dcbf7  50                   push eax
// 007dcbf8  55                   push ebp
// 007dcbf9  e8d26d0100           call 0x7f39d0
// 007dcbfe  8b442440             mov eax, dword ptr [esp + 0x40]
// 007dcc02  6815010000           push 0x115
// 007dcc07  bf06010000           mov edi, 0x106
// 007dcc0c  e85fe3ffff           call 0x7daf70
// 007dcc11  8b7514               mov esi, dword ptr [ebp + 0x14]
// 007dcc14  8b0e                 mov ecx, dword ptr [esi]
// 007dcc16  8b450c               mov eax, dword ptr [ebp + 0xc]
// 007dcc19  894d14               mov dword ptr [ebp + 0x14], ecx
// 007dcc1c  0fb65608             movzx edx, byte ptr [esi + 8]
// 007dcc20  83c410               add esp, 0x10
// 007dcc23  e818e5ffff           call 0x7db140
// 007dcc28  807e0900             cmp byte ptr [esi + 9], 0
// 007dcc2c  7414                 je 0x7dcc42
// 007dcc2e  0fb65608             movzx edx, byte ptr [esi + 8]
// 007dcc32  6a00                 push 0
// 007dcc34  6a00                 push 0
// 007dcc36  52                   push edx
// 007dcc37  6a23                 push 0x23
// 007dcc39  55                   push ebp
// 007dcc3a  e8715b0100           call 0x7f27b0
// 007dcc3f  83c414               add esp, 0x14
// 007dcc42  0fb64532             movzx eax, byte ptr [ebp + 0x32]
// 007dcc46  894524               mov dword ptr [ebp + 0x24], eax
// 007dcc49  8b4e04               mov ecx, dword ptr [esi + 4]
// 007dcc4c  51                   push ecx
// 007dcc4d  55                   push ebp
// 007dcc4e  e8bd5d0100           call 0x7f2a10
// 007dcc53  8b542434             mov edx, dword ptr [esp + 0x34]
// 007dcc57  52                   push edx
// 007dcc58  55                   push ebp
// 007dcc59  e8b25d0100           call 0x7f2a10
// 007dcc5e  83c410               add esp, 0x10
// 007dcc61  5f                   pop edi
// 007dcc62  5e                   pop esi
// 007dcc63  5d                   pop ebp
// 007dcc64  83c424               add esp, 0x24
// 007dcc67  c3                   ret 
// library lua-5.1.4/lparser.c (function _whilestat)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
