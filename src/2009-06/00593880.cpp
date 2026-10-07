// roc 2009-06 00593880  unit: seg_00590000  size: 341 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00593880
//
// 00593880  56                   push esi
// 00593881  8b742408             mov esi, dword ptr [esp + 8]
// 00593885  57                   push edi
// 00593886  8bbe80010000         mov edi, dword ptr [esi + 0x180]
// 0059388c  807f0800             cmp byte ptr [edi + 8], 0
// 00593890  7433                 je 0x5938c5
// 00593892  c6470800             mov byte ptr [edi + 8], 0
// 00593896  8b86a8010000         mov eax, dword ptr [esi + 0x1a8]
// 0059389c  8b08                 mov ecx, dword ptr [eax]
// 0059389e  6a00                 push 0
// 005938a0  56                   push esi
// 005938a1  ffd1                 call ecx
// 005938a3  8b968c010000         mov edx, dword ptr [esi + 0x18c]
// 005938a9  8b02                 mov eax, dword ptr [edx]
// 005938ab  6a02                 push 2
// 005938ad  56                   push esi
// 005938ae  ffd0                 call eax
// 005938b0  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 005938b6  8b11                 mov edx, dword ptr [ecx]
// 005938b8  6a02                 push 2
// 005938ba  56                   push esi
// 005938bb  ffd2                 call edx
// 005938bd  83c418               add esp, 0x18
// 005938c0  e9cd000000           jmp 0x593992
// 005938c5  807e4a00             cmp byte ptr [esi + 0x4a], 0
// 005938c9  7445                 je 0x593910
// 005938cb  837e7400             cmp dword ptr [esi + 0x74], 0
// 005938cf  753f                 jne 0x593910
// 005938d1  807e5000             cmp byte ptr [esi + 0x50], 0
// 005938d5  7415                 je 0x5938ec
// 005938d7  807e5a00             cmp byte ptr [esi + 0x5a], 0
// 005938db  740f                 je 0x5938ec
// 005938dd  8b4718               mov eax, dword ptr [edi + 0x18]
// 005938e0  8986a8010000         mov dword ptr [esi + 0x1a8], eax
// 005938e6  c6470801             mov byte ptr [edi + 8], 1
// 005938ea  eb24                 jmp 0x593910
// 005938ec  807e5800             cmp byte ptr [esi + 0x58], 0
// 005938f0  740b                 je 0x5938fd
// 005938f2  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 005938f5  898ea8010000         mov dword ptr [esi + 0x1a8], ecx
// 005938fb  eb13                 jmp 0x593910
// 005938fd  8b16                 mov edx, dword ptr [esi]
// 005938ff  c742142e000000       mov dword ptr [edx + 0x14], 0x2e
// 00593906  8b06                 mov eax, dword ptr [esi]
// 00593908  8b08                 mov ecx, dword ptr [eax]
// 0059390a  56                   push esi
// 0059390b  ffd1                 call ecx
// 0059390d  83c404               add esp, 4
// 00593910  8b969c010000         mov edx, dword ptr [esi + 0x19c]
// 00593916  8b02                 mov eax, dword ptr [edx]
// 00593918  56                   push esi
// 00593919  ffd0                 call eax
// 0059391b  8b8e88010000         mov ecx, dword ptr [esi + 0x188]
// 00593921  8b5108               mov edx, dword ptr [ecx + 8]
// 00593924  56                   push esi
// 00593925  ffd2                 call edx
// 00593927  83c408               add esp, 8
// 0059392a  807e4100             cmp byte ptr [esi + 0x41], 0
// 0059392e  7562                 jne 0x593992
// 00593930  807f1000             cmp byte ptr [edi + 0x10], 0
// 00593934  750e                 jne 0x593944
// 00593936  8b86a4010000         mov eax, dword ptr [esi + 0x1a4]
// 0059393c  8b08                 mov ecx, dword ptr [eax]
// 0059393e  56                   push esi
// 0059393f  ffd1                 call ecx
// 00593941  83c404               add esp, 4
// 00593944  8b96a0010000         mov edx, dword ptr [esi + 0x1a0]
// 0059394a  8b02                 mov eax, dword ptr [edx]
// 0059394c  56                   push esi
// 0059394d  ffd0                 call eax
// 0059394f  83c404               add esp, 4
// 00593952  807e4a00             cmp byte ptr [esi + 0x4a], 0
// 00593956  7413                 je 0x59396b
// 00593958  0fb65708             movzx edx, byte ptr [edi + 8]
// 0059395c  8b8ea8010000         mov ecx, dword ptr [esi + 0x1a8]
// 00593962  8b01                 mov eax, dword ptr [ecx]
// 00593964  52                   push edx
// 00593965  56                   push esi
// 00593966  ffd0                 call eax
// 00593968  83c408               add esp, 8
// 0059396b  0fb65708             movzx edx, byte ptr [edi + 8]
// 0059396f  8b8e8c010000         mov ecx, dword ptr [esi + 0x18c]
// 00593975  8b01                 mov eax, dword ptr [ecx]
// 00593977  f7da                 neg edx
// 00593979  1bd2                 sbb edx, edx
// 0059397b  83e203               and edx, 3
// 0059397e  52                   push edx
// 0059397f  56                   push esi
// 00593980  ffd0                 call eax
// 00593982  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 00593988  8b11                 mov edx, dword ptr [ecx]
// 0059398a  6a00                 push 0
// 0059398c  56                   push esi
// 0059398d  ffd2                 call edx
// 0059398f  83c410               add esp, 0x10
// 00593992  8b4608               mov eax, dword ptr [esi + 8]
// 00593995  85c0                 test eax, eax
// 00593997  7439                 je 0x5939d2
// 00593999  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 0059399c  33d2                 xor edx, edx
// 0059399e  89480c               mov dword ptr [eax + 0xc], ecx
// 005939a1  385708               cmp byte ptr [edi + 8], dl
// 005939a4  8b4608               mov eax, dword ptr [esi + 8]
// 005939a7  0f95c2               setne dl
// 005939aa  42                   inc edx
// 005939ab  03570c               add edx, dword ptr [edi + 0xc]
// 005939ae  895010               mov dword ptr [eax + 0x10], edx
// 005939b1  807e4000             cmp byte ptr [esi + 0x40], 0
// 005939b5  741b                 je 0x5939d2
// 005939b7  8b8e90010000         mov ecx, dword ptr [esi + 0x190]
// 005939bd  80791100             cmp byte ptr [ecx + 0x11], 0
// 005939c1  750f                 jne 0x5939d2
// 005939c3  8b4608               mov eax, dword ptr [esi + 8]
// 005939c6  33d2                 xor edx, edx
// 005939c8  38565a               cmp byte ptr [esi + 0x5a], dl
// 005939cb  0f95c2               setne dl
// 005939ce  42                   inc edx
// 005939cf  015010               add dword ptr [eax + 0x10], edx
// 005939d2  5f                   pop edi
// 005939d3  5e                   pop esi
// 005939d4  c3                   ret 
// library jpeg-6b/jdmaster.c (function _prepare_for_output_pass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmaster.c
