// roc 2012-06 0093a050  unit: seg_00930000  size: 296 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0093a050
//
// 0093a050  83ec24               sub esp, 0x24
// 0093a053  55                   push ebp
// 0093a054  56                   push esi
// 0093a055  8bf0                 mov esi, eax
// 0093a057  8b6e30               mov ebp, dword ptr [esi + 0x30]
// 0093a05a  57                   push edi
// 0093a05b  56                   push esi
// 0093a05c  e85fe3ffff           call 0x9383c0
// 0093a061  55                   push ebp
// 0093a062  e849cf0200           call 0x966fb0
// 0093a067  8bf8                 mov edi, eax
// 0093a069  6a00                 push 0
// 0093a06b  8d442424             lea eax, [esp + 0x24]
// 0093a06f  50                   push eax
// 0093a070  56                   push esi
// 0093a071  e81afcffff           call 0x939c90
// 0093a076  83c414               add esp, 0x14
// 0093a079  837c241801           cmp dword ptr [esp + 0x18], 1
// 0093a07e  7508                 jne 0x93a088
// 0093a080  c744241803000000     mov dword ptr [esp + 0x18], 3
// 0093a088  8b5630               mov edx, dword ptr [esi + 0x30]
// 0093a08b  8d4c2418             lea ecx, [esp + 0x18]
// 0093a08f  51                   push ecx
// 0093a090  52                   push edx
// 0093a091  e82ae10200           call 0x9681c0
// 0093a096  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0093a09e  c644241e01           mov byte ptr [esp + 0x1e], 1
// 0093a0a3  8a4532               mov al, byte ptr [ebp + 0x32]
// 0093a0a6  8844241c             mov byte ptr [esp + 0x1c], al
// 0093a0aa  c644241d00           mov byte ptr [esp + 0x1d], 0
// 0093a0af  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 0093a0b2  8d542414             lea edx, [esp + 0x14]
// 0093a0b6  894c2414             mov dword ptr [esp + 0x14], ecx
// 0093a0ba  83c408               add esp, 8
// 0093a0bd  895514               mov dword ptr [ebp + 0x14], edx
// 0093a0c0  817e1003010000       cmp dword ptr [esi + 0x10], 0x103
// 0093a0c7  7424                 je 0x93a0ed
// 0093a0c9  6803010000           push 0x103
// 0093a0ce  56                   push esi
// 0093a0cf  e83cd0ffff           call 0x937110
// 0093a0d4  50                   push eax
// 0093a0d5  8b4634               mov eax, dword ptr [esi + 0x34]
// 0093a0d8  682cfbbf00           push 0xbffb2c
// 0093a0dd  50                   push eax
// 0093a0de  e85d60f1ff           call 0x850140
// 0093a0e3  50                   push eax
// 0093a0e4  56                   push esi
// 0093a0e5  e826d1ffff           call 0x937210
// 0093a0ea  83c41c               add esp, 0x1c
// 0093a0ed  56                   push esi
// 0093a0ee  e8cde2ffff           call 0x9383c0
// 0093a0f3  83c404               add esp, 4
// 0093a0f6  8bc6                 mov eax, esi
// 0093a0f8  e8b3fcffff           call 0x939db0
// 0093a0fd  57                   push edi
// 0093a0fe  55                   push ebp
// 0093a0ff  e8dcd70200           call 0x9678e0
// 0093a104  83c404               add esp, 4
// 0093a107  50                   push eax
// 0093a108  55                   push ebp
// 0093a109  e862e80200           call 0x968970
// 0093a10e  8b442440             mov eax, dword ptr [esp + 0x40]
// 0093a112  6815010000           push 0x115
// 0093a117  bf06010000           mov edi, 0x106
// 0093a11c  e85fe3ffff           call 0x938480
// 0093a121  8b7514               mov esi, dword ptr [ebp + 0x14]
// 0093a124  8b0e                 mov ecx, dword ptr [esi]
// 0093a126  8b450c               mov eax, dword ptr [ebp + 0xc]
// 0093a129  894d14               mov dword ptr [ebp + 0x14], ecx
// 0093a12c  0fb65608             movzx edx, byte ptr [esi + 8]
// 0093a130  83c410               add esp, 0x10
// 0093a133  e818e5ffff           call 0x938650
// 0093a138  807e0900             cmp byte ptr [esi + 9], 0
// 0093a13c  7414                 je 0x93a152
// 0093a13e  0fb65608             movzx edx, byte ptr [esi + 8]
// 0093a142  6a00                 push 0
// 0093a144  6a00                 push 0
// 0093a146  52                   push edx
// 0093a147  6a23                 push 0x23
// 0093a149  55                   push ebp
// 0093a14a  e801d60200           call 0x967750
// 0093a14f  83c414               add esp, 0x14
// 0093a152  0fb64532             movzx eax, byte ptr [ebp + 0x32]
// 0093a156  894524               mov dword ptr [ebp + 0x24], eax
// 0093a159  8b4e04               mov ecx, dword ptr [esi + 4]
// 0093a15c  51                   push ecx
// 0093a15d  55                   push ebp
// 0093a15e  e84dd80200           call 0x9679b0
// 0093a163  8b542434             mov edx, dword ptr [esp + 0x34]
// 0093a167  52                   push edx
// 0093a168  55                   push ebp
// 0093a169  e842d80200           call 0x9679b0
// 0093a16e  83c410               add esp, 0x10
// 0093a171  5f                   pop edi
// 0093a172  5e                   pop esi
// 0093a173  5d                   pop ebp
// 0093a174  83c424               add esp, 0x24
// 0093a177  c3                   ret 
// library lua-5.1.4/lparser.c (function _whilestat)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
