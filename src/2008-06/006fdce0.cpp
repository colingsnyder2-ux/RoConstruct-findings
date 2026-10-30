// from server: 100% by auto
// roc 2008-06 006fdce0  unit: CXTPPropExchange  size: 460 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006fdce0
//
// 006fdce0  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006fdce4  56                   push esi
// 006fdce5  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006fdce9  3bf2                 cmp esi, edx
// 006fdceb  7509                 jne 0x6fdcf6
// 006fdced  b801000000           mov eax, 1
// 006fdcf2  5e                   pop esi
// 006fdcf3  c20c00               ret 0xc
// 006fdcf6  85f6                 test esi, esi
// 006fdcf8  0f842c010000         je 0x6fde2a
// 006fdcfe  85d2                 test edx, edx
// 006fdd00  0f8424010000         je 0x6fde2a
// 006fdd06  53                   push ebx
// 006fdd07  57                   push edi
// 006fdd08  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006fdd0c  0fb7df               movzx ebx, di
// 006fdd0f  83c3fe               add ebx, -2
// 006fdd12  33c0                 xor eax, eax
// 006fdd14  83fb63               cmp ebx, 0x63
// 006fdd17  0f8707010000         ja 0x6fde24
// 006fdd1d  0fb69b48de6f00       movzx ebx, byte ptr [ebx + 0x6fde48]
// 006fdd24  ff249d30de6f00       jmp dword ptr [ebx*4 + 0x6fde30]
// 006fdd2b  8b06                 mov eax, dword ptr [esi]
// 006fdd2d  8bca                 mov ecx, edx
// 006fdd2f  90                   nop 
// 006fdd30  668b10               mov dx, word ptr [eax]
// 006fdd33  663b11               cmp dx, word ptr [ecx]
// 006fdd36  752b                 jne 0x6fdd63
// 006fdd38  6685d2               test dx, dx
// 006fdd3b  7415                 je 0x6fdd52
// 006fdd3d  668b5002             mov dx, word ptr [eax + 2]
// 006fdd41  663b5102             cmp dx, word ptr [ecx + 2]
// 006fdd45  751c                 jne 0x6fdd63
// 006fdd47  83c004               add eax, 4
// 006fdd4a  83c104               add ecx, 4
// 006fdd4d  6685d2               test dx, dx
// 006fdd50  75de                 jne 0x6fdd30
// 006fdd52  33c0                 xor eax, eax
// 006fdd54  33c9                 xor ecx, ecx
// 006fdd56  85c0                 test eax, eax
// 006fdd58  0f94c1               sete cl
// 006fdd5b  5f                   pop edi
// 006fdd5c  5b                   pop ebx
// 006fdd5d  5e                   pop esi
// 006fdd5e  8bc1                 mov eax, ecx
// 006fdd60  c20c00               ret 0xc
// 006fdd63  1bc0                 sbb eax, eax
// 006fdd65  83d8ff               sbb eax, -1
// 006fdd68  33c9                 xor ecx, ecx
// 006fdd6a  85c0                 test eax, eax
// 006fdd6c  0f94c1               sete cl
// 006fdd6f  5f                   pop edi
// 006fdd70  5b                   pop ebx
// 006fdd71  5e                   pop esi
// 006fdd72  8bc1                 mov eax, ecx
// 006fdd74  c20c00               ret 0xc
// 006fdd77  52                   push edx
// 006fdd78  8bce                 mov ecx, esi
// 006fdd7a  ff15f02f8000         call dword ptr [0x802ff0]
// 006fdd80  f7d8                 neg eax
// 006fdd82  5f                   pop edi
// 006fdd83  1bc0                 sbb eax, eax
// 006fdd85  5b                   pop ebx
// 006fdd86  40                   inc eax
// 006fdd87  5e                   pop esi
// 006fdd88  c20c00               ret 0xc
// 006fdd8b  57                   push edi
// 006fdd8c  e85fecffff           call 0x6fc9f0
// 006fdd91  83f804               cmp eax, 4
// 006fdd94  7214                 jb 0x6fddaa
// 006fdd96  8b0e                 mov ecx, dword ptr [esi]
// 006fdd98  3b0a                 cmp ecx, dword ptr [edx]
// 006fdd9a  7512                 jne 0x6fddae
// 006fdd9c  83e804               sub eax, 4
// 006fdd9f  83c204               add edx, 4
// 006fdda2  83c604               add esi, 4
// 006fdda5  83f804               cmp eax, 4
// 006fdda8  73ec                 jae 0x6fdd96
// 006fddaa  85c0                 test eax, eax
// 006fddac  744e                 je 0x6fddfc
// 006fddae  0fb60e               movzx ecx, byte ptr [esi]
// 006fddb1  0fb63a               movzx edi, byte ptr [edx]
// 006fddb4  2bcf                 sub ecx, edi
// 006fddb6  7531                 jne 0x6fdde9
// 006fddb8  83f801               cmp eax, 1
// 006fddbb  763f                 jbe 0x6fddfc
// 006fddbd  0fb64e01             movzx ecx, byte ptr [esi + 1]
// 006fddc1  0fb67a01             movzx edi, byte ptr [edx + 1]
// 006fddc5  2bcf                 sub ecx, edi
// 006fddc7  7520                 jne 0x6fdde9
// 006fddc9  83f802               cmp eax, 2
// 006fddcc  762e                 jbe 0x6fddfc
// 006fddce  0fb64e02             movzx ecx, byte ptr [esi + 2]
// 006fddd2  0fb67a02             movzx edi, byte ptr [edx + 2]
// 006fddd6  2bcf                 sub ecx, edi
// 006fddd8  750f                 jne 0x6fdde9
// 006fddda  83f803               cmp eax, 3
// 006fdddd  761d                 jbe 0x6fddfc
// 006fdddf  0fb64e03             movzx ecx, byte ptr [esi + 3]
// 006fdde3  0fb65203             movzx edx, byte ptr [edx + 3]
// 006fdde7  2bca                 sub ecx, edx
// 006fdde9  c1f91f               sar ecx, 0x1f
// 006fddec  5f                   pop edi
// 006fdded  83c901               or ecx, 1
// 006fddf0  33c0                 xor eax, eax
// 006fddf2  85c9                 test ecx, ecx
// 006fddf4  5b                   pop ebx
// 006fddf5  0f94c0               sete al
// 006fddf8  5e                   pop esi
// 006fddf9  c20c00               ret 0xc
// 006fddfc  5f                   pop edi
// 006fddfd  33c9                 xor ecx, ecx
// 006fddff  33c0                 xor eax, eax
// 006fde01  85c9                 test ecx, ecx
// 006fde03  5b                   pop ebx
// 006fde04  0f94c0               sete al
// 006fde07  5e                   pop esi
// 006fde08  c20c00               ret 0xc
// 006fde0b  52                   push edx
// 006fde0c  8bce                 mov ecx, esi
// 006fde0e  e833e80b00           call 0x7bc646
// 006fde13  5f                   pop edi
// 006fde14  5b                   pop ebx
// 006fde15  5e                   pop esi
// 006fde16  c20c00               ret 0xc
// 006fde19  52                   push edx
// 006fde1a  8bce                 mov ecx, esi
// 006fde1c  e82facfdff           call 0x6d8a50
// 006fde21  0fb6c0               movzx eax, al
// 006fde24  5f                   pop edi
// 006fde25  5b                   pop ebx
// 006fde26  5e                   pop esi
// 006fde27  c20c00               ret 0xc
// 006fde2a  33c0                 xor eax, eax
// 006fde2c  5e                   pop esi
// 006fde2d  c20c00               ret 0xc
// 006fde30  8bdd                 mov ebx, ebp
// 006fde32  6f                   outsd dx, dword ptr [esi]
// 006fde33  0019                 add byte ptr [ecx], bl
// 006fde35  de6f00               fisubr word ptr [edi]
// 006fde38  2bdd                 sub ebx, ebp
// 006fde3a  6f                   outsd dx, dword ptr [esi]
// 006fde3b  000b                 add byte ptr [ebx], cl
// 006fde3d  de6f00               fisubr word ptr [edi]
// 006fde40  77dd                 ja 0x6fde1f
// 006fde42  6f                   outsd dx, dword ptr [esi]
// 006fde43  0024de               add byte ptr [esi + ebx*8], ah
// 006fde46  6f                   outsd dx, dword ptr [esi]
// 006fde47  0000                 add byte ptr [eax], al
// 006fde49  0000                 add byte ptr [eax], al
// 006fde4b  0000                 add byte ptr [eax], al
// 006fde4d  0102                 add dword ptr [edx], eax
// 006fde4f  0505000305           add eax, 0x5030005
// 006fde54  0505050005           add eax, 0x5000505
// 006fde59  0505050505           add eax, 0x5050505
// 006fde5e  0505050505           add eax, 0x5050505
// 006fde63  0504050505           add eax, 0x5050504
// 006fde68  0505050505           add eax, 0x5050505
// 006fde6d  0505050505           add eax, 0x5050505
// 006fde72  0505050505           add eax, 0x5050505
// 006fde77  0505050505           add eax, 0x5050505
// 006fde7c  0505050505           add eax, 0x5050505
// 006fde81  0505050505           add eax, 0x5050505
// 006fde86  0505050505           add eax, 0x5050505
// 006fde8b  0505050505           add eax, 0x5050505
// 006fde90  0505050505           add eax, 0x5050505
// 006fde95  0505050505           add eax, 0x5050505
// 006fde9a  0505050505           add eax, 0x5050505
// 006fde9f  0505050505           add eax, 0x5050505
// 006fdea4  0505050505           add eax, 0x5050505
// library xtp-11.2.2-lib-strlen/Source\Common\XTPPropExchange.cpp (function ?IsSamePropValue@CXTPPropExchange@@IAEHGPBX0@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Common/XTPPropExchange.cpp
