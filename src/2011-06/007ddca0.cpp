// from server: 100% by auto
// roc 2011-06 007ddca0  unit: seg_007d0000  size: 164 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007ddca0
//
// 007ddca0  56                   push esi
// 007ddca1  8b742408             mov esi, dword ptr [esp + 8]
// 007ddca5  8b4634               mov eax, dword ptr [esi + 0x34]
// 007ddca8  66ff4034             inc word ptr [eax + 0x34]
// 007ddcac  8b4634               mov eax, dword ptr [esi + 0x34]
// 007ddcaf  b9c8000000           mov ecx, 0xc8
// 007ddcb4  57                   push edi
// 007ddcb5  66394834             cmp word ptr [eax + 0x34], cx
// 007ddcb9  7615                 jbe 0x7ddcd0
// 007ddcbb  6a00                 push 0
// 007ddcbd  68ece1ab00           push 0xabe1ec
// 007ddcc2  56                   push esi
// 007ddcc3  e8080d0000           call 0x7de9d0
// 007ddcc8  83c40c               add esp, 0xc
// 007ddccb  eb03                 jmp 0x7ddcd0
// 007ddccd  8d4900               lea ecx, [ecx]
// 007ddcd0  8b4610               mov eax, dword ptr [esi + 0x10]
// 007ddcd3  05fcfeffff           add eax, 0xfffffefc
// 007ddcd8  83f81b               cmp eax, 0x1b
// 007ddcdb  770e                 ja 0x7ddceb
// 007ddcdd  0fb69028dd7d00       movzx edx, byte ptr [eax + 0x7ddd28]
// 007ddce4  ff249520dd7d00       jmp dword ptr [edx*4 + 0x7ddd20]
// 007ddceb  8bc6                 mov eax, esi
// 007ddced  e86efeffff           call 0x7ddb60
// 007ddcf2  837e103b             cmp dword ptr [esi + 0x10], 0x3b
// 007ddcf6  8bf8                 mov edi, eax
// 007ddcf8  7509                 jne 0x7ddd03
// 007ddcfa  56                   push esi
// 007ddcfb  e8201f0000           call 0x7dfc20
// 007ddd00  83c404               add esp, 4
// 007ddd03  8b4630               mov eax, dword ptr [esi + 0x30]
// 007ddd06  0fb64832             movzx ecx, byte ptr [eax + 0x32]
// 007ddd0a  894824               mov dword ptr [eax + 0x24], ecx
// 007ddd0d  85ff                 test edi, edi
// 007ddd0f  74bf                 je 0x7ddcd0
// 007ddd11  8b7634               mov esi, dword ptr [esi + 0x34]
// 007ddd14  baffff0000           mov edx, 0xffff
// 007ddd19  66015634             add word ptr [esi + 0x34], dx
// 007ddd1d  5f                   pop edi
// 007ddd1e  5e                   pop esi
// 007ddd1f  c3                   ret 
// 007ddd20  11dd                 adc ebp, ebx
// 007ddd22  7d00                 jge 0x7ddd24
// 007ddd24  ebdc                 jmp 0x7ddd02
// 007ddd26  7d00                 jge 0x7ddd28
// 007ddd28  0000                 add byte ptr [eax], al
// 007ddd2a  0001                 add byte ptr [ecx], al
// 007ddd2c  0101                 add dword ptr [ecx], eax
// 007ddd2e  0101                 add dword ptr [ecx], eax
// 007ddd30  0101                 add dword ptr [ecx], eax
// 007ddd32  0101                 add dword ptr [ecx], eax
// 007ddd34  0101                 add dword ptr [ecx], eax
// 007ddd36  0101                 add dword ptr [ecx], eax
// 007ddd38  0001                 add byte ptr [ecx], al
// 007ddd3a  0101                 add dword ptr [ecx], eax
// 007ddd3c  0101                 add dword ptr [ecx], eax
// 007ddd3e  0101                 add dword ptr [ecx], eax
// 007ddd40  0101                 add dword ptr [ecx], eax
// 007ddd42  0100                 add dword ptr [eax], eax
// library lua-5.1.4/lparser.c (function _chunk)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
