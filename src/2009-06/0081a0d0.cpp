// roc 2009-06 0081a0d0  unit: CXTCaptionButtonTheme  size: 293 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0081a0d0
//
// 0081a0d0  83ec10               sub esp, 0x10
// 0081a0d3  55                   push ebp
// 0081a0d4  56                   push esi
// 0081a0d5  8b742428             mov esi, dword ptr [esp + 0x28]
// 0081a0d9  8be9                 mov ebp, ecx
// 0081a0db  85f6                 test esi, esi
// 0081a0dd  0f840a010000         je 0x81a1ed
// 0081a0e3  837d1400             cmp dword ptr [ebp + 0x14], 0
// 0081a0e7  0f8400010000         je 0x81a1ed
// 0081a0ed  57                   push edi
// 0081a0ee  8bce                 mov ecx, esi
// 0081a0f0  e8bbacc2ff           call 0x444db0
// 0081a0f5  8bf8                 mov edi, eax
// 0081a0f7  85ff                 test edi, edi
// 0081a0f9  0f84ed000000         je 0x81a1ec
// 0081a0ff  53                   push ebx
// 0081a100  8b5d00               mov ebx, dword ptr [ebp]
// 0081a103  56                   push esi
// 0081a104  8bce                 mov ecx, esi
// 0081a106  e81508ffff           call 0x80a920
// 0081a10b  8b542430             mov edx, dword ptr [esp + 0x30]
// 0081a10f  85c0                 test eax, eax
// 0081a111  0f95c0               setne al
// 0081a114  0fb6c8               movzx ecx, al
// 0081a117  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0081a11b  51                   push ecx
// 0081a11c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0081a120  52                   push edx
// 0081a121  50                   push eax
// 0081a122  8b4350               mov eax, dword ptr [ebx + 0x50]
// 0081a125  51                   push ecx
// 0081a126  8d542424             lea edx, [esp + 0x24]
// 0081a12a  52                   push edx
// 0081a12b  8bcd                 mov ecx, ebp
// 0081a12d  ffd0                 call eax
// 0081a12f  837e7c00             cmp dword ptr [esi + 0x7c], 0
// 0081a133  8a5c2428             mov bl, byte ptr [esp + 0x28]
// 0081a137  7509                 jne 0x81a142
// 0081a139  f6c301               test bl, 1
// 0081a13c  7504                 jne 0x81a142
// 0081a13e  33ed                 xor ebp, ebp
// 0081a140  eb0d                 jmp 0x81a14f
// 0081a142  bd01000000           mov ebp, 1
// 0081a147  016c2410             add dword ptr [esp + 0x10], ebp
// 0081a14b  016c2414             add dword ptr [esp + 0x14], ebp
// 0081a14f  f6c304               test bl, 4
// 0081a152  741f                 je 0x81a173
// 0081a154  8d4c2418             lea ecx, [esp + 0x18]
// 0081a158  51                   push ecx
// 0081a159  8bce                 mov ecx, esi
// 0081a15b  e89011ffff           call 0x80b2f0
// 0081a160  8b5004               mov edx, dword ptr [eax + 4]
// 0081a163  8b00                 mov eax, dword ptr [eax]
// 0081a165  52                   push edx
// 0081a166  50                   push eax
// 0081a167  6a01                 push 1
// 0081a169  8bcf                 mov ecx, edi
// 0081a16b  e840eff1ff           call 0x7390b0
// 0081a170  50                   push eax
// 0081a171  eb62                 jmp 0x81a1d5
// 0081a173  8bce                 mov ecx, esi
// 0081a175  e826f8feff           call 0x8099a0
// 0081a17a  85c0                 test eax, eax
// 0081a17c  7521                 jne 0x81a19f
// 0081a17e  85ed                 test ebp, ebp
// 0081a180  751d                 jne 0x81a19f
// 0081a182  8d4c2418             lea ecx, [esp + 0x18]
// 0081a186  51                   push ecx
// 0081a187  8bce                 mov ecx, esi
// 0081a189  e86211ffff           call 0x80b2f0
// 0081a18e  8b5004               mov edx, dword ptr [eax + 4]
// 0081a191  8b00                 mov eax, dword ptr [eax]
// 0081a193  52                   push edx
// 0081a194  50                   push eax
// 0081a195  8bcf                 mov ecx, edi
// 0081a197  e8247ef1ff           call 0x731fc0
// 0081a19c  50                   push eax
// 0081a19d  eb36                 jmp 0x81a1d5
// 0081a19f  837e7c00             cmp dword ptr [esi + 0x7c], 0
// 0081a1a3  8bcf                 mov ecx, edi
// 0081a1a5  7407                 je 0x81a1ae
// 0081a1a7  e82499f1ff           call 0x733ad0
// 0081a1ac  eb11                 jmp 0x81a1bf
// 0081a1ae  f6c301               test bl, 1
// 0081a1b1  7407                 je 0x81a1ba
// 0081a1b3  e83899f1ff           call 0x733af0
// 0081a1b8  eb05                 jmp 0x81a1bf
// 0081a1ba  e8f198f1ff           call 0x733ab0
// 0081a1bf  8d4c2418             lea ecx, [esp + 0x18]
// 0081a1c3  51                   push ecx
// 0081a1c4  8bce                 mov ecx, esi
// 0081a1c6  8bd8                 mov ebx, eax
// 0081a1c8  e82311ffff           call 0x80b2f0
// 0081a1cd  8b5004               mov edx, dword ptr [eax + 4]
// 0081a1d0  8b00                 mov eax, dword ptr [eax]
// 0081a1d2  52                   push edx
// 0081a1d3  50                   push eax
// 0081a1d4  53                   push ebx
// 0081a1d5  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0081a1d9  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0081a1dd  8b442430             mov eax, dword ptr [esp + 0x30]
// 0081a1e1  51                   push ecx
// 0081a1e2  52                   push edx
// 0081a1e3  50                   push eax
// 0081a1e4  8bcf                 mov ecx, edi
// 0081a1e6  e8d5fbf1ff           call 0x739dc0
// 0081a1eb  5b                   pop ebx
// 0081a1ec  5f                   pop edi
// 0081a1ed  5e                   pop esi
// 0081a1ee  5d                   pop ebp
// 0081a1ef  83c410               add esp, 0x10
// 0081a1f2  c21000               ret 0x10
// library xtp-11.2.2/Source\Controls\XTButtonTheme.cpp (function ?DrawButtonIcon@CXTButtonTheme@@MAEXPAVCDC@@IAAVCRect@@PAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButtonTheme.cpp
