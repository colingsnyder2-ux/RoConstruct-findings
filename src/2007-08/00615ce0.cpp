// from server: 100% by auto
// roc 2007-08 00615ce0  unit: seg_00610000  size: 631 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00615ce0
//
// 00615ce0  83ec24               sub esp, 0x24
// 00615ce3  8b4330               mov eax, dword ptr [ebx + 0x30]
// 00615ce6  55                   push ebp
// 00615ce7  56                   push esi
// 00615ce8  57                   push edi
// 00615ce9  6a0f                 push 0xf
// 00615ceb  89442414             mov dword ptr [esp + 0x14], eax
// 00615cef  8b4024               mov eax, dword ptr [eax + 0x24]
// 00615cf2  689c357c00           push 0x7c359c
// 00615cf7  53                   push ebx
// 00615cf8  89442420             mov dword ptr [esp + 0x20], eax
// 00615cfc  e8df180000           call 0x6175e0
// 00615d01  8b7330               mov esi, dword ptr [ebx + 0x30]
// 00615d04  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 00615d08  83c101               add ecx, 1
// 00615d0b  83c40c               add esp, 0xc
// 00615d0e  81f9c8000000         cmp ecx, 0xc8
// 00615d14  8bf8                 mov edi, eax
// 00615d16  7e0f                 jle 0x615d27
// 00615d18  b914347c00           mov ecx, 0x7c3414
// 00615d1d  bac8000000           mov edx, 0xc8
// 00615d22  e8a9ddffff           call 0x613ad0
// 00615d27  57                   push edi
// 00615d28  53                   push ebx
// 00615d29  e8e2deffff           call 0x613c10
// 00615d2e  0fb65632             movzx edx, byte ptr [esi + 0x32]
// 00615d32  6a0b                 push 0xb
// 00615d34  6890357c00           push 0x7c3590
// 00615d39  53                   push ebx
// 00615d3a  66898456ac000000     mov word ptr [esi + edx*2 + 0xac], ax
// 00615d42  e899180000           call 0x6175e0
// 00615d47  8b7330               mov esi, dword ptr [ebx + 0x30]
// 00615d4a  8bf8                 mov edi, eax
// 00615d4c  0fb64632             movzx eax, byte ptr [esi + 0x32]
// 00615d50  83c002               add eax, 2
// 00615d53  83c414               add esp, 0x14
// 00615d56  3dc8000000           cmp eax, 0xc8
// 00615d5b  7e0f                 jle 0x615d6c
// 00615d5d  b914347c00           mov ecx, 0x7c3414
// 00615d62  bac8000000           mov edx, 0xc8
// 00615d67  e864ddffff           call 0x613ad0
// 00615d6c  57                   push edi
// 00615d6d  53                   push ebx
// 00615d6e  e89ddeffff           call 0x613c10
// 00615d73  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 00615d77  6a0d                 push 0xd
// 00615d79  6880357c00           push 0x7c3580
// 00615d7e  53                   push ebx
// 00615d7f  6689844eae000000     mov word ptr [esi + ecx*2 + 0xae], ax
// 00615d87  e854180000           call 0x6175e0
// 00615d8c  8b7330               mov esi, dword ptr [ebx + 0x30]
// 00615d8f  0fb65632             movzx edx, byte ptr [esi + 0x32]
// 00615d93  83c203               add edx, 3
// 00615d96  83c414               add esp, 0x14
// 00615d99  81fac8000000         cmp edx, 0xc8
// 00615d9f  8bf8                 mov edi, eax
// 00615da1  7e0f                 jle 0x615db2
// 00615da3  b914347c00           mov ecx, 0x7c3414
// 00615da8  bac8000000           mov edx, 0xc8
// 00615dad  e81eddffff           call 0x613ad0
// 00615db2  57                   push edi
// 00615db3  53                   push ebx
// 00615db4  e857deffff           call 0x613c10
// 00615db9  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 00615dbd  6689844eb0000000     mov word ptr [esi + ecx*2 + 0xb0], ax
// 00615dc5  8b7330               mov esi, dword ptr [ebx + 0x30]
// 00615dc8  0fb65632             movzx edx, byte ptr [esi + 0x32]
// 00615dcc  83c204               add edx, 4
// 00615dcf  83c408               add esp, 8
// 00615dd2  81fac8000000         cmp edx, 0xc8
// 00615dd8  7e0f                 jle 0x615de9
// 00615dda  b914347c00           mov ecx, 0x7c3414
// 00615ddf  bac8000000           mov edx, 0xc8
// 00615de4  e8e7dcffff           call 0x613ad0
// 00615de9  8b442434             mov eax, dword ptr [esp + 0x34]
// 00615ded  50                   push eax
// 00615dee  53                   push ebx
// 00615def  e81cdeffff           call 0x613c10
// 00615df4  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 00615df8  83c408               add esp, 8
// 00615dfb  6689844eb2000000     mov word ptr [esi + ecx*2 + 0xb2], ax
// 00615e03  bf04000000           mov edi, 4
// 00615e08  eb06                 jmp 0x615e10
// 00615e0a  8d9b00000000         lea ebx, [ebx]
// 00615e10  837b102c             cmp dword ptr [ebx + 0x10], 0x2c
// 00615e14  0f85bc000000         jne 0x615ed6
// 00615e1a  53                   push ebx
// 00615e1b  e8d02b0000           call 0x6189f0
// 00615e20  83c404               add esp, 4
// 00615e23  817b101d010000       cmp dword ptr [ebx + 0x10], 0x11d
// 00615e2a  7424                 je 0x615e50
// 00615e2c  681d010000           push 0x11d
// 00615e31  53                   push ebx
// 00615e32  e889160000           call 0x6174c0
// 00615e37  8b5334               mov edx, dword ptr [ebx + 0x34]
// 00615e3a  50                   push eax
// 00615e3b  6870337c00           push 0x7c3370
// 00615e40  52                   push edx
// 00615e41  e84a90ffff           call 0x60ee90
// 00615e46  50                   push eax
// 00615e47  53                   push ebx
// 00615e48  e873170000           call 0x6175c0
// 00615e4d  83c41c               add esp, 0x1c
// 00615e50  8b6b18               mov ebp, dword ptr [ebx + 0x18]
// 00615e53  53                   push ebx
// 00615e54  e8972b0000           call 0x6189f0
// 00615e59  8b7330               mov esi, dword ptr [ebx + 0x30]
// 00615e5c  0fb64632             movzx eax, byte ptr [esi + 0x32]
// 00615e60  8d4c3801             lea ecx, [eax + edi + 1]
// 00615e64  83c404               add esp, 4
// 00615e67  81f9c8000000         cmp ecx, 0xc8
// 00615e6d  7e47                 jle 0x615eb6
// 00615e6f  8b16                 mov edx, dword ptr [esi]
// 00615e71  8b423c               mov eax, dword ptr [edx + 0x3c]
// 00615e74  85c0                 test eax, eax
// 00615e76  6814347c00           push 0x7c3414
// 00615e7b  68c8000000           push 0xc8
// 00615e80  7513                 jne 0x615e95
// 00615e82  8b4610               mov eax, dword ptr [esi + 0x10]
// 00615e85  68a8337c00           push 0x7c33a8
// 00615e8a  50                   push eax
// 00615e8b  e80090ffff           call 0x60ee90
// 00615e90  83c410               add esp, 0x10
// 00615e93  eb12                 jmp 0x615ea7
// 00615e95  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00615e98  50                   push eax
// 00615e99  6880337c00           push 0x7c3380
// 00615e9e  51                   push ecx
// 00615e9f  e8ec8fffff           call 0x60ee90
// 00615ea4  83c414               add esp, 0x14
// 00615ea7  8b560c               mov edx, dword ptr [esi + 0xc]
// 00615eaa  6a00                 push 0
// 00615eac  50                   push eax
// 00615ead  52                   push edx
// 00615eae  e86d160000           call 0x617520
// 00615eb3  83c40c               add esp, 0xc
// 00615eb6  55                   push ebp
// 00615eb7  53                   push ebx
// 00615eb8  e853ddffff           call 0x613c10
// 00615ebd  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 00615ec1  03cf                 add ecx, edi
// 00615ec3  83c408               add esp, 8
// 00615ec6  6689844eac000000     mov word ptr [esi + ecx*2 + 0xac], ax
// 00615ece  83c701               add edi, 1
// 00615ed1  e93affffff           jmp 0x615e10
// 00615ed6  817b100b010000       cmp dword ptr [ebx + 0x10], 0x10b
// 00615edd  897c240c             mov dword ptr [esp + 0xc], edi
// 00615ee1  7424                 je 0x615f07
// 00615ee3  680b010000           push 0x10b
// 00615ee8  53                   push ebx
// 00615ee9  e8d2150000           call 0x6174c0
// 00615eee  8b5334               mov edx, dword ptr [ebx + 0x34]
// 00615ef1  50                   push eax
// 00615ef2  6870337c00           push 0x7c3370
// 00615ef7  52                   push edx
// 00615ef8  e8938fffff           call 0x60ee90
// 00615efd  50                   push eax
// 00615efe  53                   push ebx
// 00615eff  e8bc160000           call 0x6175c0
// 00615f04  83c41c               add esp, 0x1c
// 00615f07  53                   push ebx
// 00615f08  e8e32a0000           call 0x6189f0
// 00615f0d  8b6b04               mov ebp, dword ptr [ebx + 4]
// 00615f10  8d7c241c             lea edi, [esp + 0x1c]
// 00615f14  8bf3                 mov esi, ebx
// 00615f16  e895ebffff           call 0x614ab0
// 00615f1b  50                   push eax
// 00615f1c  8bcf                 mov ecx, edi
// 00615f1e  ba03000000           mov edx, 3
// 00615f23  8bc3                 mov eax, ebx
// 00615f25  e8a6e0ffff           call 0x613fd0
// 00615f2a  8b442418             mov eax, dword ptr [esp + 0x18]
// 00615f2e  6a03                 push 3
// 00615f30  50                   push eax
// 00615f31  e83a290100           call 0x628870
// 00615f36  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00615f3a  8b542424             mov edx, dword ptr [esp + 0x24]
// 00615f3e  6a00                 push 0
// 00615f40  83c1fd               add ecx, -3
// 00615f43  51                   push ecx
// 00615f44  55                   push ebp
// 00615f45  52                   push edx
// 00615f46  8bc3                 mov eax, ebx
// 00615f48  e8d3f9ffff           call 0x615920
// 00615f4d  83c420               add esp, 0x20
// 00615f50  5f                   pop edi
// 00615f51  5e                   pop esi
// 00615f52  5d                   pop ebp
// 00615f53  83c424               add esp, 0x24
// 00615f56  c3                   ret 
// library lua-5.1.4/lparser.c (function _forlist)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
