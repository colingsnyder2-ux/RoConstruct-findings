// roc 2012-06 00a68e40  unit: PAVCXTShadowWnd::?$CList  size: 1309 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a68e40
//
// 00a68e40  55                   push ebp
// 00a68e41  8bec                 mov ebp, esp
// 00a68e43  83e4c0               and esp, 0xffffffc0
// 00a68e46  6aff                 push -1
// 00a68e48  68136cae00           push 0xae6c13
// 00a68e4d  64a100000000         mov eax, dword ptr fs:[0]
// 00a68e53  50                   push eax
// 00a68e54  81ece8000000         sub esp, 0xe8
// 00a68e5a  53                   push ebx
// 00a68e5b  56                   push esi
// 00a68e5c  57                   push edi
// 00a68e5d  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a68e62  33c4                 xor eax, esp
// 00a68e64  50                   push eax
// 00a68e65  8d8424f8000000       lea eax, [esp + 0xf8]
// 00a68e6c  64a300000000         mov dword ptr fs:[0], eax
// 00a68e72  8bd9                 mov ebx, ecx
// 00a68e74  895c2448             mov dword ptr [esp + 0x48], ebx
// 00a68e78  e86198f1ff           call 0x9826de
// 00a68e7d  8b750c               mov esi, dword ptr [ebp + 0xc]
// 00a68e80  85f6                 test esi, esi
// 00a68e82  0f84bd040000         je 0xa69345
// 00a68e88  8b7d10               mov edi, dword ptr [ebp + 0x10]
// 00a68e8b  85ff                 test edi, edi
// 00a68e8d  0f84b2040000         je 0xa69345
// 00a68e93  837b6000             cmp dword ptr [ebx + 0x60], 0
// 00a68e97  0f84a8040000         je 0xa69345
// 00a68e9d  e80efcffff           call 0xa68ab0
// 00a68ea2  8bc8                 mov ecx, eax
// 00a68ea4  33c0                 xor eax, eax
// 00a68ea6  394138               cmp dword ptr [ecx + 0x38], eax
// 00a68ea9  0f8496040000         je 0xa69345
// 00a68eaf  53                   push ebx
// 00a68eb0  8d8c2488000000       lea ecx, [esp + 0x88]
// 00a68eb7  88442460             mov byte ptr [esp + 0x60], al
// 00a68ebb  88442461             mov byte ptr [esp + 0x61], al
// 00a68ebf  c6442462ff           mov byte ptr [esp + 0x62], 0xff
// 00a68ec4  c644246301           mov byte ptr [esp + 0x63], 1
// 00a68ec9  89442478             mov dword ptr [esp + 0x78], eax
// 00a68ecd  8944247c             mov dword ptr [esp + 0x7c], eax
// 00a68ed1  e8c6a0f1ff           call 0x982f9c
// 00a68ed6  8d4c2464             lea ecx, [esp + 0x64]
// 00a68eda  c784240001000000000000 mov dword ptr [esp + 0x100], 0
// 00a68ee5  e8a6a0f1ff           call 0x982f90
// 00a68eea  8d942484000000       lea edx, [esp + 0x84]
// 00a68ef1  52                   push edx
// 00a68ef2  8d4c2468             lea ecx, [esp + 0x68]
// 00a68ef6  c684240401000001     mov byte ptr [esp + 0x104], 1
// 00a68efe  e8edc8a2ff           call 0x4957f0
// 00a68f03  6a2c                 push 0x2c
// 00a68f05  8d84249c000000       lea eax, [esp + 0x9c]
// 00a68f0c  6a00                 push 0
// 00a68f0e  50                   push eax
// 00a68f0f  e860a4f1ff           call 0x983374
// 00a68f14  8bc6                 mov eax, esi
// 00a68f16  0fafc7               imul eax, edi
// 00a68f19  83c40c               add esp, 0xc
// 00a68f1c  6a00                 push 0
// 00a68f1e  b901000000           mov ecx, 1
// 00a68f23  6a00                 push 0
// 00a68f25  66898c24ac000000     mov word ptr [esp + 0xac], cx
// 00a68f2d  03c0                 add eax, eax
// 00a68f2f  8d4c244c             lea ecx, [esp + 0x4c]
// 00a68f33  51                   push ecx
// 00a68f34  ba20000000           mov edx, 0x20
// 00a68f39  03c0                 add eax, eax
// 00a68f3b  66899424b2000000     mov word ptr [esp + 0xb2], dx
// 00a68f43  6a00                 push 0
// 00a68f45  8d9424a8000000       lea edx, [esp + 0xa8]
// 00a68f4c  898424bc000000       mov dword ptr [esp + 0xbc], eax
// 00a68f53  8b842498000000       mov eax, dword ptr [esp + 0x98]
// 00a68f5a  52                   push edx
// 00a68f5b  50                   push eax
// 00a68f5c  c78424b000000028000000 mov dword ptr [esp + 0xb0], 0x28
// 00a68f67  89b424b4000000       mov dword ptr [esp + 0xb4], esi
// 00a68f6e  89bc24b8000000       mov dword ptr [esp + 0xb8], edi
// 00a68f75  c78424c000000000000000 mov dword ptr [esp + 0xc0], 0
// 00a68f80  ff154c21b200         call dword ptr [0xb2214c]
// 00a68f86  837c244400           cmp dword ptr [esp + 0x44], 0
// 00a68f8b  89442460             mov dword ptr [esp + 0x60], eax
// 00a68f8f  0f8488030000         je 0xa6931d
// 00a68f95  e8a6dcf7ff           call 0x9e6c40
// 00a68f9a  8b4020               mov eax, dword ptr [eax + 0x20]
// 00a68f9d  83f802               cmp eax, 2
// 00a68fa0  7510                 jne 0xa68fb2
// 00a68fa2  e8b948f5ff           call 0x9bd860
// 00a68fa7  6a3b                 push 0x3b
// 00a68fa9  8bc8                 mov ecx, eax
// 00a68fab  e86042f5ff           call 0x9bd210
// 00a68fb0  eb0e                 jmp 0xa68fc0
// 00a68fb2  e8a948f5ff           call 0x9bd860
// 00a68fb7  6a3b                 push 0x3b
// 00a68fb9  8bc8                 mov ecx, eax
// 00a68fbb  e82040f5ff           call 0x9bcfe0
// 00a68fc0  0fb6c8               movzx ecx, al
// 00a68fc3  8bd0                 mov edx, eax
// 00a68fc5  c1ea08               shr edx, 8
// 00a68fc8  c1e810               shr eax, 0x10
// 00a68fcb  837b5c00             cmp dword ptr [ebx + 0x5c], 0
// 00a68fcf  894c2454             mov dword ptr [esp + 0x54], ecx
// 00a68fd3  0fb6ca               movzx ecx, dl
// 00a68fd6  0fb6d0               movzx edx, al
// 00a68fd9  894c2450             mov dword ptr [esp + 0x50], ecx
// 00a68fdd  89542458             mov dword ptr [esp + 0x58], edx
// 00a68fe1  bb01000000           mov ebx, 1
// 00a68fe6  0f8516010000         jne 0xa69102
// 00a68fec  8bc6                 mov eax, esi
// 00a68fee  f7d8                 neg eax
// 00a68ff0  03c0                 add eax, eax
// 00a68ff2  03c0                 add eax, eax
// 00a68ff4  4f                   dec edi
// 00a68ff5  0faffe               imul edi, esi
// 00a68ff8  8944244c             mov dword ptr [esp + 0x4c], eax
// 00a68ffc  8d04bd0c000000       lea eax, [edi*4 + 0xc]
// 00a69003  c744243400000003     mov dword ptr [esp + 0x34], 0x3000000
// 00a6900b  89442430             mov dword ptr [esp + 0x30], eax
// 00a6900f  c744244004000000     mov dword ptr [esp + 0x40], 4
// 00a69017  8b742434             mov esi, dword ptr [esp + 0x34]
// 00a6901b  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 00a6901f  895c2438             mov dword ptr [esp + 0x38], ebx
// 00a69023  c744243c04000000     mov dword ptr [esp + 0x3c], 4
// 00a6902b  db442438             fild dword ptr [esp + 0x38]
// 00a6902f  83ec08               sub esp, 8
// 00a69032  8d4c2460             lea ecx, [esp + 0x60]
// 00a69036  8d542458             lea edx, [esp + 0x58]
// 00a6903a  dc35a0c7b800         fdiv qword ptr [0xb8c7a0]
// 00a69040  8d44245c             lea eax, [esp + 0x5c]
// 00a69044  dd1c24               fstp qword ptr [esp]
// 00a69047  51                   push ecx
// 00a69048  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00a6904c  52                   push edx
// 00a6904d  50                   push eax
// 00a6904e  e8adf0ffff           call 0xa68100
// 00a69053  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00a69057  015c2438             add dword ptr [esp + 0x38], ebx
// 00a6905b  03c6                 add eax, esi
// 00a6905d  03742434             add esi, dword ptr [esp + 0x34]
// 00a69061  89040f               mov dword ptr [edi + ecx], eax
// 00a69064  037c244c             add edi, dword ptr [esp + 0x4c]
// 00a69068  836c243c01           sub dword ptr [esp + 0x3c], 1
// 00a6906d  75bc                 jne 0xa6902b
// 00a6906f  8144243400000003     add dword ptr [esp + 0x34], 0x3000000
// 00a69077  836c243004           sub dword ptr [esp + 0x30], 4
// 00a6907c  43                   inc ebx
// 00a6907d  836c244001           sub dword ptr [esp + 0x40], 1
// 00a69082  7593                 jne 0xa69017
// 00a69084  bf03000000           mov edi, 3
// 00a69089  c744243001000000     mov dword ptr [esp + 0x30], 1
// 00a69091  db442430             fild dword ptr [esp + 0x30]
// 00a69095  83ec08               sub esp, 8
// 00a69098  8d542460             lea edx, [esp + 0x60]
// 00a6909c  8d442458             lea eax, [esp + 0x58]
// 00a690a0  dc0d2882b700         fmul qword ptr [0xb78228]
// 00a690a6  8d4c245c             lea ecx, [esp + 0x5c]
// 00a690aa  dd1c24               fstp qword ptr [esp]
// 00a690ad  52                   push edx
// 00a690ae  50                   push eax
// 00a690af  51                   push ecx
// 00a690b0  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00a690b4  e847f0ffff           call 0xa68100
// 00a690b9  ba04000000           mov edx, 4
// 00a690be  2bd7                 sub edx, edi
// 00a690c0  69d20000000f         imul edx, edx, 0xf000000
// 00a690c6  03c2                 add eax, edx
// 00a690c8  8b5510               mov edx, dword ptr [ebp + 0x10]
// 00a690cb  83c2fc               add edx, -4
// 00a690ce  85d2                 test edx, edx
// 00a690d0  7e1c                 jle 0xa690ee
// 00a690d2  8b750c               mov esi, dword ptr [ebp + 0xc]
// 00a690d5  03f6                 add esi, esi
// 00a690d7  03f6                 add esi, esi
// 00a690d9  8d0cbd00000000       lea ecx, [edi*4]
// 00a690e0  8b5c2444             mov ebx, dword ptr [esp + 0x44]
// 00a690e4  890419               mov dword ptr [ecx + ebx], eax
// 00a690e7  03ce                 add ecx, esi
// 00a690e9  83ea01               sub edx, 1
// 00a690ec  75f2                 jne 0xa690e0
// 00a690ee  8b442430             mov eax, dword ptr [esp + 0x30]
// 00a690f2  40                   inc eax
// 00a690f3  4f                   dec edi
// 00a690f4  83f804               cmp eax, 4
// 00a690f7  89442430             mov dword ptr [esp + 0x30], eax
// 00a690fb  7e94                 jle 0xa69091
// 00a690fd  e99e010000           jmp 0xa692a0
// 00a69102  c744243800000000     mov dword ptr [esp + 0x38], 0
// 00a6910a  c744243400000003     mov dword ptr [esp + 0x34], 0x3000000
// 00a69112  c744243c04000000     mov dword ptr [esp + 0x3c], 4
// 00a6911a  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 00a6911e  8b742434             mov esi, dword ptr [esp + 0x34]
// 00a69122  895c2430             mov dword ptr [esp + 0x30], ebx
// 00a69126  c744244004000000     mov dword ptr [esp + 0x40], 4
// 00a6912e  db442430             fild dword ptr [esp + 0x30]
// 00a69132  83ec08               sub esp, 8
// 00a69135  8d442460             lea eax, [esp + 0x60]
// 00a69139  8d4c2458             lea ecx, [esp + 0x58]
// 00a6913d  dc35a0c7b800         fdiv qword ptr [0xb8c7a0]
// 00a69143  8d54245c             lea edx, [esp + 0x5c]
// 00a69147  dd1c24               fstp qword ptr [esp]
// 00a6914a  50                   push eax
// 00a6914b  51                   push ecx
// 00a6914c  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00a69150  52                   push edx
// 00a69151  e8aaefffff           call 0xa68100
// 00a69156  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00a6915a  015c2430             add dword ptr [esp + 0x30], ebx
// 00a6915e  03c6                 add eax, esi
// 00a69160  03742434             add esi, dword ptr [esp + 0x34]
// 00a69164  89040f               mov dword ptr [edi + ecx], eax
// 00a69167  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00a6916a  03c0                 add eax, eax
// 00a6916c  03c0                 add eax, eax
// 00a6916e  03f8                 add edi, eax
// 00a69170  836c244001           sub dword ptr [esp + 0x40], 1
// 00a69175  75b7                 jne 0xa6912e
// 00a69177  8344243804           add dword ptr [esp + 0x38], 4
// 00a6917c  8144243400000003     add dword ptr [esp + 0x34], 0x3000000
// 00a69184  43                   inc ebx
// 00a69185  836c243c01           sub dword ptr [esp + 0x3c], 1
// 00a6918a  758e                 jne 0xa6911a
// 00a6918c  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 00a6918f  33c0                 xor eax, eax
// 00a69191  be0000000f           mov esi, 0xf000000
// 00a69196  c744243010000000     mov dword ptr [esp + 0x30], 0x10
// 00a6919e  8d5801               lea ebx, [eax + 1]
// 00a691a1  895c244c             mov dword ptr [esp + 0x4c], ebx
// 00a691a5  db44244c             fild dword ptr [esp + 0x4c]
// 00a691a9  83ec08               sub esp, 8
// 00a691ac  8d542460             lea edx, [esp + 0x60]
// 00a691b0  8d442458             lea eax, [esp + 0x58]
// 00a691b4  dc0d2882b700         fmul qword ptr [0xb78228]
// 00a691ba  8d4c245c             lea ecx, [esp + 0x5c]
// 00a691be  dd1c24               fstp qword ptr [esp]
// 00a691c1  52                   push edx
// 00a691c2  50                   push eax
// 00a691c3  51                   push ecx
// 00a691c4  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00a691c8  e833efffff           call 0xa68100
// 00a691cd  8d57fc               lea edx, [edi - 4]
// 00a691d0  03c6                 add eax, esi
// 00a691d2  83fa04               cmp edx, 4
// 00a691d5  7e1b                 jle 0xa691f2
// 00a691d7  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00a691db  83c2fc               add edx, -4
// 00a691de  8bff                 mov edi, edi
// 00a691e0  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 00a691e4  890439               mov dword ptr [ecx + edi], eax
// 00a691e7  83c104               add ecx, 4
// 00a691ea  83ea01               sub edx, 1
// 00a691ed  75f1                 jne 0xa691e0
// 00a691ef  8b7d0c               mov edi, dword ptr [ebp + 0xc]
// 00a691f2  8d0cbd00000000       lea ecx, [edi*4]
// 00a691f9  014c2430             add dword ptr [esp + 0x30], ecx
// 00a691fd  81c60000000f         add esi, 0xf000000
// 00a69203  81fe0000004b         cmp esi, 0x4b000000
// 00a69209  8bc3                 mov eax, ebx
// 00a6920b  7c91                 jl 0xa6919e
// 00a6920d  8d04bd00000000       lea eax, [edi*4]
// 00a69214  bb01000000           mov ebx, 1
// 00a69219  c744243400000003     mov dword ptr [esp + 0x34], 0x3000000
// 00a69221  89442438             mov dword ptr [esp + 0x38], eax
// 00a69225  c744243c04000000     mov dword ptr [esp + 0x3c], 4
// 00a6922d  8b742434             mov esi, dword ptr [esp + 0x34]
// 00a69231  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 00a69235  895c2430             mov dword ptr [esp + 0x30], ebx
// 00a69239  c744244004000000     mov dword ptr [esp + 0x40], 4
// 00a69241  db442430             fild dword ptr [esp + 0x30]
// 00a69245  83ec08               sub esp, 8
// 00a69248  8d542460             lea edx, [esp + 0x60]
// 00a6924c  8d442458             lea eax, [esp + 0x58]
// 00a69250  dc35a0c7b800         fdiv qword ptr [0xb8c7a0]
// 00a69256  8d4c245c             lea ecx, [esp + 0x5c]
// 00a6925a  dd1c24               fstp qword ptr [esp]
// 00a6925d  52                   push edx
// 00a6925e  50                   push eax
// 00a6925f  51                   push ecx
// 00a69260  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00a69264  e897eeffff           call 0xa68100
// 00a69269  8b542444             mov edx, dword ptr [esp + 0x44]
// 00a6926d  015c2430             add dword ptr [esp + 0x30], ebx
// 00a69271  03c6                 add eax, esi
// 00a69273  03742434             add esi, dword ptr [esp + 0x34]
// 00a69277  894417fc             mov dword ptr [edi + edx - 4], eax
// 00a6927b  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00a6927e  03c0                 add eax, eax
// 00a69280  03c0                 add eax, eax
// 00a69282  03f8                 add edi, eax
// 00a69284  836c244001           sub dword ptr [esp + 0x40], 1
// 00a69289  75b6                 jne 0xa69241
// 00a6928b  8144243400000003     add dword ptr [esp + 0x34], 0x3000000
// 00a69293  836c243804           sub dword ptr [esp + 0x38], 4
// 00a69298  43                   inc ebx
// 00a69299  836c243c01           sub dword ptr [esp + 0x3c], 1
// 00a6929e  758d                 jne 0xa6922d
// 00a692a0  8b442460             mov eax, dword ptr [esp + 0x60]
// 00a692a4  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00a692a8  8b356021b200         mov esi, dword ptr [0xb22160]
// 00a692ae  50                   push eax
// 00a692af  51                   push ecx
// 00a692b0  ffd6                 call esi
// 00a692b2  8b550c               mov edx, dword ptr [ebp + 0xc]
// 00a692b5  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 00a692b9  8b5c2468             mov ebx, dword ptr [esp + 0x68]
// 00a692bd  8bf8                 mov edi, eax
// 00a692bf  8b4510               mov eax, dword ptr [ebp + 0x10]
// 00a692c2  8954247c             mov dword ptr [esp + 0x7c], edx
// 00a692c6  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00a692c9  89842480000000       mov dword ptr [esp + 0x80], eax
// 00a692d0  8954244c             mov dword ptr [esp + 0x4c], edx
// 00a692d4  e8d7f7ffff           call 0xa68ab0
// 00a692d9  8b4038               mov eax, dword ptr [eax + 0x38]
// 00a692dc  6a02                 push 2
// 00a692de  8d4c2460             lea ecx, [esp + 0x60]
// 00a692e2  51                   push ecx
// 00a692e3  6a00                 push 0
// 00a692e5  8d942480000000       lea edx, [esp + 0x80]
// 00a692ec  52                   push edx
// 00a692ed  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 00a692f1  53                   push ebx
// 00a692f2  8d8c2490000000       lea ecx, [esp + 0x90]
// 00a692f9  51                   push ecx
// 00a692fa  6a00                 push 0
// 00a692fc  6a00                 push 0
// 00a692fe  52                   push edx
// 00a692ff  ffd0                 call eax
// 00a69301  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 00a69305  57                   push edi
// 00a69306  51                   push ecx
// 00a69307  ffd6                 call esi
// 00a69309  8b542460             mov edx, dword ptr [esp + 0x60]
// 00a6930d  52                   push edx
// 00a6930e  ff157021b200         call dword ptr [0xb22170]
// 00a69314  8d4c2464             lea ecx, [esp + 0x64]
// 00a69318  e8e5050300           call 0xa99902
// 00a6931d  8d4c2464             lea ecx, [esp + 0x64]
// 00a69321  c684240001000000     mov byte ptr [esp + 0x100], 0
// 00a69329  e8509cf1ff           call 0x982f7e
// 00a6932e  8d8c2484000000       lea ecx, [esp + 0x84]
// 00a69335  c7842400010000ffffffff mov dword ptr [esp + 0x100], 0xffffffff
// 00a69340  e8519cf1ff           call 0x982f96
// 00a69345  8b8c24f8000000       mov ecx, dword ptr [esp + 0xf8]
// 00a6934c  64890d00000000       mov dword ptr fs:[0], ecx
// 00a69353  59                   pop ecx
// 00a69354  5f                   pop edi
// 00a69355  5e                   pop esi
// 00a69356  5b                   pop ebx
// 00a69357  8be5                 mov esp, ebp
// 00a69359  5d                   pop ebp
// 00a6935a  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnSize@CXTShadowWnd@@IAEXIHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTWndShadow.cpp