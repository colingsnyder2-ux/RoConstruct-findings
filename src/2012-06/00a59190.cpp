// roc 2012-06 00a59190  unit: VCEdit::?$CXTMaskEditT  size: 827 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a59190
//
// 00a59190  56                   push esi
// 00a59191  8bf1                 mov esi, ecx
// 00a59193  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 00a59197  741f                 je 0xa591b8
// 00a59199  837e2000             cmp dword ptr [esi + 0x20], 0
// 00a5919d  7419                 je 0xa591b8
// 00a5919f  e82e040400           call 0xa995d2
// 00a591a4  a900080000           test eax, 0x800
// 00a591a9  750d                 jne 0xa591b8
// 00a591ab  8d4e70               lea ecx, [esi + 0x70]
// 00a591ae  ff156046b200         call dword ptr [0xb24660]
// 00a591b4  84c0                 test al, al
// 00a591b6  740b                 je 0xa591c3
// 00a591b8  8bce                 mov ecx, esi
// 00a591ba  e81f95f2ff           call 0x9826de
// 00a591bf  5e                   pop esi
// 00a591c0  c20c00               ret 0xc
// 00a591c3  53                   push ebx
// 00a591c4  57                   push edi
// 00a591c5  8b3d843ab200         mov edi, dword ptr [0xb23a84]
// 00a591cb  6a10                 push 0x10
// 00a591cd  ffd7                 call edi
// 00a591cf  33db                 xor ebx, ebx
// 00a591d1  6685c0               test ax, ax
// 00a591d4  6a11                 push 0x11
// 00a591d6  0f9cc3               setl bl
// 00a591d9  ffd7                 call edi
// 00a591db  33c9                 xor ecx, ecx
// 00a591dd  6685c0               test ax, ax
// 00a591e0  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a591e4  0f9cc1               setl cl
// 00a591e7  83c0f8               add eax, -8
// 00a591ea  83f826               cmp eax, 0x26
// 00a591ed  0f8787020000         ja 0xa5947a
// 00a591f3  0fb680a494a500       movzx eax, byte ptr [eax + 0xa594a4]
// 00a591fa  ff24858894a500       jmp dword ptr [eax*4 + 0xa59488]
// 00a59201  8bce                 mov ecx, esi
// 00a59203  e8d694f2ff           call 0x9826de
// 00a59208  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a5920b  85c0                 test eax, eax
// 00a5920d  7429                 je 0xa59238
// 00a5920f  8d4e58               lea ecx, [esi + 0x58]
// 00a59212  51                   push ecx
// 00a59213  8d5654               lea edx, [esi + 0x54]
// 00a59216  52                   push edx
// 00a59217  68b0000000           push 0xb0
// 00a5921c  50                   push eax
// 00a5921d  ff15043cb200         call dword ptr [0xb23c04]
// 00a59223  8d8680000000         lea eax, [esi + 0x80]
// 00a59229  50                   push eax
// 00a5922a  8bce                 mov ecx, esi
// 00a5922c  e8c594f2ff           call 0x9826f6
// 00a59231  8bce                 mov ecx, esi
// 00a59233  e8b8d9ffff           call 0xa56bf0
// 00a59238  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 00a5923b  6a00                 push 0
// 00a5923d  8d542414             lea edx, [esp + 0x14]
// 00a59241  894c2414             mov dword ptr [esp + 0x14], ecx
// 00a59245  52                   push edx
// 00a59246  8bce                 mov ecx, esi
// 00a59248  e833edffff           call 0xa57f80
// 00a5924d  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a59251  394654               cmp dword ptr [esi + 0x54], eax
// 00a59254  0f8dff010000         jge 0xa59459
// 00a5925a  894654               mov dword ptr [esi + 0x54], eax
// 00a5925d  85db                 test ebx, ebx
// 00a5925f  0f85f4010000         jne 0xa59459
// 00a59265  6a01                 push 1
// 00a59267  8bce                 mov ecx, esi
// 00a59269  894658               mov dword ptr [esi + 0x58], eax
// 00a5926c  e80fe7ffff           call 0xa57980
// 00a59271  5f                   pop edi
// 00a59272  5b                   pop ebx
// 00a59273  5e                   pop esi
// 00a59274  c20c00               ret 0xc
// 00a59277  8bce                 mov ecx, esi
// 00a59279  e86094f2ff           call 0x9826de
// 00a5927e  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a59281  85c0                 test eax, eax
// 00a59283  7429                 je 0xa592ae
// 00a59285  8d4e58               lea ecx, [esi + 0x58]
// 00a59288  51                   push ecx
// 00a59289  8d5654               lea edx, [esi + 0x54]
// 00a5928c  52                   push edx
// 00a5928d  68b0000000           push 0xb0
// 00a59292  50                   push eax
// 00a59293  ff15043cb200         call dword ptr [0xb23c04]
// 00a59299  8d8680000000         lea eax, [esi + 0x80]
// 00a5929f  50                   push eax
// 00a592a0  8bce                 mov ecx, esi
// 00a592a2  e84f94f2ff           call 0x9826f6
// 00a592a7  8bce                 mov ecx, esi
// 00a592a9  e842d9ffff           call 0xa56bf0
// 00a592ae  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 00a592b1  6a01                 push 1
// 00a592b3  8d542414             lea edx, [esp + 0x14]
// 00a592b7  894c2414             mov dword ptr [esp + 0x14], ecx
// 00a592bb  52                   push edx
// 00a592bc  8bce                 mov ecx, esi
// 00a592be  e8bdecffff           call 0xa57f80
// 00a592c3  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a592c7  394658               cmp dword ptr [esi + 0x58], eax
// 00a592ca  0f8e89010000         jle 0xa59459
// 00a592d0  894658               mov dword ptr [esi + 0x58], eax
// 00a592d3  85db                 test ebx, ebx
// 00a592d5  0f857e010000         jne 0xa59459
// 00a592db  6a01                 push 1
// 00a592dd  8bce                 mov ecx, esi
// 00a592df  894654               mov dword ptr [esi + 0x54], eax
// 00a592e2  e899e6ffff           call 0xa57980
// 00a592e7  5f                   pop edi
// 00a592e8  5b                   pop ebx
// 00a592e9  5e                   pop esi
// 00a592ea  c20c00               ret 0xc
// 00a592ed  85c9                 test ecx, ecx
// 00a592ef  740d                 je 0xa592fe
// 00a592f1  8bce                 mov ecx, esi
// 00a592f3  e858f0ffff           call 0xa58350
// 00a592f8  5f                   pop edi
// 00a592f9  5b                   pop ebx
// 00a592fa  5e                   pop esi
// 00a592fb  c20c00               ret 0xc
// 00a592fe  85db                 test ebx, ebx
// 00a59300  740d                 je 0xa5930f
// 00a59302  8bce                 mov ecx, esi
// 00a59304  e847fcffff           call 0xa58f50
// 00a59309  5f                   pop edi
// 00a5930a  5b                   pop ebx
// 00a5930b  5e                   pop esi
// 00a5930c  c20c00               ret 0xc
// 00a5930f  33c0                 xor eax, eax
// 00a59311  394660               cmp dword ptr [esi + 0x60], eax
// 00a59314  5f                   pop edi
// 00a59315  0f94c0               sete al
// 00a59318  5b                   pop ebx
// 00a59319  894660               mov dword ptr [esi + 0x60], eax
// 00a5931c  5e                   pop esi
// 00a5931d  c20c00               ret 0xc
// 00a59320  6a01                 push 1
// 00a59322  8bce                 mov ecx, esi
// 00a59324  e897edffff           call 0xa580c0
// 00a59329  8b4654               mov eax, dword ptr [esi + 0x54]
// 00a5932c  3b4658               cmp eax, dword ptr [esi + 0x58]
// 00a5932f  7509                 jne 0xa5933a
// 00a59331  40                   inc eax
// 00a59332  894658               mov dword ptr [esi + 0x58], eax
// 00a59335  e918010000           jmp 0xa59452
// 00a5933a  85db                 test ebx, ebx
// 00a5933c  0f8410010000         je 0xa59452
// 00a59342  8bce                 mov ecx, esi
// 00a59344  e807f0ffff           call 0xa58350
// 00a59349  e904010000           jmp 0xa59452
// 00a5934e  6a01                 push 1
// 00a59350  8bce                 mov ecx, esi
// 00a59352  e869edffff           call 0xa580c0
// 00a59357  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 00a5935a  51                   push ecx
// 00a5935b  8bce                 mov ecx, esi
// 00a5935d  e85ed8ffff           call 0xa56bc0
// 00a59362  85c0                 test eax, eax
// 00a59364  0f84fe000000         je 0xa59468
// 00a5936a  8b5654               mov edx, dword ptr [esi + 0x54]
// 00a5936d  52                   push edx
// 00a5936e  8bce                 mov ecx, esi
// 00a59370  e8cbe5ffff           call 0xa57940
// 00a59375  85c0                 test eax, eax
// 00a59377  0f84eb000000         je 0xa59468
// 00a5937d  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 00a59380  8b06                 mov eax, dword ptr [esi]
// 00a59382  8b804c010000         mov eax, dword ptr [eax + 0x14c]
// 00a59388  51                   push ecx
// 00a59389  8d542414             lea edx, [esp + 0x14]
// 00a5938d  52                   push edx
// 00a5938e  8bce                 mov ecx, esi
// 00a59390  c644241820           mov byte ptr [esp + 0x18], 0x20
// 00a59395  ffd0                 call eax
// 00a59397  85c0                 test eax, eax
// 00a59399  7507                 jne 0xa593a2
// 00a5939b  8a4e6c               mov cl, byte ptr [esi + 0x6c]
// 00a5939e  884c2410             mov byte ptr [esp + 0x10], cl
// 00a593a2  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a593a6  52                   push edx
// 00a593a7  8bce                 mov ecx, esi
// 00a593a9  e8e2f2ffff           call 0xa58690
// 00a593ae  6a01                 push 1
// 00a593b0  8bce                 mov ecx, esi
// 00a593b2  e8c9e5ffff           call 0xa57980
// 00a593b7  5f                   pop edi
// 00a593b8  5b                   pop ebx
// 00a593b9  5e                   pop esi
// 00a593ba  c20c00               ret 0xc
// 00a593bd  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a593c0  85c0                 test eax, eax
// 00a593c2  7429                 je 0xa593ed
// 00a593c4  8d4e58               lea ecx, [esi + 0x58]
// 00a593c7  51                   push ecx
// 00a593c8  8d5654               lea edx, [esi + 0x54]
// 00a593cb  52                   push edx
// 00a593cc  68b0000000           push 0xb0
// 00a593d1  50                   push eax
// 00a593d2  ff15043cb200         call dword ptr [0xb23c04]
// 00a593d8  8d8680000000         lea eax, [esi + 0x80]
// 00a593de  50                   push eax
// 00a593df  8bce                 mov ecx, esi
// 00a593e1  e81093f2ff           call 0x9826f6
// 00a593e6  8bce                 mov ecx, esi
// 00a593e8  e803d8ffff           call 0xa56bf0
// 00a593ed  837e5400             cmp dword ptr [esi + 0x54], 0
// 00a593f1  8d7e54               lea edi, [esi + 0x54]
// 00a593f4  7e72                 jle 0xa59468
// 00a593f6  8b1f                 mov ebx, dword ptr [edi]
// 00a593f8  8d8e84000000         lea ecx, [esi + 0x84]
// 00a593fe  ff155846b200         call dword ptr [0xb24658]
// 00a59404  3bd8                 cmp ebx, eax
// 00a59406  7f60                 jg 0xa59468
// 00a59408  3b5e58               cmp ebx, dword ptr [esi + 0x58]
// 00a5940b  7545                 jne 0xa59452
// 00a5940d  6a00                 push 0
// 00a5940f  4b                   dec ebx
// 00a59410  57                   push edi
// 00a59411  8bce                 mov ecx, esi
// 00a59413  891f                 mov dword ptr [edi], ebx
// 00a59415  e866ebffff           call 0xa57f80
// 00a5941a  837e6000             cmp dword ptr [esi + 0x60], 0
// 00a5941e  7432                 je 0xa59452
// 00a59420  8b0f                 mov ecx, dword ptr [edi]
// 00a59422  51                   push ecx
// 00a59423  8bce                 mov ecx, esi
// 00a59425  e896d7ffff           call 0xa56bc0
// 00a5942a  85c0                 test eax, eax
// 00a5942c  7424                 je 0xa59452
// 00a5942e  8b17                 mov edx, dword ptr [edi]
// 00a59430  52                   push edx
// 00a59431  8d4e74               lea ecx, [esi + 0x74]
// 00a59434  ff15e844b200         call dword ptr [0xb244e8]
// 00a5943a  8b0f                 mov ecx, dword ptr [edi]
// 00a5943c  0fb6c0               movzx eax, al
// 00a5943f  50                   push eax
// 00a59440  51                   push ecx
// 00a59441  8d8e80000000         lea ecx, [esi + 0x80]
// 00a59447  ff15f84cb200         call dword ptr [0xb24cf8]
// 00a5944d  8b17                 mov edx, dword ptr [edi]
// 00a5944f  895658               mov dword ptr [esi + 0x58], edx
// 00a59452  8bce                 mov ecx, esi
// 00a59454  e847f1ffff           call 0xa585a0
// 00a59459  6a01                 push 1
// 00a5945b  8bce                 mov ecx, esi
// 00a5945d  e81ee5ffff           call 0xa57980
// 00a59462  5f                   pop edi
// 00a59463  5b                   pop ebx
// 00a59464  5e                   pop esi
// 00a59465  c20c00               ret 0xc
// 00a59468  8b06                 mov eax, dword ptr [esi]
// 00a5946a  8b9058010000         mov edx, dword ptr [eax + 0x158]
// 00a59470  8bce                 mov ecx, esi
// 00a59472  ffd2                 call edx
// 00a59474  5f                   pop edi
// 00a59475  5b                   pop ebx
// 00a59476  5e                   pop esi
// 00a59477  c20c00               ret 0xc
// 00a5947a  8bce                 mov ecx, esi
// 00a5947c  e85d92f2ff           call 0x9826de
// 00a59481  5f                   pop edi
// 00a59482  5b                   pop ebx
// 00a59483  5e                   pop esi
// 00a59484  c20c00               ret 0xc
// 00a59487  90                   nop 
// 00a59488  bd93a5004e           mov ebp, 0x4e00a593
// 00a5948d  93                   xchg ebx, eax
// 00a5948e  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// 00a5948f  007792               add byte ptr [edi - 0x6e], dh
// 00a59492  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// 00a59493  0001                 add byte ptr [ecx], al
// 00a59495  92                   xchg edx, eax
// 00a59496  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// 00a59497  00ed                 add ch, ch
// 00a59499  92                   xchg edx, eax
// 00a5949a  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// 00a5949b  0020                 add byte ptr [eax], ah
// 00a5949d  93                   xchg ebx, eax
// 00a5949e  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// 00a5949f  007a94               add byte ptr [edx - 0x6c], bh
// 00a594a2  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// 00a594a3  0000                 add byte ptr [eax], al
// 00a594a5  06                   push es
// 00a594a6  06                   push es
// 00a594a7  06                   push es
// 00a594a8  06                   push es
// 00a594a9  06                   push es
// 00a594aa  06                   push es
// 00a594ab  06                   push es
// 00a594ac  06                   push es
// 00a594ad  06                   push es
// 00a594ae  06                   push es
// 00a594af  06                   push es
// 00a594b0  06                   push es
// 00a594b1  06                   push es
// 00a594b2  06                   push es
// 00a594b3  06                   push es
// 00a594b4  06                   push es
// 00a594b5  06                   push es
// 00a594b6  06                   push es
// 00a594b7  06                   push es
// 00a594b8  06                   push es
// 00a594b9  06                   push es
// 00a594ba  06                   push es
// 00a594bb  06                   push es
// 00a594bc  0106                 add dword ptr [esi], eax
// 00a594be  06                   push es
// 00a594bf  0203                 add al, byte ptr [ebx]
// 00a594c1  0303                 add eax, dword ptr [ebx]
// 00a594c3  0202                 add al, byte ptr [edx]
// 00a594c5  06                   push es
// 00a594c6  06                   push es
// 00a594c7  06                   push es
// 00a594c8  06                   push es
// 00a594c9  0405                 add al, 5
// copied from an identical function in another client (function ?OnKeyDown@?$CXTMaskEditT@VCEdit@@@@IAEXIII@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTMaskEdit.cpp