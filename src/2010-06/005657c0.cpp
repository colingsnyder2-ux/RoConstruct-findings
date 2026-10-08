// from server: 100% by auto
// roc 2010-06 005657c0  unit: seg_00560000  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005657c0
//
// 005657c0  56                   push esi
// 005657c1  8b742408             mov esi, dword ptr [esp + 8]
// 005657c5  8b4614               mov eax, dword ptr [esi + 0x14]
// 005657c8  57                   push edi
// 005657c9  0538ffffff           add eax, 0xffffff38
// 005657ce  33ff                 xor edi, edi
// 005657d0  83f80a               cmp eax, 0xa
// 005657d3  776c                 ja 0x565841
// 005657d5  0fb68078585600       movzx eax, byte ptr [eax + 0x565878]
// 005657dc  ff248564585600       jmp dword ptr [eax*4 + 0x565864]
// 005657e3  8b8e90010000         mov ecx, dword ptr [esi + 0x190]
// 005657e9  8b5104               mov edx, dword ptr [ecx + 4]
// 005657ec  56                   push esi
// 005657ed  ffd2                 call edx
// 005657ef  8b4618               mov eax, dword ptr [esi + 0x18]
// 005657f2  8b4808               mov ecx, dword ptr [eax + 8]
// 005657f5  56                   push esi
// 005657f6  ffd1                 call ecx
// 005657f8  83c408               add esp, 8
// 005657fb  c74614c9000000       mov dword ptr [esi + 0x14], 0xc9
// 00565802  8b9690010000         mov edx, dword ptr [esi + 0x190]
// 00565808  8b02                 mov eax, dword ptr [edx]
// 0056580a  56                   push esi
// 0056580b  ffd0                 call eax
// 0056580d  8bf8                 mov edi, eax
// 0056580f  83c404               add esp, 4
// 00565812  83ff01               cmp edi, 1
// 00565815  7545                 jne 0x56585c
// 00565817  e8d4fdffff           call 0x5655f0
// 0056581c  8bc7                 mov eax, edi
// 0056581e  5f                   pop edi
// 0056581f  c74614ca000000       mov dword ptr [esi + 0x14], 0xca
// 00565826  5e                   pop esi
// 00565827  c3                   ret 
// 00565828  5f                   pop edi
// 00565829  b801000000           mov eax, 1
// 0056582e  5e                   pop esi
// 0056582f  c3                   ret 
// 00565830  8b8e90010000         mov ecx, dword ptr [esi + 0x190]
// 00565836  8b11                 mov edx, dword ptr [ecx]
// 00565838  56                   push esi
// 00565839  ffd2                 call edx
// 0056583b  83c404               add esp, 4
// 0056583e  5f                   pop edi
// 0056583f  5e                   pop esi
// 00565840  c3                   ret 
// 00565841  8b06                 mov eax, dword ptr [esi]
// 00565843  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 0056584a  8b0e                 mov ecx, dword ptr [esi]
// 0056584c  8b5614               mov edx, dword ptr [esi + 0x14]
// 0056584f  895118               mov dword ptr [ecx + 0x18], edx
// 00565852  8b06                 mov eax, dword ptr [esi]
// 00565854  8b08                 mov ecx, dword ptr [eax]
// 00565856  56                   push esi
// 00565857  ffd1                 call ecx
// 00565859  83c404               add esp, 4
// 0056585c  8bc7                 mov eax, edi
// 0056585e  5f                   pop edi
// 0056585f  5e                   pop esi
// 00565860  c3                   ret 
// 00565861  8d4900               lea ecx, [ecx]
// 00565864  e357                 jecxz 0x5658bd
// 00565866  56                   push esi
// 00565867  0002                 add byte ptr [edx], al
// 00565869  58                   pop eax
// 0056586a  56                   push esi
// 0056586b  0028                 add byte ptr [eax], ch
// 0056586d  58                   pop eax
// 0056586e  56                   push esi
// 0056586f  0030                 add byte ptr [eax], dh
// 00565871  58                   pop eax
// 00565872  56                   push esi
// 00565873  004158               add byte ptr [ecx + 0x58], al
// 00565876  56                   push esi
// 00565877  0000                 add byte ptr [eax], al
// 00565879  0102                 add dword ptr [edx], eax
// 0056587b  0303                 add eax, dword ptr [ebx]
// 0056587d  0303                 add eax, dword ptr [ebx]
// 0056587f  0303                 add eax, dword ptr [ebx]
// 00565881  0403                 add al, 3
// library jpeg-6b/jdapimin.c (function _jpeg_consume_input)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdapimin.c
