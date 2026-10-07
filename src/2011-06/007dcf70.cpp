// roc 2011-06 007dcf70  unit: seg_007d0000  size: 550 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007dcf70
//
// 007dcf70  83ec1c               sub esp, 0x1c
// 007dcf73  53                   push ebx
// 007dcf74  55                   push ebp
// 007dcf75  8b6f30               mov ebp, dword ptr [edi + 0x30]
// 007dcf78  8b4524               mov eax, dword ptr [ebp + 0x24]
// 007dcf7b  56                   push esi
// 007dcf7c  6a0b                 push 0xb
// 007dcf7e  6848e3ab00           push 0xabe348
// 007dcf83  57                   push edi
// 007dcf84  89442418             mov dword ptr [esp + 0x18], eax
// 007dcf88  e8031b0000           call 0x7dea90
// 007dcf8d  8b7730               mov esi, dword ptr [edi + 0x30]
// 007dcf90  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 007dcf94  41                   inc ecx
// 007dcf95  83c40c               add esp, 0xc
// 007dcf98  81f9c8000000         cmp ecx, 0xc8
// 007dcf9e  8bd8                 mov ebx, eax
// 007dcfa0  7e0f                 jle 0x7dcfb1
// 007dcfa2  b9d0e1ab00           mov ecx, 0xabe1d0
// 007dcfa7  bac8000000           mov edx, 0xc8
// 007dcfac  e86fdfffff           call 0x7daf20
// 007dcfb1  53                   push ebx
// 007dcfb2  57                   push edi
// 007dcfb3  e8a8e0ffff           call 0x7db060
// 007dcfb8  0fb65632             movzx edx, byte ptr [esi + 0x32]
// 007dcfbc  6a0b                 push 0xb
// 007dcfbe  683ce3ab00           push 0xabe33c
// 007dcfc3  57                   push edi
// 007dcfc4  66898456ac000000     mov word ptr [esi + edx*2 + 0xac], ax
// 007dcfcc  e8bf1a0000           call 0x7dea90
// 007dcfd1  8b7730               mov esi, dword ptr [edi + 0x30]
// 007dcfd4  8bd8                 mov ebx, eax
// 007dcfd6  0fb64632             movzx eax, byte ptr [esi + 0x32]
// 007dcfda  83c002               add eax, 2
// 007dcfdd  83c414               add esp, 0x14
// 007dcfe0  3dc8000000           cmp eax, 0xc8
// 007dcfe5  7e0f                 jle 0x7dcff6
// 007dcfe7  b9d0e1ab00           mov ecx, 0xabe1d0
// 007dcfec  bac8000000           mov edx, 0xc8
// 007dcff1  e82adfffff           call 0x7daf20
// 007dcff6  53                   push ebx
// 007dcff7  57                   push edi
// 007dcff8  e863e0ffff           call 0x7db060
// 007dcffd  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 007dd001  6a0a                 push 0xa
// 007dd003  6830e3ab00           push 0xabe330
// 007dd008  57                   push edi
// 007dd009  6689844eae000000     mov word ptr [esi + ecx*2 + 0xae], ax
// 007dd011  e87a1a0000           call 0x7dea90
// 007dd016  8b7730               mov esi, dword ptr [edi + 0x30]
// 007dd019  0fb65632             movzx edx, byte ptr [esi + 0x32]
// 007dd01d  83c203               add edx, 3
// 007dd020  83c414               add esp, 0x14
// 007dd023  81fac8000000         cmp edx, 0xc8
// 007dd029  8bd8                 mov ebx, eax
// 007dd02b  7e0f                 jle 0x7dd03c
// 007dd02d  b9d0e1ab00           mov ecx, 0xabe1d0
// 007dd032  bac8000000           mov edx, 0xc8
// 007dd037  e8e4deffff           call 0x7daf20
// 007dd03c  53                   push ebx
// 007dd03d  57                   push edi
// 007dd03e  e81de0ffff           call 0x7db060
// 007dd043  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 007dd047  6689844eb0000000     mov word ptr [esi + ecx*2 + 0xb0], ax
// 007dd04f  8b7730               mov esi, dword ptr [edi + 0x30]
// 007dd052  0fb65632             movzx edx, byte ptr [esi + 0x32]
// 007dd056  83c204               add edx, 4
// 007dd059  83c408               add esp, 8
// 007dd05c  81fac8000000         cmp edx, 0xc8
// 007dd062  7e0f                 jle 0x7dd073
// 007dd064  b9d0e1ab00           mov ecx, 0xabe1d0
// 007dd069  bac8000000           mov edx, 0xc8
// 007dd06e  e8addeffff           call 0x7daf20
// 007dd073  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007dd077  50                   push eax
// 007dd078  57                   push edi
// 007dd079  e8e2dfffff           call 0x7db060
// 007dd07e  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 007dd082  83c408               add esp, 8
// 007dd085  6689844eb2000000     mov word ptr [esi + ecx*2 + 0xb2], ax
// 007dd08d  837f103d             cmp dword ptr [edi + 0x10], 0x3d
// 007dd091  7421                 je 0x7dd0b4
// 007dd093  6a3d                 push 0x3d
// 007dd095  57                   push edi
// 007dd096  e8d5180000           call 0x7de970
// 007dd09b  8b5734               mov edx, dword ptr [edi + 0x34]
// 007dd09e  50                   push eax
// 007dd09f  682ce1ab00           push 0xabe12c
// 007dd0a4  52                   push edx
// 007dd0a5  e876fdf9ff           call 0x77ce20
// 007dd0aa  50                   push eax
// 007dd0ab  57                   push edi
// 007dd0ac  e8bf190000           call 0x7dea70
// 007dd0b1  83c41c               add esp, 0x1c
// 007dd0b4  57                   push edi
// 007dd0b5  e8662b0000           call 0x7dfc20
// 007dd0ba  6a00                 push 0
// 007dd0bc  8d442418             lea eax, [esp + 0x18]
// 007dd0c0  50                   push eax
// 007dd0c1  57                   push edi
// 007dd0c2  e8b9f6ffff           call 0x7dc780
// 007dd0c7  8b5730               mov edx, dword ptr [edi + 0x30]
// 007dd0ca  8d4c2420             lea ecx, [esp + 0x20]
// 007dd0ce  51                   push ecx
// 007dd0cf  52                   push edx
// 007dd0d0  e8fb5c0100           call 0x7f2dd0
// 007dd0d5  be2c000000           mov esi, 0x2c
// 007dd0da  83c418               add esp, 0x18
// 007dd0dd  397710               cmp dword ptr [edi + 0x10], esi
// 007dd0e0  7420                 je 0x7dd102
// 007dd0e2  56                   push esi
// 007dd0e3  57                   push edi
// 007dd0e4  e887180000           call 0x7de970
// 007dd0e9  50                   push eax
// 007dd0ea  8b4734               mov eax, dword ptr [edi + 0x34]
// 007dd0ed  682ce1ab00           push 0xabe12c
// 007dd0f2  50                   push eax
// 007dd0f3  e828fdf9ff           call 0x77ce20
// 007dd0f8  50                   push eax
// 007dd0f9  57                   push edi
// 007dd0fa  e871190000           call 0x7dea70
// 007dd0ff  83c41c               add esp, 0x1c
// 007dd102  57                   push edi
// 007dd103  e8182b0000           call 0x7dfc20
// 007dd108  6a00                 push 0
// 007dd10a  8d4c2418             lea ecx, [esp + 0x18]
// 007dd10e  51                   push ecx
// 007dd10f  57                   push edi
// 007dd110  e86bf6ffff           call 0x7dc780
// 007dd115  8b4730               mov eax, dword ptr [edi + 0x30]
// 007dd118  8d542420             lea edx, [esp + 0x20]
// 007dd11c  52                   push edx
// 007dd11d  50                   push eax
// 007dd11e  e8ad5c0100           call 0x7f2dd0
// 007dd123  83c418               add esp, 0x18
// 007dd126  397710               cmp dword ptr [edi + 0x10], esi
// 007dd129  7526                 jne 0x7dd151
// 007dd12b  57                   push edi
// 007dd12c  e8ef2a0000           call 0x7dfc20
// 007dd131  6a00                 push 0
// 007dd133  8d4c2418             lea ecx, [esp + 0x18]
// 007dd137  51                   push ecx
// 007dd138  57                   push edi
// 007dd139  e842f6ffff           call 0x7dc780
// 007dd13e  8b4730               mov eax, dword ptr [edi + 0x30]
// 007dd141  8d542420             lea edx, [esp + 0x20]
// 007dd145  52                   push edx
// 007dd146  50                   push eax
// 007dd147  e8845c0100           call 0x7f2dd0
// 007dd14c  83c418               add esp, 0x18
// 007dd14f  eb26                 jmp 0x7dd177
// 007dd151  d9e8                 fld1 
// 007dd153  83ec08               sub esp, 8
// 007dd156  dd1c24               fstp qword ptr [esp]
// 007dd159  55                   push ebp
// 007dd15a  e8f1520100           call 0x7f2450
// 007dd15f  8b4d24               mov ecx, dword ptr [ebp + 0x24]
// 007dd162  50                   push eax
// 007dd163  51                   push ecx
// 007dd164  6a01                 push 1
// 007dd166  55                   push ebp
// 007dd167  e874560100           call 0x7f27e0
// 007dd16c  6a01                 push 1
// 007dd16e  55                   push ebp
// 007dd16f  e86c510100           call 0x7f22e0
// 007dd174  83c424               add esp, 0x24
// 007dd177  8b542430             mov edx, dword ptr [esp + 0x30]
// 007dd17b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007dd17f  6a01                 push 1
// 007dd181  6a01                 push 1
// 007dd183  52                   push edx
// 007dd184  50                   push eax
// 007dd185  8bc7                 mov eax, edi
// 007dd187  e844fcffff           call 0x7dcdd0
// 007dd18c  83c410               add esp, 0x10
// 007dd18f  5e                   pop esi
// 007dd190  5d                   pop ebp
// 007dd191  5b                   pop ebx
// 007dd192  83c41c               add esp, 0x1c
// 007dd195  c3                   ret 
// library lua-5.1.4/lparser.c (function _fornum)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
