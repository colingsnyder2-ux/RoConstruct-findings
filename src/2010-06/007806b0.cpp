// from server: 100% by auto
// roc 2010-06 007806b0  unit: seg_00780000  size: 296 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007806b0
//
// 007806b0  83ec24               sub esp, 0x24
// 007806b3  55                   push ebp
// 007806b4  56                   push esi
// 007806b5  8bf0                 mov esi, eax
// 007806b7  8b6e30               mov ebp, dword ptr [esi + 0x30]
// 007806ba  57                   push edi
// 007806bb  56                   push esi
// 007806bc  e8bf320000           call 0x783980
// 007806c1  55                   push ebp
// 007806c2  e829ed0000           call 0x78f3f0
// 007806c7  8bf8                 mov edi, eax
// 007806c9  6a00                 push 0
// 007806cb  8d442424             lea eax, [esp + 0x24]
// 007806cf  50                   push eax
// 007806d0  56                   push esi
// 007806d1  e82afcffff           call 0x780300
// 007806d6  83c414               add esp, 0x14
// 007806d9  837c241801           cmp dword ptr [esp + 0x18], 1
// 007806de  7508                 jne 0x7806e8
// 007806e0  c744241803000000     mov dword ptr [esp + 0x18], 3
// 007806e8  8b5630               mov edx, dword ptr [esi + 0x30]
// 007806eb  8d4c2418             lea ecx, [esp + 0x18]
// 007806ef  51                   push ecx
// 007806f0  52                   push edx
// 007806f1  e89afe0000           call 0x790590
// 007806f6  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 007806fe  c644241e01           mov byte ptr [esp + 0x1e], 1
// 00780703  8a4532               mov al, byte ptr [ebp + 0x32]
// 00780706  8844241c             mov byte ptr [esp + 0x1c], al
// 0078070a  c644241d00           mov byte ptr [esp + 0x1d], 0
// 0078070f  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 00780712  8d542414             lea edx, [esp + 0x14]
// 00780716  894c2414             mov dword ptr [esp + 0x14], ecx
// 0078071a  83c408               add esp, 8
// 0078071d  895514               mov dword ptr [ebp + 0x14], edx
// 00780720  817e1003010000       cmp dword ptr [esi + 0x10], 0x103
// 00780727  7424                 je 0x78074d
// 00780729  6803010000           push 0x103
// 0078072e  56                   push esi
// 0078072f  e85c1d0000           call 0x782490
// 00780734  50                   push eax
// 00780735  8b4634               mov eax, dword ptr [esi + 0x34]
// 00780738  683830a500           push 0xa53038
// 0078073d  50                   push eax
// 0078073e  e89d26fbff           call 0x732de0
// 00780743  50                   push eax
// 00780744  56                   push esi
// 00780745  e8461e0000           call 0x782590
// 0078074a  83c41c               add esp, 0x1c
// 0078074d  56                   push esi
// 0078074e  e82d320000           call 0x783980
// 00780753  83c404               add esp, 4
// 00780756  8bc6                 mov eax, esi
// 00780758  e8b3fcffff           call 0x780410
// 0078075d  57                   push edi
// 0078075e  55                   push ebp
// 0078075f  e88cf50000           call 0x78fcf0
// 00780764  83c404               add esp, 4
// 00780767  50                   push eax
// 00780768  55                   push ebp
// 00780769  e842050100           call 0x790cb0
// 0078076e  8b442440             mov eax, dword ptr [esp + 0x40]
// 00780772  6815010000           push 0x115
// 00780777  bf06010000           mov edi, 0x106
// 0078077c  e8afe3ffff           call 0x77eb30
// 00780781  8b7514               mov esi, dword ptr [ebp + 0x14]
// 00780784  8b0e                 mov ecx, dword ptr [esi]
// 00780786  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00780789  894d14               mov dword ptr [ebp + 0x14], ecx
// 0078078c  0fb65608             movzx edx, byte ptr [esi + 8]
// 00780790  83c410               add esp, 0x10
// 00780793  e868e5ffff           call 0x77ed00
// 00780798  807e0900             cmp byte ptr [esi + 9], 0
// 0078079c  7414                 je 0x7807b2
// 0078079e  0fb65608             movzx edx, byte ptr [esi + 8]
// 007807a2  6a00                 push 0
// 007807a4  6a00                 push 0
// 007807a6  52                   push edx
// 007807a7  6a23                 push 0x23
// 007807a9  55                   push ebp
// 007807aa  e8b1f30000           call 0x78fb60
// 007807af  83c414               add esp, 0x14
// 007807b2  0fb64532             movzx eax, byte ptr [ebp + 0x32]
// 007807b6  894524               mov dword ptr [ebp + 0x24], eax
// 007807b9  8b4e04               mov ecx, dword ptr [esi + 4]
// 007807bc  51                   push ecx
// 007807bd  55                   push ebp
// 007807be  e8fdf50000           call 0x78fdc0
// 007807c3  8b542434             mov edx, dword ptr [esp + 0x34]
// 007807c7  52                   push edx
// 007807c8  55                   push ebp
// 007807c9  e8f2f50000           call 0x78fdc0
// 007807ce  83c410               add esp, 0x10
// 007807d1  5f                   pop edi
// 007807d2  5e                   pop esi
// 007807d3  5d                   pop ebp
// 007807d4  83c424               add esp, 0x24
// 007807d7  c3                   ret 
// library lua-5.1.4/lparser.c (function _whilestat)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
