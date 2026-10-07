// roc 2007-08 00520e30  unit: seg_00520000  size: 1067 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00520e30
//
// 00520e30  83ec30               sub esp, 0x30
// 00520e33  a188518b00           mov eax, dword ptr [0x8b5188]
// 00520e38  33c4                 xor eax, esp
// 00520e3a  8944242c             mov dword ptr [esp + 0x2c], eax
// 00520e3e  8b442434             mov eax, dword ptr [esp + 0x34]
// 00520e42  8b88ec000000         mov ecx, dword ptr [eax + 0xec]
// 00520e48  83c101               add ecx, 1
// 00520e4b  0fb69024010000       movzx edx, byte ptr [eax + 0x124]
// 00520e52  53                   push ebx
// 00520e53  8b5870               mov ebx, dword ptr [eax + 0x70]
// 00520e56  56                   push esi
// 00520e57  8db000010000         lea esi, [eax + 0x100]
// 00520e5d  89742424             mov dword ptr [esp + 0x24], esi
// 00520e61  0f84e3030000         je 0x52124a
// 00520e67  85f6                 test esi, esi
// 00520e69  0f84db030000         je 0x52124a
// 00520e6f  8b149540167a00       mov edx, dword ptr [edx*4 + 0x7a1640]
// 00520e76  8b06                 mov eax, dword ptr [esi]
// 00520e78  0fb6760b             movzx esi, byte ptr [esi + 0xb]
// 00520e7c  55                   push ebp
// 00520e7d  8be8                 mov ebp, eax
// 00520e7f  0fafea               imul ebp, edx
// 00520e82  8954242c             mov dword ptr [esp + 0x2c], edx
// 00520e86  8bd6                 mov edx, esi
// 00520e88  83ea01               sub edx, 1
// 00520e8b  57                   push edi
// 00520e8c  896c2424             mov dword ptr [esp + 0x24], ebp
// 00520e90  8d7dff               lea edi, [ebp - 1]
// 00520e93  0f848e020000         je 0x521127
// 00520e99  83ea01               sub edx, 1
// 00520e9c  0f847d010000         je 0x52101f
// 00520ea2  83ea02               sub edx, 2
// 00520ea5  746d                 je 0x520f14
// 00520ea7  c1ee03               shr esi, 3
// 00520eaa  8d58ff               lea ebx, [eax - 1]
// 00520ead  0faffe               imul edi, esi
// 00520eb0  0fafde               imul ebx, esi
// 00520eb3  03d9                 add ebx, ecx
// 00520eb5  03f9                 add edi, ecx
// 00520eb7  85c0                 test eax, eax
// 00520eb9  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00520ec1  0f865d030000         jbe 0x521224
// 00520ec7  56                   push esi
// 00520ec8  8d442438             lea eax, [esp + 0x38]
// 00520ecc  53                   push ebx
// 00520ecd  50                   push eax
// 00520ece  e879fe1000           call 0x630d4c
// 00520ed3  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00520ed7  83c40c               add esp, 0xc
// 00520eda  85c0                 test eax, eax
// 00520edc  7e1c                 jle 0x520efa
// 00520ede  8be8                 mov ebp, eax
// 00520ee0  56                   push esi
// 00520ee1  8d4c2438             lea ecx, [esp + 0x38]
// 00520ee5  51                   push ecx
// 00520ee6  57                   push edi
// 00520ee7  e860fe1000           call 0x630d4c
// 00520eec  83c40c               add esp, 0xc
// 00520eef  2bfe                 sub edi, esi
// 00520ef1  83ed01               sub ebp, 1
// 00520ef4  75ea                 jne 0x520ee0
// 00520ef6  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 00520efa  8b442418             mov eax, dword ptr [esp + 0x18]
// 00520efe  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00520f02  83c001               add eax, 1
// 00520f05  2bde                 sub ebx, esi
// 00520f07  3b02                 cmp eax, dword ptr [edx]
// 00520f09  89442418             mov dword ptr [esp + 0x18], eax
// 00520f0d  72b8                 jb 0x520ec7
// 00520f0f  e910030000           jmp 0x521224
// 00520f14  8d50ff               lea edx, [eax - 1]
// 00520f17  d1ea                 shr edx, 1
// 00520f19  d1ef                 shr edi, 1
// 00520f1b  03d1                 add edx, ecx
// 00520f1d  03f9                 add edi, ecx
// 00520f1f  f7c300000100         test ebx, 0x10000
// 00520f25  8954241c             mov dword ptr [esp + 0x1c], edx
// 00520f29  7432                 je 0x520f5d
// 00520f2b  83caff               or edx, 0xffffffff
// 00520f2e  8d0c8500000000       lea ecx, [eax*4]
// 00520f35  2bd1                 sub edx, ecx
// 00520f37  83ceff               or esi, 0xffffffff
// 00520f3a  8d0cad00000000       lea ecx, [ebp*4]
// 00520f41  2bf1                 sub esi, ecx
// 00520f43  83e204               and edx, 4
// 00520f46  83e604               and esi, 4
// 00520f49  c744241404000000     mov dword ptr [esp + 0x14], 4
// 00520f51  33ed                 xor ebp, ebp
// 00520f53  c7442420fcffffff     mov dword ptr [esp + 0x20], 0xfffffffc
// 00520f5b  eb35                 jmp 0x520f92
// 00520f5d  8d50ff               lea edx, [eax - 1]
// 00520f60  83e201               and edx, 1
// 00520f63  83c5ff               add ebp, -1
// 00520f66  03d2                 add edx, edx
// 00520f68  03d2                 add edx, edx
// 00520f6a  83e501               and ebp, 1
// 00520f6d  03ed                 add ebp, ebp
// 00520f6f  8bca                 mov ecx, edx
// 00520f71  ba04000000           mov edx, 4
// 00520f76  03ed                 add ebp, ebp
// 00520f78  be04000000           mov esi, 4
// 00520f7d  2bd1                 sub edx, ecx
// 00520f7f  2bf5                 sub esi, ebp
// 00520f81  bd04000000           mov ebp, 4
// 00520f86  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00520f8e  896c2420             mov dword ptr [esp + 0x20], ebp
// 00520f92  85c0                 test eax, eax
// 00520f94  c744242800000000     mov dword ptr [esp + 0x28], 0
// 00520f9c  0f867e020000         jbe 0x521220
// 00520fa2  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00520fa6  8a00                 mov al, byte ptr [eax]
// 00520fa8  8aca                 mov cl, dl
// 00520faa  d2e8                 shr al, cl
// 00520fac  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00520fb0  240f                 and al, 0xf
// 00520fb2  85c9                 test ecx, ecx
// 00520fb4  88442413             mov byte ptr [esp + 0x13], al
// 00520fb8  7e3a                 jle 0x520ff4
// 00520fba  894c2418             mov dword ptr [esp + 0x18], ecx
// 00520fbe  eb04                 jmp 0x520fc4
// 00520fc0  8a442413             mov al, byte ptr [esp + 0x13]
// 00520fc4  b904000000           mov ecx, 4
// 00520fc9  2bce                 sub ecx, esi
// 00520fcb  bb0f0f0000           mov ebx, 0xf0f
// 00520fd0  d3fb                 sar ebx, cl
// 00520fd2  8bce                 mov ecx, esi
// 00520fd4  d2e0                 shl al, cl
// 00520fd6  221f                 and bl, byte ptr [edi]
// 00520fd8  0ad8                 or bl, al
// 00520fda  3bf5                 cmp esi, ebp
// 00520fdc  881f                 mov byte ptr [edi], bl
// 00520fde  7509                 jne 0x520fe9
// 00520fe0  8b742414             mov esi, dword ptr [esp + 0x14]
// 00520fe4  83ef01               sub edi, 1
// 00520fe7  eb04                 jmp 0x520fed
// 00520fe9  03742420             add esi, dword ptr [esp + 0x20]
// 00520fed  836c241801           sub dword ptr [esp + 0x18], 1
// 00520ff2  75cc                 jne 0x520fc0
// 00520ff4  3bd5                 cmp edx, ebp
// 00520ff6  750b                 jne 0x521003
// 00520ff8  8b542414             mov edx, dword ptr [esp + 0x14]
// 00520ffc  836c241c01           sub dword ptr [esp + 0x1c], 1
// 00521001  eb04                 jmp 0x521007
// 00521003  03542420             add edx, dword ptr [esp + 0x20]
// 00521007  8b442428             mov eax, dword ptr [esp + 0x28]
// 0052100b  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0052100f  83c001               add eax, 1
// 00521012  3b01                 cmp eax, dword ptr [ecx]
// 00521014  89442428             mov dword ptr [esp + 0x28], eax
// 00521018  7288                 jb 0x520fa2
// 0052101a  e901020000           jmp 0x521220
// 0052101f  8d50ff               lea edx, [eax - 1]
// 00521022  c1ea02               shr edx, 2
// 00521025  c1ef02               shr edi, 2
// 00521028  03d1                 add edx, ecx
// 0052102a  03f9                 add edi, ecx
// 0052102c  f7c300000100         test ebx, 0x10000
// 00521032  89542414             mov dword ptr [esp + 0x14], edx
// 00521036  7428                 je 0x521060
// 00521038  8d5400ff             lea edx, [eax + eax - 1]
// 0052103c  8d742dff             lea esi, [ebp + ebp - 1]
// 00521040  83e206               and edx, 6
// 00521043  83e606               and esi, 6
// 00521046  c744241c06000000     mov dword ptr [esp + 0x1c], 6
// 0052104e  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00521056  c7442424feffffff     mov dword ptr [esp + 0x24], 0xfffffffe
// 0052105e  eb36                 jmp 0x521096
// 00521060  8d48ff               lea ecx, [eax - 1]
// 00521063  83e103               and ecx, 3
// 00521066  ba03000000           mov edx, 3
// 0052106b  2bd1                 sub edx, ecx
// 0052106d  8d4dff               lea ecx, [ebp - 1]
// 00521070  83e103               and ecx, 3
// 00521073  be03000000           mov esi, 3
// 00521078  2bf1                 sub esi, ecx
// 0052107a  03d2                 add edx, edx
// 0052107c  03f6                 add esi, esi
// 0052107e  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00521086  c744242006000000     mov dword ptr [esp + 0x20], 6
// 0052108e  c744242402000000     mov dword ptr [esp + 0x24], 2
// 00521096  85c0                 test eax, eax
// 00521098  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005210a0  0f867e010000         jbe 0x521224
// 005210a6  8b442414             mov eax, dword ptr [esp + 0x14]
// 005210aa  8a00                 mov al, byte ptr [eax]
// 005210ac  8aca                 mov cl, dl
// 005210ae  d2e8                 shr al, cl
// 005210b0  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005210b4  2403                 and al, 3
// 005210b6  85c9                 test ecx, ecx
// 005210b8  88442413             mov byte ptr [esp + 0x13], al
// 005210bc  7e3c                 jle 0x5210fa
// 005210be  894c2428             mov dword ptr [esp + 0x28], ecx
// 005210c2  eb04                 jmp 0x5210c8
// 005210c4  8a442413             mov al, byte ptr [esp + 0x13]
// 005210c8  b906000000           mov ecx, 6
// 005210cd  2bce                 sub ecx, esi
// 005210cf  bb3f3f0000           mov ebx, 0x3f3f
// 005210d4  d3fb                 sar ebx, cl
// 005210d6  8bce                 mov ecx, esi
// 005210d8  d2e0                 shl al, cl
// 005210da  221f                 and bl, byte ptr [edi]
// 005210dc  0ad8                 or bl, al
// 005210de  3b742420             cmp esi, dword ptr [esp + 0x20]
// 005210e2  881f                 mov byte ptr [edi], bl
// 005210e4  7509                 jne 0x5210ef
// 005210e6  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005210ea  83ef01               sub edi, 1
// 005210ed  eb04                 jmp 0x5210f3
// 005210ef  03742424             add esi, dword ptr [esp + 0x24]
// 005210f3  836c242801           sub dword ptr [esp + 0x28], 1
// 005210f8  75ca                 jne 0x5210c4
// 005210fa  3b542420             cmp edx, dword ptr [esp + 0x20]
// 005210fe  750b                 jne 0x52110b
// 00521100  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00521104  836c241401           sub dword ptr [esp + 0x14], 1
// 00521109  eb04                 jmp 0x52110f
// 0052110b  03542424             add edx, dword ptr [esp + 0x24]
// 0052110f  8b442418             mov eax, dword ptr [esp + 0x18]
// 00521113  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00521117  83c001               add eax, 1
// 0052111a  3b01                 cmp eax, dword ptr [ecx]
// 0052111c  89442418             mov dword ptr [esp + 0x18], eax
// 00521120  7284                 jb 0x5210a6
// 00521122  e9fd000000           jmp 0x521224
// 00521127  8d50ff               lea edx, [eax - 1]
// 0052112a  c1ea03               shr edx, 3
// 0052112d  c1ef03               shr edi, 3
// 00521130  03d1                 add edx, ecx
// 00521132  03f9                 add edi, ecx
// 00521134  f7c300000100         test ebx, 0x10000
// 0052113a  8954241c             mov dword ptr [esp + 0x1c], edx
// 0052113e  7420                 je 0x521160
// 00521140  8d75ff               lea esi, [ebp - 1]
// 00521143  8d50ff               lea edx, [eax - 1]
// 00521146  83e207               and edx, 7
// 00521149  83e607               and esi, 7
// 0052114c  c744242007000000     mov dword ptr [esp + 0x20], 7
// 00521154  33ed                 xor ebp, ebp
// 00521156  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0052115e  eb2f                 jmp 0x52118f
// 00521160  83c5ff               add ebp, -1
// 00521163  8d48ff               lea ecx, [eax - 1]
// 00521166  83e107               and ecx, 7
// 00521169  ba07000000           mov edx, 7
// 0052116e  83e507               and ebp, 7
// 00521171  be07000000           mov esi, 7
// 00521176  2bd1                 sub edx, ecx
// 00521178  2bf5                 sub esi, ebp
// 0052117a  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00521182  bd07000000           mov ebp, 7
// 00521187  c744241801000000     mov dword ptr [esp + 0x18], 1
// 0052118f  85c0                 test eax, eax
// 00521191  89542414             mov dword ptr [esp + 0x14], edx
// 00521195  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0052119d  0f867d000000         jbe 0x521220
// 005211a3  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005211a7  8a00                 mov al, byte ptr [eax]
// 005211a9  8aca                 mov cl, dl
// 005211ab  d2e8                 shr al, cl
// 005211ad  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005211b1  2401                 and al, 1
// 005211b3  85c9                 test ecx, ecx
// 005211b5  7e3f                 jle 0x5211f6
// 005211b7  894c2428             mov dword ptr [esp + 0x28], ecx
// 005211bb  eb03                 jmp 0x5211c0
// 005211bd  8d4900               lea ecx, [ecx]
// 005211c0  b907000000           mov ecx, 7
// 005211c5  2bce                 sub ecx, esi
// 005211c7  ba7f7f0000           mov edx, 0x7f7f
// 005211cc  d3fa                 sar edx, cl
// 005211ce  8ad8                 mov bl, al
// 005211d0  8bce                 mov ecx, esi
// 005211d2  d2e3                 shl bl, cl
// 005211d4  2217                 and dl, byte ptr [edi]
// 005211d6  0ad3                 or dl, bl
// 005211d8  3bf5                 cmp esi, ebp
// 005211da  8817                 mov byte ptr [edi], dl
// 005211dc  7509                 jne 0x5211e7
// 005211de  8b742420             mov esi, dword ptr [esp + 0x20]
// 005211e2  83ef01               sub edi, 1
// 005211e5  eb04                 jmp 0x5211eb
// 005211e7  03742418             add esi, dword ptr [esp + 0x18]
// 005211eb  836c242801           sub dword ptr [esp + 0x28], 1
// 005211f0  75ce                 jne 0x5211c0
// 005211f2  8b542414             mov edx, dword ptr [esp + 0x14]
// 005211f6  3bd5                 cmp edx, ebp
// 005211f8  750b                 jne 0x521205
// 005211fa  8b542420             mov edx, dword ptr [esp + 0x20]
// 005211fe  836c241c01           sub dword ptr [esp + 0x1c], 1
// 00521203  eb04                 jmp 0x521209
// 00521205  03542418             add edx, dword ptr [esp + 0x18]
// 00521209  8b442434             mov eax, dword ptr [esp + 0x34]
// 0052120d  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00521211  83c001               add eax, 1
// 00521214  3b01                 cmp eax, dword ptr [ecx]
// 00521216  89542414             mov dword ptr [esp + 0x14], edx
// 0052121a  89442434             mov dword ptr [esp + 0x34], eax
// 0052121e  7283                 jb 0x5211a3
// 00521220  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 00521224  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00521228  8a410b               mov al, byte ptr [ecx + 0xb]
// 0052122b  3c08                 cmp al, 8
// 0052122d  8929                 mov dword ptr [ecx], ebp
// 0052122f  0fb6c0               movzx eax, al
// 00521232  7208                 jb 0x52123c
// 00521234  c1e803               shr eax, 3
// 00521237  0fafc5               imul eax, ebp
// 0052123a  eb09                 jmp 0x521245
// 0052123c  0fafc5               imul eax, ebp
// 0052123f  83c007               add eax, 7
// 00521242  c1e803               shr eax, 3
// 00521245  5f                   pop edi
// 00521246  894104               mov dword ptr [ecx + 4], eax
// 00521249  5d                   pop ebp
// 0052124a  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0052124e  5e                   pop esi
// 0052124f  5b                   pop ebx
// 00521250  33cc                 xor ecx, esp
// 00521252  e8c7f71000           call 0x630a1e
// 00521257  83c430               add esp, 0x30
// 0052125a  c3                   ret 
// library libpng-1.2.7/pngrutil.c (function _png_do_read_interlace)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS /MD
// roc-lib: libpng-1.2.7 pngrutil.c
