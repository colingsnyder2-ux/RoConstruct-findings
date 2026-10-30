// roc 2010-06 00869c40  unit: XTPDockingPanePaintThemes::CXTPDockingPaneWhidbeyTheme::CColorSetVisualStudio2005  size: 461 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00869c40
//
// 00869c40  8b442420             mov eax, dword ptr [esp + 0x20]
// 00869c44  83ec10               sub esp, 0x10
// 00869c47  56                   push esi
// 00869c48  57                   push edi
// 00869c49  8b7818               mov edi, dword ptr [eax + 0x18]
// 00869c4c  83ffff               cmp edi, -1
// 00869c4f  7503                 jne 0x869c54
// 00869c51  8b7814               mov edi, dword ptr [eax + 0x14]
// 00869c54  8b700c               mov esi, dword ptr [eax + 0xc]
// 00869c57  83feff               cmp esi, -1
// 00869c5a  7503                 jne 0x869c5f
// 00869c5c  8b7008               mov esi, dword ptr [eax + 8]
// 00869c5f  e8bc9ef7ff           call 0x7e3b20
// 00869c64  6a00                 push 0
// 00869c66  8bc8                 mov ecx, eax
// 00869c68  e80398f7ff           call 0x7e3470
// 00869c6d  85c0                 test eax, eax
// 00869c6f  7415                 je 0x869c86
// 00869c71  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00869c75  56                   push esi
// 00869c76  8d442424             lea eax, [esp + 0x24]
// 00869c7a  50                   push eax
// 00869c7b  e8beeaf3ff           call 0x7a873e
// 00869c80  5f                   pop edi
// 00869c81  5e                   pop esi
// 00869c82  83c410               add esp, 0x10
// 00869c85  c3                   ret 
// 00869c86  8b442434             mov eax, dword ptr [esp + 0x34]
// 00869c8a  85c0                 test eax, eax
// 00869c8c  0f8475010000         je 0x869e07
// 00869c92  8b5020               mov edx, dword ptr [eax + 0x20]
// 00869c95  53                   push ebx
// 00869c96  8d4c240c             lea ecx, [esp + 0xc]
// 00869c9a  51                   push ecx
// 00869c9b  52                   push edx
// 00869c9c  ff153cbc9e00         call dword ptr [0x9ebc3c]
// 00869ca2  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00869ca6  8d44240c             lea eax, [esp + 0xc]
// 00869caa  50                   push eax
// 00869cab  e862ecf3ff           call 0x7a8912
// 00869cb0  837c244000           cmp dword ptr [esp + 0x40], 0
// 00869cb5  0f84bf000000         je 0x869d7a
// 00869cbb  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00869cbf  2b5c240c             sub ebx, dword ptr [esp + 0xc]
// 00869cc3  55                   push ebp
// 00869cc4  8b2d6cba9e00         mov ebp, dword ptr [0x9eba6c]
// 00869cca  6a10                 push 0x10
// 00869ccc  ffd5                 call ebp
// 00869cce  99                   cdq 
// 00869ccf  2bc2                 sub eax, edx
// 00869cd1  d1f8                 sar eax, 1
// 00869cd3  3bd8                 cmp ebx, eax
// 00869cd5  7e0e                 jle 0x869ce5
// 00869cd7  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00869cdb  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 00869cdf  894c2440             mov dword ptr [esp + 0x40], ecx
// 00869ce3  eb0d                 jmp 0x869cf2
// 00869ce5  6a10                 push 0x10
// 00869ce7  ffd5                 call ebp
// 00869ce9  99                   cdq 
// 00869cea  2bc2                 sub eax, edx
// 00869cec  d1f8                 sar eax, 1
// 00869cee  89442440             mov dword ptr [esp + 0x40], eax
// 00869cf2  8b542428             mov edx, dword ptr [esp + 0x28]
// 00869cf6  db442440             fild dword ptr [esp + 0x40]
// 00869cfa  2b542410             sub edx, dword ptr [esp + 0x10]
// 00869cfe  51                   push ecx
// 00869cff  d95c2444             fstp dword ptr [esp + 0x44]
// 00869d03  89542440             mov dword ptr [esp + 0x40], edx
// 00869d07  db442440             fild dword ptr [esp + 0x40]
// 00869d0b  d8742444             fdiv dword ptr [esp + 0x44]
// 00869d0f  d95c2440             fstp dword ptr [esp + 0x40]
// 00869d13  d9442440             fld dword ptr [esp + 0x40]
// 00869d17  d91c24               fstp dword ptr [esp]
// 00869d1a  56                   push esi
// 00869d1b  57                   push edi
// 00869d1c  e8df75f9ff           call 0x801300
// 00869d21  8bc8                 mov ecx, eax
// 00869d23  e8c846f9ff           call 0x7fe3f0
// 00869d28  8bd8                 mov ebx, eax
// 00869d2a  8b442430             mov eax, dword ptr [esp + 0x30]
// 00869d2e  2b442410             sub eax, dword ptr [esp + 0x10]
// 00869d32  51                   push ecx
// 00869d33  89442440             mov dword ptr [esp + 0x40], eax
// 00869d37  db442440             fild dword ptr [esp + 0x40]
// 00869d3b  d8742444             fdiv dword ptr [esp + 0x44]
// 00869d3f  d95c2444             fstp dword ptr [esp + 0x44]
// 00869d43  d9442444             fld dword ptr [esp + 0x44]
// 00869d47  d91c24               fstp dword ptr [esp]
// 00869d4a  56                   push esi
// 00869d4b  57                   push edi
// 00869d4c  e8af75f9ff           call 0x801300
// 00869d51  8bc8                 mov ecx, eax
// 00869d53  e89846f9ff           call 0x7fe3f0
// 00869d58  8b542424             mov edx, dword ptr [esp + 0x24]
// 00869d5c  6a01                 push 1
// 00869d5e  50                   push eax
// 00869d5f  53                   push ebx
// 00869d60  8d4c2434             lea ecx, [esp + 0x34]
// 00869d64  51                   push ecx
// 00869d65  52                   push edx
// 00869d66  e89575f9ff           call 0x801300
// 00869d6b  8bc8                 mov ecx, eax
// 00869d6d  e8be75f9ff           call 0x801330
// 00869d72  5d                   pop ebp
// 00869d73  5b                   pop ebx
// 00869d74  5f                   pop edi
// 00869d75  5e                   pop esi
// 00869d76  83c410               add esp, 0x10
// 00869d79  c3                   ret 
// 00869d7a  8b442410             mov eax, dword ptr [esp + 0x10]
// 00869d7e  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00869d82  8b542428             mov edx, dword ptr [esp + 0x28]
// 00869d86  2bc8                 sub ecx, eax
// 00869d88  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00869d8c  db44243c             fild dword ptr [esp + 0x3c]
// 00869d90  2bd0                 sub edx, eax
// 00869d92  89542438             mov dword ptr [esp + 0x38], edx
// 00869d96  51                   push ecx
// 00869d97  d95c2440             fstp dword ptr [esp + 0x40]
// 00869d9b  db44243c             fild dword ptr [esp + 0x3c]
// 00869d9f  d8742440             fdiv dword ptr [esp + 0x40]
// 00869da3  d95c243c             fstp dword ptr [esp + 0x3c]
// 00869da7  d944243c             fld dword ptr [esp + 0x3c]
// 00869dab  d91c24               fstp dword ptr [esp]
// 00869dae  56                   push esi
// 00869daf  57                   push edi
// 00869db0  e84b75f9ff           call 0x801300
// 00869db5  8bc8                 mov ecx, eax
// 00869db7  e83446f9ff           call 0x7fe3f0
// 00869dbc  8bd8                 mov ebx, eax
// 00869dbe  8b442430             mov eax, dword ptr [esp + 0x30]
// 00869dc2  2b442410             sub eax, dword ptr [esp + 0x10]
// 00869dc6  51                   push ecx
// 00869dc7  8944243c             mov dword ptr [esp + 0x3c], eax
// 00869dcb  db44243c             fild dword ptr [esp + 0x3c]
// 00869dcf  d8742440             fdiv dword ptr [esp + 0x40]
// 00869dd3  d95c2440             fstp dword ptr [esp + 0x40]
// 00869dd7  d9442440             fld dword ptr [esp + 0x40]
// 00869ddb  d91c24               fstp dword ptr [esp]
// 00869dde  56                   push esi
// 00869ddf  57                   push edi
// 00869de0  e81b75f9ff           call 0x801300
// 00869de5  8bc8                 mov ecx, eax
// 00869de7  e80446f9ff           call 0x7fe3f0
// 00869dec  8b542420             mov edx, dword ptr [esp + 0x20]
// 00869df0  6a00                 push 0
// 00869df2  50                   push eax
// 00869df3  53                   push ebx
// 00869df4  8d4c2430             lea ecx, [esp + 0x30]
// 00869df8  51                   push ecx
// 00869df9  52                   push edx
// 00869dfa  e80175f9ff           call 0x801300
// 00869dff  8bc8                 mov ecx, eax
// 00869e01  e82a75f9ff           call 0x801330
// 00869e06  5b                   pop ebx
// 00869e07  5f                   pop edi
// 00869e08  5e                   pop esi
// 00869e09  83c410               add esp, 0x10
// 00869e0c  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?XTPFillFramePartRect@@YAXPAVCDC@@VCRect@@PAVCWnd@@2ABVCXTPPaintManagerColorGradient@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
