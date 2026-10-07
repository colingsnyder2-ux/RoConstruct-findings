// roc 2012-06 00644090  unit: seg_00640000  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00644090
//
// 00644090  56                   push esi
// 00644091  8b742408             mov esi, dword ptr [esp + 8]
// 00644095  8b4614               mov eax, dword ptr [esi + 0x14]
// 00644098  57                   push edi
// 00644099  0538ffffff           add eax, 0xffffff38
// 0064409e  33ff                 xor edi, edi
// 006440a0  83f80a               cmp eax, 0xa
// 006440a3  776c                 ja 0x644111
// 006440a5  0fb68048416400       movzx eax, byte ptr [eax + 0x644148]
// 006440ac  ff248534416400       jmp dword ptr [eax*4 + 0x644134]
// 006440b3  8b8e90010000         mov ecx, dword ptr [esi + 0x190]
// 006440b9  8b5104               mov edx, dword ptr [ecx + 4]
// 006440bc  56                   push esi
// 006440bd  ffd2                 call edx
// 006440bf  8b4618               mov eax, dword ptr [esi + 0x18]
// 006440c2  8b4808               mov ecx, dword ptr [eax + 8]
// 006440c5  56                   push esi
// 006440c6  ffd1                 call ecx
// 006440c8  83c408               add esp, 8
// 006440cb  c74614c9000000       mov dword ptr [esi + 0x14], 0xc9
// 006440d2  8b9690010000         mov edx, dword ptr [esi + 0x190]
// 006440d8  8b02                 mov eax, dword ptr [edx]
// 006440da  56                   push esi
// 006440db  ffd0                 call eax
// 006440dd  8bf8                 mov edi, eax
// 006440df  83c404               add esp, 4
// 006440e2  83ff01               cmp edi, 1
// 006440e5  7545                 jne 0x64412c
// 006440e7  e8d4fdffff           call 0x643ec0
// 006440ec  8bc7                 mov eax, edi
// 006440ee  5f                   pop edi
// 006440ef  c74614ca000000       mov dword ptr [esi + 0x14], 0xca
// 006440f6  5e                   pop esi
// 006440f7  c3                   ret 
// 006440f8  5f                   pop edi
// 006440f9  b801000000           mov eax, 1
// 006440fe  5e                   pop esi
// 006440ff  c3                   ret 
// 00644100  8b8e90010000         mov ecx, dword ptr [esi + 0x190]
// 00644106  8b11                 mov edx, dword ptr [ecx]
// 00644108  56                   push esi
// 00644109  ffd2                 call edx
// 0064410b  83c404               add esp, 4
// 0064410e  5f                   pop edi
// 0064410f  5e                   pop esi
// 00644110  c3                   ret 
// 00644111  8b06                 mov eax, dword ptr [esi]
// 00644113  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 0064411a  8b0e                 mov ecx, dword ptr [esi]
// 0064411c  8b5614               mov edx, dword ptr [esi + 0x14]
// 0064411f  895118               mov dword ptr [ecx + 0x18], edx
// 00644122  8b06                 mov eax, dword ptr [esi]
// 00644124  8b08                 mov ecx, dword ptr [eax]
// 00644126  56                   push esi
// 00644127  ffd1                 call ecx
// 00644129  83c404               add esp, 4
// 0064412c  8bc7                 mov eax, edi
// 0064412e  5f                   pop edi
// 0064412f  5e                   pop esi
// 00644130  c3                   ret 
// 00644131  8d4900               lea ecx, [ecx]
// 00644134  b340                 mov bl, 0x40
// 00644136  6400d2               add dl, dl
// 00644139  40                   inc eax
// 0064413a  6400f8               add al, bh
// 0064413d  40                   inc eax
// 0064413e  640000               add byte ptr fs:[eax], al
// 00644141  41                   inc ecx
// 00644142  640011               add byte ptr fs:[ecx], dl
// 00644145  41                   inc ecx
// 00644146  640000               add byte ptr fs:[eax], al
// 00644149  0102                 add dword ptr [edx], eax
// 0064414b  0303                 add eax, dword ptr [ebx]
// 0064414d  0303                 add eax, dword ptr [ebx]
// 0064414f  0303                 add eax, dword ptr [ebx]
// 00644151  0403                 add al, 3
// library jpeg-6b/jdapimin.c (function _jpeg_consume_input)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdapimin.c
