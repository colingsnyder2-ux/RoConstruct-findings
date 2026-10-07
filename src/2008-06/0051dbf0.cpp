// roc 2008-06 0051dbf0  unit: seg_00510000  size: 230 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051dbf0
//
// 0051dbf0  83ec08               sub esp, 8
// 0051dbf3  b00a                 mov al, 0xa
// 0051dbf5  88442405             mov byte ptr [esp + 5], al
// 0051dbf9  88442407             mov byte ptr [esp + 7], al
// 0051dbfd  8b442414             mov eax, dword ptr [esp + 0x14]
// 0051dc01  c6042489             mov byte ptr [esp], 0x89
// 0051dc05  c644240150           mov byte ptr [esp + 1], 0x50
// 0051dc0a  c64424024e           mov byte ptr [esp + 2], 0x4e
// 0051dc0f  c644240347           mov byte ptr [esp + 3], 0x47
// 0051dc14  c64424040d           mov byte ptr [esp + 4], 0xd
// 0051dc19  c64424061a           mov byte ptr [esp + 6], 0x1a
// 0051dc1e  83f808               cmp eax, 8
// 0051dc21  0f8698000000         jbe 0x51dcbf
// 0051dc27  b808000000           mov eax, 8
// 0051dc2c  8b542410             mov edx, dword ptr [esp + 0x10]
// 0051dc30  83fa07               cmp edx, 7
// 0051dc33  0f878f000000         ja 0x51dcc8
// 0051dc39  8d0c02               lea ecx, [edx + eax]
// 0051dc3c  83f908               cmp ecx, 8
// 0051dc3f  7607                 jbe 0x51dc48
// 0051dc41  b808000000           mov eax, 8
// 0051dc46  2bc2                 sub eax, edx
// 0051dc48  56                   push esi
// 0051dc49  57                   push edi
// 0051dc4a  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0051dc4e  8d4c1408             lea ecx, [esp + edx + 8]
// 0051dc52  03d7                 add edx, edi
// 0051dc54  8bf0                 mov esi, eax
// 0051dc56  83f804               cmp eax, 4
// 0051dc59  7219                 jb 0x51dc74
// 0051dc5b  eb03                 jmp 0x51dc60
// 0051dc5d  8d4900               lea ecx, [ecx]
// 0051dc60  8b02                 mov eax, dword ptr [edx]
// 0051dc62  3b01                 cmp eax, dword ptr [ecx]
// 0051dc64  7512                 jne 0x51dc78
// 0051dc66  83ee04               sub esi, 4
// 0051dc69  83c104               add ecx, 4
// 0051dc6c  83c204               add edx, 4
// 0051dc6f  83fe04               cmp esi, 4
// 0051dc72  73ec                 jae 0x51dc60
// 0051dc74  85f6                 test esi, esi
// 0051dc76  7456                 je 0x51dcce
// 0051dc78  0fb602               movzx eax, byte ptr [edx]
// 0051dc7b  0fb639               movzx edi, byte ptr [ecx]
// 0051dc7e  2bc7                 sub eax, edi
// 0051dc80  7531                 jne 0x51dcb3
// 0051dc82  83fe01               cmp esi, 1
// 0051dc85  7647                 jbe 0x51dcce
// 0051dc87  0fb64201             movzx eax, byte ptr [edx + 1]
// 0051dc8b  0fb67901             movzx edi, byte ptr [ecx + 1]
// 0051dc8f  2bc7                 sub eax, edi
// 0051dc91  7520                 jne 0x51dcb3
// 0051dc93  83fe02               cmp esi, 2
// 0051dc96  7636                 jbe 0x51dcce
// 0051dc98  0fb64202             movzx eax, byte ptr [edx + 2]
// 0051dc9c  0fb67902             movzx edi, byte ptr [ecx + 2]
// 0051dca0  2bc7                 sub eax, edi
// 0051dca2  750f                 jne 0x51dcb3
// 0051dca4  83fe03               cmp esi, 3
// 0051dca7  7625                 jbe 0x51dcce
// 0051dca9  0fb64203             movzx eax, byte ptr [edx + 3]
// 0051dcad  0fb64903             movzx ecx, byte ptr [ecx + 3]
// 0051dcb1  2bc1                 sub eax, ecx
// 0051dcb3  c1f81f               sar eax, 0x1f
// 0051dcb6  5f                   pop edi
// 0051dcb7  83c801               or eax, 1
// 0051dcba  5e                   pop esi
// 0051dcbb  83c408               add esp, 8
// 0051dcbe  c3                   ret 
// 0051dcbf  83f801               cmp eax, 1
// 0051dcc2  0f8364ffffff         jae 0x51dc2c
// 0051dcc8  33c0                 xor eax, eax
// 0051dcca  83c408               add esp, 8
// 0051dccd  c3                   ret 
// 0051dcce  5f                   pop edi
// 0051dccf  33c0                 xor eax, eax
// 0051dcd1  5e                   pop esi
// 0051dcd2  83c408               add esp, 8
// 0051dcd5  c3                   ret 
// library libpng-1.2.5/png.c (function _png_sig_cmp)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 png.c
