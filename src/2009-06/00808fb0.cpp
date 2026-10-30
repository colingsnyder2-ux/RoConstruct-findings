// roc 2009-06 00808fb0  unit: CXTShadowHook  size: 461 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00808fb0
//
// 00808fb0  6aff                 push -1
// 00808fb2  68d91c8800           push 0x881cd9
// 00808fb7  64a100000000         mov eax, dword ptr fs:[0]
// 00808fbd  50                   push eax
// 00808fbe  83ec24               sub esp, 0x24
// 00808fc1  53                   push ebx
// 00808fc2  56                   push esi
// 00808fc3  57                   push edi
// 00808fc4  a1304fa200           mov eax, dword ptr [0xa24f30]
// 00808fc9  33c4                 xor eax, esp
// 00808fcb  50                   push eax
// 00808fcc  8d442434             lea eax, [esp + 0x34]
// 00808fd0  64a300000000         mov dword ptr fs:[0], eax
// 00808fd6  8bf1                 mov esi, ecx
// 00808fd8  e813feffff           call 0x808df0
// 00808fdd  8bc8                 mov ecx, eax
// 00808fdf  e88cf4ffff           call 0x808470
// 00808fe4  894660               mov dword ptr [esi + 0x60], eax
// 00808fe7  e804feffff           call 0x808df0
// 00808fec  8bc8                 mov ecx, eax
// 00808fee  e88df4ffff           call 0x808480
// 00808ff3  837e2000             cmp dword ptr [esi + 0x20], 0
// 00808ff7  894664               mov dword ptr [esi + 0x64], eax
// 00808ffa  0f85b7000000         jne 0x8090b7
// 00809000  33ff                 xor edi, edi
// 00809002  397e60               cmp dword ptr [esi + 0x60], edi
// 00809005  7405                 je 0x80900c
// 00809007  bf00000800           mov edi, 0x80000
// 0080900c  e8e5fcf0ff           call 0x718cf6
// 00809011  68007f0000           push 0x7f00
// 00809016  6a00                 push 0
// 00809018  ff15b0ed8900         call dword ptr [0x89edb0]
// 0080901e  6a00                 push 0
// 00809020  6a00                 push 0
// 00809022  50                   push eax
// 00809023  6a00                 push 0
// 00809025  e8d403f1ff           call 0x7193fe
// 0080902a  50                   push eax
// 0080902b  8d4c2414             lea ecx, [esp + 0x14]
// 0080902f  ff1508fd8900         call dword ptr [0x89fd08]
// 00809035  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 0080903d  e8ac01f1ff           call 0x7191ee
// 00809042  85c0                 test eax, eax
// 00809044  740b                 je 0x809051
// 00809046  8b10                 mov edx, dword ptr [eax]
// 00809048  8bc8                 mov ecx, eax
// 0080904a  8b427c               mov eax, dword ptr [edx + 0x7c]
// 0080904d  ffd0                 call eax
// 0080904f  eb02                 jmp 0x809053
// 00809051  33c0                 xor eax, eax
// 00809053  8b1e                 mov ebx, dword ptr [esi]
// 00809055  6a00                 push 0
// 00809057  6a00                 push 0
// 00809059  50                   push eax
// 0080905a  8d4c2430             lea ecx, [esp + 0x30]
// 0080905e  e8cd73f6ff           call 0x770430
// 00809063  50                   push eax
// 00809064  6800000080           push 0x80000000
// 00809069  6a00                 push 0
// 0080906b  8d4c2428             lea ecx, [esp + 0x28]
// 0080906f  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00809075  8b5360               mov edx, dword ptr [ebx + 0x60]
// 00809078  50                   push eax
// 00809079  81cf80000000         or edi, 0x80
// 0080907f  57                   push edi
// 00809080  8bce                 mov ecx, esi
// 00809082  ffd2                 call edx
// 00809084  8d4c2410             lea ecx, [esp + 0x10]
// 00809088  85c0                 test eax, eax
// 0080908a  751d                 jne 0x8090a9
// 0080908c  ff1510fd8900         call dword ptr [0x89fd10]
// 00809092  33c0                 xor eax, eax
// 00809094  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00809098  64890d00000000       mov dword ptr fs:[0], ecx
// 0080909f  59                   pop ecx
// 008090a0  5f                   pop edi
// 008090a1  5e                   pop esi
// 008090a2  5b                   pop ebx
// 008090a3  83c430               add esp, 0x30
// 008090a6  c21400               ret 0x14
// 008090a9  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 008090b1  ff1510fd8900         call dword ptr [0x89fd10]
// 008090b7  8b4620               mov eax, dword ptr [esi + 0x20]
// 008090ba  6a00                 push 0
// 008090bc  6a00                 push 0
// 008090be  50                   push eax
// 008090bf  ff1584ec8900         call dword ptr [0x89ec84]
// 008090c5  837e6000             cmp dword ptr [esi + 0x60], 0
// 008090c9  750b                 jne 0x8090d6
// 008090cb  837e6400             cmp dword ptr [esi + 0x64], 0
// 008090cf  b802000000           mov eax, 2
// 008090d4  7405                 je 0x8090db
// 008090d6  b804000000           mov eax, 4
// 008090db  8b7c2444             mov edi, dword ptr [esp + 0x44]
// 008090df  8d4c2448             lea ecx, [esp + 0x48]
// 008090e3  51                   push ecx
// 008090e4  894654               mov dword ptr [esi + 0x54], eax
// 008090e7  897e5c               mov dword ptr [esi + 0x5c], edi
// 008090ea  ff15fced8900         call dword ptr [0x89edfc]
// 008090f0  85c0                 test eax, eax
// 008090f2  740d                 je 0x809101
// 008090f4  8d542414             lea edx, [esp + 0x14]
// 008090f8  52                   push edx
// 008090f9  ff15c8ee8900         call dword ptr [0x89eec8]
// 008090ff  eb41                 jmp 0x809142
// 00809101  8b4654               mov eax, dword ptr [esi + 0x54]
// 00809104  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00809108  85ff                 test edi, edi
// 0080910a  741a                 je 0x809126
// 0080910c  8d1408               lea edx, [eax + ecx]
// 0080910f  52                   push edx
// 00809110  8b542454             mov edx, dword ptr [esp + 0x54]
// 00809114  03d0                 add edx, eax
// 00809116  52                   push edx
// 00809117  51                   push ecx
// 00809118  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0080911c  03c1                 add eax, ecx
// 0080911e  50                   push eax
// 0080911f  8d542424             lea edx, [esp + 0x24]
// 00809123  52                   push edx
// 00809124  eb16                 jmp 0x80913c
// 00809126  51                   push ecx
// 00809127  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0080912b  8d1408               lea edx, [eax + ecx]
// 0080912e  52                   push edx
// 0080912f  8b542454             mov edx, dword ptr [esp + 0x54]
// 00809133  03c2                 add eax, edx
// 00809135  50                   push eax
// 00809136  51                   push ecx
// 00809137  8d442424             lea eax, [esp + 0x24]
// 0080913b  50                   push eax
// 0080913c  ff15a4ed8900         call dword ptr [0x89eda4]
// 00809142  8b442418             mov eax, dword ptr [esp + 0x18]
// 00809146  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0080914a  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0080914e  6a00                 push 0
// 00809150  2bc8                 sub ecx, eax
// 00809152  51                   push ecx
// 00809153  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00809157  2bd1                 sub edx, ecx
// 00809159  52                   push edx
// 0080915a  50                   push eax
// 0080915b  51                   push ecx
// 0080915c  8bce                 mov ecx, esi
// 0080915e  e8a7fcf0ff           call 0x718e0a
// 00809163  b801000000           mov eax, 1
// 00809168  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0080916c  64890d00000000       mov dword ptr fs:[0], ecx
// 00809173  59                   pop ecx
// 00809174  5f                   pop edi
// 00809175  5e                   pop esi
// 00809176  5b                   pop ebx
// 00809177  83c430               add esp, 0x30
// 0080917a  c21400               ret 0x14
// copied from an identical function in another client (function ?Create@CXTShadowWnd@@IAEHHVCRect@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTWndShadow.cpp