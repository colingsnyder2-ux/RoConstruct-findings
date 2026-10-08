// roc 2011-06 009025d0  unit: CXTCaptionButtonTheme  size: 293 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 009025d0
//
// 009025d0  83ec10               sub esp, 0x10
// 009025d3  55                   push ebp
// 009025d4  56                   push esi
// 009025d5  8b742428             mov esi, dword ptr [esp + 0x28]
// 009025d9  8be9                 mov ebp, ecx
// 009025db  85f6                 test esi, esi
// 009025dd  0f840a010000         je 0x9026ed
// 009025e3  837d1400             cmp dword ptr [ebp + 0x14], 0
// 009025e7  0f8400010000         je 0x9026ed
// 009025ed  57                   push edi
// 009025ee  8bce                 mov ecx, esi
// 009025f0  e88bfefeff           call 0x8f2480
// 009025f5  8bf8                 mov edi, eax
// 009025f7  85ff                 test edi, edi
// 009025f9  0f84ed000000         je 0x9026ec
// 009025ff  53                   push ebx
// 00902600  8b5d00               mov ebx, dword ptr [ebp]
// 00902603  56                   push esi
// 00902604  8bce                 mov ecx, esi
// 00902606  e825fcfeff           call 0x8f2230
// 0090260b  8b542430             mov edx, dword ptr [esp + 0x30]
// 0090260f  85c0                 test eax, eax
// 00902611  0f95c0               setne al
// 00902614  0fb6c8               movzx ecx, al
// 00902617  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0090261b  51                   push ecx
// 0090261c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00902620  52                   push edx
// 00902621  50                   push eax
// 00902622  8b4350               mov eax, dword ptr [ebx + 0x50]
// 00902625  51                   push ecx
// 00902626  8d542424             lea edx, [esp + 0x24]
// 0090262a  52                   push edx
// 0090262b  8bcd                 mov ecx, ebp
// 0090262d  ffd0                 call eax
// 0090262f  837e7c00             cmp dword ptr [esi + 0x7c], 0
// 00902633  8a5c2428             mov bl, byte ptr [esp + 0x28]
// 00902637  7509                 jne 0x902642
// 00902639  f6c301               test bl, 1
// 0090263c  7504                 jne 0x902642
// 0090263e  33ed                 xor ebp, ebp
// 00902640  eb0d                 jmp 0x90264f
// 00902642  bd01000000           mov ebp, 1
// 00902647  016c2410             add dword ptr [esp + 0x10], ebp
// 0090264b  016c2414             add dword ptr [esp + 0x14], ebp
// 0090264f  f6c304               test bl, 4
// 00902652  741f                 je 0x902673
// 00902654  8d4c2418             lea ecx, [esp + 0x18]
// 00902658  51                   push ecx
// 00902659  8bce                 mov ecx, esi
// 0090265b  e80006ffff           call 0x8f2c60
// 00902660  8b5004               mov edx, dword ptr [eax + 4]
// 00902663  8b00                 mov eax, dword ptr [eax]
// 00902665  52                   push edx
// 00902666  50                   push eax
// 00902667  6a01                 push 1
// 00902669  8bcf                 mov ecx, edi
// 0090266b  e8c039f2ff           call 0x826030
// 00902670  50                   push eax
// 00902671  eb62                 jmp 0x9026d5
// 00902673  8bce                 mov ecx, esi
// 00902675  e876ecfeff           call 0x8f12f0
// 0090267a  85c0                 test eax, eax
// 0090267c  7521                 jne 0x90269f
// 0090267e  85ed                 test ebp, ebp
// 00902680  751d                 jne 0x90269f
// 00902682  8d4c2418             lea ecx, [esp + 0x18]
// 00902686  51                   push ecx
// 00902687  8bce                 mov ecx, esi
// 00902689  e8d205ffff           call 0x8f2c60
// 0090268e  8b5004               mov edx, dword ptr [eax + 4]
// 00902691  8b00                 mov eax, dword ptr [eax]
// 00902693  52                   push edx
// 00902694  50                   push eax
// 00902695  8bcf                 mov ecx, edi
// 00902697  e884d0f1ff           call 0x81f720
// 0090269c  50                   push eax
// 0090269d  eb36                 jmp 0x9026d5
// 0090269f  837e7c00             cmp dword ptr [esi + 0x7c], 0
// 009026a3  8bcf                 mov ecx, edi
// 009026a5  7407                 je 0x9026ae
// 009026a7  e8f4e6f1ff           call 0x820da0
// 009026ac  eb11                 jmp 0x9026bf
// 009026ae  f6c301               test bl, 1
// 009026b1  7407                 je 0x9026ba
// 009026b3  e808e7f1ff           call 0x820dc0
// 009026b8  eb05                 jmp 0x9026bf
// 009026ba  e8c1e6f1ff           call 0x820d80
// 009026bf  8d4c2418             lea ecx, [esp + 0x18]
// 009026c3  51                   push ecx
// 009026c4  8bce                 mov ecx, esi
// 009026c6  8bd8                 mov ebx, eax
// 009026c8  e89305ffff           call 0x8f2c60
// 009026cd  8b5004               mov edx, dword ptr [eax + 4]
// 009026d0  8b00                 mov eax, dword ptr [eax]
// 009026d2  52                   push edx
// 009026d3  50                   push eax
// 009026d4  53                   push ebx
// 009026d5  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 009026d9  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 009026dd  8b442430             mov eax, dword ptr [esp + 0x30]
// 009026e1  51                   push ecx
// 009026e2  52                   push edx
// 009026e3  50                   push eax
// 009026e4  8bcf                 mov ecx, edi
// 009026e6  e88543f2ff           call 0x826a70
// 009026eb  5b                   pop ebx
// 009026ec  5f                   pop edi
// 009026ed  5e                   pop esi
// 009026ee  5d                   pop ebp
// 009026ef  83c410               add esp, 0x10
// 009026f2  c21000               ret 0x10
// library xtp-11.2.2/Source\Controls\XTButtonTheme.cpp (function ?DrawButtonIcon@CXTButtonTheme@@MAEXPAVCDC@@IAAVCRect@@PAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButtonTheme.cpp
