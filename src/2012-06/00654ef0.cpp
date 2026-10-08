// from server: 100% by auto
// roc 2012-06 00654ef0  unit: seg_00650000  size: 341 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00654ef0
//
// 00654ef0  56                   push esi
// 00654ef1  8b742408             mov esi, dword ptr [esp + 8]
// 00654ef5  57                   push edi
// 00654ef6  8bbe80010000         mov edi, dword ptr [esi + 0x180]
// 00654efc  807f0800             cmp byte ptr [edi + 8], 0
// 00654f00  7433                 je 0x654f35
// 00654f02  c6470800             mov byte ptr [edi + 8], 0
// 00654f06  8b86a8010000         mov eax, dword ptr [esi + 0x1a8]
// 00654f0c  8b08                 mov ecx, dword ptr [eax]
// 00654f0e  6a00                 push 0
// 00654f10  56                   push esi
// 00654f11  ffd1                 call ecx
// 00654f13  8b968c010000         mov edx, dword ptr [esi + 0x18c]
// 00654f19  8b02                 mov eax, dword ptr [edx]
// 00654f1b  6a02                 push 2
// 00654f1d  56                   push esi
// 00654f1e  ffd0                 call eax
// 00654f20  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 00654f26  8b11                 mov edx, dword ptr [ecx]
// 00654f28  6a02                 push 2
// 00654f2a  56                   push esi
// 00654f2b  ffd2                 call edx
// 00654f2d  83c418               add esp, 0x18
// 00654f30  e9cd000000           jmp 0x655002
// 00654f35  807e4a00             cmp byte ptr [esi + 0x4a], 0
// 00654f39  7445                 je 0x654f80
// 00654f3b  837e7400             cmp dword ptr [esi + 0x74], 0
// 00654f3f  753f                 jne 0x654f80
// 00654f41  807e5000             cmp byte ptr [esi + 0x50], 0
// 00654f45  7415                 je 0x654f5c
// 00654f47  807e5a00             cmp byte ptr [esi + 0x5a], 0
// 00654f4b  740f                 je 0x654f5c
// 00654f4d  8b4718               mov eax, dword ptr [edi + 0x18]
// 00654f50  8986a8010000         mov dword ptr [esi + 0x1a8], eax
// 00654f56  c6470801             mov byte ptr [edi + 8], 1
// 00654f5a  eb24                 jmp 0x654f80
// 00654f5c  807e5800             cmp byte ptr [esi + 0x58], 0
// 00654f60  740b                 je 0x654f6d
// 00654f62  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 00654f65  898ea8010000         mov dword ptr [esi + 0x1a8], ecx
// 00654f6b  eb13                 jmp 0x654f80
// 00654f6d  8b16                 mov edx, dword ptr [esi]
// 00654f6f  c742142e000000       mov dword ptr [edx + 0x14], 0x2e
// 00654f76  8b06                 mov eax, dword ptr [esi]
// 00654f78  8b08                 mov ecx, dword ptr [eax]
// 00654f7a  56                   push esi
// 00654f7b  ffd1                 call ecx
// 00654f7d  83c404               add esp, 4
// 00654f80  8b969c010000         mov edx, dword ptr [esi + 0x19c]
// 00654f86  8b02                 mov eax, dword ptr [edx]
// 00654f88  56                   push esi
// 00654f89  ffd0                 call eax
// 00654f8b  8b8e88010000         mov ecx, dword ptr [esi + 0x188]
// 00654f91  8b5108               mov edx, dword ptr [ecx + 8]
// 00654f94  56                   push esi
// 00654f95  ffd2                 call edx
// 00654f97  83c408               add esp, 8
// 00654f9a  807e4100             cmp byte ptr [esi + 0x41], 0
// 00654f9e  7562                 jne 0x655002
// 00654fa0  807f1000             cmp byte ptr [edi + 0x10], 0
// 00654fa4  750e                 jne 0x654fb4
// 00654fa6  8b86a4010000         mov eax, dword ptr [esi + 0x1a4]
// 00654fac  8b08                 mov ecx, dword ptr [eax]
// 00654fae  56                   push esi
// 00654faf  ffd1                 call ecx
// 00654fb1  83c404               add esp, 4
// 00654fb4  8b96a0010000         mov edx, dword ptr [esi + 0x1a0]
// 00654fba  8b02                 mov eax, dword ptr [edx]
// 00654fbc  56                   push esi
// 00654fbd  ffd0                 call eax
// 00654fbf  83c404               add esp, 4
// 00654fc2  807e4a00             cmp byte ptr [esi + 0x4a], 0
// 00654fc6  7413                 je 0x654fdb
// 00654fc8  0fb65708             movzx edx, byte ptr [edi + 8]
// 00654fcc  8b8ea8010000         mov ecx, dword ptr [esi + 0x1a8]
// 00654fd2  8b01                 mov eax, dword ptr [ecx]
// 00654fd4  52                   push edx
// 00654fd5  56                   push esi
// 00654fd6  ffd0                 call eax
// 00654fd8  83c408               add esp, 8
// 00654fdb  0fb65708             movzx edx, byte ptr [edi + 8]
// 00654fdf  8b8e8c010000         mov ecx, dword ptr [esi + 0x18c]
// 00654fe5  8b01                 mov eax, dword ptr [ecx]
// 00654fe7  f7da                 neg edx
// 00654fe9  1bd2                 sbb edx, edx
// 00654feb  83e203               and edx, 3
// 00654fee  52                   push edx
// 00654fef  56                   push esi
// 00654ff0  ffd0                 call eax
// 00654ff2  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 00654ff8  8b11                 mov edx, dword ptr [ecx]
// 00654ffa  6a00                 push 0
// 00654ffc  56                   push esi
// 00654ffd  ffd2                 call edx
// 00654fff  83c410               add esp, 0x10
// 00655002  8b4608               mov eax, dword ptr [esi + 8]
// 00655005  85c0                 test eax, eax
// 00655007  7439                 je 0x655042
// 00655009  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 0065500c  33d2                 xor edx, edx
// 0065500e  89480c               mov dword ptr [eax + 0xc], ecx
// 00655011  385708               cmp byte ptr [edi + 8], dl
// 00655014  8b4608               mov eax, dword ptr [esi + 8]
// 00655017  0f95c2               setne dl
// 0065501a  42                   inc edx
// 0065501b  03570c               add edx, dword ptr [edi + 0xc]
// 0065501e  895010               mov dword ptr [eax + 0x10], edx
// 00655021  807e4000             cmp byte ptr [esi + 0x40], 0
// 00655025  741b                 je 0x655042
// 00655027  8b8e90010000         mov ecx, dword ptr [esi + 0x190]
// 0065502d  80791100             cmp byte ptr [ecx + 0x11], 0
// 00655031  750f                 jne 0x655042
// 00655033  8b4608               mov eax, dword ptr [esi + 8]
// 00655036  33d2                 xor edx, edx
// 00655038  38565a               cmp byte ptr [esi + 0x5a], dl
// 0065503b  0f95c2               setne dl
// 0065503e  42                   inc edx
// 0065503f  015010               add dword ptr [eax + 0x10], edx
// 00655042  5f                   pop edi
// 00655043  5e                   pop esi
// 00655044  c3                   ret 
// library jpeg-6b/jdmaster.c (function _prepare_for_output_pass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmaster.c
