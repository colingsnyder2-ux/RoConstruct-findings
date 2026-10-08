// roc 2009-06 007db020  unit: XTPDockingPanePaintThemes::CXTPDockingPaneWhidbeyTheme::CColorSetVisualStudio2005  size: 461 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007db020
//
// 007db020  8b442420             mov eax, dword ptr [esp + 0x20]
// 007db024  83ec10               sub esp, 0x10
// 007db027  56                   push esi
// 007db028  57                   push edi
// 007db029  8b7818               mov edi, dword ptr [eax + 0x18]
// 007db02c  83ffff               cmp edi, -1
// 007db02f  7503                 jne 0x7db034
// 007db031  8b7814               mov edi, dword ptr [eax + 0x14]
// 007db034  8b700c               mov esi, dword ptr [eax + 0xc]
// 007db037  83feff               cmp esi, -1
// 007db03a  7503                 jne 0x7db03f
// 007db03c  8b7008               mov esi, dword ptr [eax + 8]
// 007db03f  e8dc9af7ff           call 0x754b20
// 007db044  6a00                 push 0
// 007db046  8bc8                 mov ecx, eax
// 007db048  e81394f7ff           call 0x754460
// 007db04d  85c0                 test eax, eax
// 007db04f  7415                 je 0x7db066
// 007db051  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007db055  56                   push esi
// 007db056  8d442424             lea eax, [esp + 0x24]
// 007db05a  50                   push eax
// 007db05b  e870e7f3ff           call 0x7197d0
// 007db060  5f                   pop edi
// 007db061  5e                   pop esi
// 007db062  83c410               add esp, 0x10
// 007db065  c3                   ret 
// 007db066  8b442434             mov eax, dword ptr [esp + 0x34]
// 007db06a  85c0                 test eax, eax
// 007db06c  0f8475010000         je 0x7db1e7
// 007db072  8b5020               mov edx, dword ptr [eax + 0x20]
// 007db075  53                   push ebx
// 007db076  8d4c240c             lea ecx, [esp + 0xc]
// 007db07a  51                   push ecx
// 007db07b  52                   push edx
// 007db07c  ff15f4ed8900         call dword ptr [0x89edf4]
// 007db082  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007db086  8d44240c             lea eax, [esp + 0xc]
// 007db08a  50                   push eax
// 007db08b  e814e9f3ff           call 0x7199a4
// 007db090  837c244000           cmp dword ptr [esp + 0x40], 0
// 007db095  0f84bf000000         je 0x7db15a
// 007db09b  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 007db09f  2b5c240c             sub ebx, dword ptr [esp + 0xc]
// 007db0a3  55                   push ebp
// 007db0a4  8b2ddced8900         mov ebp, dword ptr [0x89eddc]
// 007db0aa  6a10                 push 0x10
// 007db0ac  ffd5                 call ebp
// 007db0ae  99                   cdq 
// 007db0af  2bc2                 sub eax, edx
// 007db0b1  d1f8                 sar eax, 1
// 007db0b3  3bd8                 cmp ebx, eax
// 007db0b5  7e0e                 jle 0x7db0c5
// 007db0b7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007db0bb  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 007db0bf  894c2440             mov dword ptr [esp + 0x40], ecx
// 007db0c3  eb0d                 jmp 0x7db0d2
// 007db0c5  6a10                 push 0x10
// 007db0c7  ffd5                 call ebp
// 007db0c9  99                   cdq 
// 007db0ca  2bc2                 sub eax, edx
// 007db0cc  d1f8                 sar eax, 1
// 007db0ce  89442440             mov dword ptr [esp + 0x40], eax
// 007db0d2  8b542428             mov edx, dword ptr [esp + 0x28]
// 007db0d6  db442440             fild dword ptr [esp + 0x40]
// 007db0da  2b542410             sub edx, dword ptr [esp + 0x10]
// 007db0de  51                   push ecx
// 007db0df  d95c2444             fstp dword ptr [esp + 0x44]
// 007db0e3  89542440             mov dword ptr [esp + 0x40], edx
// 007db0e7  db442440             fild dword ptr [esp + 0x40]
// 007db0eb  d8742444             fdiv dword ptr [esp + 0x44]
// 007db0ef  d95c2440             fstp dword ptr [esp + 0x40]
// 007db0f3  d9442440             fld dword ptr [esp + 0x40]
// 007db0f7  d91c24               fstp dword ptr [esp]
// 007db0fa  56                   push esi
// 007db0fb  57                   push edi
// 007db0fc  e86f74f9ff           call 0x772570
// 007db101  8bc8                 mov ecx, eax
// 007db103  e8b844f9ff           call 0x76f5c0
// 007db108  8bd8                 mov ebx, eax
// 007db10a  8b442430             mov eax, dword ptr [esp + 0x30]
// 007db10e  2b442410             sub eax, dword ptr [esp + 0x10]
// 007db112  51                   push ecx
// 007db113  89442440             mov dword ptr [esp + 0x40], eax
// 007db117  db442440             fild dword ptr [esp + 0x40]
// 007db11b  d8742444             fdiv dword ptr [esp + 0x44]
// 007db11f  d95c2444             fstp dword ptr [esp + 0x44]
// 007db123  d9442444             fld dword ptr [esp + 0x44]
// 007db127  d91c24               fstp dword ptr [esp]
// 007db12a  56                   push esi
// 007db12b  57                   push edi
// 007db12c  e83f74f9ff           call 0x772570
// 007db131  8bc8                 mov ecx, eax
// 007db133  e88844f9ff           call 0x76f5c0
// 007db138  8b542424             mov edx, dword ptr [esp + 0x24]
// 007db13c  6a01                 push 1
// 007db13e  50                   push eax
// 007db13f  53                   push ebx
// 007db140  8d4c2434             lea ecx, [esp + 0x34]
// 007db144  51                   push ecx
// 007db145  52                   push edx
// 007db146  e82574f9ff           call 0x772570
// 007db14b  8bc8                 mov ecx, eax
// 007db14d  e84e74f9ff           call 0x7725a0
// 007db152  5d                   pop ebp
// 007db153  5b                   pop ebx
// 007db154  5f                   pop edi
// 007db155  5e                   pop esi
// 007db156  83c410               add esp, 0x10
// 007db159  c3                   ret 
// 007db15a  8b442410             mov eax, dword ptr [esp + 0x10]
// 007db15e  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007db162  8b542428             mov edx, dword ptr [esp + 0x28]
// 007db166  2bc8                 sub ecx, eax
// 007db168  894c243c             mov dword ptr [esp + 0x3c], ecx
// 007db16c  db44243c             fild dword ptr [esp + 0x3c]
// 007db170  2bd0                 sub edx, eax
// 007db172  89542438             mov dword ptr [esp + 0x38], edx
// 007db176  51                   push ecx
// 007db177  d95c2440             fstp dword ptr [esp + 0x40]
// 007db17b  db44243c             fild dword ptr [esp + 0x3c]
// 007db17f  d8742440             fdiv dword ptr [esp + 0x40]
// 007db183  d95c243c             fstp dword ptr [esp + 0x3c]
// 007db187  d944243c             fld dword ptr [esp + 0x3c]
// 007db18b  d91c24               fstp dword ptr [esp]
// 007db18e  56                   push esi
// 007db18f  57                   push edi
// 007db190  e8db73f9ff           call 0x772570
// 007db195  8bc8                 mov ecx, eax
// 007db197  e82444f9ff           call 0x76f5c0
// 007db19c  8bd8                 mov ebx, eax
// 007db19e  8b442430             mov eax, dword ptr [esp + 0x30]
// 007db1a2  2b442410             sub eax, dword ptr [esp + 0x10]
// 007db1a6  51                   push ecx
// 007db1a7  8944243c             mov dword ptr [esp + 0x3c], eax
// 007db1ab  db44243c             fild dword ptr [esp + 0x3c]
// 007db1af  d8742440             fdiv dword ptr [esp + 0x40]
// 007db1b3  d95c2440             fstp dword ptr [esp + 0x40]
// 007db1b7  d9442440             fld dword ptr [esp + 0x40]
// 007db1bb  d91c24               fstp dword ptr [esp]
// 007db1be  56                   push esi
// 007db1bf  57                   push edi
// 007db1c0  e8ab73f9ff           call 0x772570
// 007db1c5  8bc8                 mov ecx, eax
// 007db1c7  e8f443f9ff           call 0x76f5c0
// 007db1cc  8b542420             mov edx, dword ptr [esp + 0x20]
// 007db1d0  6a00                 push 0
// 007db1d2  50                   push eax
// 007db1d3  53                   push ebx
// 007db1d4  8d4c2430             lea ecx, [esp + 0x30]
// 007db1d8  51                   push ecx
// 007db1d9  52                   push edx
// 007db1da  e89173f9ff           call 0x772570
// 007db1df  8bc8                 mov ecx, eax
// 007db1e1  e8ba73f9ff           call 0x7725a0
// 007db1e6  5b                   pop ebx
// 007db1e7  5f                   pop edi
// 007db1e8  5e                   pop esi
// 007db1e9  83c410               add esp, 0x10
// 007db1ec  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?XTPFillFramePartRect@@YAXPAVCDC@@VCRect@@PAVCWnd@@2ABVCXTPPaintManagerColorGradient@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
