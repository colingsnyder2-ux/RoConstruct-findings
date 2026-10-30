// roc 2009-06 00780d40  unit: CXTPStatusBarPane  size: 555 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00780d40
//
// 00780d40  6aff                 push -1
// 00780d42  6838a18700           push 0x87a138
// 00780d47  64a100000000         mov eax, dword ptr fs:[0]
// 00780d4d  50                   push eax
// 00780d4e  83ec38               sub esp, 0x38
// 00780d51  53                   push ebx
// 00780d52  55                   push ebp
// 00780d53  56                   push esi
// 00780d54  57                   push edi
// 00780d55  a1304fa200           mov eax, dword ptr [0xa24f30]
// 00780d5a  33c4                 xor eax, esp
// 00780d5c  50                   push eax
// 00780d5d  8d44244c             lea eax, [esp + 0x4c]
// 00780d61  64a300000000         mov dword ptr fs:[0], eax
// 00780d67  8bf1                 mov esi, ecx
// 00780d69  85f6                 test esi, esi
// 00780d6b  0f84df010000         je 0x780f50
// 00780d71  8b4620               mov eax, dword ptr [esi + 0x20]
// 00780d74  85c0                 test eax, eax
// 00780d76  0f84d4010000         je 0x780f50
// 00780d7c  837c245c00           cmp dword ptr [esp + 0x5c], 0
// 00780d81  0f8485010000         je 0x780f0c
// 00780d87  8d4c2428             lea ecx, [esp + 0x28]
// 00780d8b  51                   push ecx
// 00780d8c  50                   push eax
// 00780d8d  ff15f4ed8900         call dword ptr [0x89edf4]
// 00780d93  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00780d97  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00780d9b  f7d8                 neg eax
// 00780d9d  50                   push eax
// 00780d9e  f7d9                 neg ecx
// 00780da0  51                   push ecx
// 00780da1  8d542430             lea edx, [esp + 0x30]
// 00780da5  52                   push edx
// 00780da6  ff15f8ed8900         call dword ptr [0x89edf8]
// 00780dac  8b06                 mov eax, dword ptr [esi]
// 00780dae  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 00780db4  6a01                 push 1
// 00780db6  8d4c242c             lea ecx, [esp + 0x2c]
// 00780dba  51                   push ecx
// 00780dbb  8bce                 mov ecx, esi
// 00780dbd  ffd2                 call edx
// 00780dbf  8b06                 mov eax, dword ptr [esi]
// 00780dc1  8b9020010000         mov edx, dword ptr [eax + 0x120]
// 00780dc7  8d4c241c             lea ecx, [esp + 0x1c]
// 00780dcb  51                   push ecx
// 00780dcc  6a00                 push 0
// 00780dce  6807040000           push 0x407
// 00780dd3  8bce                 mov ecx, esi
// 00780dd5  ffd2                 call edx
// 00780dd7  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 00780ddb  2b7c2428             sub edi, dword ptr [esp + 0x28]
// 00780ddf  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 00780de5  037c2424             add edi, dword ptr [esp + 0x24]
// 00780de9  33ed                 xor ebp, ebp
// 00780deb  33db                 xor ebx, ebx
// 00780ded  33d2                 xor edx, edx
// 00780def  896c245c             mov dword ptr [esp + 0x5c], ebp
// 00780df3  895c2418             mov dword ptr [esp + 0x18], ebx
// 00780df7  85c0                 test eax, eax
// 00780df9  7e48                 jle 0x780e43
// 00780dfb  eb03                 jmp 0x780e00
// 00780dfd  8d4900               lea ecx, [ecx]
// 00780e00  52                   push edx
// 00780e01  8bce                 mov ecx, esi
// 00780e03  e898f4ffff           call 0x7802a0
// 00780e08  8bc8                 mov ecx, eax
// 00780e0a  895154               mov dword ptr [ecx + 0x54], edx
// 00780e0d  e82e53f2ff           call 0x6a6140
// 00780e12  85c0                 test eax, eax
// 00780e14  741c                 je 0x780e32
// 00780e16  895958               mov dword ptr [ecx + 0x58], ebx
// 00780e19  43                   inc ebx
// 00780e1a  f7412800000008       test dword ptr [ecx + 0x28], 0x8000000
// 00780e21  7401                 je 0x780e24
// 00780e23  45                   inc ebp
// 00780e24  b8faffffff           mov eax, 0xfffffffa
// 00780e29  2b4124               sub eax, dword ptr [ecx + 0x24]
// 00780e2c  2b442424             sub eax, dword ptr [esp + 0x24]
// 00780e30  03f8                 add edi, eax
// 00780e32  42                   inc edx
// 00780e33  3b96a0000000         cmp edx, dword ptr [esi + 0xa0]
// 00780e39  7cc5                 jl 0x780e00
// 00780e3b  896c245c             mov dword ptr [esp + 0x5c], ebp
// 00780e3f  895c2418             mov dword ptr [esp + 0x18], ebx
// 00780e43  8d4c2438             lea ecx, [esp + 0x38]
// 00780e47  e844f2ffff           call 0x780090
// 00780e4c  6aff                 push -1
// 00780e4e  53                   push ebx
// 00780e4f  8d4c2440             lea ecx, [esp + 0x40]
// 00780e53  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 00780e5b  e8b016fdff           call 0x752510
// 00780e60  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00780e64  33d2                 xor edx, edx
// 00780e66  33db                 xor ebx, ebx
// 00780e68  3996a0000000         cmp dword ptr [esi + 0xa0], edx
// 00780e6e  89542414             mov dword ptr [esp + 0x14], edx
// 00780e72  7e65                 jle 0x780ed9
// 00780e74  52                   push edx
// 00780e75  8bce                 mov ecx, esi
// 00780e77  e824f4ffff           call 0x7802a0
// 00780e7c  8bc8                 mov ecx, eax
// 00780e7e  e8bd52f2ff           call 0x6a6140
// 00780e83  85c0                 test eax, eax
// 00780e85  7445                 je 0x780ecc
// 00780e87  f7412800000008       test dword ptr [ecx + 0x28], 0x8000000
// 00780e8e  8b4124               mov eax, dword ptr [ecx + 0x24]
// 00780e91  8d6c2806             lea ebp, [eax + ebp + 6]
// 00780e95  7417                 je 0x780eae
// 00780e97  85ff                 test edi, edi
// 00780e99  7e13                 jle 0x780eae
// 00780e9b  8bc7                 mov eax, edi
// 00780e9d  99                   cdq 
// 00780e9e  f77c245c             idiv dword ptr [esp + 0x5c]
// 00780ea2  ff4c245c             dec dword ptr [esp + 0x5c]
// 00780ea6  8b542414             mov edx, dword ptr [esp + 0x14]
// 00780eaa  03e8                 add ebp, eax
// 00780eac  2bf8                 sub edi, eax
// 00780eae  85db                 test ebx, ebx
// 00780eb0  0f8cb0000000         jl 0x780f66
// 00780eb6  3b5c2440             cmp ebx, dword ptr [esp + 0x40]
// 00780eba  0f8da6000000         jge 0x780f66
// 00780ec0  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00780ec4  892c99               mov dword ptr [ecx + ebx*4], ebp
// 00780ec7  43                   inc ebx
// 00780ec8  036c2424             add ebp, dword ptr [esp + 0x24]
// 00780ecc  42                   inc edx
// 00780ecd  3b96a0000000         cmp edx, dword ptr [esi + 0xa0]
// 00780ed3  89542414             mov dword ptr [esp + 0x14], edx
// 00780ed7  7c9b                 jl 0x780e74
// 00780ed9  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00780edd  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00780ee1  8b16                 mov edx, dword ptr [esi]
// 00780ee3  8b9220010000         mov edx, dword ptr [edx + 0x120]
// 00780ee9  50                   push eax
// 00780eea  51                   push ecx
// 00780eeb  6804040000           push 0x404
// 00780ef0  8bce                 mov ecx, esi
// 00780ef2  ffd2                 call edx
// 00780ef4  8bce                 mov ecx, esi
// 00780ef6  e8e5fcffff           call 0x780be0
// 00780efb  8d4c2438             lea ecx, [esp + 0x38]
// 00780eff  c7442454ffffffff     mov dword ptr [esp + 0x54], 0xffffffff
// 00780f07  e8a4f1ffff           call 0x7800b0
// 00780f0c  837c246000           cmp dword ptr [esp + 0x60], 0
// 00780f11  743d                 je 0x780f50
// 00780f13  33ff                 xor edi, edi
// 00780f15  39bea0000000         cmp dword ptr [esi + 0xa0], edi
// 00780f1b  7e33                 jle 0x780f50
// 00780f1d  8d4900               lea ecx, [ecx]
// 00780f20  57                   push edi
// 00780f21  8bce                 mov ecx, esi
// 00780f23  e878f3ffff           call 0x7802a0
// 00780f28  8bc8                 mov ecx, eax
// 00780f2a  e81152f2ff           call 0x6a6140
// 00780f2f  85c0                 test eax, eax
// 00780f31  7414                 je 0x780f47
// 00780f33  f6412c01             test byte ptr [ecx + 0x2c], 1
// 00780f37  740e                 je 0x780f47
// 00780f39  6a01                 push 1
// 00780f3b  83c130               add ecx, 0x30
// 00780f3e  51                   push ecx
// 00780f3f  57                   push edi
// 00780f40  8bce                 mov ecx, esi
// 00780f42  e859f4ffff           call 0x7803a0
// 00780f47  47                   inc edi
// 00780f48  3bbea0000000         cmp edi, dword ptr [esi + 0xa0]
// 00780f4e  7cd0                 jl 0x780f20
// 00780f50  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00780f54  64890d00000000       mov dword ptr fs:[0], ecx
// 00780f5b  59                   pop ecx
// 00780f5c  5f                   pop edi
// 00780f5d  5e                   pop esi
// 00780f5e  5d                   pop ebp
// 00780f5f  5b                   pop ebx
// 00780f60  83c444               add esp, 0x44
// 00780f63  c20800               ret 8
// 00780f66  e8797df9ff           call 0x718ce4
// copied from an identical function in another client (function ?UpdateAllPanes@CXTPStatusBar@@QAEXHH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPStatusBar.cpp