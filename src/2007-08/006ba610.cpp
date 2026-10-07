// roc 2007-08 006ba610  unit: XTPPaintThemes::CXTPDefaultTheme  size: 393 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ba610
//
// 006ba610  837c242c02           cmp dword ptr [esp + 0x2c], 2
// 006ba615  8b442424             mov eax, dword ptr [esp + 0x24]
// 006ba619  53                   push ebx
// 006ba61a  55                   push ebp
// 006ba61b  56                   push esi
// 006ba61c  57                   push edi
// 006ba61d  8bf1                 mov esi, ecx
// 006ba61f  754b                 jne 0x6ba66c
// 006ba621  85c0                 test eax, eax
// 006ba623  7547                 jne 0x6ba66c
// 006ba625  39442428             cmp dword ptr [esp + 0x28], eax
// 006ba629  750a                 jne 0x6ba635
// 006ba62b  3944242c             cmp dword ptr [esp + 0x2c], eax
// 006ba62f  0f8453010000         je 0x6ba788
// 006ba635  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006ba639  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006ba63d  6a0d                 push 0xd
// 006ba63f  6a0d                 push 0xd
// 006ba641  83ec10               sub esp, 0x10
// 006ba644  8bc4                 mov eax, esp
// 006ba646  8908                 mov dword ptr [eax], ecx
// 006ba648  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 006ba64c  895004               mov dword ptr [eax + 4], edx
// 006ba64f  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 006ba653  894808               mov dword ptr [eax + 8], ecx
// 006ba656  89500c               mov dword ptr [eax + 0xc], edx
// 006ba659  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 006ba65d  50                   push eax
// 006ba65e  8bce                 mov ecx, esi
// 006ba660  e87b36f8ff           call 0x63dce0
// 006ba665  5f                   pop edi
// 006ba666  5e                   pop esi
// 006ba667  5d                   pop ebp
// 006ba668  5b                   pop ebx
// 006ba669  c23000               ret 0x30
// 006ba66c  837c243000           cmp dword ptr [esp + 0x30], 0
// 006ba671  7571                 jne 0x6ba6e4
// 006ba673  85c0                 test eax, eax
// 006ba675  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 006ba679  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 006ba67d  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 006ba681  7424                 je 0x6ba6a7
// 006ba683  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006ba687  8b542414             mov edx, dword ptr [esp + 0x14]
// 006ba68b  6a14                 push 0x14
// 006ba68d  6a10                 push 0x10
// 006ba68f  83ec10               sub esp, 0x10
// 006ba692  8bc4                 mov eax, esp
// 006ba694  8908                 mov dword ptr [eax], ecx
// 006ba696  896804               mov dword ptr [eax + 4], ebp
// 006ba699  895808               mov dword ptr [eax + 8], ebx
// 006ba69c  52                   push edx
// 006ba69d  8bce                 mov ecx, esi
// 006ba69f  89780c               mov dword ptr [eax + 0xc], edi
// 006ba6a2  e8c928f8ff           call 0x63cf70
// 006ba6a7  8b442428             mov eax, dword ptr [esp + 0x28]
// 006ba6ab  83f802               cmp eax, 2
// 006ba6ae  7409                 je 0x6ba6b9
// 006ba6b0  83f803               cmp eax, 3
// 006ba6b3  0f85cf000000         jne 0x6ba788
// 006ba6b9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006ba6bd  8b542414             mov edx, dword ptr [esp + 0x14]
// 006ba6c1  6a14                 push 0x14
// 006ba6c3  6a10                 push 0x10
// 006ba6c5  83ec10               sub esp, 0x10
// 006ba6c8  8bc4                 mov eax, esp
// 006ba6ca  8908                 mov dword ptr [eax], ecx
// 006ba6cc  896804               mov dword ptr [eax + 4], ebp
// 006ba6cf  895808               mov dword ptr [eax + 8], ebx
// 006ba6d2  52                   push edx
// 006ba6d3  8bce                 mov ecx, esi
// 006ba6d5  89780c               mov dword ptr [eax + 0xc], edi
// 006ba6d8  e89328f8ff           call 0x63cf70
// 006ba6dd  5f                   pop edi
// 006ba6de  5e                   pop esi
// 006ba6df  5d                   pop ebp
// 006ba6e0  5b                   pop ebx
// 006ba6e1  c23000               ret 0x30
// 006ba6e4  85c0                 test eax, eax
// 006ba6e6  7450                 je 0x6ba738
// 006ba6e8  837c242800           cmp dword ptr [esp + 0x28], 0
// 006ba6ed  7569                 jne 0x6ba758
// 006ba6ef  837c242c00           cmp dword ptr [esp + 0x2c], 0
// 006ba6f4  7562                 jne 0x6ba758
// 006ba6f6  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 006ba6fa  8d442418             lea eax, [esp + 0x18]
// 006ba6fe  50                   push eax
// 006ba6ff  57                   push edi
// 006ba700  e8cbedffff           call 0x6b94d0
// 006ba705  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006ba709  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006ba70d  6a14                 push 0x14
// 006ba70f  6a10                 push 0x10
// 006ba711  83ec10               sub esp, 0x10
// 006ba714  8bc4                 mov eax, esp
// 006ba716  8908                 mov dword ptr [eax], ecx
// 006ba718  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 006ba71c  895004               mov dword ptr [eax + 4], edx
// 006ba71f  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 006ba723  894808               mov dword ptr [eax + 8], ecx
// 006ba726  57                   push edi
// 006ba727  8bce                 mov ecx, esi
// 006ba729  89500c               mov dword ptr [eax + 0xc], edx
// 006ba72c  e83f28f8ff           call 0x63cf70
// 006ba731  5f                   pop edi
// 006ba732  5e                   pop esi
// 006ba733  5d                   pop ebp
// 006ba734  5b                   pop ebx
// 006ba735  c23000               ret 0x30
// 006ba738  837c243800           cmp dword ptr [esp + 0x38], 0
// 006ba73d  7519                 jne 0x6ba758
// 006ba73f  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 006ba743  83f802               cmp eax, 2
// 006ba746  7410                 je 0x6ba758
// 006ba748  83f803               cmp eax, 3
// 006ba74b  740b                 je 0x6ba758
// 006ba74d  837c242800           cmp dword ptr [esp + 0x28], 0
// 006ba752  743b                 je 0x6ba78f
// 006ba754  85c0                 test eax, eax
// 006ba756  743b                 je 0x6ba793
// 006ba758  6a14                 push 0x14
// 006ba75a  6a10                 push 0x10
// 006ba75c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006ba760  8b542424             mov edx, dword ptr [esp + 0x24]
// 006ba764  83ec10               sub esp, 0x10
// 006ba767  8bc4                 mov eax, esp
// 006ba769  8908                 mov dword ptr [eax], ecx
// 006ba76b  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 006ba76f  895004               mov dword ptr [eax + 4], edx
// 006ba772  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 006ba776  894808               mov dword ptr [eax + 8], ecx
// 006ba779  89500c               mov dword ptr [eax + 0xc], edx
// 006ba77c  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 006ba780  50                   push eax
// 006ba781  8bce                 mov ecx, esi
// 006ba783  e8e827f8ff           call 0x63cf70
// 006ba788  5f                   pop edi
// 006ba789  5e                   pop esi
// 006ba78a  5d                   pop ebp
// 006ba78b  5b                   pop ebx
// 006ba78c  c23000               ret 0x30
// 006ba78f  85c0                 test eax, eax
// 006ba791  74f5                 je 0x6ba788
// 006ba793  6a10                 push 0x10
// 006ba795  6a14                 push 0x14
// 006ba797  ebc3                 jmp 0x6ba75c
// library xtp-11.2.2-vc8/Source\CommandBars\XTPDefaultTheme.cpp (function ?DrawRectangle@CXTPDefaultTheme@XTPPaintThemes@@MAEXPAVCDC@@VCRect@@HHHHHW4XTPBarType@@W4XTPBarPosition@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPDefaultTheme.cpp
