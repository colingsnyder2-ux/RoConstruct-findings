// roc 2010-06 007bad50  unit: CXTPCommandBar  size: 440 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007bad50
//
// 007bad50  6aff                 push -1
// 007bad52  68d2f49a00           push 0x9af4d2
// 007bad57  64a100000000         mov eax, dword ptr fs:[0]
// 007bad5d  50                   push eax
// 007bad5e  83ec08               sub esp, 8
// 007bad61  53                   push ebx
// 007bad62  55                   push ebp
// 007bad63  56                   push esi
// 007bad64  57                   push edi
// 007bad65  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 007bad6a  33c4                 xor eax, esp
// 007bad6c  50                   push eax
// 007bad6d  8d44241c             lea eax, [esp + 0x1c]
// 007bad71  64a300000000         mov dword ptr fs:[0], eax
// 007bad77  894c2418             mov dword ptr [esp + 0x18], ecx
// 007bad7b  e850d8ffff           call 0x7b85d0
// 007bad80  8bf8                 mov edi, eax
// 007bad82  85ff                 test edi, edi
// 007bad84  7475                 je 0x7badfb
// 007bad86  33f6                 xor esi, esi
// 007bad88  397734               cmp dword ptr [edi + 0x34], esi
// 007bad8b  7e58                 jle 0x7bade5
// 007bad8d  85f6                 test esi, esi
// 007bad8f  0f8c50010000         jl 0x7baee5
// 007bad95  3b7734               cmp esi, dword ptr [edi + 0x34]
// 007bad98  0f8d47010000         jge 0x7baee5
// 007bad9e  8b4730               mov eax, dword ptr [edi + 0x30]
// 007bada1  8b1cb0               mov ebx, dword ptr [eax + esi*4]
// 007bada4  8b4f48               mov ecx, dword ptr [edi + 0x48]
// 007bada7  8d04b0               lea eax, [eax + esi*4]
// 007badaa  8d6b54               lea ebp, [ebx + 0x54]
// 007badad  894c2414             mov dword ptr [esp + 0x14], ecx
// 007badb1  8bcd                 mov ecx, ebp
// 007badb3  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 007badb9  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007badbd  3bc1                 cmp eax, ecx
// 007badbf  7e1e                 jle 0x7baddf
// 007badc1  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 007badc5  52                   push edx
// 007badc6  51                   push ecx
// 007badc7  8bcd                 mov ecx, ebp
// 007badc9  ff1558c59e00         call dword ptr [0x9ec558]
// 007badcf  0fb6c0               movzx eax, al
// 007badd2  50                   push eax
// 007badd3  e878810800           call 0x842f50
// 007badd8  83c408               add esp, 8
// 007baddb  85c0                 test eax, eax
// 007baddd  7532                 jne 0x7bae11
// 007baddf  46                   inc esi
// 007bade0  3b7734               cmp esi, dword ptr [edi + 0x34]
// 007bade3  7ca8                 jl 0x7bad8d
// 007bade5  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007bade9  83f810               cmp eax, 0x10
// 007badec  740d                 je 0x7badfb
// 007badee  83f811               cmp eax, 0x11
// 007badf1  7408                 je 0x7badfb
// 007badf3  6a00                 push 0
// 007badf5  ff15c4bb9e00         call dword ptr [0x9ebbc4]
// 007badfb  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007badff  64890d00000000       mov dword ptr fs:[0], ecx
// 007bae06  59                   pop ecx
// 007bae07  5f                   pop edi
// 007bae08  5e                   pop esi
// 007bae09  5d                   pop ebp
// 007bae0a  5b                   pop ebx
// 007bae0b  83c414               add esp, 0x14
// 007bae0e  c20400               ret 4
// 007bae11  8b6f48               mov ebp, dword ptr [edi + 0x48]
// 007bae14  8d7354               lea esi, [ebx + 0x54]
// 007bae17  8bce                 mov ecx, esi
// 007bae19  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 007bae1f  48                   dec eax
// 007bae20  3bc5                 cmp eax, ebp
// 007bae22  0f8ec2000000         jle 0x7baeea
// 007bae28  8d4501               lea eax, [ebp + 1]
// 007bae2b  50                   push eax
// 007bae2c  8d4c2430             lea ecx, [esp + 0x30]
// 007bae30  51                   push ecx
// 007bae31  8bce                 mov ecx, esi
// 007bae33  894748               mov dword ptr [edi + 0x48], eax
// 007bae36  ff15a4bf9e00         call dword ptr [0x9ebfa4]
// 007bae3c  8b6f34               mov ebp, dword ptr [edi + 0x34]
// 007bae3f  83c5ff               add ebp, -1
// 007bae42  c744242400000000     mov dword ptr [esp + 0x24], 0
// 007bae4a  0f8886000000         js 0x7baed6
// 007bae50  85ed                 test ebp, ebp
// 007bae52  0f8c8d000000         jl 0x7baee5
// 007bae58  3b6f34               cmp ebp, dword ptr [edi + 0x34]
// 007bae5b  0f8d84000000         jge 0x7baee5
// 007bae61  8b5730               mov edx, dword ptr [edi + 0x30]
// 007bae64  8b34aa               mov esi, dword ptr [edx + ebp*4]
// 007bae67  8d04aa               lea eax, [edx + ebp*4]
// 007bae6a  8b4748               mov eax, dword ptr [edi + 0x48]
// 007bae6d  50                   push eax
// 007bae6e  8d4c2418             lea ecx, [esp + 0x18]
// 007bae72  51                   push ecx
// 007bae73  8d4e54               lea ecx, [esi + 0x54]
// 007bae76  ff15a4bf9e00         call dword ptr [0x9ebfa4]
// 007bae7c  8bd8                 mov ebx, eax
// 007bae7e  8d4c242c             lea ecx, [esp + 0x2c]
// 007bae82  c644242401           mov byte ptr [esp + 0x24], 1
// 007bae87  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 007bae8d  50                   push eax
// 007bae8e  8bcb                 mov ecx, ebx
// 007bae90  ff15b4ce9e00         call dword ptr [0x9eceb4]
// 007bae96  85c0                 test eax, eax
// 007bae98  8d4c2414             lea ecx, [esp + 0x14]
// 007bae9c  0f95c3               setne bl
// 007bae9f  c644242400           mov byte ptr [esp + 0x24], 0
// 007baea4  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007baeaa  84db                 test bl, bl
// 007baeac  741f                 je 0x7baecd
// 007baeae  6a01                 push 1
// 007baeb0  55                   push ebp
// 007baeb1  8d4f2c               lea ecx, [edi + 0x2c]
// 007baeb4  e887dbffff           call 0x7b8a40
// 007baeb9  8b16                 mov edx, dword ptr [esi]
// 007baebb  8b4268               mov eax, dword ptr [edx + 0x68]
// 007baebe  8bce                 mov ecx, esi
// 007baec0  ffd0                 call eax
// 007baec2  8b16                 mov edx, dword ptr [esi]
// 007baec4  8b4204               mov eax, dword ptr [edx + 4]
// 007baec7  6a01                 push 1
// 007baec9  8bce                 mov ecx, esi
// 007baecb  ffd0                 call eax
// 007baecd  83ed01               sub ebp, 1
// 007baed0  0f897affffff         jns 0x7bae50
// 007baed6  8d4c242c             lea ecx, [esp + 0x2c]
// 007baeda  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007baee0  e916ffffff           jmp 0x7badfb
// 007baee5  e862cdfeff           call 0x7a7c4c
// 007baeea  837b6c00             cmp dword ptr [ebx + 0x6c], 0
// 007baeee  0f84fffeffff         je 0x7badf3
// 007baef4  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007baef8  8b11                 mov edx, dword ptr [ecx]
// 007baefa  8b82c8010000         mov eax, dword ptr [edx + 0x1c8]
// 007baf00  53                   push ebx
// 007baf01  ffd0                 call eax
// 007baf03  e9f3feffff           jmp 0x7badfb
// copied from an identical function in another client (function ?OnKeyboardTipChar@CXTPCommandBar@@QAEXI@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPCommandBar.cpp