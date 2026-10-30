// roc 2009-12 00884880  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 491 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00884880
//
// 00884880  6aff                 push -1
// 00884882  68500a9600           push 0x960a50
// 00884887  64a100000000         mov eax, dword ptr fs:[0]
// 0088488d  50                   push eax
// 0088488e  83ec2c               sub esp, 0x2c
// 00884891  53                   push ebx
// 00884892  55                   push ebp
// 00884893  56                   push esi
// 00884894  57                   push edi
// 00884895  a10052b600           mov eax, dword ptr [0xb65200]
// 0088489a  33c4                 xor eax, esp
// 0088489c  50                   push eax
// 0088489d  8d442440             lea eax, [esp + 0x40]
// 008848a1  64a300000000         mov dword ptr fs:[0], eax
// 008848a7  894c2414             mov dword ptr [esp + 0x14], ecx
// 008848ab  837c245400           cmp dword ptr [esp + 0x54], 0
// 008848b0  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 008848b4  0f85cd000000         jne 0x884987
// 008848ba  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 008848be  8b442460             mov eax, dword ptr [esp + 0x60]
// 008848c2  8b6c2464             mov ebp, dword ptr [esp + 0x64]
// 008848c6  2bc1                 sub eax, ecx
// 008848c8  99                   cdq 
// 008848c9  2bc2                 sub eax, edx
// 008848cb  8bf0                 mov esi, eax
// 008848cd  d1fe                 sar esi, 1
// 008848cf  83c5fa               add ebp, -6
// 008848d2  03f1                 add esi, ecx
// 008848d4  85ff                 test edi, edi
// 008848d6  7504                 jne 0x8848dc
// 008848d8  33c0                 xor eax, eax
// 008848da  eb03                 jmp 0x8848df
// 008848dc  8b4704               mov eax, dword ptr [edi + 4]
// 008848df  8b5c246c             mov ebx, dword ptr [esp + 0x6c]
// 008848e3  53                   push ebx
// 008848e4  50                   push eax
// 008848e5  8d4c2420             lea ecx, [esp + 0x20]
// 008848e9  e8126efcff           call 0x84b700
// 008848ee  8d45fc               lea eax, [ebp - 4]
// 008848f1  50                   push eax
// 008848f2  8d4e03               lea ecx, [esi + 3]
// 008848f5  51                   push ecx
// 008848f6  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008848fa  8d56fe               lea edx, [esi - 2]
// 008848fd  50                   push eax
// 008848fe  52                   push edx
// 008848ff  57                   push edi
// 00884900  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 00884908  89542464             mov dword ptr [esp + 0x64], edx
// 0088490c  e84fa2f7ff           call 0x7feb60
// 00884911  53                   push ebx
// 00884912  8d4501               lea eax, [ebp + 1]
// 00884915  50                   push eax
// 00884916  8b442458             mov eax, dword ptr [esp + 0x58]
// 0088491a  56                   push esi
// 0088491b  4d                   dec ebp
// 0088491c  55                   push ebp
// 0088491d  8d4e02               lea ecx, [esi + 2]
// 00884920  51                   push ecx
// 00884921  55                   push ebp
// 00884922  50                   push eax
// 00884923  57                   push edi
// 00884924  e8679df7ff           call 0x7fe690
// 00884929  83c420               add esp, 0x20
// 0088492c  837c246800           cmp dword ptr [esp + 0x68], 0
// 00884931  744b                 je 0x88497e
// 00884933  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 00884937  8b742458             mov esi, dword ptr [esp + 0x58]
// 0088493b  53                   push ebx
// 0088493c  8d5007               lea edx, [eax + 7]
// 0088493f  52                   push edx
// 00884940  8d4e03               lea ecx, [esi + 3]
// 00884943  51                   push ecx
// 00884944  8d6806               lea ebp, [eax + 6]
// 00884947  55                   push ebp
// 00884948  83c604               add esi, 4
// 0088494b  56                   push esi
// 0088494c  83c005               add eax, 5
// 0088494f  50                   push eax
// 00884950  51                   push ecx
// 00884951  57                   push edi
// 00884952  e8399df7ff           call 0x7fe690
// 00884957  8b44247c             mov eax, dword ptr [esp + 0x7c]
// 0088495b  8b742478             mov esi, dword ptr [esp + 0x78]
// 0088495f  53                   push ebx
// 00884960  8d5007               lea edx, [eax + 7]
// 00884963  52                   push edx
// 00884964  8d4e07               lea ecx, [esi + 7]
// 00884967  51                   push ecx
// 00884968  8d6806               lea ebp, [eax + 6]
// 0088496b  55                   push ebp
// 0088496c  83c608               add esi, 8
// 0088496f  56                   push esi
// 00884970  83c005               add eax, 5
// 00884973  50                   push eax
// 00884974  51                   push ecx
// 00884975  57                   push edi
// 00884976  e8159df7ff           call 0x7fe690
// 0088497b  83c440               add esp, 0x40
// 0088497e  8d4c2418             lea ecx, [esp + 0x18]
// 00884982  e9c1000000           jmp 0x884a48
// 00884987  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 0088498b  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 0088498f  8b6c2460             mov ebp, dword ptr [esp + 0x60]
// 00884993  8d040a               lea eax, [edx + ecx]
// 00884996  99                   cdq 
// 00884997  2bc2                 sub eax, edx
// 00884999  8bf0                 mov esi, eax
// 0088499b  d1fe                 sar esi, 1
// 0088499d  83c5fb               add ebp, -5
// 008849a0  85ff                 test edi, edi
// 008849a2  7504                 jne 0x8849a8
// 008849a4  33c0                 xor eax, eax
// 008849a6  eb03                 jmp 0x8849ab
// 008849a8  8b4704               mov eax, dword ptr [edi + 4]
// 008849ab  8b5c246c             mov ebx, dword ptr [esp + 0x6c]
// 008849af  53                   push ebx
// 008849b0  50                   push eax
// 008849b1  8d4c2434             lea ecx, [esp + 0x34]
// 008849b5  e8466dfcff           call 0x84b700
// 008849ba  8d4e03               lea ecx, [esi + 3]
// 008849bd  51                   push ecx
// 008849be  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008849c2  8d45fb               lea eax, [ebp - 5]
// 008849c5  50                   push eax
// 008849c6  8d56fe               lea edx, [esi - 2]
// 008849c9  52                   push edx
// 008849ca  50                   push eax
// 008849cb  57                   push edi
// 008849cc  c744245c01000000     mov dword ptr [esp + 0x5c], 1
// 008849d4  e887a1f7ff           call 0x7feb60
// 008849d9  53                   push ebx
// 008849da  8d4e02               lea ecx, [esi + 2]
// 008849dd  51                   push ecx
// 008849de  8d45fe               lea eax, [ebp - 2]
// 008849e1  50                   push eax
// 008849e2  8d4efe               lea ecx, [esi - 2]
// 008849e5  51                   push ecx
// 008849e6  50                   push eax
// 008849e7  56                   push esi
// 008849e8  55                   push ebp
// 008849e9  57                   push edi
// 008849ea  e8a19cf7ff           call 0x7fe690
// 008849ef  83c420               add esp, 0x20
// 008849f2  837c246800           cmp dword ptr [esp + 0x68], 0
// 008849f7  744b                 je 0x884a44
// 008849f9  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 008849fd  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00884a01  53                   push ebx
// 00884a02  8d4203               lea eax, [edx + 3]
// 00884a05  50                   push eax
// 00884a06  8d7107               lea esi, [ecx + 7]
// 00884a09  56                   push esi
// 00884a0a  83c204               add edx, 4
// 00884a0d  52                   push edx
// 00884a0e  8d6906               lea ebp, [ecx + 6]
// 00884a11  55                   push ebp
// 00884a12  50                   push eax
// 00884a13  83c105               add ecx, 5
// 00884a16  51                   push ecx
// 00884a17  57                   push edi
// 00884a18  e8739cf7ff           call 0x7fe690
// 00884a1d  8b54247c             mov edx, dword ptr [esp + 0x7c]
// 00884a21  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 00884a25  53                   push ebx
// 00884a26  8d4207               lea eax, [edx + 7]
// 00884a29  50                   push eax
// 00884a2a  8d7107               lea esi, [ecx + 7]
// 00884a2d  56                   push esi
// 00884a2e  83c208               add edx, 8
// 00884a31  52                   push edx
// 00884a32  8d6906               lea ebp, [ecx + 6]
// 00884a35  55                   push ebp
// 00884a36  50                   push eax
// 00884a37  83c105               add ecx, 5
// 00884a3a  51                   push ecx
// 00884a3b  57                   push edi
// 00884a3c  e84f9cf7ff           call 0x7fe690
// 00884a41  83c440               add esp, 0x40
// 00884a44  8d4c242c             lea ecx, [esp + 0x2c]
// 00884a48  c7442448ffffffff     mov dword ptr [esp + 0x48], 0xffffffff
// 00884a50  e83b6dfcff           call 0x84b790
// 00884a55  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00884a59  64890d00000000       mov dword ptr fs:[0], ecx
// 00884a60  59                   pop ecx
// 00884a61  5f                   pop edi
// 00884a62  5e                   pop esi
// 00884a63  5d                   pop ebp
// 00884a64  5b                   pop ebx
// 00884a65  83c438               add esp, 0x38
// 00884a68  c22000               ret 0x20
// copied from an identical function in another client (function ?DrawExpandSymbols@CXTPOffice2003Theme@XTPPaintThemes@@IAEXPAVCDC@@HVCRect@@HK@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPOffice2003Theme.cpp