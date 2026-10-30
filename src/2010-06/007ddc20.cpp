// roc 2010-06 007ddc20  unit: CXTPReportHeader  size: 375 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007ddc20
//
// 007ddc20  6aff                 push -1
// 007ddc22  686b169b00           push 0x9b166b
// 007ddc27  64a100000000         mov eax, dword ptr fs:[0]
// 007ddc2d  50                   push eax
// 007ddc2e  83ec18               sub esp, 0x18
// 007ddc31  55                   push ebp
// 007ddc32  56                   push esi
// 007ddc33  57                   push edi
// 007ddc34  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 007ddc39  33c4                 xor eax, esp
// 007ddc3b  50                   push eax
// 007ddc3c  8d442428             lea eax, [esp + 0x28]
// 007ddc40  64a300000000         mov dword ptr fs:[0], eax
// 007ddc46  8bf9                 mov edi, ecx
// 007ddc48  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 007ddc4c  8b07                 mov eax, dword ptr [edi]
// 007ddc4e  8b542438             mov edx, dword ptr [esp + 0x38]
// 007ddc52  8b8080000000         mov eax, dword ptr [eax + 0x80]
// 007ddc58  51                   push ecx
// 007ddc59  52                   push edx
// 007ddc5a  8bcf                 mov ecx, edi
// 007ddc5c  ffd0                 call eax
// 007ddc5e  8bf0                 mov esi, eax
// 007ddc60  85f6                 test esi, esi
// 007ddc62  0f84b5000000         je 0x7ddd1d
// 007ddc68  8d4c2410             lea ecx, [esp + 0x10]
// 007ddc6c  51                   push ecx
// 007ddc6d  8bce                 mov ecx, esi
// 007ddc6f  e8cc440a00           call 0x882140
// 007ddc74  8d4c2410             lea ecx, [esp + 0x10]
// 007ddc78  c744243000000000     mov dword ptr [esp + 0x30], 0
// 007ddc80  ff15eccd9e00         call dword ptr [0x9ecdec]
// 007ddc86  84c0                 test al, al
// 007ddc88  747b                 je 0x7ddd05
// 007ddc8a  8bcf                 mov ecx, edi
// 007ddc8c  e80fe7ffff           call 0x7dc3a0
// 007ddc91  8d542414             lea edx, [esp + 0x14]
// 007ddc95  52                   push edx
// 007ddc96  8bce                 mov ecx, esi
// 007ddc98  8be8                 mov ebp, eax
// 007ddc9a  e89104ffff           call 0x7ce130
// 007ddc9f  50                   push eax
// 007ddca0  8d4c2414             lea ecx, [esp + 0x14]
// 007ddca4  c644243401           mov byte ptr [esp + 0x34], 1
// 007ddca9  ff1580c59e00         call dword ptr [0x9ec580]
// 007ddcaf  8d4c2414             lea ecx, [esp + 0x14]
// 007ddcb3  c644243000           mov byte ptr [esp + 0x30], 0
// 007ddcb8  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007ddcbe  837e4400             cmp dword ptr [esi + 0x44], 0
// 007ddcc2  7441                 je 0x7ddd05
// 007ddcc4  83bf8800000000       cmp dword ptr [edi + 0x88], 0
// 007ddccb  7438                 je 0x7ddd05
// 007ddccd  8d442410             lea eax, [esp + 0x10]
// 007ddcd1  50                   push eax
// 007ddcd2  81c518020000         add ebp, 0x218
// 007ddcd8  8d4c2418             lea ecx, [esp + 0x18]
// 007ddcdc  55                   push ebp
// 007ddcdd  51                   push ecx
// 007ddcde  e88d35c8ff           call 0x461270
// 007ddce3  83c40c               add esp, 0xc
// 007ddce6  50                   push eax
// 007ddce7  8d4c2414             lea ecx, [esp + 0x14]
// 007ddceb  c644243402           mov byte ptr [esp + 0x34], 2
// 007ddcf0  ff1580c59e00         call dword ptr [0x9ec580]
// 007ddcf6  8d4c2414             lea ecx, [esp + 0x14]
// 007ddcfa  c644243000           mov byte ptr [esp + 0x30], 0
// 007ddcff  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007ddd05  8d4c2410             lea ecx, [esp + 0x10]
// 007ddd09  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 007ddd0f  85c0                 test eax, eax
// 007ddd11  7522                 jne 0x7ddd35
// 007ddd13  8d4c2410             lea ecx, [esp + 0x10]
// 007ddd17  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007ddd1d  83c8ff               or eax, 0xffffffff
// 007ddd20  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007ddd24  64890d00000000       mov dword ptr fs:[0], ecx
// 007ddd2b  59                   pop ecx
// 007ddd2c  5f                   pop edi
// 007ddd2d  5e                   pop esi
// 007ddd2e  5d                   pop ebp
// 007ddd2f  83c424               add esp, 0x24
// 007ddd32  c20c00               ret 0xc
// 007ddd35  8d542418             lea edx, [esp + 0x18]
// 007ddd39  52                   push edx
// 007ddd3a  8bce                 mov ecx, esi
// 007ddd3c  e8ffddffff           call 0x7dbb40
// 007ddd41  8b10                 mov edx, dword ptr [eax]
// 007ddd43  8d4c2410             lea ecx, [esp + 0x10]
// 007ddd47  51                   push ecx
// 007ddd48  56                   push esi
// 007ddd49  83ec10               sub esp, 0x10
// 007ddd4c  8bcc                 mov ecx, esp
// 007ddd4e  8911                 mov dword ptr [ecx], edx
// 007ddd50  8b5004               mov edx, dword ptr [eax + 4]
// 007ddd53  895104               mov dword ptr [ecx + 4], edx
// 007ddd56  8b5008               mov edx, dword ptr [eax + 8]
// 007ddd59  8b400c               mov eax, dword ptr [eax + 0xc]
// 007ddd5c  895108               mov dword ptr [ecx + 8], edx
// 007ddd5f  89410c               mov dword ptr [ecx + 0xc], eax
// 007ddd62  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 007ddd65  8b5120               mov edx, dword ptr [ecx + 0x20]
// 007ddd68  8b442458             mov eax, dword ptr [esp + 0x58]
// 007ddd6c  52                   push edx
// 007ddd6d  50                   push eax
// 007ddd6e  e89d620300           call 0x814010
// 007ddd73  83c420               add esp, 0x20
// 007ddd76  8d4c2410             lea ecx, [esp + 0x10]
// 007ddd7a  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007ddd80  8bc6                 mov eax, esi
// 007ddd82  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007ddd86  64890d00000000       mov dword ptr fs:[0], ecx
// 007ddd8d  59                   pop ecx
// 007ddd8e  5f                   pop edi
// 007ddd8f  5e                   pop esi
// 007ddd90  5d                   pop ebp
// 007ddd91  83c424               add esp, 0x24
// 007ddd94  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnToolHitTest@CXTPReportHeader@@MBEHVCPoint@@PAUtagTOOLINFOA@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportHeader.cpp