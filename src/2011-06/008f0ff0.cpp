// roc 2011-06 008f0ff0  unit: PAVCXTShadowWnd::?$CList  size: 505 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f0ff0
//
// 008f0ff0  6aff                 push -1
// 008f0ff2  68a4e9a000           push 0xa0e9a4
// 008f0ff7  64a100000000         mov eax, dword ptr fs:[0]
// 008f0ffd  50                   push eax
// 008f0ffe  51                   push ecx
// 008f0fff  53                   push ebx
// 008f1000  55                   push ebp
// 008f1001  56                   push esi
// 008f1002  57                   push edi
// 008f1003  a12058c900           mov eax, dword ptr [0xc95820]
// 008f1008  33c4                 xor eax, esp
// 008f100a  50                   push eax
// 008f100b  8d442418             lea eax, [esp + 0x18]
// 008f100f  64a300000000         mov dword ptr fs:[0], eax
// 008f1015  8be9                 mov ebp, ecx
// 008f1017  837d2800             cmp dword ptr [ebp + 0x28], 0
// 008f101b  753a                 jne 0x8f1057
// 008f101d  6884000000           push 0x84
// 008f1022  e83790f1ff           call 0x80a05e
// 008f1027  83c404               add esp, 4
// 008f102a  89442414             mov dword ptr [esp + 0x14], eax
// 008f102e  c744242000000000     mov dword ptr [esp + 0x20], 0
// 008f1036  85c0                 test eax, eax
// 008f1038  7411                 je 0x8f104b
// 008f103a  8bc8                 mov ecx, eax
// 008f103c  e84fedffff           call 0x8efd90
// 008f1041  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 008f1049  eb14                 jmp 0x8f105f
// 008f104b  33c0                 xor eax, eax
// 008f104d  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 008f1055  eb08                 jmp 0x8f105f
// 008f1057  8d4d1c               lea ecx, [ebp + 0x1c]
// 008f105a  e8e1f2ffff           call 0x8f0340
// 008f105f  8b5c244c             mov ebx, dword ptr [esp + 0x4c]
// 008f1063  8bf0                 mov esi, eax
// 008f1065  895e68               mov dword ptr [esi + 0x68], ebx
// 008f1068  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008f106c  89466c               mov dword ptr [esi + 0x6c], eax
// 008f106f  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008f1073  894e70               mov dword ptr [esi + 0x70], ecx
// 008f1076  8b542444             mov edx, dword ptr [esp + 0x44]
// 008f107a  895674               mov dword ptr [esi + 0x74], edx
// 008f107d  8b442448             mov eax, dword ptr [esp + 0x48]
// 008f1081  894678               mov dword ptr [esi + 0x78], eax
// 008f1084  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008f1088  8b542430             mov edx, dword ptr [esp + 0x30]
// 008f108c  83ec10               sub esp, 0x10
// 008f108f  8bc4                 mov eax, esp
// 008f1091  8908                 mov dword ptr [eax], ecx
// 008f1093  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008f1097  895004               mov dword ptr [eax + 4], edx
// 008f109a  8b542448             mov edx, dword ptr [esp + 0x48]
// 008f109e  894808               mov dword ptr [eax + 8], ecx
// 008f10a1  89500c               mov dword ptr [eax + 0xc], edx
// 008f10a4  8b442438             mov eax, dword ptr [esp + 0x38]
// 008f10a8  50                   push eax
// 008f10a9  8bce                 mov ecx, esi
// 008f10ab  e850f8ffff           call 0x8f0900
// 008f10b0  6a14                 push 0x14
// 008f10b2  e8a78ff1ff           call 0x80a05e
// 008f10b7  8bf8                 mov edi, eax
// 008f10b9  83c404               add esp, 4
// 008f10bc  897c244c             mov dword ptr [esp + 0x4c], edi
// 008f10c0  c744242001000000     mov dword ptr [esp + 0x20], 1
// 008f10c8  85ff                 test edi, edi
// 008f10ca  7414                 je 0x8f10e0
// 008f10cc  8bcf                 mov ecx, edi
// 008f10ce  e81d000100           call 0x9010f0
// 008f10d3  c707149fad00         mov dword ptr [edi], 0xad9f14
// 008f10d9  897710               mov dword ptr [edi + 0x10], esi
// 008f10dc  8bcf                 mov ecx, edi
// 008f10de  eb02                 jmp 0x8f10e2
// 008f10e0  33c9                 xor ecx, ecx
// 008f10e2  898e80000000         mov dword ptr [esi + 0x80], ecx
// 008f10e8  8b11                 mov edx, dword ptr [ecx]
// 008f10ea  8b421c               mov eax, dword ptr [edx + 0x1c]
// 008f10ed  53                   push ebx
// 008f10ee  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 008f10f6  ffd0                 call eax
// 008f10f8  56                   push esi
// 008f10f9  8bcd                 mov ecx, ebp
// 008f10fb  e8a0f4ffff           call 0x8f05a0
// 008f1100  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008f1104  8b542440             mov edx, dword ptr [esp + 0x40]
// 008f1108  83ec10               sub esp, 0x10
// 008f110b  8bc4                 mov eax, esp
// 008f110d  8908                 mov dword ptr [eax], ecx
// 008f110f  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 008f1113  895004               mov dword ptr [eax + 4], edx
// 008f1116  8b542458             mov edx, dword ptr [esp + 0x58]
// 008f111a  894808               mov dword ptr [eax + 8], ecx
// 008f111d  8bce                 mov ecx, esi
// 008f111f  89500c               mov dword ptr [eax + 0xc], edx
// 008f1122  e849f0ffff           call 0x8f0170
// 008f1127  8b4620               mov eax, dword ptr [esi + 0x20]
// 008f112a  8b3d001aa400         mov edi, dword ptr [0xa41a00]
// 008f1130  6a00                 push 0
// 008f1132  6af8                 push -8
// 008f1134  50                   push eax
// 008f1135  ffd7                 call edi
// 008f1137  837e6400             cmp dword ptr [esi + 0x64], 0
// 008f113b  745b                 je 0x8f1198
// 008f113d  8b0df821a400         mov ecx, dword ptr [0xa421f8]
// 008f1143  6a13                 push 0x13
// 008f1145  6a00                 push 0
// 008f1147  6a00                 push 0
// 008f1149  6a00                 push 0
// 008f114b  6a00                 push 0
// 008f114d  51                   push ecx
// 008f114e  8bce                 mov ecx, esi
// 008f1150  e8d592f1ff           call 0x80a42a
// 008f1155  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 008f1158  85c9                 test ecx, ecx
// 008f115a  7410                 je 0x8f116c
// 008f115c  8b11                 mov edx, dword ptr [ecx]
// 008f115e  8b4204               mov eax, dword ptr [edx + 4]
// 008f1161  6a01                 push 1
// 008f1163  ffd0                 call eax
// 008f1165  c7467c00000000       mov dword ptr [esi + 0x7c], 0
// 008f116c  ff15e819a400         call dword ptr [0xa419e8]
// 008f1172  50                   push eax
// 008f1173  e8b091f1ff           call 0x80a328
// 008f1178  8b4820               mov ecx, dword ptr [eax + 0x20]
// 008f117b  6a00                 push 0
// 008f117d  6a00                 push 0
// 008f117f  51                   push ecx
// 008f1180  ff15ec19a400         call dword ptr [0xa419ec]
// 008f1186  8b5620               mov edx, dword ptr [esi + 0x20]
// 008f1189  6a00                 push 0
// 008f118b  6a01                 push 1
// 008f118d  6a01                 push 1
// 008f118f  52                   push edx
// 008f1190  ff15741ca400         call dword ptr [0xa41c74]
// 008f1196  eb17                 jmp 0x8f11af
// 008f1198  a1f821a400           mov eax, dword ptr [0xa421f8]
// 008f119d  6a53                 push 0x53
// 008f119f  6a00                 push 0
// 008f11a1  6a00                 push 0
// 008f11a3  6a00                 push 0
// 008f11a5  6a00                 push 0
// 008f11a7  50                   push eax
// 008f11a8  8bce                 mov ecx, esi
// 008f11aa  e87b92f1ff           call 0x80a42a
// 008f11af  e86096f1ff           call 0x80a814
// 008f11b4  85c0                 test eax, eax
// 008f11b6  740b                 je 0x8f11c3
// 008f11b8  8b10                 mov edx, dword ptr [eax]
// 008f11ba  8bc8                 mov ecx, eax
// 008f11bc  8b427c               mov eax, dword ptr [edx + 0x7c]
// 008f11bf  ffd0                 call eax
// 008f11c1  eb02                 jmp 0x8f11c5
// 008f11c3  33c0                 xor eax, eax
// 008f11c5  8b4820               mov ecx, dword ptr [eax + 0x20]
// 008f11c8  8b5620               mov edx, dword ptr [esi + 0x20]
// 008f11cb  51                   push ecx
// 008f11cc  6af8                 push -8
// 008f11ce  52                   push edx
// 008f11cf  ffd7                 call edi
// 008f11d1  8bc6                 mov eax, esi
// 008f11d3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008f11d7  64890d00000000       mov dword ptr fs:[0], ecx
// 008f11de  59                   pop ecx
// 008f11df  5f                   pop edi
// 008f11e0  5e                   pop esi
// 008f11e1  5d                   pop ebp
// 008f11e2  5b                   pop ebx
// 008f11e3  83c410               add esp, 0x10
// 008f11e6  c22800               ret 0x28
// copied from an identical function in another client (function ?CreateShadow@CXTShadowsManager@@AAEPAVCXTShadowWnd@@HVCRect@@0PAUHWND__@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTWndShadow.cpp