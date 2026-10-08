// roc 2009-12 00615890  unit: seg_00610000  size: 341 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00615890
//
// 00615890  56                   push esi
// 00615891  8b742408             mov esi, dword ptr [esp + 8]
// 00615895  57                   push edi
// 00615896  8bbe80010000         mov edi, dword ptr [esi + 0x180]
// 0061589c  807f0800             cmp byte ptr [edi + 8], 0
// 006158a0  7433                 je 0x6158d5
// 006158a2  c6470800             mov byte ptr [edi + 8], 0
// 006158a6  8b86a8010000         mov eax, dword ptr [esi + 0x1a8]
// 006158ac  8b08                 mov ecx, dword ptr [eax]
// 006158ae  6a00                 push 0
// 006158b0  56                   push esi
// 006158b1  ffd1                 call ecx
// 006158b3  8b968c010000         mov edx, dword ptr [esi + 0x18c]
// 006158b9  8b02                 mov eax, dword ptr [edx]
// 006158bb  6a02                 push 2
// 006158bd  56                   push esi
// 006158be  ffd0                 call eax
// 006158c0  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 006158c6  8b11                 mov edx, dword ptr [ecx]
// 006158c8  6a02                 push 2
// 006158ca  56                   push esi
// 006158cb  ffd2                 call edx
// 006158cd  83c418               add esp, 0x18
// 006158d0  e9cd000000           jmp 0x6159a2
// 006158d5  807e4a00             cmp byte ptr [esi + 0x4a], 0
// 006158d9  7445                 je 0x615920
// 006158db  837e7400             cmp dword ptr [esi + 0x74], 0
// 006158df  753f                 jne 0x615920
// 006158e1  807e5000             cmp byte ptr [esi + 0x50], 0
// 006158e5  7415                 je 0x6158fc
// 006158e7  807e5a00             cmp byte ptr [esi + 0x5a], 0
// 006158eb  740f                 je 0x6158fc
// 006158ed  8b4718               mov eax, dword ptr [edi + 0x18]
// 006158f0  8986a8010000         mov dword ptr [esi + 0x1a8], eax
// 006158f6  c6470801             mov byte ptr [edi + 8], 1
// 006158fa  eb24                 jmp 0x615920
// 006158fc  807e5800             cmp byte ptr [esi + 0x58], 0
// 00615900  740b                 je 0x61590d
// 00615902  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 00615905  898ea8010000         mov dword ptr [esi + 0x1a8], ecx
// 0061590b  eb13                 jmp 0x615920
// 0061590d  8b16                 mov edx, dword ptr [esi]
// 0061590f  c742142e000000       mov dword ptr [edx + 0x14], 0x2e
// 00615916  8b06                 mov eax, dword ptr [esi]
// 00615918  8b08                 mov ecx, dword ptr [eax]
// 0061591a  56                   push esi
// 0061591b  ffd1                 call ecx
// 0061591d  83c404               add esp, 4
// 00615920  8b969c010000         mov edx, dword ptr [esi + 0x19c]
// 00615926  8b02                 mov eax, dword ptr [edx]
// 00615928  56                   push esi
// 00615929  ffd0                 call eax
// 0061592b  8b8e88010000         mov ecx, dword ptr [esi + 0x188]
// 00615931  8b5108               mov edx, dword ptr [ecx + 8]
// 00615934  56                   push esi
// 00615935  ffd2                 call edx
// 00615937  83c408               add esp, 8
// 0061593a  807e4100             cmp byte ptr [esi + 0x41], 0
// 0061593e  7562                 jne 0x6159a2
// 00615940  807f1000             cmp byte ptr [edi + 0x10], 0
// 00615944  750e                 jne 0x615954
// 00615946  8b86a4010000         mov eax, dword ptr [esi + 0x1a4]
// 0061594c  8b08                 mov ecx, dword ptr [eax]
// 0061594e  56                   push esi
// 0061594f  ffd1                 call ecx
// 00615951  83c404               add esp, 4
// 00615954  8b96a0010000         mov edx, dword ptr [esi + 0x1a0]
// 0061595a  8b02                 mov eax, dword ptr [edx]
// 0061595c  56                   push esi
// 0061595d  ffd0                 call eax
// 0061595f  83c404               add esp, 4
// 00615962  807e4a00             cmp byte ptr [esi + 0x4a], 0
// 00615966  7413                 je 0x61597b
// 00615968  0fb65708             movzx edx, byte ptr [edi + 8]
// 0061596c  8b8ea8010000         mov ecx, dword ptr [esi + 0x1a8]
// 00615972  8b01                 mov eax, dword ptr [ecx]
// 00615974  52                   push edx
// 00615975  56                   push esi
// 00615976  ffd0                 call eax
// 00615978  83c408               add esp, 8
// 0061597b  0fb65708             movzx edx, byte ptr [edi + 8]
// 0061597f  8b8e8c010000         mov ecx, dword ptr [esi + 0x18c]
// 00615985  8b01                 mov eax, dword ptr [ecx]
// 00615987  f7da                 neg edx
// 00615989  1bd2                 sbb edx, edx
// 0061598b  83e203               and edx, 3
// 0061598e  52                   push edx
// 0061598f  56                   push esi
// 00615990  ffd0                 call eax
// 00615992  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 00615998  8b11                 mov edx, dword ptr [ecx]
// 0061599a  6a00                 push 0
// 0061599c  56                   push esi
// 0061599d  ffd2                 call edx
// 0061599f  83c410               add esp, 0x10
// 006159a2  8b4608               mov eax, dword ptr [esi + 8]
// 006159a5  85c0                 test eax, eax
// 006159a7  7439                 je 0x6159e2
// 006159a9  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 006159ac  33d2                 xor edx, edx
// 006159ae  89480c               mov dword ptr [eax + 0xc], ecx
// 006159b1  385708               cmp byte ptr [edi + 8], dl
// 006159b4  8b4608               mov eax, dword ptr [esi + 8]
// 006159b7  0f95c2               setne dl
// 006159ba  42                   inc edx
// 006159bb  03570c               add edx, dword ptr [edi + 0xc]
// 006159be  895010               mov dword ptr [eax + 0x10], edx
// 006159c1  807e4000             cmp byte ptr [esi + 0x40], 0
// 006159c5  741b                 je 0x6159e2
// 006159c7  8b8e90010000         mov ecx, dword ptr [esi + 0x190]
// 006159cd  80791100             cmp byte ptr [ecx + 0x11], 0
// 006159d1  750f                 jne 0x6159e2
// 006159d3  8b4608               mov eax, dword ptr [esi + 8]
// 006159d6  33d2                 xor edx, edx
// 006159d8  38565a               cmp byte ptr [esi + 0x5a], dl
// 006159db  0f95c2               setne dl
// 006159de  42                   inc edx
// 006159df  015010               add dword ptr [eax + 0x10], edx
// 006159e2  5f                   pop edi
// 006159e3  5e                   pop esi
// 006159e4  c3                   ret 
// library jpeg-6b/jdmaster.c (function _prepare_for_output_pass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmaster.c
