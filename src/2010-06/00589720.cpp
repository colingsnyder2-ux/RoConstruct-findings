// roc 2010-06 00589720  unit: seg_00580000  size: 966 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00589720
//
// 00589720  55                   push ebp
// 00589721  8bec                 mov ebp, esp
// 00589723  83e4f8               and esp, 0xfffffff8
// 00589726  81ec300a0000         sub esp, 0xa30
// 0058972c  83bea800000000       cmp dword ptr [esi + 0xa8], 0
// 00589733  53                   push ebx
// 00589734  57                   push edi
// 00589735  7f1c                 jg 0x589753
// 00589737  8b06                 mov eax, dword ptr [esi]
// 00589739  c7401413000000       mov dword ptr [eax + 0x14], 0x13
// 00589740  8b0e                 mov ecx, dword ptr [esi]
// 00589742  c7411800000000       mov dword ptr [ecx + 0x18], 0
// 00589749  8b16                 mov edx, dword ptr [esi]
// 0058974b  8b02                 mov eax, dword ptr [edx]
// 0058974d  56                   push esi
// 0058974e  ffd0                 call eax
// 00589750  83c404               add esp, 4
// 00589753  8b9eac000000         mov ebx, dword ptr [esi + 0xac]
// 00589759  837b1400             cmp dword ptr [ebx + 0x14], 0
// 0058975d  895c2414             mov dword ptr [esp + 0x14], ebx
// 00589761  7528                 jne 0x58978b
// 00589763  837b183f             cmp dword ptr [ebx + 0x18], 0x3f
// 00589767  7522                 jne 0x58978b
// 00589769  837e3c00             cmp dword ptr [esi + 0x3c], 0
// 0058976d  c686d400000000       mov byte ptr [esi + 0xd4], 0
// 00589774  7e37                 jle 0x5897ad
// 00589776  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 00589779  51                   push ecx
// 0058977a  8d542430             lea edx, [esp + 0x30]
// 0058977e  6a00                 push 0
// 00589780  52                   push edx
// 00589781  e85ef42100           call 0x7a8be4
// 00589786  83c40c               add esp, 0xc
// 00589789  eb22                 jmp 0x5897ad
// 0058978b  837e3c00             cmp dword ptr [esi + 0x3c], 0
// 0058978f  c686d400000001       mov byte ptr [esi + 0xd4], 1
// 00589796  7e15                 jle 0x5897ad
// 00589798  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0058979b  81e1ffffff00         and ecx, 0xffffff
// 005897a1  c1e106               shl ecx, 6
// 005897a4  83c8ff               or eax, 0xffffffff
// 005897a7  8d7c2438             lea edi, [esp + 0x38]
// 005897ab  f3ab                 rep stosd dword ptr es:[edi], eax
// 005897ad  b801000000           mov eax, 1
// 005897b2  3986a8000000         cmp dword ptr [esi + 0xa8], eax
// 005897b8  8944240c             mov dword ptr [esp + 0xc], eax
// 005897bc  0f8cb4020000         jl 0x589a76
// 005897c2  8b03                 mov eax, dword ptr [ebx]
// 005897c4  89442410             mov dword ptr [esp + 0x10], eax
// 005897c8  85c0                 test eax, eax
// 005897ca  7e05                 jle 0x5897d1
// 005897cc  83f804               cmp eax, 4
// 005897cf  7e21                 jle 0x5897f2
// 005897d1  8b0e                 mov ecx, dword ptr [esi]
// 005897d3  c741141a000000       mov dword ptr [ecx + 0x14], 0x1a
// 005897da  8b16                 mov edx, dword ptr [esi]
// 005897dc  894218               mov dword ptr [edx + 0x18], eax
// 005897df  8b06                 mov eax, dword ptr [esi]
// 005897e1  c7401c04000000       mov dword ptr [eax + 0x1c], 4
// 005897e8  8b0e                 mov ecx, dword ptr [esi]
// 005897ea  8b11                 mov edx, dword ptr [ecx]
// 005897ec  56                   push esi
// 005897ed  ffd2                 call edx
// 005897ef  83c404               add esp, 4
// 005897f2  33ff                 xor edi, edi
// 005897f4  397c2410             cmp dword ptr [esp + 0x10], edi
// 005897f8  7e63                 jle 0x58985d
// 005897fa  8d9b00000000         lea ebx, [ebx]
// 00589800  8b5cbb04             mov ebx, dword ptr [ebx + edi*4 + 4]
// 00589804  85db                 test ebx, ebx
// 00589806  7c05                 jl 0x58980d
// 00589808  3b5e3c               cmp ebx, dword ptr [esi + 0x3c]
// 0058980b  7c1c                 jl 0x589829
// 0058980d  8b06                 mov eax, dword ptr [esi]
// 0058980f  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00589813  c7401413000000       mov dword ptr [eax + 0x14], 0x13
// 0058981a  8b0e                 mov ecx, dword ptr [esi]
// 0058981c  895118               mov dword ptr [ecx + 0x18], edx
// 0058981f  8b06                 mov eax, dword ptr [esi]
// 00589821  8b08                 mov ecx, dword ptr [eax]
// 00589823  56                   push esi
// 00589824  ffd1                 call ecx
// 00589826  83c404               add esp, 4
// 00589829  85ff                 test edi, edi
// 0058982b  7e25                 jle 0x589852
// 0058982d  8b542414             mov edx, dword ptr [esp + 0x14]
// 00589831  3b1cba               cmp ebx, dword ptr [edx + edi*4]
// 00589834  7f1c                 jg 0x589852
// 00589836  8b06                 mov eax, dword ptr [esi]
// 00589838  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0058983c  c7401413000000       mov dword ptr [eax + 0x14], 0x13
// 00589843  8b0e                 mov ecx, dword ptr [esi]
// 00589845  895118               mov dword ptr [ecx + 0x18], edx
// 00589848  8b06                 mov eax, dword ptr [esi]
// 0058984a  8b08                 mov ecx, dword ptr [eax]
// 0058984c  56                   push esi
// 0058984d  ffd1                 call ecx
// 0058984f  83c404               add esp, 4
// 00589852  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00589856  47                   inc edi
// 00589857  3b7c2410             cmp edi, dword ptr [esp + 0x10]
// 0058985b  7ca3                 jl 0x589800
// 0058985d  80bed400000000       cmp byte ptr [esi + 0xd4], 0
// 00589864  8b7b14               mov edi, dword ptr [ebx + 0x14]
// 00589867  8b4318               mov eax, dword ptr [ebx + 0x18]
// 0058986a  8b4b1c               mov ecx, dword ptr [ebx + 0x1c]
// 0058986d  8b5320               mov edx, dword ptr [ebx + 0x20]
// 00589870  897c2420             mov dword ptr [esp + 0x20], edi
// 00589874  8944241c             mov dword ptr [esp + 0x1c], eax
// 00589878  894c2424             mov dword ptr [esp + 0x24], ecx
// 0058987c  89542428             mov dword ptr [esp + 0x28], edx
// 00589880  0f8454010000         je 0x5899da
// 00589886  83ff3f               cmp edi, 0x3f
// 00589889  7717                 ja 0x5898a2
// 0058988b  3bc7                 cmp eax, edi
// 0058988d  7c13                 jl 0x5898a2
// 0058988f  83f840               cmp eax, 0x40
// 00589892  7d0e                 jge 0x5898a2
// 00589894  83f90a               cmp ecx, 0xa
// 00589897  7709                 ja 0x5898a2
// 00589899  85d2                 test edx, edx
// 0058989b  7c05                 jl 0x5898a2
// 0058989d  83fa0a               cmp edx, 0xa
// 005898a0  7e20                 jle 0x5898c2
// 005898a2  8b16                 mov edx, dword ptr [esi]
// 005898a4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005898a8  c7421411000000       mov dword ptr [edx + 0x14], 0x11
// 005898af  8b06                 mov eax, dword ptr [esi]
// 005898b1  894818               mov dword ptr [eax + 0x18], ecx
// 005898b4  8b16                 mov edx, dword ptr [esi]
// 005898b6  8b02                 mov eax, dword ptr [edx]
// 005898b8  56                   push esi
// 005898b9  ffd0                 call eax
// 005898bb  8b442420             mov eax, dword ptr [esp + 0x20]
// 005898bf  83c404               add esp, 4
// 005898c2  85ff                 test edi, edi
// 005898c4  751f                 jne 0x5898e5
// 005898c6  85c0                 test eax, eax
// 005898c8  743e                 je 0x589908
// 005898ca  8b0e                 mov ecx, dword ptr [esi]
// 005898cc  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005898d0  c7411411000000       mov dword ptr [ecx + 0x14], 0x11
// 005898d7  8b16                 mov edx, dword ptr [esi]
// 005898d9  894218               mov dword ptr [edx + 0x18], eax
// 005898dc  8b0e                 mov ecx, dword ptr [esi]
// 005898de  8b11                 mov edx, dword ptr [ecx]
// 005898e0  56                   push esi
// 005898e1  ffd2                 call edx
// 005898e3  eb20                 jmp 0x589905
// 005898e5  837c241001           cmp dword ptr [esp + 0x10], 1
// 005898ea  741c                 je 0x589908
// 005898ec  8b06                 mov eax, dword ptr [esi]
// 005898ee  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005898f2  c7401411000000       mov dword ptr [eax + 0x14], 0x11
// 005898f9  8b0e                 mov ecx, dword ptr [esi]
// 005898fb  895118               mov dword ptr [ecx + 0x18], edx
// 005898fe  8b06                 mov eax, dword ptr [esi]
// 00589900  8b08                 mov ecx, dword ptr [eax]
// 00589902  56                   push esi
// 00589903  ffd1                 call ecx
// 00589905  83c404               add esp, 4
// 00589908  8b442410             mov eax, dword ptr [esp + 0x10]
// 0058990c  85c0                 test eax, eax
// 0058990e  0f8e46010000         jle 0x589a5a
// 00589914  83c304               add ebx, 4
// 00589917  895c2410             mov dword ptr [esp + 0x10], ebx
// 0058991b  89442418             mov dword ptr [esp + 0x18], eax
// 0058991f  eb04                 jmp 0x589925
// 00589921  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00589925  8b1b                 mov ebx, dword ptr [ebx]
// 00589927  c1e308               shl ebx, 8
// 0058992a  8d5c1c38             lea ebx, [esp + ebx + 0x38]
// 0058992e  85ff                 test edi, edi
// 00589930  7421                 je 0x589953
// 00589932  833b00               cmp dword ptr [ebx], 0
// 00589935  7d1c                 jge 0x589953
// 00589937  8b16                 mov edx, dword ptr [esi]
// 00589939  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058993d  c7421411000000       mov dword ptr [edx + 0x14], 0x11
// 00589944  8b06                 mov eax, dword ptr [esi]
// 00589946  894818               mov dword ptr [eax + 0x18], ecx
// 00589949  8b16                 mov edx, dword ptr [esi]
// 0058994b  8b02                 mov eax, dword ptr [edx]
// 0058994d  56                   push esi
// 0058994e  ffd0                 call eax
// 00589950  83c404               add esp, 4
// 00589953  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00589957  3b4c241c             cmp ecx, dword ptr [esp + 0x1c]
// 0058995b  7f65                 jg 0x5899c2
// 0058995d  8d4900               lea ecx, [ecx]
// 00589960  8b04bb               mov eax, dword ptr [ebx + edi*4]
// 00589963  85c0                 test eax, eax
// 00589965  7d22                 jge 0x589989
// 00589967  837c242400           cmp dword ptr [esp + 0x24], 0
// 0058996c  7446                 je 0x5899b4
// 0058996e  8b16                 mov edx, dword ptr [esi]
// 00589970  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00589974  c7421411000000       mov dword ptr [edx + 0x14], 0x11
// 0058997b  8b06                 mov eax, dword ptr [esi]
// 0058997d  894818               mov dword ptr [eax + 0x18], ecx
// 00589980  8b16                 mov edx, dword ptr [esi]
// 00589982  8b02                 mov eax, dword ptr [edx]
// 00589984  56                   push esi
// 00589985  ffd0                 call eax
// 00589987  eb28                 jmp 0x5899b1
// 00589989  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0058998d  3bc8                 cmp ecx, eax
// 0058998f  7507                 jne 0x589998
// 00589991  49                   dec ecx
// 00589992  394c2428             cmp dword ptr [esp + 0x28], ecx
// 00589996  741c                 je 0x5899b4
// 00589998  8b0e                 mov ecx, dword ptr [esi]
// 0058999a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0058999e  c7411411000000       mov dword ptr [ecx + 0x14], 0x11
// 005899a5  8b16                 mov edx, dword ptr [esi]
// 005899a7  894218               mov dword ptr [edx + 0x18], eax
// 005899aa  8b0e                 mov ecx, dword ptr [esi]
// 005899ac  8b11                 mov edx, dword ptr [ecx]
// 005899ae  56                   push esi
// 005899af  ffd2                 call edx
// 005899b1  83c404               add esp, 4
// 005899b4  8b442428             mov eax, dword ptr [esp + 0x28]
// 005899b8  8904bb               mov dword ptr [ebx + edi*4], eax
// 005899bb  47                   inc edi
// 005899bc  3b7c241c             cmp edi, dword ptr [esp + 0x1c]
// 005899c0  7e9e                 jle 0x589960
// 005899c2  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005899c6  83c304               add ebx, 4
// 005899c9  836c241801           sub dword ptr [esp + 0x18], 1
// 005899ce  895c2410             mov dword ptr [esp + 0x10], ebx
// 005899d2  0f8549ffffff         jne 0x589921
// 005899d8  eb7c                 jmp 0x589a56
// 005899da  85ff                 test edi, edi
// 005899dc  750d                 jne 0x5899eb
// 005899de  83f83f               cmp eax, 0x3f
// 005899e1  7508                 jne 0x5899eb
// 005899e3  85c9                 test ecx, ecx
// 005899e5  7504                 jne 0x5899eb
// 005899e7  85d2                 test edx, edx
// 005899e9  741c                 je 0x589a07
// 005899eb  8b0e                 mov ecx, dword ptr [esi]
// 005899ed  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005899f1  c7411411000000       mov dword ptr [ecx + 0x14], 0x11
// 005899f8  8b16                 mov edx, dword ptr [esi]
// 005899fa  894218               mov dword ptr [edx + 0x18], eax
// 005899fd  8b0e                 mov ecx, dword ptr [esi]
// 005899ff  8b11                 mov edx, dword ptr [ecx]
// 00589a01  56                   push esi
// 00589a02  ffd2                 call edx
// 00589a04  83c404               add esp, 4
// 00589a07  837c241000           cmp dword ptr [esp + 0x10], 0
// 00589a0c  7e4c                 jle 0x589a5a
// 00589a0e  8b442410             mov eax, dword ptr [esp + 0x10]
// 00589a12  83c304               add ebx, 4
// 00589a15  89442418             mov dword ptr [esp + 0x18], eax
// 00589a19  8da42400000000       lea esp, [esp]
// 00589a20  8b03                 mov eax, dword ptr [ebx]
// 00589a22  807c042c00           cmp byte ptr [esp + eax + 0x2c], 0
// 00589a27  8d7c042c             lea edi, [esp + eax + 0x2c]
// 00589a2b  741c                 je 0x589a49
// 00589a2d  8b0e                 mov ecx, dword ptr [esi]
// 00589a2f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00589a33  c7411413000000       mov dword ptr [ecx + 0x14], 0x13
// 00589a3a  8b16                 mov edx, dword ptr [esi]
// 00589a3c  894218               mov dword ptr [edx + 0x18], eax
// 00589a3f  8b0e                 mov ecx, dword ptr [esi]
// 00589a41  8b11                 mov edx, dword ptr [ecx]
// 00589a43  56                   push esi
// 00589a44  ffd2                 call edx
// 00589a46  83c404               add esp, 4
// 00589a49  83c304               add ebx, 4
// 00589a4c  836c241801           sub dword ptr [esp + 0x18], 1
// 00589a51  c60701               mov byte ptr [edi], 1
// 00589a54  75ca                 jne 0x589a20
// 00589a56  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00589a5a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00589a5e  40                   inc eax
// 00589a5f  83c324               add ebx, 0x24
// 00589a62  3b86a8000000         cmp eax, dword ptr [esi + 0xa8]
// 00589a68  895c2414             mov dword ptr [esp + 0x14], ebx
// 00589a6c  8944240c             mov dword ptr [esp + 0xc], eax
// 00589a70  0f8e4cfdffff         jle 0x5897c2
// 00589a76  33ff                 xor edi, edi
// 00589a78  80bed400000000       cmp byte ptr [esi + 0xd4], 0
// 00589a7f  7433                 je 0x589ab4
// 00589a81  397e3c               cmp dword ptr [esi + 0x3c], edi
// 00589a84  7e5a                 jle 0x589ae0
// 00589a86  8d5c2438             lea ebx, [esp + 0x38]
// 00589a8a  833b00               cmp dword ptr [ebx], 0
// 00589a8d  7d13                 jge 0x589aa2
// 00589a8f  8b06                 mov eax, dword ptr [esi]
// 00589a91  c740142d000000       mov dword ptr [eax + 0x14], 0x2d
// 00589a98  8b0e                 mov ecx, dword ptr [esi]
// 00589a9a  8b11                 mov edx, dword ptr [ecx]
// 00589a9c  56                   push esi
// 00589a9d  ffd2                 call edx
// 00589a9f  83c404               add esp, 4
// 00589aa2  47                   inc edi
// 00589aa3  81c300010000         add ebx, 0x100
// 00589aa9  3b7e3c               cmp edi, dword ptr [esi + 0x3c]
// 00589aac  7cdc                 jl 0x589a8a
// 00589aae  5f                   pop edi
// 00589aaf  5b                   pop ebx
// 00589ab0  8be5                 mov esp, ebp
// 00589ab2  5d                   pop ebp
// 00589ab3  c3                   ret 
// 00589ab4  837e3c00             cmp dword ptr [esi + 0x3c], 0
// 00589ab8  7e26                 jle 0x589ae0
// 00589aba  8d9b00000000         lea ebx, [ebx]
// 00589ac0  807c3c2c00           cmp byte ptr [esp + edi + 0x2c], 0
// 00589ac5  7513                 jne 0x589ada
// 00589ac7  8b06                 mov eax, dword ptr [esi]
// 00589ac9  c740142d000000       mov dword ptr [eax + 0x14], 0x2d
// 00589ad0  8b0e                 mov ecx, dword ptr [esi]
// 00589ad2  8b11                 mov edx, dword ptr [ecx]
// 00589ad4  56                   push esi
// 00589ad5  ffd2                 call edx
// 00589ad7  83c404               add esp, 4
// 00589ada  47                   inc edi
// 00589adb  3b7e3c               cmp edi, dword ptr [esi + 0x3c]
// 00589ade  7ce0                 jl 0x589ac0
// 00589ae0  5f                   pop edi
// 00589ae1  5b                   pop ebx
// 00589ae2  8be5                 mov esp, ebp
// 00589ae4  5d                   pop ebp
// 00589ae5  c3                   ret 
// library jpeg-6b/jcmaster.c (function _validate_script)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmaster.c
