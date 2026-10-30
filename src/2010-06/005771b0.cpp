// from server: 100% by auto
// roc 2010-06 005771b0  unit: seg_00570000  size: 341 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005771b0
//
// 005771b0  56                   push esi
// 005771b1  8b742408             mov esi, dword ptr [esp + 8]
// 005771b5  57                   push edi
// 005771b6  8bbe80010000         mov edi, dword ptr [esi + 0x180]
// 005771bc  807f0800             cmp byte ptr [edi + 8], 0
// 005771c0  7433                 je 0x5771f5
// 005771c2  c6470800             mov byte ptr [edi + 8], 0
// 005771c6  8b86a8010000         mov eax, dword ptr [esi + 0x1a8]
// 005771cc  8b08                 mov ecx, dword ptr [eax]
// 005771ce  6a00                 push 0
// 005771d0  56                   push esi
// 005771d1  ffd1                 call ecx
// 005771d3  8b968c010000         mov edx, dword ptr [esi + 0x18c]
// 005771d9  8b02                 mov eax, dword ptr [edx]
// 005771db  6a02                 push 2
// 005771dd  56                   push esi
// 005771de  ffd0                 call eax
// 005771e0  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 005771e6  8b11                 mov edx, dword ptr [ecx]
// 005771e8  6a02                 push 2
// 005771ea  56                   push esi
// 005771eb  ffd2                 call edx
// 005771ed  83c418               add esp, 0x18
// 005771f0  e9cd000000           jmp 0x5772c2
// 005771f5  807e4a00             cmp byte ptr [esi + 0x4a], 0
// 005771f9  7445                 je 0x577240
// 005771fb  837e7400             cmp dword ptr [esi + 0x74], 0
// 005771ff  753f                 jne 0x577240
// 00577201  807e5000             cmp byte ptr [esi + 0x50], 0
// 00577205  7415                 je 0x57721c
// 00577207  807e5a00             cmp byte ptr [esi + 0x5a], 0
// 0057720b  740f                 je 0x57721c
// 0057720d  8b4718               mov eax, dword ptr [edi + 0x18]
// 00577210  8986a8010000         mov dword ptr [esi + 0x1a8], eax
// 00577216  c6470801             mov byte ptr [edi + 8], 1
// 0057721a  eb24                 jmp 0x577240
// 0057721c  807e5800             cmp byte ptr [esi + 0x58], 0
// 00577220  740b                 je 0x57722d
// 00577222  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 00577225  898ea8010000         mov dword ptr [esi + 0x1a8], ecx
// 0057722b  eb13                 jmp 0x577240
// 0057722d  8b16                 mov edx, dword ptr [esi]
// 0057722f  c742142e000000       mov dword ptr [edx + 0x14], 0x2e
// 00577236  8b06                 mov eax, dword ptr [esi]
// 00577238  8b08                 mov ecx, dword ptr [eax]
// 0057723a  56                   push esi
// 0057723b  ffd1                 call ecx
// 0057723d  83c404               add esp, 4
// 00577240  8b969c010000         mov edx, dword ptr [esi + 0x19c]
// 00577246  8b02                 mov eax, dword ptr [edx]
// 00577248  56                   push esi
// 00577249  ffd0                 call eax
// 0057724b  8b8e88010000         mov ecx, dword ptr [esi + 0x188]
// 00577251  8b5108               mov edx, dword ptr [ecx + 8]
// 00577254  56                   push esi
// 00577255  ffd2                 call edx
// 00577257  83c408               add esp, 8
// 0057725a  807e4100             cmp byte ptr [esi + 0x41], 0
// 0057725e  7562                 jne 0x5772c2
// 00577260  807f1000             cmp byte ptr [edi + 0x10], 0
// 00577264  750e                 jne 0x577274
// 00577266  8b86a4010000         mov eax, dword ptr [esi + 0x1a4]
// 0057726c  8b08                 mov ecx, dword ptr [eax]
// 0057726e  56                   push esi
// 0057726f  ffd1                 call ecx
// 00577271  83c404               add esp, 4
// 00577274  8b96a0010000         mov edx, dword ptr [esi + 0x1a0]
// 0057727a  8b02                 mov eax, dword ptr [edx]
// 0057727c  56                   push esi
// 0057727d  ffd0                 call eax
// 0057727f  83c404               add esp, 4
// 00577282  807e4a00             cmp byte ptr [esi + 0x4a], 0
// 00577286  7413                 je 0x57729b
// 00577288  0fb65708             movzx edx, byte ptr [edi + 8]
// 0057728c  8b8ea8010000         mov ecx, dword ptr [esi + 0x1a8]
// 00577292  8b01                 mov eax, dword ptr [ecx]
// 00577294  52                   push edx
// 00577295  56                   push esi
// 00577296  ffd0                 call eax
// 00577298  83c408               add esp, 8
// 0057729b  0fb65708             movzx edx, byte ptr [edi + 8]
// 0057729f  8b8e8c010000         mov ecx, dword ptr [esi + 0x18c]
// 005772a5  8b01                 mov eax, dword ptr [ecx]
// 005772a7  f7da                 neg edx
// 005772a9  1bd2                 sbb edx, edx
// 005772ab  83e203               and edx, 3
// 005772ae  52                   push edx
// 005772af  56                   push esi
// 005772b0  ffd0                 call eax
// 005772b2  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 005772b8  8b11                 mov edx, dword ptr [ecx]
// 005772ba  6a00                 push 0
// 005772bc  56                   push esi
// 005772bd  ffd2                 call edx
// 005772bf  83c410               add esp, 0x10
// 005772c2  8b4608               mov eax, dword ptr [esi + 8]
// 005772c5  85c0                 test eax, eax
// 005772c7  7439                 je 0x577302
// 005772c9  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 005772cc  33d2                 xor edx, edx
// 005772ce  89480c               mov dword ptr [eax + 0xc], ecx
// 005772d1  385708               cmp byte ptr [edi + 8], dl
// 005772d4  8b4608               mov eax, dword ptr [esi + 8]
// 005772d7  0f95c2               setne dl
// 005772da  42                   inc edx
// 005772db  03570c               add edx, dword ptr [edi + 0xc]
// 005772de  895010               mov dword ptr [eax + 0x10], edx
// 005772e1  807e4000             cmp byte ptr [esi + 0x40], 0
// 005772e5  741b                 je 0x577302
// 005772e7  8b8e90010000         mov ecx, dword ptr [esi + 0x190]
// 005772ed  80791100             cmp byte ptr [ecx + 0x11], 0
// 005772f1  750f                 jne 0x577302
// 005772f3  8b4608               mov eax, dword ptr [esi + 8]
// 005772f6  33d2                 xor edx, edx
// 005772f8  38565a               cmp byte ptr [esi + 0x5a], dl
// 005772fb  0f95c2               setne dl
// 005772fe  42                   inc edx
// 005772ff  015010               add dword ptr [eax + 0x10], edx
// 00577302  5f                   pop edi
// 00577303  5e                   pop esi
// 00577304  c3                   ret 
// library jpeg-6b/jdmaster.c (function _prepare_for_output_pass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmaster.c
