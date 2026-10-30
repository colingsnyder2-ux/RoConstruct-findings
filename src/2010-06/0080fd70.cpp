// roc 2010-06 0080fd70  unit: CXTPStatusBarPane  size: 555 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0080fd70
//
// 0080fd70  6aff                 push -1
// 0080fd72  68f8429b00           push 0x9b42f8
// 0080fd77  64a100000000         mov eax, dword ptr fs:[0]
// 0080fd7d  50                   push eax
// 0080fd7e  83ec38               sub esp, 0x38
// 0080fd81  53                   push ebx
// 0080fd82  55                   push ebp
// 0080fd83  56                   push esi
// 0080fd84  57                   push edi
// 0080fd85  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0080fd8a  33c4                 xor eax, esp
// 0080fd8c  50                   push eax
// 0080fd8d  8d44244c             lea eax, [esp + 0x4c]
// 0080fd91  64a300000000         mov dword ptr fs:[0], eax
// 0080fd97  8bf1                 mov esi, ecx
// 0080fd99  85f6                 test esi, esi
// 0080fd9b  0f84df010000         je 0x80ff80
// 0080fda1  8b4620               mov eax, dword ptr [esi + 0x20]
// 0080fda4  85c0                 test eax, eax
// 0080fda6  0f84d4010000         je 0x80ff80
// 0080fdac  837c245c00           cmp dword ptr [esp + 0x5c], 0
// 0080fdb1  0f8485010000         je 0x80ff3c
// 0080fdb7  8d4c2428             lea ecx, [esp + 0x28]
// 0080fdbb  51                   push ecx
// 0080fdbc  50                   push eax
// 0080fdbd  ff153cbc9e00         call dword ptr [0x9ebc3c]
// 0080fdc3  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0080fdc7  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0080fdcb  f7d8                 neg eax
// 0080fdcd  50                   push eax
// 0080fdce  f7d9                 neg ecx
// 0080fdd0  51                   push ecx
// 0080fdd1  8d542430             lea edx, [esp + 0x30]
// 0080fdd5  52                   push edx
// 0080fdd6  ff1540bc9e00         call dword ptr [0x9ebc40]
// 0080fddc  8b06                 mov eax, dword ptr [esi]
// 0080fdde  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 0080fde4  6a01                 push 1
// 0080fde6  8d4c242c             lea ecx, [esp + 0x2c]
// 0080fdea  51                   push ecx
// 0080fdeb  8bce                 mov ecx, esi
// 0080fded  ffd2                 call edx
// 0080fdef  8b06                 mov eax, dword ptr [esi]
// 0080fdf1  8b9020010000         mov edx, dword ptr [eax + 0x120]
// 0080fdf7  8d4c241c             lea ecx, [esp + 0x1c]
// 0080fdfb  51                   push ecx
// 0080fdfc  6a00                 push 0
// 0080fdfe  6807040000           push 0x407
// 0080fe03  8bce                 mov ecx, esi
// 0080fe05  ffd2                 call edx
// 0080fe07  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 0080fe0b  2b7c2428             sub edi, dword ptr [esp + 0x28]
// 0080fe0f  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 0080fe15  037c2424             add edi, dword ptr [esp + 0x24]
// 0080fe19  33ed                 xor ebp, ebp
// 0080fe1b  33db                 xor ebx, ebx
// 0080fe1d  33d2                 xor edx, edx
// 0080fe1f  896c245c             mov dword ptr [esp + 0x5c], ebp
// 0080fe23  895c2418             mov dword ptr [esp + 0x18], ebx
// 0080fe27  85c0                 test eax, eax
// 0080fe29  7e48                 jle 0x80fe73
// 0080fe2b  eb03                 jmp 0x80fe30
// 0080fe2d  8d4900               lea ecx, [ecx]
// 0080fe30  52                   push edx
// 0080fe31  8bce                 mov ecx, esi
// 0080fe33  e898f4ffff           call 0x80f2d0
// 0080fe38  8bc8                 mov ecx, eax
// 0080fe3a  895154               mov dword ptr [ecx + 0x54], edx
// 0080fe3d  e8ae230700           call 0x8821f0
// 0080fe42  85c0                 test eax, eax
// 0080fe44  741c                 je 0x80fe62
// 0080fe46  895958               mov dword ptr [ecx + 0x58], ebx
// 0080fe49  43                   inc ebx
// 0080fe4a  f7412800000008       test dword ptr [ecx + 0x28], 0x8000000
// 0080fe51  7401                 je 0x80fe54
// 0080fe53  45                   inc ebp
// 0080fe54  b8faffffff           mov eax, 0xfffffffa
// 0080fe59  2b4124               sub eax, dword ptr [ecx + 0x24]
// 0080fe5c  2b442424             sub eax, dword ptr [esp + 0x24]
// 0080fe60  03f8                 add edi, eax
// 0080fe62  42                   inc edx
// 0080fe63  3b96a0000000         cmp edx, dword ptr [esi + 0xa0]
// 0080fe69  7cc5                 jl 0x80fe30
// 0080fe6b  896c245c             mov dword ptr [esp + 0x5c], ebp
// 0080fe6f  895c2418             mov dword ptr [esp + 0x18], ebx
// 0080fe73  8d4c2438             lea ecx, [esp + 0x38]
// 0080fe77  e844f2ffff           call 0x80f0c0
// 0080fe7c  6aff                 push -1
// 0080fe7e  53                   push ebx
// 0080fe7f  8d4c2440             lea ecx, [esp + 0x40]
// 0080fe83  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 0080fe8b  e87014fdff           call 0x7e1300
// 0080fe90  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0080fe94  33d2                 xor edx, edx
// 0080fe96  33db                 xor ebx, ebx
// 0080fe98  3996a0000000         cmp dword ptr [esi + 0xa0], edx
// 0080fe9e  89542414             mov dword ptr [esp + 0x14], edx
// 0080fea2  7e65                 jle 0x80ff09
// 0080fea4  52                   push edx
// 0080fea5  8bce                 mov ecx, esi
// 0080fea7  e824f4ffff           call 0x80f2d0
// 0080feac  8bc8                 mov ecx, eax
// 0080feae  e83d230700           call 0x8821f0
// 0080feb3  85c0                 test eax, eax
// 0080feb5  7445                 je 0x80fefc
// 0080feb7  f7412800000008       test dword ptr [ecx + 0x28], 0x8000000
// 0080febe  8b4124               mov eax, dword ptr [ecx + 0x24]
// 0080fec1  8d6c2806             lea ebp, [eax + ebp + 6]
// 0080fec5  7417                 je 0x80fede
// 0080fec7  85ff                 test edi, edi
// 0080fec9  7e13                 jle 0x80fede
// 0080fecb  8bc7                 mov eax, edi
// 0080fecd  99                   cdq 
// 0080fece  f77c245c             idiv dword ptr [esp + 0x5c]
// 0080fed2  ff4c245c             dec dword ptr [esp + 0x5c]
// 0080fed6  8b542414             mov edx, dword ptr [esp + 0x14]
// 0080feda  03e8                 add ebp, eax
// 0080fedc  2bf8                 sub edi, eax
// 0080fede  85db                 test ebx, ebx
// 0080fee0  0f8cb0000000         jl 0x80ff96
// 0080fee6  3b5c2440             cmp ebx, dword ptr [esp + 0x40]
// 0080feea  0f8da6000000         jge 0x80ff96
// 0080fef0  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0080fef4  892c99               mov dword ptr [ecx + ebx*4], ebp
// 0080fef7  43                   inc ebx
// 0080fef8  036c2424             add ebp, dword ptr [esp + 0x24]
// 0080fefc  42                   inc edx
// 0080fefd  3b96a0000000         cmp edx, dword ptr [esi + 0xa0]
// 0080ff03  89542414             mov dword ptr [esp + 0x14], edx
// 0080ff07  7c9b                 jl 0x80fea4
// 0080ff09  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0080ff0d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0080ff11  8b16                 mov edx, dword ptr [esi]
// 0080ff13  8b9220010000         mov edx, dword ptr [edx + 0x120]
// 0080ff19  50                   push eax
// 0080ff1a  51                   push ecx
// 0080ff1b  6804040000           push 0x404
// 0080ff20  8bce                 mov ecx, esi
// 0080ff22  ffd2                 call edx
// 0080ff24  8bce                 mov ecx, esi
// 0080ff26  e8e5fcffff           call 0x80fc10
// 0080ff2b  8d4c2438             lea ecx, [esp + 0x38]
// 0080ff2f  c7442454ffffffff     mov dword ptr [esp + 0x54], 0xffffffff
// 0080ff37  e8a4f1ffff           call 0x80f0e0
// 0080ff3c  837c246000           cmp dword ptr [esp + 0x60], 0
// 0080ff41  743d                 je 0x80ff80
// 0080ff43  33ff                 xor edi, edi
// 0080ff45  39bea0000000         cmp dword ptr [esi + 0xa0], edi
// 0080ff4b  7e33                 jle 0x80ff80
// 0080ff4d  8d4900               lea ecx, [ecx]
// 0080ff50  57                   push edi
// 0080ff51  8bce                 mov ecx, esi
// 0080ff53  e878f3ffff           call 0x80f2d0
// 0080ff58  8bc8                 mov ecx, eax
// 0080ff5a  e891220700           call 0x8821f0
// 0080ff5f  85c0                 test eax, eax
// 0080ff61  7414                 je 0x80ff77
// 0080ff63  f6412c01             test byte ptr [ecx + 0x2c], 1
// 0080ff67  740e                 je 0x80ff77
// 0080ff69  6a01                 push 1
// 0080ff6b  83c130               add ecx, 0x30
// 0080ff6e  51                   push ecx
// 0080ff6f  57                   push edi
// 0080ff70  8bce                 mov ecx, esi
// 0080ff72  e859f4ffff           call 0x80f3d0
// 0080ff77  47                   inc edi
// 0080ff78  3bbea0000000         cmp edi, dword ptr [esi + 0xa0]
// 0080ff7e  7cd0                 jl 0x80ff50
// 0080ff80  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0080ff84  64890d00000000       mov dword ptr fs:[0], ecx
// 0080ff8b  59                   pop ecx
// 0080ff8c  5f                   pop edi
// 0080ff8d  5e                   pop esi
// 0080ff8e  5d                   pop ebp
// 0080ff8f  5b                   pop ebx
// 0080ff90  83c444               add esp, 0x44
// 0080ff93  c20800               ret 8
// 0080ff96  e8b17cf9ff           call 0x7a7c4c
// copied from an identical function in another client (function ?UpdateAllPanes@CXTPStatusBar@@QAEXHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source/CommandBars/XTPStatusBar.cpp