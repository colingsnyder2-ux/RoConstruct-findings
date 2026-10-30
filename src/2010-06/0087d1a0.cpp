// roc 2010-06 0087d1a0  unit: VCEdit::?$CXTMaskEditT  size: 827 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0087d1a0
//
// 0087d1a0  56                   push esi
// 0087d1a1  8bf1                 mov esi, ecx
// 0087d1a3  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 0087d1a7  741f                 je 0x87d1c8
// 0087d1a9  837e2000             cmp dword ptr [esi + 0x20], 0
// 0087d1ad  7419                 je 0x87d1c8
// 0087d1af  e82afc0f00           call 0x97cdde
// 0087d1b4  a900080000           test eax, 0x800
// 0087d1b9  750d                 jne 0x87d1c8
// 0087d1bb  8d4e70               lea ecx, [esi + 0x70]
// 0087d1be  ff15eccd9e00         call dword ptr [0x9ecdec]
// 0087d1c4  84c0                 test al, al
// 0087d1c6  740b                 je 0x87d1d3
// 0087d1c8  8bce                 mov ecx, esi
// 0087d1ca  e8a1adf2ff           call 0x7a7f70
// 0087d1cf  5e                   pop esi
// 0087d1d0  c20c00               ret 0xc
// 0087d1d3  53                   push ebx
// 0087d1d4  57                   push edi
// 0087d1d5  8b3d7cbc9e00         mov edi, dword ptr [0x9ebc7c]
// 0087d1db  6a10                 push 0x10
// 0087d1dd  ffd7                 call edi
// 0087d1df  33db                 xor ebx, ebx
// 0087d1e1  6685c0               test ax, ax
// 0087d1e4  6a11                 push 0x11
// 0087d1e6  0f9cc3               setl bl
// 0087d1e9  ffd7                 call edi
// 0087d1eb  33c9                 xor ecx, ecx
// 0087d1ed  6685c0               test ax, ax
// 0087d1f0  8b442410             mov eax, dword ptr [esp + 0x10]
// 0087d1f4  0f9cc1               setl cl
// 0087d1f7  83c0f8               add eax, -8
// 0087d1fa  83f826               cmp eax, 0x26
// 0087d1fd  0f8787020000         ja 0x87d48a
// 0087d203  0fb680b4d48700       movzx eax, byte ptr [eax + 0x87d4b4]
// 0087d20a  ff248598d48700       jmp dword ptr [eax*4 + 0x87d498]
// 0087d211  8bce                 mov ecx, esi
// 0087d213  e858adf2ff           call 0x7a7f70
// 0087d218  8b4620               mov eax, dword ptr [esi + 0x20]
// 0087d21b  85c0                 test eax, eax
// 0087d21d  7429                 je 0x87d248
// 0087d21f  8d4e58               lea ecx, [esi + 0x58]
// 0087d222  51                   push ecx
// 0087d223  8d5654               lea edx, [esi + 0x54]
// 0087d226  52                   push edx
// 0087d227  68b0000000           push 0xb0
// 0087d22c  50                   push eax
// 0087d22d  ff1554ba9e00         call dword ptr [0x9eba54]
// 0087d233  8d8680000000         lea eax, [esi + 0x80]
// 0087d239  50                   push eax
// 0087d23a  8bce                 mov ecx, esi
// 0087d23c  e847adf2ff           call 0x7a7f88
// 0087d241  8bce                 mov ecx, esi
// 0087d243  e8d8d9ffff           call 0x87ac20
// 0087d248  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 0087d24b  6a00                 push 0
// 0087d24d  8d542414             lea edx, [esp + 0x14]
// 0087d251  894c2414             mov dword ptr [esp + 0x14], ecx
// 0087d255  52                   push edx
// 0087d256  8bce                 mov ecx, esi
// 0087d258  e843edffff           call 0x87bfa0
// 0087d25d  8b442410             mov eax, dword ptr [esp + 0x10]
// 0087d261  394654               cmp dword ptr [esi + 0x54], eax
// 0087d264  0f8dff010000         jge 0x87d469
// 0087d26a  894654               mov dword ptr [esi + 0x54], eax
// 0087d26d  85db                 test ebx, ebx
// 0087d26f  0f85f4010000         jne 0x87d469
// 0087d275  6a01                 push 1
// 0087d277  8bce                 mov ecx, esi
// 0087d279  894658               mov dword ptr [esi + 0x58], eax
// 0087d27c  e81fe7ffff           call 0x87b9a0
// 0087d281  5f                   pop edi
// 0087d282  5b                   pop ebx
// 0087d283  5e                   pop esi
// 0087d284  c20c00               ret 0xc
// 0087d287  8bce                 mov ecx, esi
// 0087d289  e8e2acf2ff           call 0x7a7f70
// 0087d28e  8b4620               mov eax, dword ptr [esi + 0x20]
// 0087d291  85c0                 test eax, eax
// 0087d293  7429                 je 0x87d2be
// 0087d295  8d4e58               lea ecx, [esi + 0x58]
// 0087d298  51                   push ecx
// 0087d299  8d5654               lea edx, [esi + 0x54]
// 0087d29c  52                   push edx
// 0087d29d  68b0000000           push 0xb0
// 0087d2a2  50                   push eax
// 0087d2a3  ff1554ba9e00         call dword ptr [0x9eba54]
// 0087d2a9  8d8680000000         lea eax, [esi + 0x80]
// 0087d2af  50                   push eax
// 0087d2b0  8bce                 mov ecx, esi
// 0087d2b2  e8d1acf2ff           call 0x7a7f88
// 0087d2b7  8bce                 mov ecx, esi
// 0087d2b9  e862d9ffff           call 0x87ac20
// 0087d2be  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 0087d2c1  6a01                 push 1
// 0087d2c3  8d542414             lea edx, [esp + 0x14]
// 0087d2c7  894c2414             mov dword ptr [esp + 0x14], ecx
// 0087d2cb  52                   push edx
// 0087d2cc  8bce                 mov ecx, esi
// 0087d2ce  e8cdecffff           call 0x87bfa0
// 0087d2d3  8b442410             mov eax, dword ptr [esp + 0x10]
// 0087d2d7  394658               cmp dword ptr [esi + 0x58], eax
// 0087d2da  0f8e89010000         jle 0x87d469
// 0087d2e0  894658               mov dword ptr [esi + 0x58], eax
// 0087d2e3  85db                 test ebx, ebx
// 0087d2e5  0f857e010000         jne 0x87d469
// 0087d2eb  6a01                 push 1
// 0087d2ed  8bce                 mov ecx, esi
// 0087d2ef  894654               mov dword ptr [esi + 0x54], eax
// 0087d2f2  e8a9e6ffff           call 0x87b9a0
// 0087d2f7  5f                   pop edi
// 0087d2f8  5b                   pop ebx
// 0087d2f9  5e                   pop esi
// 0087d2fa  c20c00               ret 0xc
// 0087d2fd  85c9                 test ecx, ecx
// 0087d2ff  740d                 je 0x87d30e
// 0087d301  8bce                 mov ecx, esi
// 0087d303  e868f0ffff           call 0x87c370
// 0087d308  5f                   pop edi
// 0087d309  5b                   pop ebx
// 0087d30a  5e                   pop esi
// 0087d30b  c20c00               ret 0xc
// 0087d30e  85db                 test ebx, ebx
// 0087d310  740d                 je 0x87d31f
// 0087d312  8bce                 mov ecx, esi
// 0087d314  e847fcffff           call 0x87cf60
// 0087d319  5f                   pop edi
// 0087d31a  5b                   pop ebx
// 0087d31b  5e                   pop esi
// 0087d31c  c20c00               ret 0xc
// 0087d31f  33c0                 xor eax, eax
// 0087d321  394660               cmp dword ptr [esi + 0x60], eax
// 0087d324  5f                   pop edi
// 0087d325  0f94c0               sete al
// 0087d328  5b                   pop ebx
// 0087d329  894660               mov dword ptr [esi + 0x60], eax
// 0087d32c  5e                   pop esi
// 0087d32d  c20c00               ret 0xc
// 0087d330  6a01                 push 1
// 0087d332  8bce                 mov ecx, esi
// 0087d334  e8a7edffff           call 0x87c0e0
// 0087d339  8b4654               mov eax, dword ptr [esi + 0x54]
// 0087d33c  3b4658               cmp eax, dword ptr [esi + 0x58]
// 0087d33f  7509                 jne 0x87d34a
// 0087d341  40                   inc eax
// 0087d342  894658               mov dword ptr [esi + 0x58], eax
// 0087d345  e918010000           jmp 0x87d462
// 0087d34a  85db                 test ebx, ebx
// 0087d34c  0f8410010000         je 0x87d462
// 0087d352  8bce                 mov ecx, esi
// 0087d354  e817f0ffff           call 0x87c370
// 0087d359  e904010000           jmp 0x87d462
// 0087d35e  6a01                 push 1
// 0087d360  8bce                 mov ecx, esi
// 0087d362  e879edffff           call 0x87c0e0
// 0087d367  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 0087d36a  51                   push ecx
// 0087d36b  8bce                 mov ecx, esi
// 0087d36d  e87ed8ffff           call 0x87abf0
// 0087d372  85c0                 test eax, eax
// 0087d374  0f84fe000000         je 0x87d478
// 0087d37a  8b5654               mov edx, dword ptr [esi + 0x54]
// 0087d37d  52                   push edx
// 0087d37e  8bce                 mov ecx, esi
// 0087d380  e8dbe5ffff           call 0x87b960
// 0087d385  85c0                 test eax, eax
// 0087d387  0f84eb000000         je 0x87d478
// 0087d38d  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 0087d390  8b06                 mov eax, dword ptr [esi]
// 0087d392  8b804c010000         mov eax, dword ptr [eax + 0x14c]
// 0087d398  51                   push ecx
// 0087d399  8d542414             lea edx, [esp + 0x14]
// 0087d39d  52                   push edx
// 0087d39e  8bce                 mov ecx, esi
// 0087d3a0  c644241820           mov byte ptr [esp + 0x18], 0x20
// 0087d3a5  ffd0                 call eax
// 0087d3a7  85c0                 test eax, eax
// 0087d3a9  7507                 jne 0x87d3b2
// 0087d3ab  8a4e6c               mov cl, byte ptr [esi + 0x6c]
// 0087d3ae  884c2410             mov byte ptr [esp + 0x10], cl
// 0087d3b2  8b542410             mov edx, dword ptr [esp + 0x10]
// 0087d3b6  52                   push edx
// 0087d3b7  8bce                 mov ecx, esi
// 0087d3b9  e8f2f2ffff           call 0x87c6b0
// 0087d3be  6a01                 push 1
// 0087d3c0  8bce                 mov ecx, esi
// 0087d3c2  e8d9e5ffff           call 0x87b9a0
// 0087d3c7  5f                   pop edi
// 0087d3c8  5b                   pop ebx
// 0087d3c9  5e                   pop esi
// 0087d3ca  c20c00               ret 0xc
// 0087d3cd  8b4620               mov eax, dword ptr [esi + 0x20]
// 0087d3d0  85c0                 test eax, eax
// 0087d3d2  7429                 je 0x87d3fd
// 0087d3d4  8d4e58               lea ecx, [esi + 0x58]
// 0087d3d7  51                   push ecx
// 0087d3d8  8d5654               lea edx, [esi + 0x54]
// 0087d3db  52                   push edx
// 0087d3dc  68b0000000           push 0xb0
// 0087d3e1  50                   push eax
// 0087d3e2  ff1554ba9e00         call dword ptr [0x9eba54]
// 0087d3e8  8d8680000000         lea eax, [esi + 0x80]
// 0087d3ee  50                   push eax
// 0087d3ef  8bce                 mov ecx, esi
// 0087d3f1  e892abf2ff           call 0x7a7f88
// 0087d3f6  8bce                 mov ecx, esi
// 0087d3f8  e823d8ffff           call 0x87ac20
// 0087d3fd  837e5400             cmp dword ptr [esi + 0x54], 0
// 0087d401  8d7e54               lea edi, [esi + 0x54]
// 0087d404  7e72                 jle 0x87d478
// 0087d406  8b1f                 mov ebx, dword ptr [edi]
// 0087d408  8d8e84000000         lea ecx, [esi + 0x84]
// 0087d40e  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 0087d414  3bd8                 cmp ebx, eax
// 0087d416  7f60                 jg 0x87d478
// 0087d418  3b5e58               cmp ebx, dword ptr [esi + 0x58]
// 0087d41b  7545                 jne 0x87d462
// 0087d41d  6a00                 push 0
// 0087d41f  4b                   dec ebx
// 0087d420  57                   push edi
// 0087d421  8bce                 mov ecx, esi
// 0087d423  891f                 mov dword ptr [edi], ebx
// 0087d425  e876ebffff           call 0x87bfa0
// 0087d42a  837e6000             cmp dword ptr [esi + 0x60], 0
// 0087d42e  7432                 je 0x87d462
// 0087d430  8b0f                 mov ecx, dword ptr [edi]
// 0087d432  51                   push ecx
// 0087d433  8bce                 mov ecx, esi
// 0087d435  e8b6d7ffff           call 0x87abf0
// 0087d43a  85c0                 test eax, eax
// 0087d43c  7424                 je 0x87d462
// 0087d43e  8b17                 mov edx, dword ptr [edi]
// 0087d440  52                   push edx
// 0087d441  8d4e74               lea ecx, [esi + 0x74]
// 0087d444  ff1558c59e00         call dword ptr [0x9ec558]
// 0087d44a  8b0f                 mov ecx, dword ptr [edi]
// 0087d44c  0fb6c0               movzx eax, al
// 0087d44f  50                   push eax
// 0087d450  51                   push ecx
// 0087d451  8d8e80000000         lea ecx, [esi + 0x80]
// 0087d457  ff1540cc9e00         call dword ptr [0x9ecc40]
// 0087d45d  8b17                 mov edx, dword ptr [edi]
// 0087d45f  895658               mov dword ptr [esi + 0x58], edx
// 0087d462  8bce                 mov ecx, esi
// 0087d464  e857f1ffff           call 0x87c5c0
// 0087d469  6a01                 push 1
// 0087d46b  8bce                 mov ecx, esi
// 0087d46d  e82ee5ffff           call 0x87b9a0
// 0087d472  5f                   pop edi
// 0087d473  5b                   pop ebx
// 0087d474  5e                   pop esi
// 0087d475  c20c00               ret 0xc
// 0087d478  8b06                 mov eax, dword ptr [esi]
// 0087d47a  8b9058010000         mov edx, dword ptr [eax + 0x158]
// 0087d480  8bce                 mov ecx, esi
// 0087d482  ffd2                 call edx
// 0087d484  5f                   pop edi
// 0087d485  5b                   pop ebx
// 0087d486  5e                   pop esi
// 0087d487  c20c00               ret 0xc
// 0087d48a  8bce                 mov ecx, esi
// 0087d48c  e8dfaaf2ff           call 0x7a7f70
// 0087d491  5f                   pop edi
// 0087d492  5b                   pop ebx
// 0087d493  5e                   pop esi
// 0087d494  c20c00               ret 0xc
// 0087d497  90                   nop 
// 0087d498  cdd3                 int 0xd3
// 0087d49a  8700                 xchg dword ptr [eax], eax
// 0087d49c  5e                   pop esi
// 0087d49d  d3870087d287         rol dword ptr [edi - 0x782d7900], cl
// 0087d4a3  0011                 add byte ptr [ecx], dl
// 0087d4a5  d28700fdd287         rol byte ptr [edi - 0x782d0300], cl
// 0087d4ab  0030                 add byte ptr [eax], dh
// 0087d4ad  d387008ad487         rol dword ptr [edi - 0x782b7600], cl
// 0087d4b3  0000                 add byte ptr [eax], al
// 0087d4b5  06                   push es
// 0087d4b6  06                   push es
// 0087d4b7  06                   push es
// 0087d4b8  06                   push es
// 0087d4b9  06                   push es
// 0087d4ba  06                   push es
// 0087d4bb  06                   push es
// 0087d4bc  06                   push es
// 0087d4bd  06                   push es
// 0087d4be  06                   push es
// 0087d4bf  06                   push es
// 0087d4c0  06                   push es
// 0087d4c1  06                   push es
// 0087d4c2  06                   push es
// 0087d4c3  06                   push es
// 0087d4c4  06                   push es
// 0087d4c5  06                   push es
// 0087d4c6  06                   push es
// 0087d4c7  06                   push es
// 0087d4c8  06                   push es
// 0087d4c9  06                   push es
// 0087d4ca  06                   push es
// 0087d4cb  06                   push es
// 0087d4cc  0106                 add dword ptr [esi], eax
// 0087d4ce  06                   push es
// 0087d4cf  0203                 add al, byte ptr [ebx]
// 0087d4d1  0303                 add eax, dword ptr [ebx]
// 0087d4d3  0202                 add al, byte ptr [edx]
// 0087d4d5  06                   push es
// 0087d4d6  06                   push es
// 0087d4d7  06                   push es
// 0087d4d8  06                   push es
// 0087d4d9  0405                 add al, 5
// copied from an identical function in another client (function ?OnKeyDown@?$CXTMaskEditT@VCEdit@@@@IAEXIII@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTMaskEdit.cpp