// roc 2007-03 0050afc0  unit: seg_00500000  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0050afc0
//
// 0050afc0  56                   push esi
// 0050afc1  8b742408             mov esi, dword ptr [esp + 8]
// 0050afc5  8b4614               mov eax, dword ptr [esi + 0x14]
// 0050afc8  57                   push edi
// 0050afc9  0538ffffff           add eax, 0xffffff38
// 0050afce  33ff                 xor edi, edi
// 0050afd0  83f80a               cmp eax, 0xa
// 0050afd3  776c                 ja 0x50b041
// 0050afd5  0fb68078b05000       movzx eax, byte ptr [eax + 0x50b078]
// 0050afdc  ff248564b05000       jmp dword ptr [eax*4 + 0x50b064]
// 0050afe3  8b8e90010000         mov ecx, dword ptr [esi + 0x190]
// 0050afe9  8b5104               mov edx, dword ptr [ecx + 4]
// 0050afec  56                   push esi
// 0050afed  ffd2                 call edx
// 0050afef  8b4618               mov eax, dword ptr [esi + 0x18]
// 0050aff2  8b4808               mov ecx, dword ptr [eax + 8]
// 0050aff5  56                   push esi
// 0050aff6  ffd1                 call ecx
// 0050aff8  83c408               add esp, 8
// 0050affb  c74614c9000000       mov dword ptr [esi + 0x14], 0xc9
// 0050b002  8b9690010000         mov edx, dword ptr [esi + 0x190]
// 0050b008  8b02                 mov eax, dword ptr [edx]
// 0050b00a  56                   push esi
// 0050b00b  ffd0                 call eax
// 0050b00d  8bf8                 mov edi, eax
// 0050b00f  83c404               add esp, 4
// 0050b012  83ff01               cmp edi, 1
// 0050b015  7545                 jne 0x50b05c
// 0050b017  e8d4fdffff           call 0x50adf0
// 0050b01c  8bc7                 mov eax, edi
// 0050b01e  5f                   pop edi
// 0050b01f  c74614ca000000       mov dword ptr [esi + 0x14], 0xca
// 0050b026  5e                   pop esi
// 0050b027  c3                   ret 
// 0050b028  5f                   pop edi
// 0050b029  b801000000           mov eax, 1
// 0050b02e  5e                   pop esi
// 0050b02f  c3                   ret 
// 0050b030  8b8e90010000         mov ecx, dword ptr [esi + 0x190]
// 0050b036  8b11                 mov edx, dword ptr [ecx]
// 0050b038  56                   push esi
// 0050b039  ffd2                 call edx
// 0050b03b  83c404               add esp, 4
// 0050b03e  5f                   pop edi
// 0050b03f  5e                   pop esi
// 0050b040  c3                   ret 
// 0050b041  8b06                 mov eax, dword ptr [esi]
// 0050b043  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 0050b04a  8b0e                 mov ecx, dword ptr [esi]
// 0050b04c  8b5614               mov edx, dword ptr [esi + 0x14]
// 0050b04f  895118               mov dword ptr [ecx + 0x18], edx
// 0050b052  8b06                 mov eax, dword ptr [esi]
// 0050b054  8b08                 mov ecx, dword ptr [eax]
// 0050b056  56                   push esi
// 0050b057  ffd1                 call ecx
// 0050b059  83c404               add esp, 4
// 0050b05c  8bc7                 mov eax, edi
// 0050b05e  5f                   pop edi
// 0050b05f  5e                   pop esi
// 0050b060  c3                   ret 
// 0050b061  8d4900               lea ecx, [ecx]
// 0050b064  e3af                 jecxz 0x50b015
// 0050b066  50                   push eax
// 0050b067  0002                 add byte ptr [edx], al
// 0050b069  b050                 mov al, 0x50
// 0050b06b  0028                 add byte ptr [eax], ch
// 0050b06d  b050                 mov al, 0x50
// 0050b06f  0030                 add byte ptr [eax], dh
// 0050b071  b050                 mov al, 0x50
// 0050b073  0041b0               add byte ptr [ecx - 0x50], al
// 0050b076  50                   push eax
// 0050b077  0000                 add byte ptr [eax], al
// 0050b079  0102                 add dword ptr [edx], eax
// 0050b07b  0303                 add eax, dword ptr [ebx]
// 0050b07d  0303                 add eax, dword ptr [ebx]
// 0050b07f  0303                 add eax, dword ptr [ebx]
// 0050b081  0403                 add al, 3
// library jpeg-6b/jdapimin.c (function _jpeg_consume_input)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdapimin.c
