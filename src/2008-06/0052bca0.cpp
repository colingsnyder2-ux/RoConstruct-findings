// from server: 100% by auto
// roc 2008-06 0052bca0  unit: seg_00520000  size: 341 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052bca0
//
// 0052bca0  56                   push esi
// 0052bca1  8b742408             mov esi, dword ptr [esp + 8]
// 0052bca5  57                   push edi
// 0052bca6  8bbe80010000         mov edi, dword ptr [esi + 0x180]
// 0052bcac  807f0800             cmp byte ptr [edi + 8], 0
// 0052bcb0  7433                 je 0x52bce5
// 0052bcb2  c6470800             mov byte ptr [edi + 8], 0
// 0052bcb6  8b86a8010000         mov eax, dword ptr [esi + 0x1a8]
// 0052bcbc  8b08                 mov ecx, dword ptr [eax]
// 0052bcbe  6a00                 push 0
// 0052bcc0  56                   push esi
// 0052bcc1  ffd1                 call ecx
// 0052bcc3  8b968c010000         mov edx, dword ptr [esi + 0x18c]
// 0052bcc9  8b02                 mov eax, dword ptr [edx]
// 0052bccb  6a02                 push 2
// 0052bccd  56                   push esi
// 0052bcce  ffd0                 call eax
// 0052bcd0  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 0052bcd6  8b11                 mov edx, dword ptr [ecx]
// 0052bcd8  6a02                 push 2
// 0052bcda  56                   push esi
// 0052bcdb  ffd2                 call edx
// 0052bcdd  83c418               add esp, 0x18
// 0052bce0  e9cd000000           jmp 0x52bdb2
// 0052bce5  807e4a00             cmp byte ptr [esi + 0x4a], 0
// 0052bce9  7445                 je 0x52bd30
// 0052bceb  837e7400             cmp dword ptr [esi + 0x74], 0
// 0052bcef  753f                 jne 0x52bd30
// 0052bcf1  807e5000             cmp byte ptr [esi + 0x50], 0
// 0052bcf5  7415                 je 0x52bd0c
// 0052bcf7  807e5a00             cmp byte ptr [esi + 0x5a], 0
// 0052bcfb  740f                 je 0x52bd0c
// 0052bcfd  8b4718               mov eax, dword ptr [edi + 0x18]
// 0052bd00  8986a8010000         mov dword ptr [esi + 0x1a8], eax
// 0052bd06  c6470801             mov byte ptr [edi + 8], 1
// 0052bd0a  eb24                 jmp 0x52bd30
// 0052bd0c  807e5800             cmp byte ptr [esi + 0x58], 0
// 0052bd10  740b                 je 0x52bd1d
// 0052bd12  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 0052bd15  898ea8010000         mov dword ptr [esi + 0x1a8], ecx
// 0052bd1b  eb13                 jmp 0x52bd30
// 0052bd1d  8b16                 mov edx, dword ptr [esi]
// 0052bd1f  c742142e000000       mov dword ptr [edx + 0x14], 0x2e
// 0052bd26  8b06                 mov eax, dword ptr [esi]
// 0052bd28  8b08                 mov ecx, dword ptr [eax]
// 0052bd2a  56                   push esi
// 0052bd2b  ffd1                 call ecx
// 0052bd2d  83c404               add esp, 4
// 0052bd30  8b969c010000         mov edx, dword ptr [esi + 0x19c]
// 0052bd36  8b02                 mov eax, dword ptr [edx]
// 0052bd38  56                   push esi
// 0052bd39  ffd0                 call eax
// 0052bd3b  8b8e88010000         mov ecx, dword ptr [esi + 0x188]
// 0052bd41  8b5108               mov edx, dword ptr [ecx + 8]
// 0052bd44  56                   push esi
// 0052bd45  ffd2                 call edx
// 0052bd47  83c408               add esp, 8
// 0052bd4a  807e4100             cmp byte ptr [esi + 0x41], 0
// 0052bd4e  7562                 jne 0x52bdb2
// 0052bd50  807f1000             cmp byte ptr [edi + 0x10], 0
// 0052bd54  750e                 jne 0x52bd64
// 0052bd56  8b86a4010000         mov eax, dword ptr [esi + 0x1a4]
// 0052bd5c  8b08                 mov ecx, dword ptr [eax]
// 0052bd5e  56                   push esi
// 0052bd5f  ffd1                 call ecx
// 0052bd61  83c404               add esp, 4
// 0052bd64  8b96a0010000         mov edx, dword ptr [esi + 0x1a0]
// 0052bd6a  8b02                 mov eax, dword ptr [edx]
// 0052bd6c  56                   push esi
// 0052bd6d  ffd0                 call eax
// 0052bd6f  83c404               add esp, 4
// 0052bd72  807e4a00             cmp byte ptr [esi + 0x4a], 0
// 0052bd76  7413                 je 0x52bd8b
// 0052bd78  0fb65708             movzx edx, byte ptr [edi + 8]
// 0052bd7c  8b8ea8010000         mov ecx, dword ptr [esi + 0x1a8]
// 0052bd82  8b01                 mov eax, dword ptr [ecx]
// 0052bd84  52                   push edx
// 0052bd85  56                   push esi
// 0052bd86  ffd0                 call eax
// 0052bd88  83c408               add esp, 8
// 0052bd8b  0fb65708             movzx edx, byte ptr [edi + 8]
// 0052bd8f  8b8e8c010000         mov ecx, dword ptr [esi + 0x18c]
// 0052bd95  8b01                 mov eax, dword ptr [ecx]
// 0052bd97  f7da                 neg edx
// 0052bd99  1bd2                 sbb edx, edx
// 0052bd9b  83e203               and edx, 3
// 0052bd9e  52                   push edx
// 0052bd9f  56                   push esi
// 0052bda0  ffd0                 call eax
// 0052bda2  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 0052bda8  8b11                 mov edx, dword ptr [ecx]
// 0052bdaa  6a00                 push 0
// 0052bdac  56                   push esi
// 0052bdad  ffd2                 call edx
// 0052bdaf  83c410               add esp, 0x10
// 0052bdb2  8b4608               mov eax, dword ptr [esi + 8]
// 0052bdb5  85c0                 test eax, eax
// 0052bdb7  7439                 je 0x52bdf2
// 0052bdb9  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 0052bdbc  33d2                 xor edx, edx
// 0052bdbe  89480c               mov dword ptr [eax + 0xc], ecx
// 0052bdc1  385708               cmp byte ptr [edi + 8], dl
// 0052bdc4  8b4608               mov eax, dword ptr [esi + 8]
// 0052bdc7  0f95c2               setne dl
// 0052bdca  42                   inc edx
// 0052bdcb  03570c               add edx, dword ptr [edi + 0xc]
// 0052bdce  895010               mov dword ptr [eax + 0x10], edx
// 0052bdd1  807e4000             cmp byte ptr [esi + 0x40], 0
// 0052bdd5  741b                 je 0x52bdf2
// 0052bdd7  8b8e90010000         mov ecx, dword ptr [esi + 0x190]
// 0052bddd  80791100             cmp byte ptr [ecx + 0x11], 0
// 0052bde1  750f                 jne 0x52bdf2
// 0052bde3  8b4608               mov eax, dword ptr [esi + 8]
// 0052bde6  33d2                 xor edx, edx
// 0052bde8  38565a               cmp byte ptr [esi + 0x5a], dl
// 0052bdeb  0f95c2               setne dl
// 0052bdee  42                   inc edx
// 0052bdef  015010               add dword ptr [eax + 0x10], edx
// 0052bdf2  5f                   pop edi
// 0052bdf3  5e                   pop esi
// 0052bdf4  c3                   ret 
// library jpeg-6b/jdmaster.c (function _prepare_for_output_pass)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmaster.c
