// from server: 100% by auto
// roc 2007-08 00520480  unit: seg_00520000  size: 344 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00520480
//
// 00520480  56                   push esi
// 00520481  8b742408             mov esi, dword ptr [esp + 8]
// 00520485  57                   push edi
// 00520486  8bbe80010000         mov edi, dword ptr [esi + 0x180]
// 0052048c  807f0800             cmp byte ptr [edi + 8], 0
// 00520490  7433                 je 0x5204c5
// 00520492  c6470800             mov byte ptr [edi + 8], 0
// 00520496  8b86a8010000         mov eax, dword ptr [esi + 0x1a8]
// 0052049c  8b08                 mov ecx, dword ptr [eax]
// 0052049e  6a00                 push 0
// 005204a0  56                   push esi
// 005204a1  ffd1                 call ecx
// 005204a3  8b968c010000         mov edx, dword ptr [esi + 0x18c]
// 005204a9  8b02                 mov eax, dword ptr [edx]
// 005204ab  6a02                 push 2
// 005204ad  56                   push esi
// 005204ae  ffd0                 call eax
// 005204b0  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 005204b6  8b11                 mov edx, dword ptr [ecx]
// 005204b8  6a02                 push 2
// 005204ba  56                   push esi
// 005204bb  ffd2                 call edx
// 005204bd  83c418               add esp, 0x18
// 005204c0  e9cc000000           jmp 0x520591
// 005204c5  807e4a00             cmp byte ptr [esi + 0x4a], 0
// 005204c9  7445                 je 0x520510
// 005204cb  837e7400             cmp dword ptr [esi + 0x74], 0
// 005204cf  753f                 jne 0x520510
// 005204d1  807e5000             cmp byte ptr [esi + 0x50], 0
// 005204d5  7415                 je 0x5204ec
// 005204d7  807e5a00             cmp byte ptr [esi + 0x5a], 0
// 005204db  740f                 je 0x5204ec
// 005204dd  8b4718               mov eax, dword ptr [edi + 0x18]
// 005204e0  8986a8010000         mov dword ptr [esi + 0x1a8], eax
// 005204e6  c6470801             mov byte ptr [edi + 8], 1
// 005204ea  eb24                 jmp 0x520510
// 005204ec  807e5800             cmp byte ptr [esi + 0x58], 0
// 005204f0  740b                 je 0x5204fd
// 005204f2  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 005204f5  898ea8010000         mov dword ptr [esi + 0x1a8], ecx
// 005204fb  eb13                 jmp 0x520510
// 005204fd  8b16                 mov edx, dword ptr [esi]
// 005204ff  c742142e000000       mov dword ptr [edx + 0x14], 0x2e
// 00520506  8b06                 mov eax, dword ptr [esi]
// 00520508  8b08                 mov ecx, dword ptr [eax]
// 0052050a  56                   push esi
// 0052050b  ffd1                 call ecx
// 0052050d  83c404               add esp, 4
// 00520510  8b969c010000         mov edx, dword ptr [esi + 0x19c]
// 00520516  8b02                 mov eax, dword ptr [edx]
// 00520518  56                   push esi
// 00520519  ffd0                 call eax
// 0052051b  8b8e88010000         mov ecx, dword ptr [esi + 0x188]
// 00520521  8b5108               mov edx, dword ptr [ecx + 8]
// 00520524  56                   push esi
// 00520525  ffd2                 call edx
// 00520527  83c408               add esp, 8
// 0052052a  807e4100             cmp byte ptr [esi + 0x41], 0
// 0052052e  7561                 jne 0x520591
// 00520530  807f1000             cmp byte ptr [edi + 0x10], 0
// 00520534  750e                 jne 0x520544
// 00520536  8b86a4010000         mov eax, dword ptr [esi + 0x1a4]
// 0052053c  8b08                 mov ecx, dword ptr [eax]
// 0052053e  56                   push esi
// 0052053f  ffd1                 call ecx
// 00520541  83c404               add esp, 4
// 00520544  8b96a0010000         mov edx, dword ptr [esi + 0x1a0]
// 0052054a  8b02                 mov eax, dword ptr [edx]
// 0052054c  56                   push esi
// 0052054d  ffd0                 call eax
// 0052054f  83c404               add esp, 4
// 00520552  807e4a00             cmp byte ptr [esi + 0x4a], 0
// 00520556  7413                 je 0x52056b
// 00520558  0fb65708             movzx edx, byte ptr [edi + 8]
// 0052055c  8b8ea8010000         mov ecx, dword ptr [esi + 0x1a8]
// 00520562  8b01                 mov eax, dword ptr [ecx]
// 00520564  52                   push edx
// 00520565  56                   push esi
// 00520566  ffd0                 call eax
// 00520568  83c408               add esp, 8
// 0052056b  8a5708               mov dl, byte ptr [edi + 8]
// 0052056e  8b8e8c010000         mov ecx, dword ptr [esi + 0x18c]
// 00520574  8b01                 mov eax, dword ptr [ecx]
// 00520576  f6da                 neg dl
// 00520578  1bd2                 sbb edx, edx
// 0052057a  83e203               and edx, 3
// 0052057d  52                   push edx
// 0052057e  56                   push esi
// 0052057f  ffd0                 call eax
// 00520581  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 00520587  8b11                 mov edx, dword ptr [ecx]
// 00520589  6a00                 push 0
// 0052058b  56                   push esi
// 0052058c  ffd2                 call edx
// 0052058e  83c410               add esp, 0x10
// 00520591  8b4608               mov eax, dword ptr [esi + 8]
// 00520594  85c0                 test eax, eax
// 00520596  743d                 je 0x5205d5
// 00520598  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 0052059b  33d2                 xor edx, edx
// 0052059d  89480c               mov dword ptr [eax + 0xc], ecx
// 005205a0  385708               cmp byte ptr [edi + 8], dl
// 005205a3  8b4608               mov eax, dword ptr [esi + 8]
// 005205a6  0f95c2               setne dl
// 005205a9  83c201               add edx, 1
// 005205ac  03570c               add edx, dword ptr [edi + 0xc]
// 005205af  895010               mov dword ptr [eax + 0x10], edx
// 005205b2  807e4000             cmp byte ptr [esi + 0x40], 0
// 005205b6  741d                 je 0x5205d5
// 005205b8  8b8e90010000         mov ecx, dword ptr [esi + 0x190]
// 005205be  80791100             cmp byte ptr [ecx + 0x11], 0
// 005205c2  7511                 jne 0x5205d5
// 005205c4  8b4608               mov eax, dword ptr [esi + 8]
// 005205c7  33d2                 xor edx, edx
// 005205c9  38565a               cmp byte ptr [esi + 0x5a], dl
// 005205cc  0f95c2               setne dl
// 005205cf  83c201               add edx, 1
// 005205d2  015010               add dword ptr [eax + 0x10], edx
// 005205d5  5f                   pop edi
// 005205d6  5e                   pop esi
// 005205d7  c3                   ret 
// library jpeg-6b/jdmaster.c (function _prepare_for_output_pass)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmaster.c
