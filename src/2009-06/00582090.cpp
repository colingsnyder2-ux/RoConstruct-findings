// roc 2009-06 00582090  unit: seg_00580000  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00582090
//
// 00582090  56                   push esi
// 00582091  8b742408             mov esi, dword ptr [esp + 8]
// 00582095  8b4614               mov eax, dword ptr [esi + 0x14]
// 00582098  57                   push edi
// 00582099  0538ffffff           add eax, 0xffffff38
// 0058209e  33ff                 xor edi, edi
// 005820a0  83f80a               cmp eax, 0xa
// 005820a3  776c                 ja 0x582111
// 005820a5  0fb68048215800       movzx eax, byte ptr [eax + 0x582148]
// 005820ac  ff248534215800       jmp dword ptr [eax*4 + 0x582134]
// 005820b3  8b8e90010000         mov ecx, dword ptr [esi + 0x190]
// 005820b9  8b5104               mov edx, dword ptr [ecx + 4]
// 005820bc  56                   push esi
// 005820bd  ffd2                 call edx
// 005820bf  8b4618               mov eax, dword ptr [esi + 0x18]
// 005820c2  8b4808               mov ecx, dword ptr [eax + 8]
// 005820c5  56                   push esi
// 005820c6  ffd1                 call ecx
// 005820c8  83c408               add esp, 8
// 005820cb  c74614c9000000       mov dword ptr [esi + 0x14], 0xc9
// 005820d2  8b9690010000         mov edx, dword ptr [esi + 0x190]
// 005820d8  8b02                 mov eax, dword ptr [edx]
// 005820da  56                   push esi
// 005820db  ffd0                 call eax
// 005820dd  8bf8                 mov edi, eax
// 005820df  83c404               add esp, 4
// 005820e2  83ff01               cmp edi, 1
// 005820e5  7545                 jne 0x58212c
// 005820e7  e8d4fdffff           call 0x581ec0
// 005820ec  8bc7                 mov eax, edi
// 005820ee  5f                   pop edi
// 005820ef  c74614ca000000       mov dword ptr [esi + 0x14], 0xca
// 005820f6  5e                   pop esi
// 005820f7  c3                   ret 
// 005820f8  5f                   pop edi
// 005820f9  b801000000           mov eax, 1
// 005820fe  5e                   pop esi
// 005820ff  c3                   ret 
// 00582100  8b8e90010000         mov ecx, dword ptr [esi + 0x190]
// 00582106  8b11                 mov edx, dword ptr [ecx]
// 00582108  56                   push esi
// 00582109  ffd2                 call edx
// 0058210b  83c404               add esp, 4
// 0058210e  5f                   pop edi
// 0058210f  5e                   pop esi
// 00582110  c3                   ret 
// 00582111  8b06                 mov eax, dword ptr [esi]
// 00582113  c7401414000000       mov dword ptr [eax + 0x14], 0x14
// 0058211a  8b0e                 mov ecx, dword ptr [esi]
// 0058211c  8b5614               mov edx, dword ptr [esi + 0x14]
// 0058211f  895118               mov dword ptr [ecx + 0x18], edx
// 00582122  8b06                 mov eax, dword ptr [esi]
// 00582124  8b08                 mov ecx, dword ptr [eax]
// 00582126  56                   push esi
// 00582127  ffd1                 call ecx
// 00582129  83c404               add esp, 4
// 0058212c  8bc7                 mov eax, edi
// 0058212e  5f                   pop edi
// 0058212f  5e                   pop esi
// 00582130  c3                   ret 
// 00582131  8d4900               lea ecx, [ecx]
// 00582134  b320                 mov bl, 0x20
// 00582136  58                   pop eax
// 00582137  00d2                 add dl, dl
// 00582139  205800               and byte ptr [eax], bl
// 0058213c  f8                   clc 
// 0058213d  205800               and byte ptr [eax], bl
// 00582140  0021                 add byte ptr [ecx], ah
// 00582142  58                   pop eax
// 00582143  0011                 add byte ptr [ecx], dl
// 00582145  215800               and dword ptr [eax], ebx
// 00582148  0001                 add byte ptr [ecx], al
// 0058214a  0203                 add al, byte ptr [ebx]
// 0058214c  0303                 add eax, dword ptr [ebx]
// 0058214e  0303                 add eax, dword ptr [ebx]
// 00582150  030403               add eax, dword ptr [ebx + eax]
// library jpeg-6b/jdapimin.c (function _jpeg_consume_input)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdapimin.c
