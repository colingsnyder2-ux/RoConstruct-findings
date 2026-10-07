// roc 2012-06 0093a480  unit: seg_00930000  size: 550 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0093a480
//
// 0093a480  83ec1c               sub esp, 0x1c
// 0093a483  53                   push ebx
// 0093a484  55                   push ebp
// 0093a485  8b6f30               mov ebp, dword ptr [edi + 0x30]
// 0093a488  8b4524               mov eax, dword ptr [ebp + 0x24]
// 0093a48b  56                   push esi
// 0093a48c  6a0b                 push 0xb
// 0093a48e  6848fdbf00           push 0xbffd48
// 0093a493  57                   push edi
// 0093a494  89442418             mov dword ptr [esp + 0x18], eax
// 0093a498  e893cdffff           call 0x937230
// 0093a49d  8b7730               mov esi, dword ptr [edi + 0x30]
// 0093a4a0  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 0093a4a4  41                   inc ecx
// 0093a4a5  83c40c               add esp, 0xc
// 0093a4a8  81f9c8000000         cmp ecx, 0xc8
// 0093a4ae  8bd8                 mov ebx, eax
// 0093a4b0  7e0f                 jle 0x93a4c1
// 0093a4b2  b9d0fbbf00           mov ecx, 0xbffbd0
// 0093a4b7  bac8000000           mov edx, 0xc8
// 0093a4bc  e86fdfffff           call 0x938430
// 0093a4c1  53                   push ebx
// 0093a4c2  57                   push edi
// 0093a4c3  e8a8e0ffff           call 0x938570
// 0093a4c8  0fb65632             movzx edx, byte ptr [esi + 0x32]
// 0093a4cc  6a0b                 push 0xb
// 0093a4ce  683cfdbf00           push 0xbffd3c
// 0093a4d3  57                   push edi
// 0093a4d4  66898456ac000000     mov word ptr [esi + edx*2 + 0xac], ax
// 0093a4dc  e84fcdffff           call 0x937230
// 0093a4e1  8b7730               mov esi, dword ptr [edi + 0x30]
// 0093a4e4  8bd8                 mov ebx, eax
// 0093a4e6  0fb64632             movzx eax, byte ptr [esi + 0x32]
// 0093a4ea  83c002               add eax, 2
// 0093a4ed  83c414               add esp, 0x14
// 0093a4f0  3dc8000000           cmp eax, 0xc8
// 0093a4f5  7e0f                 jle 0x93a506
// 0093a4f7  b9d0fbbf00           mov ecx, 0xbffbd0
// 0093a4fc  bac8000000           mov edx, 0xc8
// 0093a501  e82adfffff           call 0x938430
// 0093a506  53                   push ebx
// 0093a507  57                   push edi
// 0093a508  e863e0ffff           call 0x938570
// 0093a50d  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 0093a511  6a0a                 push 0xa
// 0093a513  6830fdbf00           push 0xbffd30
// 0093a518  57                   push edi
// 0093a519  6689844eae000000     mov word ptr [esi + ecx*2 + 0xae], ax
// 0093a521  e80acdffff           call 0x937230
// 0093a526  8b7730               mov esi, dword ptr [edi + 0x30]
// 0093a529  0fb65632             movzx edx, byte ptr [esi + 0x32]
// 0093a52d  83c203               add edx, 3
// 0093a530  83c414               add esp, 0x14
// 0093a533  81fac8000000         cmp edx, 0xc8
// 0093a539  8bd8                 mov ebx, eax
// 0093a53b  7e0f                 jle 0x93a54c
// 0093a53d  b9d0fbbf00           mov ecx, 0xbffbd0
// 0093a542  bac8000000           mov edx, 0xc8
// 0093a547  e8e4deffff           call 0x938430
// 0093a54c  53                   push ebx
// 0093a54d  57                   push edi
// 0093a54e  e81de0ffff           call 0x938570
// 0093a553  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 0093a557  6689844eb0000000     mov word ptr [esi + ecx*2 + 0xb0], ax
// 0093a55f  8b7730               mov esi, dword ptr [edi + 0x30]
// 0093a562  0fb65632             movzx edx, byte ptr [esi + 0x32]
// 0093a566  83c204               add edx, 4
// 0093a569  83c408               add esp, 8
// 0093a56c  81fac8000000         cmp edx, 0xc8
// 0093a572  7e0f                 jle 0x93a583
// 0093a574  b9d0fbbf00           mov ecx, 0xbffbd0
// 0093a579  bac8000000           mov edx, 0xc8
// 0093a57e  e8addeffff           call 0x938430
// 0093a583  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0093a587  50                   push eax
// 0093a588  57                   push edi
// 0093a589  e8e2dfffff           call 0x938570
// 0093a58e  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 0093a592  83c408               add esp, 8
// 0093a595  6689844eb2000000     mov word ptr [esi + ecx*2 + 0xb2], ax
// 0093a59d  837f103d             cmp dword ptr [edi + 0x10], 0x3d
// 0093a5a1  7421                 je 0x93a5c4
// 0093a5a3  6a3d                 push 0x3d
// 0093a5a5  57                   push edi
// 0093a5a6  e865cbffff           call 0x937110
// 0093a5ab  8b5734               mov edx, dword ptr [edi + 0x34]
// 0093a5ae  50                   push eax
// 0093a5af  682cfbbf00           push 0xbffb2c
// 0093a5b4  52                   push edx
// 0093a5b5  e8865bf1ff           call 0x850140
// 0093a5ba  50                   push eax
// 0093a5bb  57                   push edi
// 0093a5bc  e84fccffff           call 0x937210
// 0093a5c1  83c41c               add esp, 0x1c
// 0093a5c4  57                   push edi
// 0093a5c5  e8f6ddffff           call 0x9383c0
// 0093a5ca  6a00                 push 0
// 0093a5cc  8d442418             lea eax, [esp + 0x18]
// 0093a5d0  50                   push eax
// 0093a5d1  57                   push edi
// 0093a5d2  e8b9f6ffff           call 0x939c90
// 0093a5d7  8b5730               mov edx, dword ptr [edi + 0x30]
// 0093a5da  8d4c2420             lea ecx, [esp + 0x20]
// 0093a5de  51                   push ecx
// 0093a5df  52                   push edx
// 0093a5e0  e88bd70200           call 0x967d70
// 0093a5e5  be2c000000           mov esi, 0x2c
// 0093a5ea  83c418               add esp, 0x18
// 0093a5ed  397710               cmp dword ptr [edi + 0x10], esi
// 0093a5f0  7420                 je 0x93a612
// 0093a5f2  56                   push esi
// 0093a5f3  57                   push edi
// 0093a5f4  e817cbffff           call 0x937110
// 0093a5f9  50                   push eax
// 0093a5fa  8b4734               mov eax, dword ptr [edi + 0x34]
// 0093a5fd  682cfbbf00           push 0xbffb2c
// 0093a602  50                   push eax
// 0093a603  e8385bf1ff           call 0x850140
// 0093a608  50                   push eax
// 0093a609  57                   push edi
// 0093a60a  e801ccffff           call 0x937210
// 0093a60f  83c41c               add esp, 0x1c
// 0093a612  57                   push edi
// 0093a613  e8a8ddffff           call 0x9383c0
// 0093a618  6a00                 push 0
// 0093a61a  8d4c2418             lea ecx, [esp + 0x18]
// 0093a61e  51                   push ecx
// 0093a61f  57                   push edi
// 0093a620  e86bf6ffff           call 0x939c90
// 0093a625  8b4730               mov eax, dword ptr [edi + 0x30]
// 0093a628  8d542420             lea edx, [esp + 0x20]
// 0093a62c  52                   push edx
// 0093a62d  50                   push eax
// 0093a62e  e83dd70200           call 0x967d70
// 0093a633  83c418               add esp, 0x18
// 0093a636  397710               cmp dword ptr [edi + 0x10], esi
// 0093a639  7526                 jne 0x93a661
// 0093a63b  57                   push edi
// 0093a63c  e87fddffff           call 0x9383c0
// 0093a641  6a00                 push 0
// 0093a643  8d4c2418             lea ecx, [esp + 0x18]
// 0093a647  51                   push ecx
// 0093a648  57                   push edi
// 0093a649  e842f6ffff           call 0x939c90
// 0093a64e  8b4730               mov eax, dword ptr [edi + 0x30]
// 0093a651  8d542420             lea edx, [esp + 0x20]
// 0093a655  52                   push edx
// 0093a656  50                   push eax
// 0093a657  e814d70200           call 0x967d70
// 0093a65c  83c418               add esp, 0x18
// 0093a65f  eb26                 jmp 0x93a687
// 0093a661  d9e8                 fld1 
// 0093a663  83ec08               sub esp, 8
// 0093a666  dd1c24               fstp qword ptr [esp]
// 0093a669  55                   push ebp
// 0093a66a  e881cd0200           call 0x9673f0
// 0093a66f  8b4d24               mov ecx, dword ptr [ebp + 0x24]
// 0093a672  50                   push eax
// 0093a673  51                   push ecx
// 0093a674  6a01                 push 1
// 0093a676  55                   push ebp
// 0093a677  e804d10200           call 0x967780
// 0093a67c  6a01                 push 1
// 0093a67e  55                   push ebp
// 0093a67f  e8fccb0200           call 0x967280
// 0093a684  83c424               add esp, 0x24
// 0093a687  8b542430             mov edx, dword ptr [esp + 0x30]
// 0093a68b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0093a68f  6a01                 push 1
// 0093a691  6a01                 push 1
// 0093a693  52                   push edx
// 0093a694  50                   push eax
// 0093a695  8bc7                 mov eax, edi
// 0093a697  e844fcffff           call 0x93a2e0
// 0093a69c  83c410               add esp, 0x10
// 0093a69f  5e                   pop esi
// 0093a6a0  5d                   pop ebp
// 0093a6a1  5b                   pop ebx
// 0093a6a2  83c41c               add esp, 0x1c
// 0093a6a5  c3                   ret 
// library lua-5.1.4/lparser.c (function _fornum)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
