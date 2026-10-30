// roc 2009-12 008f4db0  unit: CXTCaptionButtonTheme  size: 293 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f4db0
//
// 008f4db0  83ec10               sub esp, 0x10
// 008f4db3  55                   push ebp
// 008f4db4  56                   push esi
// 008f4db5  8b742428             mov esi, dword ptr [esp + 0x28]
// 008f4db9  8be9                 mov ebp, ecx
// 008f4dbb  85f6                 test esi, esi
// 008f4dbd  0f840a010000         je 0x8f4ecd
// 008f4dc3  837d1400             cmp dword ptr [ebp + 0x14], 0
// 008f4dc7  0f8400010000         je 0x8f4ecd
// 008f4dcd  57                   push edi
// 008f4dce  8bce                 mov ecx, esi
// 008f4dd0  e85b05d7ff           call 0x665330
// 008f4dd5  8bf8                 mov edi, eax
// 008f4dd7  85ff                 test edi, edi
// 008f4dd9  0f84ed000000         je 0x8f4ecc
// 008f4ddf  53                   push ebx
// 008f4de0  8b5d00               mov ebx, dword ptr [ebp]
// 008f4de3  56                   push esi
// 008f4de4  8bce                 mov ecx, esi
// 008f4de6  e8d505ffff           call 0x8e53c0
// 008f4deb  8b542430             mov edx, dword ptr [esp + 0x30]
// 008f4def  85c0                 test eax, eax
// 008f4df1  0f95c0               setne al
// 008f4df4  0fb6c8               movzx ecx, al
// 008f4df7  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008f4dfb  51                   push ecx
// 008f4dfc  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008f4e00  52                   push edx
// 008f4e01  50                   push eax
// 008f4e02  8b4350               mov eax, dword ptr [ebx + 0x50]
// 008f4e05  51                   push ecx
// 008f4e06  8d542424             lea edx, [esp + 0x24]
// 008f4e0a  52                   push edx
// 008f4e0b  8bcd                 mov ecx, ebp
// 008f4e0d  ffd0                 call eax
// 008f4e0f  837e7c00             cmp dword ptr [esi + 0x7c], 0
// 008f4e13  8a5c2428             mov bl, byte ptr [esp + 0x28]
// 008f4e17  7509                 jne 0x8f4e22
// 008f4e19  f6c301               test bl, 1
// 008f4e1c  7504                 jne 0x8f4e22
// 008f4e1e  33ed                 xor ebp, ebp
// 008f4e20  eb0d                 jmp 0x8f4e2f
// 008f4e22  bd01000000           mov ebp, 1
// 008f4e27  016c2410             add dword ptr [esp + 0x10], ebp
// 008f4e2b  016c2414             add dword ptr [esp + 0x14], ebp
// 008f4e2f  f6c304               test bl, 4
// 008f4e32  741f                 je 0x8f4e53
// 008f4e34  8d4c2418             lea ecx, [esp + 0x18]
// 008f4e38  51                   push ecx
// 008f4e39  8bce                 mov ecx, esi
// 008f4e3b  e8a00fffff           call 0x8e5de0
// 008f4e40  8b5004               mov edx, dword ptr [eax + 4]
// 008f4e43  8b00                 mov eax, dword ptr [eax]
// 008f4e45  52                   push edx
// 008f4e46  50                   push eax
// 008f4e47  6a01                 push 1
// 008f4e49  8bcf                 mov ecx, edi
// 008f4e4b  e850b3f1ff           call 0x8101a0
// 008f4e50  50                   push eax
// 008f4e51  eb62                 jmp 0x8f4eb5
// 008f4e53  8bce                 mov ecx, esi
// 008f4e55  e826f6feff           call 0x8e4480
// 008f4e5a  85c0                 test eax, eax
// 008f4e5c  7521                 jne 0x8f4e7f
// 008f4e5e  85ed                 test ebp, ebp
// 008f4e60  751d                 jne 0x8f4e7f
// 008f4e62  8d4c2418             lea ecx, [esp + 0x18]
// 008f4e66  51                   push ecx
// 008f4e67  8bce                 mov ecx, esi
// 008f4e69  e8720fffff           call 0x8e5de0
// 008f4e6e  8b5004               mov edx, dword ptr [eax + 4]
// 008f4e71  8b00                 mov eax, dword ptr [eax]
// 008f4e73  52                   push edx
// 008f4e74  50                   push eax
// 008f4e75  8bcf                 mov ecx, edi
// 008f4e77  e8c442f1ff           call 0x809140
// 008f4e7c  50                   push eax
// 008f4e7d  eb36                 jmp 0x8f4eb5
// 008f4e7f  837e7c00             cmp dword ptr [esi + 0x7c], 0
// 008f4e83  8bcf                 mov ecx, edi
// 008f4e85  7407                 je 0x8f4e8e
// 008f4e87  e8e45cf1ff           call 0x80ab70
// 008f4e8c  eb11                 jmp 0x8f4e9f
// 008f4e8e  f6c301               test bl, 1
// 008f4e91  7407                 je 0x8f4e9a
// 008f4e93  e8f85cf1ff           call 0x80ab90
// 008f4e98  eb05                 jmp 0x8f4e9f
// 008f4e9a  e8b15cf1ff           call 0x80ab50
// 008f4e9f  8d4c2418             lea ecx, [esp + 0x18]
// 008f4ea3  51                   push ecx
// 008f4ea4  8bce                 mov ecx, esi
// 008f4ea6  8bd8                 mov ebx, eax
// 008f4ea8  e8330fffff           call 0x8e5de0
// 008f4ead  8b5004               mov edx, dword ptr [eax + 4]
// 008f4eb0  8b00                 mov eax, dword ptr [eax]
// 008f4eb2  52                   push edx
// 008f4eb3  50                   push eax
// 008f4eb4  53                   push ebx
// 008f4eb5  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008f4eb9  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008f4ebd  8b442430             mov eax, dword ptr [esp + 0x30]
// 008f4ec1  51                   push ecx
// 008f4ec2  52                   push edx
// 008f4ec3  50                   push eax
// 008f4ec4  8bcf                 mov ecx, edi
// 008f4ec6  e8e5bff1ff           call 0x810eb0
// 008f4ecb  5b                   pop ebx
// 008f4ecc  5f                   pop edi
// 008f4ecd  5e                   pop esi
// 008f4ece  5d                   pop ebp
// 008f4ecf  83c410               add esp, 0x10
// 008f4ed2  c21000               ret 0x10
// library xtp-11.2.2/Source\Controls\XTButtonTheme.cpp (function ?DrawButtonIcon@CXTButtonTheme@@MAEXPAVCDC@@IAAVCRect@@PAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButtonTheme.cpp
