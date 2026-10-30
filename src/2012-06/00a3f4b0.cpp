// roc 2012-06 00a3f4b0  unit: XTPDockingPanePaintThemes::CXTPDockingPaneWhidbeyTheme::CColorSetVisualStudio2005  size: 461 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3f4b0
//
// 00a3f4b0  8b442420             mov eax, dword ptr [esp + 0x20]
// 00a3f4b4  83ec10               sub esp, 0x10
// 00a3f4b7  56                   push esi
// 00a3f4b8  57                   push edi
// 00a3f4b9  8b7818               mov edi, dword ptr [eax + 0x18]
// 00a3f4bc  83ffff               cmp edi, -1
// 00a3f4bf  7503                 jne 0xa3f4c4
// 00a3f4c1  8b7814               mov edi, dword ptr [eax + 0x14]
// 00a3f4c4  8b700c               mov esi, dword ptr [eax + 0xc]
// 00a3f4c7  83feff               cmp esi, -1
// 00a3f4ca  7503                 jne 0xa3f4cf
// 00a3f4cc  8b7008               mov esi, dword ptr [eax + 8]
// 00a3f4cf  e88ce3f7ff           call 0x9bd860
// 00a3f4d4  6a00                 push 0
// 00a3f4d6  8bc8                 mov ecx, eax
// 00a3f4d8  e8c3dcf7ff           call 0x9bd1a0
// 00a3f4dd  85c0                 test eax, eax
// 00a3f4df  7415                 je 0xa3f4f6
// 00a3f4e1  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a3f4e5  56                   push esi
// 00a3f4e6  8d442424             lea eax, [esp + 0x24]
// 00a3f4ea  50                   push eax
// 00a3f4eb  e8bc39f4ff           call 0x982eac
// 00a3f4f0  5f                   pop edi
// 00a3f4f1  5e                   pop esi
// 00a3f4f2  83c410               add esp, 0x10
// 00a3f4f5  c3                   ret 
// 00a3f4f6  8b442434             mov eax, dword ptr [esp + 0x34]
// 00a3f4fa  85c0                 test eax, eax
// 00a3f4fc  0f8475010000         je 0xa3f677
// 00a3f502  8b5020               mov edx, dword ptr [eax + 0x20]
// 00a3f505  53                   push ebx
// 00a3f506  8d4c240c             lea ecx, [esp + 0xc]
// 00a3f50a  51                   push ecx
// 00a3f50b  52                   push edx
// 00a3f50c  ff15f83ab200         call dword ptr [0xb23af8]
// 00a3f512  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00a3f516  8d44240c             lea eax, [esp + 0xc]
// 00a3f51a  50                   push eax
// 00a3f51b  e87e3bf4ff           call 0x98309e
// 00a3f520  837c244000           cmp dword ptr [esp + 0x40], 0
// 00a3f525  0f84bf000000         je 0xa3f5ea
// 00a3f52b  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00a3f52f  2b5c240c             sub ebx, dword ptr [esp + 0xc]
// 00a3f533  55                   push ebp
// 00a3f534  8b2dfc3bb200         mov ebp, dword ptr [0xb23bfc]
// 00a3f53a  6a10                 push 0x10
// 00a3f53c  ffd5                 call ebp
// 00a3f53e  99                   cdq 
// 00a3f53f  2bc2                 sub eax, edx
// 00a3f541  d1f8                 sar eax, 1
// 00a3f543  3bd8                 cmp ebx, eax
// 00a3f545  7e0e                 jle 0xa3f555
// 00a3f547  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a3f54b  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 00a3f54f  894c2440             mov dword ptr [esp + 0x40], ecx
// 00a3f553  eb0d                 jmp 0xa3f562
// 00a3f555  6a10                 push 0x10
// 00a3f557  ffd5                 call ebp
// 00a3f559  99                   cdq 
// 00a3f55a  2bc2                 sub eax, edx
// 00a3f55c  d1f8                 sar eax, 1
// 00a3f55e  89442440             mov dword ptr [esp + 0x40], eax
// 00a3f562  8b542428             mov edx, dword ptr [esp + 0x28]
// 00a3f566  db442440             fild dword ptr [esp + 0x40]
// 00a3f56a  2b542410             sub edx, dword ptr [esp + 0x10]
// 00a3f56e  51                   push ecx
// 00a3f56f  d95c2444             fstp dword ptr [esp + 0x44]
// 00a3f573  89542440             mov dword ptr [esp + 0x40], edx
// 00a3f577  db442440             fild dword ptr [esp + 0x40]
// 00a3f57b  d8742444             fdiv dword ptr [esp + 0x44]
// 00a3f57f  d95c2440             fstp dword ptr [esp + 0x40]
// 00a3f583  d9442440             fld dword ptr [esp + 0x40]
// 00a3f587  d91c24               fstp dword ptr [esp]
// 00a3f58a  56                   push esi
// 00a3f58b  57                   push edi
// 00a3f58c  e8ff7bf9ff           call 0x9d7190
// 00a3f591  8bc8                 mov ecx, eax
// 00a3f593  e8b84cf9ff           call 0x9d4250
// 00a3f598  8bd8                 mov ebx, eax
// 00a3f59a  8b442430             mov eax, dword ptr [esp + 0x30]
// 00a3f59e  2b442410             sub eax, dword ptr [esp + 0x10]
// 00a3f5a2  51                   push ecx
// 00a3f5a3  89442440             mov dword ptr [esp + 0x40], eax
// 00a3f5a7  db442440             fild dword ptr [esp + 0x40]
// 00a3f5ab  d8742444             fdiv dword ptr [esp + 0x44]
// 00a3f5af  d95c2444             fstp dword ptr [esp + 0x44]
// 00a3f5b3  d9442444             fld dword ptr [esp + 0x44]
// 00a3f5b7  d91c24               fstp dword ptr [esp]
// 00a3f5ba  56                   push esi
// 00a3f5bb  57                   push edi
// 00a3f5bc  e8cf7bf9ff           call 0x9d7190
// 00a3f5c1  8bc8                 mov ecx, eax
// 00a3f5c3  e8884cf9ff           call 0x9d4250
// 00a3f5c8  8b542424             mov edx, dword ptr [esp + 0x24]
// 00a3f5cc  6a01                 push 1
// 00a3f5ce  50                   push eax
// 00a3f5cf  53                   push ebx
// 00a3f5d0  8d4c2434             lea ecx, [esp + 0x34]
// 00a3f5d4  51                   push ecx
// 00a3f5d5  52                   push edx
// 00a3f5d6  e8b57bf9ff           call 0x9d7190
// 00a3f5db  8bc8                 mov ecx, eax
// 00a3f5dd  e8de7bf9ff           call 0x9d71c0
// 00a3f5e2  5d                   pop ebp
// 00a3f5e3  5b                   pop ebx
// 00a3f5e4  5f                   pop edi
// 00a3f5e5  5e                   pop esi
// 00a3f5e6  83c410               add esp, 0x10
// 00a3f5e9  c3                   ret 
// 00a3f5ea  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a3f5ee  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a3f5f2  8b542428             mov edx, dword ptr [esp + 0x28]
// 00a3f5f6  2bc8                 sub ecx, eax
// 00a3f5f8  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00a3f5fc  db44243c             fild dword ptr [esp + 0x3c]
// 00a3f600  2bd0                 sub edx, eax
// 00a3f602  89542438             mov dword ptr [esp + 0x38], edx
// 00a3f606  51                   push ecx
// 00a3f607  d95c2440             fstp dword ptr [esp + 0x40]
// 00a3f60b  db44243c             fild dword ptr [esp + 0x3c]
// 00a3f60f  d8742440             fdiv dword ptr [esp + 0x40]
// 00a3f613  d95c243c             fstp dword ptr [esp + 0x3c]
// 00a3f617  d944243c             fld dword ptr [esp + 0x3c]
// 00a3f61b  d91c24               fstp dword ptr [esp]
// 00a3f61e  56                   push esi
// 00a3f61f  57                   push edi
// 00a3f620  e86b7bf9ff           call 0x9d7190
// 00a3f625  8bc8                 mov ecx, eax
// 00a3f627  e8244cf9ff           call 0x9d4250
// 00a3f62c  8bd8                 mov ebx, eax
// 00a3f62e  8b442430             mov eax, dword ptr [esp + 0x30]
// 00a3f632  2b442410             sub eax, dword ptr [esp + 0x10]
// 00a3f636  51                   push ecx
// 00a3f637  8944243c             mov dword ptr [esp + 0x3c], eax
// 00a3f63b  db44243c             fild dword ptr [esp + 0x3c]
// 00a3f63f  d8742440             fdiv dword ptr [esp + 0x40]
// 00a3f643  d95c2440             fstp dword ptr [esp + 0x40]
// 00a3f647  d9442440             fld dword ptr [esp + 0x40]
// 00a3f64b  d91c24               fstp dword ptr [esp]
// 00a3f64e  56                   push esi
// 00a3f64f  57                   push edi
// 00a3f650  e83b7bf9ff           call 0x9d7190
// 00a3f655  8bc8                 mov ecx, eax
// 00a3f657  e8f44bf9ff           call 0x9d4250
// 00a3f65c  8b542420             mov edx, dword ptr [esp + 0x20]
// 00a3f660  6a00                 push 0
// 00a3f662  50                   push eax
// 00a3f663  53                   push ebx
// 00a3f664  8d4c2430             lea ecx, [esp + 0x30]
// 00a3f668  51                   push ecx
// 00a3f669  52                   push edx
// 00a3f66a  e8217bf9ff           call 0x9d7190
// 00a3f66f  8bc8                 mov ecx, eax
// 00a3f671  e84a7bf9ff           call 0x9d71c0
// 00a3f676  5b                   pop ebx
// 00a3f677  5f                   pop edi
// 00a3f678  5e                   pop esi
// 00a3f679  83c410               add esp, 0x10
// 00a3f67c  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?XTPFillFramePartRect@@YAXPAVCDC@@VCRect@@PAVCWnd@@2ABVCXTPPaintManagerColorGradient@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
