// roc 2009-06 007ee480  unit: VCEdit::?$CXTMaskEditT  size: 827 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007ee480
//
// 007ee480  56                   push esi
// 007ee481  8bf1                 mov esi, ecx
// 007ee483  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 007ee487  741f                 je 0x7ee4a8
// 007ee489  837e2000             cmp dword ptr [esi + 0x20], 0
// 007ee48d  7419                 je 0x7ee4a8
// 007ee48f  e848da0500           call 0x84bedc
// 007ee494  a900080000           test eax, 0x800
// 007ee499  750d                 jne 0x7ee4a8
// 007ee49b  8d4e70               lea ecx, [esi + 0x70]
// 007ee49e  ff155cfb8900         call dword ptr [0x89fb5c]
// 007ee4a4  84c0                 test al, al
// 007ee4a6  740b                 je 0x7ee4b3
// 007ee4a8  8bce                 mov ecx, esi
// 007ee4aa  e859abf2ff           call 0x719008
// 007ee4af  5e                   pop esi
// 007ee4b0  c20c00               ret 0xc
// 007ee4b3  53                   push ebx
// 007ee4b4  57                   push edi
// 007ee4b5  8b3d34ee8900         mov edi, dword ptr [0x89ee34]
// 007ee4bb  6a10                 push 0x10
// 007ee4bd  ffd7                 call edi
// 007ee4bf  33db                 xor ebx, ebx
// 007ee4c1  6685c0               test ax, ax
// 007ee4c4  6a11                 push 0x11
// 007ee4c6  0f9cc3               setl bl
// 007ee4c9  ffd7                 call edi
// 007ee4cb  33c9                 xor ecx, ecx
// 007ee4cd  6685c0               test ax, ax
// 007ee4d0  8b442410             mov eax, dword ptr [esp + 0x10]
// 007ee4d4  0f9cc1               setl cl
// 007ee4d7  83c0f8               add eax, -8
// 007ee4da  83f826               cmp eax, 0x26
// 007ee4dd  0f8787020000         ja 0x7ee76a
// 007ee4e3  0fb68094e77e00       movzx eax, byte ptr [eax + 0x7ee794]
// 007ee4ea  ff248578e77e00       jmp dword ptr [eax*4 + 0x7ee778]
// 007ee4f1  8bce                 mov ecx, esi
// 007ee4f3  e810abf2ff           call 0x719008
// 007ee4f8  8b4620               mov eax, dword ptr [esi + 0x20]
// 007ee4fb  85c0                 test eax, eax
// 007ee4fd  7429                 je 0x7ee528
// 007ee4ff  8d4e58               lea ecx, [esi + 0x58]
// 007ee502  51                   push ecx
// 007ee503  8d5654               lea edx, [esi + 0x54]
// 007ee506  52                   push edx
// 007ee507  68b0000000           push 0xb0
// 007ee50c  50                   push eax
// 007ee50d  ff1590ee8900         call dword ptr [0x89ee90]
// 007ee513  8d8680000000         lea eax, [esi + 0x80]
// 007ee519  50                   push eax
// 007ee51a  8bce                 mov ecx, esi
// 007ee51c  e8ffaaf2ff           call 0x719020
// 007ee521  8bce                 mov ecx, esi
// 007ee523  e8c8d9ffff           call 0x7ebef0
// 007ee528  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 007ee52b  6a00                 push 0
// 007ee52d  8d542414             lea edx, [esp + 0x14]
// 007ee531  894c2414             mov dword ptr [esp + 0x14], ecx
// 007ee535  52                   push edx
// 007ee536  8bce                 mov ecx, esi
// 007ee538  e843edffff           call 0x7ed280
// 007ee53d  8b442410             mov eax, dword ptr [esp + 0x10]
// 007ee541  394654               cmp dword ptr [esi + 0x54], eax
// 007ee544  0f8dff010000         jge 0x7ee749
// 007ee54a  894654               mov dword ptr [esi + 0x54], eax
// 007ee54d  85db                 test ebx, ebx
// 007ee54f  0f85f4010000         jne 0x7ee749
// 007ee555  6a01                 push 1
// 007ee557  8bce                 mov ecx, esi
// 007ee559  894658               mov dword ptr [esi + 0x58], eax
// 007ee55c  e81fe7ffff           call 0x7ecc80
// 007ee561  5f                   pop edi
// 007ee562  5b                   pop ebx
// 007ee563  5e                   pop esi
// 007ee564  c20c00               ret 0xc
// 007ee567  8bce                 mov ecx, esi
// 007ee569  e89aaaf2ff           call 0x719008
// 007ee56e  8b4620               mov eax, dword ptr [esi + 0x20]
// 007ee571  85c0                 test eax, eax
// 007ee573  7429                 je 0x7ee59e
// 007ee575  8d4e58               lea ecx, [esi + 0x58]
// 007ee578  51                   push ecx
// 007ee579  8d5654               lea edx, [esi + 0x54]
// 007ee57c  52                   push edx
// 007ee57d  68b0000000           push 0xb0
// 007ee582  50                   push eax
// 007ee583  ff1590ee8900         call dword ptr [0x89ee90]
// 007ee589  8d8680000000         lea eax, [esi + 0x80]
// 007ee58f  50                   push eax
// 007ee590  8bce                 mov ecx, esi
// 007ee592  e889aaf2ff           call 0x719020
// 007ee597  8bce                 mov ecx, esi
// 007ee599  e852d9ffff           call 0x7ebef0
// 007ee59e  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 007ee5a1  6a01                 push 1
// 007ee5a3  8d542414             lea edx, [esp + 0x14]
// 007ee5a7  894c2414             mov dword ptr [esp + 0x14], ecx
// 007ee5ab  52                   push edx
// 007ee5ac  8bce                 mov ecx, esi
// 007ee5ae  e8cdecffff           call 0x7ed280
// 007ee5b3  8b442410             mov eax, dword ptr [esp + 0x10]
// 007ee5b7  394658               cmp dword ptr [esi + 0x58], eax
// 007ee5ba  0f8e89010000         jle 0x7ee749
// 007ee5c0  894658               mov dword ptr [esi + 0x58], eax
// 007ee5c3  85db                 test ebx, ebx
// 007ee5c5  0f857e010000         jne 0x7ee749
// 007ee5cb  6a01                 push 1
// 007ee5cd  8bce                 mov ecx, esi
// 007ee5cf  894654               mov dword ptr [esi + 0x54], eax
// 007ee5d2  e8a9e6ffff           call 0x7ecc80
// 007ee5d7  5f                   pop edi
// 007ee5d8  5b                   pop ebx
// 007ee5d9  5e                   pop esi
// 007ee5da  c20c00               ret 0xc
// 007ee5dd  85c9                 test ecx, ecx
// 007ee5df  740d                 je 0x7ee5ee
// 007ee5e1  8bce                 mov ecx, esi
// 007ee5e3  e868f0ffff           call 0x7ed650
// 007ee5e8  5f                   pop edi
// 007ee5e9  5b                   pop ebx
// 007ee5ea  5e                   pop esi
// 007ee5eb  c20c00               ret 0xc
// 007ee5ee  85db                 test ebx, ebx
// 007ee5f0  740d                 je 0x7ee5ff
// 007ee5f2  8bce                 mov ecx, esi
// 007ee5f4  e847fcffff           call 0x7ee240
// 007ee5f9  5f                   pop edi
// 007ee5fa  5b                   pop ebx
// 007ee5fb  5e                   pop esi
// 007ee5fc  c20c00               ret 0xc
// 007ee5ff  33c0                 xor eax, eax
// 007ee601  394660               cmp dword ptr [esi + 0x60], eax
// 007ee604  5f                   pop edi
// 007ee605  0f94c0               sete al
// 007ee608  5b                   pop ebx
// 007ee609  894660               mov dword ptr [esi + 0x60], eax
// 007ee60c  5e                   pop esi
// 007ee60d  c20c00               ret 0xc
// 007ee610  6a01                 push 1
// 007ee612  8bce                 mov ecx, esi
// 007ee614  e8a7edffff           call 0x7ed3c0
// 007ee619  8b4654               mov eax, dword ptr [esi + 0x54]
// 007ee61c  3b4658               cmp eax, dword ptr [esi + 0x58]
// 007ee61f  7509                 jne 0x7ee62a
// 007ee621  40                   inc eax
// 007ee622  894658               mov dword ptr [esi + 0x58], eax
// 007ee625  e918010000           jmp 0x7ee742
// 007ee62a  85db                 test ebx, ebx
// 007ee62c  0f8410010000         je 0x7ee742
// 007ee632  8bce                 mov ecx, esi
// 007ee634  e817f0ffff           call 0x7ed650
// 007ee639  e904010000           jmp 0x7ee742
// 007ee63e  6a01                 push 1
// 007ee640  8bce                 mov ecx, esi
// 007ee642  e879edffff           call 0x7ed3c0
// 007ee647  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 007ee64a  51                   push ecx
// 007ee64b  8bce                 mov ecx, esi
// 007ee64d  e86ed8ffff           call 0x7ebec0
// 007ee652  85c0                 test eax, eax
// 007ee654  0f84fe000000         je 0x7ee758
// 007ee65a  8b5654               mov edx, dword ptr [esi + 0x54]
// 007ee65d  52                   push edx
// 007ee65e  8bce                 mov ecx, esi
// 007ee660  e8dbe5ffff           call 0x7ecc40
// 007ee665  85c0                 test eax, eax
// 007ee667  0f84eb000000         je 0x7ee758
// 007ee66d  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 007ee670  8b06                 mov eax, dword ptr [esi]
// 007ee672  8b804c010000         mov eax, dword ptr [eax + 0x14c]
// 007ee678  51                   push ecx
// 007ee679  8d542414             lea edx, [esp + 0x14]
// 007ee67d  52                   push edx
// 007ee67e  8bce                 mov ecx, esi
// 007ee680  c644241820           mov byte ptr [esp + 0x18], 0x20
// 007ee685  ffd0                 call eax
// 007ee687  85c0                 test eax, eax
// 007ee689  7507                 jne 0x7ee692
// 007ee68b  8a4e6c               mov cl, byte ptr [esi + 0x6c]
// 007ee68e  884c2410             mov byte ptr [esp + 0x10], cl
// 007ee692  8b542410             mov edx, dword ptr [esp + 0x10]
// 007ee696  52                   push edx
// 007ee697  8bce                 mov ecx, esi
// 007ee699  e8f2f2ffff           call 0x7ed990
// 007ee69e  6a01                 push 1
// 007ee6a0  8bce                 mov ecx, esi
// 007ee6a2  e8d9e5ffff           call 0x7ecc80
// 007ee6a7  5f                   pop edi
// 007ee6a8  5b                   pop ebx
// 007ee6a9  5e                   pop esi
// 007ee6aa  c20c00               ret 0xc
// 007ee6ad  8b4620               mov eax, dword ptr [esi + 0x20]
// 007ee6b0  85c0                 test eax, eax
// 007ee6b2  7429                 je 0x7ee6dd
// 007ee6b4  8d4e58               lea ecx, [esi + 0x58]
// 007ee6b7  51                   push ecx
// 007ee6b8  8d5654               lea edx, [esi + 0x54]
// 007ee6bb  52                   push edx
// 007ee6bc  68b0000000           push 0xb0
// 007ee6c1  50                   push eax
// 007ee6c2  ff1590ee8900         call dword ptr [0x89ee90]
// 007ee6c8  8d8680000000         lea eax, [esi + 0x80]
// 007ee6ce  50                   push eax
// 007ee6cf  8bce                 mov ecx, esi
// 007ee6d1  e84aa9f2ff           call 0x719020
// 007ee6d6  8bce                 mov ecx, esi
// 007ee6d8  e813d8ffff           call 0x7ebef0
// 007ee6dd  837e5400             cmp dword ptr [esi + 0x54], 0
// 007ee6e1  8d7e54               lea edi, [esi + 0x54]
// 007ee6e4  7e72                 jle 0x7ee758
// 007ee6e6  8b1f                 mov ebx, dword ptr [edi]
// 007ee6e8  8d8e84000000         lea ecx, [esi + 0x84]
// 007ee6ee  ff1554fb8900         call dword ptr [0x89fb54]
// 007ee6f4  3bd8                 cmp ebx, eax
// 007ee6f6  7f60                 jg 0x7ee758
// 007ee6f8  3b5e58               cmp ebx, dword ptr [esi + 0x58]
// 007ee6fb  7545                 jne 0x7ee742
// 007ee6fd  6a00                 push 0
// 007ee6ff  4b                   dec ebx
// 007ee700  57                   push edi
// 007ee701  8bce                 mov ecx, esi
// 007ee703  891f                 mov dword ptr [edi], ebx
// 007ee705  e876ebffff           call 0x7ed280
// 007ee70a  837e6000             cmp dword ptr [esi + 0x60], 0
// 007ee70e  7432                 je 0x7ee742
// 007ee710  8b0f                 mov ecx, dword ptr [edi]
// 007ee712  51                   push ecx
// 007ee713  8bce                 mov ecx, esi
// 007ee715  e8a6d7ffff           call 0x7ebec0
// 007ee71a  85c0                 test eax, eax
// 007ee71c  7424                 je 0x7ee742
// 007ee71e  8b17                 mov edx, dword ptr [edi]
// 007ee720  52                   push edx
// 007ee721  8d4e74               lea ecx, [esi + 0x74]
// 007ee724  ff15e0f98900         call dword ptr [0x89f9e0]
// 007ee72a  8b0f                 mov ecx, dword ptr [edi]
// 007ee72c  0fb6c0               movzx eax, al
// 007ee72f  50                   push eax
// 007ee730  51                   push ecx
// 007ee731  8d8e80000000         lea ecx, [esi + 0x80]
// 007ee737  ff158cf78900         call dword ptr [0x89f78c]
// 007ee73d  8b17                 mov edx, dword ptr [edi]
// 007ee73f  895658               mov dword ptr [esi + 0x58], edx
// 007ee742  8bce                 mov ecx, esi
// 007ee744  e857f1ffff           call 0x7ed8a0
// 007ee749  6a01                 push 1
// 007ee74b  8bce                 mov ecx, esi
// 007ee74d  e82ee5ffff           call 0x7ecc80
// 007ee752  5f                   pop edi
// 007ee753  5b                   pop ebx
// 007ee754  5e                   pop esi
// 007ee755  c20c00               ret 0xc
// 007ee758  8b06                 mov eax, dword ptr [esi]
// 007ee75a  8b9058010000         mov edx, dword ptr [eax + 0x158]
// 007ee760  8bce                 mov ecx, esi
// 007ee762  ffd2                 call edx
// 007ee764  5f                   pop edi
// 007ee765  5b                   pop ebx
// 007ee766  5e                   pop esi
// 007ee767  c20c00               ret 0xc
// 007ee76a  8bce                 mov ecx, esi
// 007ee76c  e897a8f2ff           call 0x719008
// 007ee771  5f                   pop edi
// 007ee772  5b                   pop ebx
// 007ee773  5e                   pop esi
// 007ee774  c20c00               ret 0xc
// 007ee777  90                   nop 
// 007ee778  ad                   lodsd eax, dword ptr [esi]
// 007ee779  e67e                 out 0x7e, al
// 007ee77b  003e                 add byte ptr [esi], bh
// 007ee77d  e67e                 out 0x7e, al
// 007ee77f  0067e5               add byte ptr [edi - 0x1b], ah
// 007ee782  7e00                 jle 0x7ee784
// 007ee784  f1                   int1 
// 007ee785  e47e                 in al, 0x7e
// 007ee787  00dd                 add ch, bl
// 007ee789  e57e                 in eax, 0x7e
// 007ee78b  0010                 add byte ptr [eax], dl
// 007ee78d  e67e                 out 0x7e, al
// 007ee78f  006ae7               add byte ptr [edx - 0x19], ch
// 007ee792  7e00                 jle 0x7ee794
// 007ee794  0006                 add byte ptr [esi], al
// 007ee796  06                   push es
// 007ee797  06                   push es
// 007ee798  06                   push es
// 007ee799  06                   push es
// 007ee79a  06                   push es
// 007ee79b  06                   push es
// 007ee79c  06                   push es
// 007ee79d  06                   push es
// 007ee79e  06                   push es
// 007ee79f  06                   push es
// 007ee7a0  06                   push es
// 007ee7a1  06                   push es
// 007ee7a2  06                   push es
// 007ee7a3  06                   push es
// 007ee7a4  06                   push es
// 007ee7a5  06                   push es
// 007ee7a6  06                   push es
// 007ee7a7  06                   push es
// 007ee7a8  06                   push es
// 007ee7a9  06                   push es
// 007ee7aa  06                   push es
// 007ee7ab  06                   push es
// 007ee7ac  0106                 add dword ptr [esi], eax
// 007ee7ae  06                   push es
// 007ee7af  0203                 add al, byte ptr [ebx]
// 007ee7b1  0303                 add eax, dword ptr [ebx]
// 007ee7b3  0202                 add al, byte ptr [edx]
// 007ee7b5  06                   push es
// 007ee7b6  06                   push es
// 007ee7b7  06                   push es
// 007ee7b8  06                   push es
// 007ee7b9  0405                 add al, 5
// copied from an identical function in another client (function ?OnKeyDown@?$CXTMaskEditT@VCEdit@@@@IAEXIII@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTMaskEdit.cpp