// roc 2007-08 005157b0  unit: seg_00510000  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005157b0
//
// 005157b0  56                   push esi
// 005157b1  8b742408             mov esi, dword ptr [esp + 8]
// 005157b5  8b4614               mov eax, dword ptr [esi + 0x14]
// 005157b8  57                   push edi
// 005157b9  0538ffffff           add eax, 0xffffff38
// 005157be  33ff                 xor edi, edi
// 005157c0  83f80a               cmp eax, 0xa
// 005157c3  776c                 ja 0x515831
// 005157c5  0fb68068585100       movzx eax, byte ptr [eax + 0x515868]
// 005157cc  ff248554585100       jmp dword ptr [eax*4 + 0x515854]
// 005157d3  8b8e90010000         mov ecx, dword ptr [esi + 0x190]
// 005157d9  8b5104               mov edx, dword ptr [ecx + 4]
// 005157dc  56                   push esi
// 005157dd  ffd2                 call edx
// 005157df  8b4618               mov eax, dword ptr [esi + 0x18]
// 005157e2  8b4808               mov ecx, dword ptr [eax + 8]
// 005157e5  56                   push esi
// 005157e6  ffd1                 call ecx
// 005157e8  83c408               add esp, 8
// 005157eb  c74614c9000000       mov dword ptr [esi + 0x14], 0xc9
// 005157f2  8b9690010000         mov edx, dword ptr [esi + 0x190]
// 005157f8  8b02                 mov eax, dword ptr [edx]
// 005157fa  56                   push esi
// 005157fb  ffd0                 call eax
// 005157fd  8bf8                 mov edi, eax
// 005157ff  83c404               add esp, 4
// 00515802  83ff01               cmp edi, 1
// 00515805  7545                 jne 0x51584c
// 00515807  e8d4fdffff           call 0x5155e0
// 0051580c  8bc7                 mov eax, edi
// 0051580e  5f                   pop edi
// 0051580f  c74614ca000000       mov dword ptr [esi + 0x14], 0xca
// 00515816  5e                   pop esi
// 00515817  c3                   ret 
// 00515818  5f                   pop edi
// 00515819  b801000000           mov eax, 1
// 0051581e  5e                   pop esi
// 0051581f  c3                   ret 
// 00515820  8b8e90010000         mov ecx, dword ptr [esi + 0x190]
// 00515826  8b11                 mov edx, dword ptr [ecx]
// 00515828  56                   push esi
// 00515829  ffd2                 call edx
// 0051582b  83c404               add esp, 4
// 0051582e  5f                   pop edi
// 0051582f  5e                   pop esi
// 00515830  c3                   ret 
// 00515831  8b06                 mov eax, dword ptr [esi]
// 00515833  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 0051583a  8b0e                 mov ecx, dword ptr [esi]
// 0051583c  8b5614               mov edx, dword ptr [esi + 0x14]
// 0051583f  895118               mov dword ptr [ecx + 0x18], edx
// 00515842  8b06                 mov eax, dword ptr [esi]
// 00515844  8b08                 mov ecx, dword ptr [eax]
// 00515846  56                   push esi
// 00515847  ffd1                 call ecx
// 00515849  83c404               add esp, 4
// 0051584c  8bc7                 mov eax, edi
// 0051584e  5f                   pop edi
// 0051584f  5e                   pop esi
// 00515850  c3                   ret 
// 00515851  8d4900               lea ecx, [ecx]
// 00515854  d35751               rcl dword ptr [edi + 0x51], cl
// 00515857  00f2                 add dl, dh
// 00515859  57                   push edi
// 0051585a  51                   push ecx
// 0051585b  0018                 add byte ptr [eax], bl
// 0051585d  58                   pop eax
// 0051585e  51                   push ecx
// 0051585f  0020                 add byte ptr [eax], ah
// 00515861  58                   pop eax
// 00515862  51                   push ecx
// 00515863  0031                 add byte ptr [ecx], dh
// 00515865  58                   pop eax
// 00515866  51                   push ecx
// 00515867  0000                 add byte ptr [eax], al
// 00515869  0102                 add dword ptr [edx], eax
// 0051586b  0303                 add eax, dword ptr [ebx]
// 0051586d  0303                 add eax, dword ptr [ebx]
// 0051586f  0303                 add eax, dword ptr [ebx]
// 00515871  0403                 add al, 3
// library jpeg-6b/jdapimin.c (function _jpeg_consume_input)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdapimin.c
