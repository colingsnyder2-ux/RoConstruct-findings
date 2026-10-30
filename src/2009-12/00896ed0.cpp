// roc 2009-12 00896ed0  unit: CXTPRibbonBar  size: 445 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00896ed0
//
// 00896ed0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00896ed4  56                   push esi
// 00896ed5  8bf1                 mov esi, ecx
// 00896ed7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00896edb  50                   push eax
// 00896edc  51                   push ecx
// 00896edd  8b8e68020000         mov ecx, dword ptr [esi + 0x268]
// 00896ee3  81c184010000         add ecx, 0x184
// 00896ee9  e8a2870300           call 0x8cf690
// 00896eee  8bce                 mov ecx, esi
// 00896ef0  8bd0                 mov edx, eax
// 00896ef2  e8e9ddffff           call 0x894ce0
// 00896ef7  33c9                 xor ecx, ecx
// 00896ef9  3bd0                 cmp edx, eax
// 00896efb  8b542410             mov edx, dword ptr [esp + 0x10]
// 00896eff  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00896f03  0f94c1               sete cl
// 00896f06  52                   push edx
// 00896f07  50                   push eax
// 00896f08  898e78020000         mov dword ptr [esi + 0x278], ecx
// 00896f0e  8b8e84020000         mov ecx, dword ptr [esi + 0x284]
// 00896f14  e807370500           call 0x8ea620
// 00896f19  85c0                 test eax, eax
// 00896f1b  740b                 je 0x896f28
// 00896f1d  8b08                 mov ecx, dword ptr [eax]
// 00896f1f  e8ec700300           call 0x8ce010
// 00896f24  5e                   pop esi
// 00896f25  c20c00               ret 0xc
// 00896f28  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00896f2c  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00896f30  53                   push ebx
// 00896f31  51                   push ecx
// 00896f32  52                   push edx
// 00896f33  8bce                 mov ecx, esi
// 00896f35  e8f6e1ffff           call 0x895130
// 00896f3a  8bd8                 mov ebx, eax
// 00896f3c  85db                 test ebx, ebx
// 00896f3e  0f84d3000000         je 0x897017
// 00896f44  57                   push edi
// 00896f45  8bce                 mov ecx, esi
// 00896f47  e84401f7ff           call 0x807090
// 00896f4c  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00896f4f  8bf8                 mov edi, eax
// 00896f51  8d442414             lea eax, [esp + 0x14]
// 00896f55  50                   push eax
// 00896f56  51                   push ecx
// 00896f57  ff1554cc9800         call dword ptr [0x98cc54]
// 00896f5d  8bce                 mov ecx, esi
// 00896f5f  e86cd5f6ff           call 0x8044d0
// 00896f64  8bc8                 mov ecx, eax
// 00896f66  e875eff7ff           call 0x815ee0
// 00896f6b  8b5620               mov edx, dword ptr [esi + 0x20]
// 00896f6e  52                   push edx
// 00896f6f  ff15a4ca9800         call dword ptr [0x98caa4]
// 00896f75  8bcf                 mov ecx, edi
// 00896f77  e8f6f40800           call 0x926472
// 00896f7c  a900000001           test eax, 0x1000000
// 00896f81  7529                 jne 0x896fac
// 00896f83  83fb02               cmp ebx, 2
// 00896f86  752a                 jne 0x896fb2
// 00896f88  0fb7442418           movzx eax, word ptr [esp + 0x18]
// 00896f8d  0fb74c2414           movzx ecx, word ptr [esp + 0x14]
// 00896f92  8b5720               mov edx, dword ptr [edi + 0x20]
// 00896f95  c1e010               shl eax, 0x10
// 00896f98  0bc1                 or eax, ecx
// 00896f9a  50                   push eax
// 00896f9b  6812f00000           push 0xf012
// 00896fa0  6812010000           push 0x112
// 00896fa5  52                   push edx
// 00896fa6  ff15b8cb9800         call dword ptr [0x98cbb8]
// 00896fac  5f                   pop edi
// 00896fad  5b                   pop ebx
// 00896fae  5e                   pop esi
// 00896faf  c20c00               ret 0xc
// 00896fb2  8d43f6               lea eax, [ebx - 0xa]
// 00896fb5  83f807               cmp eax, 7
// 00896fb8  77f2                 ja 0x896fac
// 00896fba  8bcf                 mov ecx, edi
// 00896fbc  e8b1f40800           call 0x926472
// 00896fc1  a900000800           test eax, 0x80000
// 00896fc6  7426                 je 0x896fee
// 00896fc8  85ff                 test edi, edi
// 00896fca  7504                 jne 0x896fd0
// 00896fcc  33c0                 xor eax, eax
// 00896fce  eb03                 jmp 0x896fd3
// 00896fd0  8b4720               mov eax, dword ptr [edi + 0x20]
// 00896fd3  6a00                 push 0
// 00896fd5  6800f00000           push 0xf000
// 00896fda  6a00                 push 0
// 00896fdc  50                   push eax
// 00896fdd  ff15f4cb9800         call dword ptr [0x98cbf4]
// 00896fe3  50                   push eax
// 00896fe4  ff15f0c99800         call dword ptr [0x98c9f0]
// 00896fea  a803                 test al, 3
// 00896fec  75be                 jne 0x896fac
// 00896fee  0fb74c2418           movzx ecx, word ptr [esp + 0x18]
// 00896ff3  0fb7542414           movzx edx, word ptr [esp + 0x14]
// 00896ff8  c1e110               shl ecx, 0x10
// 00896ffb  0bca                 or ecx, edx
// 00896ffd  51                   push ecx
// 00896ffe  81c3f7ef0000         add ebx, 0xeff7
// 00897004  53                   push ebx
// 00897005  6812010000           push 0x112
// 0089700a  8bcf                 mov ecx, edi
// 0089700c  e8cfbcb6ff           call 0x402ce0
// 00897011  5f                   pop edi
// 00897012  5b                   pop ebx
// 00897013  5e                   pop esi
// 00897014  c20c00               ret 0xc
// 00897017  8b442414             mov eax, dword ptr [esp + 0x14]
// 0089701b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0089701f  50                   push eax
// 00897020  51                   push ecx
// 00897021  8d96dc010000         lea edx, [esi + 0x1dc]
// 00897027  52                   push edx
// 00897028  ff155cca9800         call dword ptr [0x98ca5c]
// 0089702e  85c0                 test eax, eax
// 00897030  740e                 je 0x897040
// 00897032  8bce                 mov ecx, esi
// 00897034  e897d4f6ff           call 0x8044d0
// 00897039  8bc8                 mov ecx, eax
// 0089703b  e8a0eef7ff           call 0x815ee0
// 00897040  83be7802000000       cmp dword ptr [esi + 0x278], 0
// 00897047  7529                 jne 0x897072
// 00897049  8b442414             mov eax, dword ptr [esp + 0x14]
// 0089704d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00897051  8b5620               mov edx, dword ptr [esi + 0x20]
// 00897054  6a00                 push 0
// 00897056  50                   push eax
// 00897057  51                   push ecx
// 00897058  8b8e68020000         mov ecx, dword ptr [esi + 0x268]
// 0089705e  52                   push edx
// 0089705f  81c184010000         add ecx, 0x184
// 00897065  e8b6950300           call 0x8d0620
// 0089706a  85c0                 test eax, eax
// 0089706c  0f853bffffff         jne 0x896fad
// 00897072  8b442414             mov eax, dword ptr [esp + 0x14]
// 00897076  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0089707a  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0089707e  50                   push eax
// 0089707f  51                   push ecx
// 00897080  52                   push edx
// 00897081  8bce                 mov ecx, esi
// 00897083  e848bdf7ff           call 0x812dd0
// 00897088  5b                   pop ebx
// 00897089  5e                   pop esi
// 0089708a  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnLButtonDown@CXTPRibbonBar@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonBar.cpp