// roc 2007-08 006e5700  unit: XTPDockingPanePaintThemes::CXTPDockingPaneWhidbeyTheme::CColorSetVisualStudio2005  size: 461 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e5700
//
// 006e5700  8b442420             mov eax, dword ptr [esp + 0x20]
// 006e5704  83ec10               sub esp, 0x10
// 006e5707  56                   push esi
// 006e5708  57                   push edi
// 006e5709  8b7818               mov edi, dword ptr [eax + 0x18]
// 006e570c  83ffff               cmp edi, -1
// 006e570f  7503                 jne 0x6e5714
// 006e5711  8b7814               mov edi, dword ptr [eax + 0x14]
// 006e5714  8b700c               mov esi, dword ptr [eax + 0xc]
// 006e5717  83feff               cmp esi, -1
// 006e571a  7503                 jne 0x6e571f
// 006e571c  8b7008               mov esi, dword ptr [eax + 8]
// 006e571f  e84c38f8ff           call 0x668f70
// 006e5724  6a00                 push 0
// 006e5726  8bc8                 mov ecx, eax
// 006e5728  e80332f8ff           call 0x668930
// 006e572d  85c0                 test eax, eax
// 006e572f  7415                 je 0x6e5746
// 006e5731  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006e5735  56                   push esi
// 006e5736  8d442424             lea eax, [esp + 0x24]
// 006e573a  50                   push eax
// 006e573b  e870b1f4ff           call 0x6308b0
// 006e5740  5f                   pop edi
// 006e5741  5e                   pop esi
// 006e5742  83c410               add esp, 0x10
// 006e5745  c3                   ret 
// 006e5746  8b442434             mov eax, dword ptr [esp + 0x34]
// 006e574a  85c0                 test eax, eax
// 006e574c  0f8475010000         je 0x6e58c7
// 006e5752  8b5020               mov edx, dword ptr [eax + 0x20]
// 006e5755  53                   push ebx
// 006e5756  8d4c240c             lea ecx, [esp + 0xc]
// 006e575a  51                   push ecx
// 006e575b  52                   push edx
// 006e575c  ff15d4ed7700         call dword ptr [0x77edd4]
// 006e5762  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 006e5766  8d44240c             lea eax, [esp + 0xc]
// 006e576a  50                   push eax
// 006e576b  e884b2f4ff           call 0x6309f4
// 006e5770  837c244000           cmp dword ptr [esp + 0x40], 0
// 006e5775  0f84bf000000         je 0x6e583a
// 006e577b  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 006e577f  2b5c240c             sub ebx, dword ptr [esp + 0xc]
// 006e5783  55                   push ebp
// 006e5784  8b2db8ed7700         mov ebp, dword ptr [0x77edb8]
// 006e578a  6a10                 push 0x10
// 006e578c  ffd5                 call ebp
// 006e578e  99                   cdq 
// 006e578f  2bc2                 sub eax, edx
// 006e5791  d1f8                 sar eax, 1
// 006e5793  3bd8                 cmp ebx, eax
// 006e5795  7e0e                 jle 0x6e57a5
// 006e5797  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006e579b  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 006e579f  894c2440             mov dword ptr [esp + 0x40], ecx
// 006e57a3  eb0d                 jmp 0x6e57b2
// 006e57a5  6a10                 push 0x10
// 006e57a7  ffd5                 call ebp
// 006e57a9  99                   cdq 
// 006e57aa  2bc2                 sub eax, edx
// 006e57ac  d1f8                 sar eax, 1
// 006e57ae  89442440             mov dword ptr [esp + 0x40], eax
// 006e57b2  8b542428             mov edx, dword ptr [esp + 0x28]
// 006e57b6  db442440             fild dword ptr [esp + 0x40]
// 006e57ba  2b542410             sub edx, dword ptr [esp + 0x10]
// 006e57be  51                   push ecx
// 006e57bf  d95c2444             fstp dword ptr [esp + 0x44]
// 006e57c3  89542440             mov dword ptr [esp + 0x40], edx
// 006e57c7  db442440             fild dword ptr [esp + 0x40]
// 006e57cb  d8742444             fdiv dword ptr [esp + 0x44]
// 006e57cf  d95c2440             fstp dword ptr [esp + 0x40]
// 006e57d3  d9442440             fld dword ptr [esp + 0x40]
// 006e57d7  d91c24               fstp dword ptr [esp]
// 006e57da  56                   push esi
// 006e57db  57                   push edi
// 006e57dc  e85fcaf9ff           call 0x682240
// 006e57e1  8bc8                 mov ecx, eax
// 006e57e3  e8489df9ff           call 0x67f530
// 006e57e8  8bd8                 mov ebx, eax
// 006e57ea  8b442430             mov eax, dword ptr [esp + 0x30]
// 006e57ee  2b442410             sub eax, dword ptr [esp + 0x10]
// 006e57f2  51                   push ecx
// 006e57f3  89442440             mov dword ptr [esp + 0x40], eax
// 006e57f7  db442440             fild dword ptr [esp + 0x40]
// 006e57fb  d8742444             fdiv dword ptr [esp + 0x44]
// 006e57ff  d95c2444             fstp dword ptr [esp + 0x44]
// 006e5803  d9442444             fld dword ptr [esp + 0x44]
// 006e5807  d91c24               fstp dword ptr [esp]
// 006e580a  56                   push esi
// 006e580b  57                   push edi
// 006e580c  e82fcaf9ff           call 0x682240
// 006e5811  8bc8                 mov ecx, eax
// 006e5813  e8189df9ff           call 0x67f530
// 006e5818  8b542424             mov edx, dword ptr [esp + 0x24]
// 006e581c  6a01                 push 1
// 006e581e  50                   push eax
// 006e581f  53                   push ebx
// 006e5820  8d4c2434             lea ecx, [esp + 0x34]
// 006e5824  51                   push ecx
// 006e5825  52                   push edx
// 006e5826  e815caf9ff           call 0x682240
// 006e582b  8bc8                 mov ecx, eax
// 006e582d  e83ecaf9ff           call 0x682270
// 006e5832  5d                   pop ebp
// 006e5833  5b                   pop ebx
// 006e5834  5f                   pop edi
// 006e5835  5e                   pop esi
// 006e5836  83c410               add esp, 0x10
// 006e5839  c3                   ret 
// 006e583a  8b442410             mov eax, dword ptr [esp + 0x10]
// 006e583e  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006e5842  8b542428             mov edx, dword ptr [esp + 0x28]
// 006e5846  2bc8                 sub ecx, eax
// 006e5848  894c243c             mov dword ptr [esp + 0x3c], ecx
// 006e584c  db44243c             fild dword ptr [esp + 0x3c]
// 006e5850  2bd0                 sub edx, eax
// 006e5852  89542438             mov dword ptr [esp + 0x38], edx
// 006e5856  51                   push ecx
// 006e5857  d95c2440             fstp dword ptr [esp + 0x40]
// 006e585b  db44243c             fild dword ptr [esp + 0x3c]
// 006e585f  d8742440             fdiv dword ptr [esp + 0x40]
// 006e5863  d95c243c             fstp dword ptr [esp + 0x3c]
// 006e5867  d944243c             fld dword ptr [esp + 0x3c]
// 006e586b  d91c24               fstp dword ptr [esp]
// 006e586e  56                   push esi
// 006e586f  57                   push edi
// 006e5870  e8cbc9f9ff           call 0x682240
// 006e5875  8bc8                 mov ecx, eax
// 006e5877  e8b49cf9ff           call 0x67f530
// 006e587c  8bd8                 mov ebx, eax
// 006e587e  8b442430             mov eax, dword ptr [esp + 0x30]
// 006e5882  2b442410             sub eax, dword ptr [esp + 0x10]
// 006e5886  51                   push ecx
// 006e5887  8944243c             mov dword ptr [esp + 0x3c], eax
// 006e588b  db44243c             fild dword ptr [esp + 0x3c]
// 006e588f  d8742440             fdiv dword ptr [esp + 0x40]
// 006e5893  d95c2440             fstp dword ptr [esp + 0x40]
// 006e5897  d9442440             fld dword ptr [esp + 0x40]
// 006e589b  d91c24               fstp dword ptr [esp]
// 006e589e  56                   push esi
// 006e589f  57                   push edi
// 006e58a0  e89bc9f9ff           call 0x682240
// 006e58a5  8bc8                 mov ecx, eax
// 006e58a7  e8849cf9ff           call 0x67f530
// 006e58ac  8b542420             mov edx, dword ptr [esp + 0x20]
// 006e58b0  6a00                 push 0
// 006e58b2  50                   push eax
// 006e58b3  53                   push ebx
// 006e58b4  8d4c2430             lea ecx, [esp + 0x30]
// 006e58b8  51                   push ecx
// 006e58b9  52                   push edx
// 006e58ba  e881c9f9ff           call 0x682240
// 006e58bf  8bc8                 mov ecx, eax
// 006e58c1  e8aac9f9ff           call 0x682270
// 006e58c6  5b                   pop ebx
// 006e58c7  5f                   pop edi
// 006e58c8  5e                   pop esi
// 006e58c9  83c410               add esp, 0x10
// 006e58cc  c3                   ret 
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?XTPFillFramePartRect@@YAXPAVCDC@@VCRect@@PAVCWnd@@2ABVCXTPPaintManagerColorGradient@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPanePaintManager.cpp
