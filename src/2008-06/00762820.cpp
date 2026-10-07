// roc 2008-06 00762820  unit: XTPDockingPanePaintThemes::CXTPDockingPaneWhidbeyTheme::CColorSetVisualStudio2005  size: 461 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00762820
//
// 00762820  8b442420             mov eax, dword ptr [esp + 0x20]
// 00762824  83ec10               sub esp, 0x10
// 00762827  56                   push esi
// 00762828  57                   push edi
// 00762829  8b7818               mov edi, dword ptr [eax + 0x18]
// 0076282c  83ffff               cmp edi, -1
// 0076282f  7503                 jne 0x762834
// 00762831  8b7814               mov edi, dword ptr [eax + 0x14]
// 00762834  8b700c               mov esi, dword ptr [eax + 0xc]
// 00762837  83feff               cmp esi, -1
// 0076283a  7503                 jne 0x76283f
// 0076283c  8b7008               mov esi, dword ptr [eax + 8]
// 0076283f  e8fcd4f7ff           call 0x6dfd40
// 00762844  6a00                 push 0
// 00762846  8bc8                 mov ecx, eax
// 00762848  e893cef7ff           call 0x6df6e0
// 0076284d  85c0                 test eax, eax
// 0076284f  7415                 je 0x762866
// 00762851  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00762855  56                   push esi
// 00762856  8d442424             lea eax, [esp + 0x24]
// 0076285a  50                   push eax
// 0076285b  e8feeaf3ff           call 0x6a135e
// 00762860  5f                   pop edi
// 00762861  5e                   pop esi
// 00762862  83c410               add esp, 0x10
// 00762865  c3                   ret 
// 00762866  8b442434             mov eax, dword ptr [esp + 0x34]
// 0076286a  85c0                 test eax, eax
// 0076286c  0f8475010000         je 0x7629e7
// 00762872  8b5020               mov edx, dword ptr [eax + 0x20]
// 00762875  53                   push ebx
// 00762876  8d4c240c             lea ecx, [esp + 0xc]
// 0076287a  51                   push ecx
// 0076287b  52                   push edx
// 0076287c  ff15342e8000         call dword ptr [0x802e34]
// 00762882  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00762886  8d44240c             lea eax, [esp + 0xc]
// 0076288a  50                   push eax
// 0076288b  e80cecf3ff           call 0x6a149c
// 00762890  837c244000           cmp dword ptr [esp + 0x40], 0
// 00762895  0f84bf000000         je 0x76295a
// 0076289b  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0076289f  2b5c240c             sub ebx, dword ptr [esp + 0xc]
// 007628a3  55                   push ebp
// 007628a4  8b2d4c2d8000         mov ebp, dword ptr [0x802d4c]
// 007628aa  6a10                 push 0x10
// 007628ac  ffd5                 call ebp
// 007628ae  99                   cdq 
// 007628af  2bc2                 sub eax, edx
// 007628b1  d1f8                 sar eax, 1
// 007628b3  3bd8                 cmp ebx, eax
// 007628b5  7e0e                 jle 0x7628c5
// 007628b7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007628bb  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 007628bf  894c2440             mov dword ptr [esp + 0x40], ecx
// 007628c3  eb0d                 jmp 0x7628d2
// 007628c5  6a10                 push 0x10
// 007628c7  ffd5                 call ebp
// 007628c9  99                   cdq 
// 007628ca  2bc2                 sub eax, edx
// 007628cc  d1f8                 sar eax, 1
// 007628ce  89442440             mov dword ptr [esp + 0x40], eax
// 007628d2  8b542428             mov edx, dword ptr [esp + 0x28]
// 007628d6  db442440             fild dword ptr [esp + 0x40]
// 007628da  2b542410             sub edx, dword ptr [esp + 0x10]
// 007628de  51                   push ecx
// 007628df  d95c2444             fstp dword ptr [esp + 0x44]
// 007628e3  89542440             mov dword ptr [esp + 0x40], edx
// 007628e7  db442440             fild dword ptr [esp + 0x40]
// 007628eb  d8742444             fdiv dword ptr [esp + 0x44]
// 007628ef  d95c2440             fstp dword ptr [esp + 0x40]
// 007628f3  d9442440             fld dword ptr [esp + 0x40]
// 007628f7  d91c24               fstp dword ptr [esp]
// 007628fa  56                   push esi
// 007628fb  57                   push edi
// 007628fc  e8cf72f9ff           call 0x6f9bd0
// 00762901  8bc8                 mov ecx, eax
// 00762903  e81843f9ff           call 0x6f6c20
// 00762908  8bd8                 mov ebx, eax
// 0076290a  8b442430             mov eax, dword ptr [esp + 0x30]
// 0076290e  2b442410             sub eax, dword ptr [esp + 0x10]
// 00762912  51                   push ecx
// 00762913  89442440             mov dword ptr [esp + 0x40], eax
// 00762917  db442440             fild dword ptr [esp + 0x40]
// 0076291b  d8742444             fdiv dword ptr [esp + 0x44]
// 0076291f  d95c2444             fstp dword ptr [esp + 0x44]
// 00762923  d9442444             fld dword ptr [esp + 0x44]
// 00762927  d91c24               fstp dword ptr [esp]
// 0076292a  56                   push esi
// 0076292b  57                   push edi
// 0076292c  e89f72f9ff           call 0x6f9bd0
// 00762931  8bc8                 mov ecx, eax
// 00762933  e8e842f9ff           call 0x6f6c20
// 00762938  8b542424             mov edx, dword ptr [esp + 0x24]
// 0076293c  6a01                 push 1
// 0076293e  50                   push eax
// 0076293f  53                   push ebx
// 00762940  8d4c2434             lea ecx, [esp + 0x34]
// 00762944  51                   push ecx
// 00762945  52                   push edx
// 00762946  e88572f9ff           call 0x6f9bd0
// 0076294b  8bc8                 mov ecx, eax
// 0076294d  e8ae72f9ff           call 0x6f9c00
// 00762952  5d                   pop ebp
// 00762953  5b                   pop ebx
// 00762954  5f                   pop edi
// 00762955  5e                   pop esi
// 00762956  83c410               add esp, 0x10
// 00762959  c3                   ret 
// 0076295a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0076295e  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00762962  8b542428             mov edx, dword ptr [esp + 0x28]
// 00762966  2bc8                 sub ecx, eax
// 00762968  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0076296c  db44243c             fild dword ptr [esp + 0x3c]
// 00762970  2bd0                 sub edx, eax
// 00762972  89542438             mov dword ptr [esp + 0x38], edx
// 00762976  51                   push ecx
// 00762977  d95c2440             fstp dword ptr [esp + 0x40]
// 0076297b  db44243c             fild dword ptr [esp + 0x3c]
// 0076297f  d8742440             fdiv dword ptr [esp + 0x40]
// 00762983  d95c243c             fstp dword ptr [esp + 0x3c]
// 00762987  d944243c             fld dword ptr [esp + 0x3c]
// 0076298b  d91c24               fstp dword ptr [esp]
// 0076298e  56                   push esi
// 0076298f  57                   push edi
// 00762990  e83b72f9ff           call 0x6f9bd0
// 00762995  8bc8                 mov ecx, eax
// 00762997  e88442f9ff           call 0x6f6c20
// 0076299c  8bd8                 mov ebx, eax
// 0076299e  8b442430             mov eax, dword ptr [esp + 0x30]
// 007629a2  2b442410             sub eax, dword ptr [esp + 0x10]
// 007629a6  51                   push ecx
// 007629a7  8944243c             mov dword ptr [esp + 0x3c], eax
// 007629ab  db44243c             fild dword ptr [esp + 0x3c]
// 007629af  d8742440             fdiv dword ptr [esp + 0x40]
// 007629b3  d95c2440             fstp dword ptr [esp + 0x40]
// 007629b7  d9442440             fld dword ptr [esp + 0x40]
// 007629bb  d91c24               fstp dword ptr [esp]
// 007629be  56                   push esi
// 007629bf  57                   push edi
// 007629c0  e80b72f9ff           call 0x6f9bd0
// 007629c5  8bc8                 mov ecx, eax
// 007629c7  e85442f9ff           call 0x6f6c20
// 007629cc  8b542420             mov edx, dword ptr [esp + 0x20]
// 007629d0  6a00                 push 0
// 007629d2  50                   push eax
// 007629d3  53                   push ebx
// 007629d4  8d4c2430             lea ecx, [esp + 0x30]
// 007629d8  51                   push ecx
// 007629d9  52                   push edx
// 007629da  e8f171f9ff           call 0x6f9bd0
// 007629df  8bc8                 mov ecx, eax
// 007629e1  e81a72f9ff           call 0x6f9c00
// 007629e6  5b                   pop ebx
// 007629e7  5f                   pop edi
// 007629e8  5e                   pop esi
// 007629e9  83c410               add esp, 0x10
// 007629ec  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?XTPFillFramePartRect@@YAXPAVCDC@@VCRect@@PAVCWnd@@2ABVCXTPPaintManagerColorGradient@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
