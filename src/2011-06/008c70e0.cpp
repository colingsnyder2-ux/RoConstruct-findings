// roc 2011-06 008c70e0  unit: XTPDockingPanePaintThemes::CXTPDockingPaneWhidbeyTheme::CColorSetVisualStudio2005  size: 461 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c70e0
//
// 008c70e0  8b442420             mov eax, dword ptr [esp + 0x20]
// 008c70e4  83ec10               sub esp, 0x10
// 008c70e7  56                   push esi
// 008c70e8  57                   push edi
// 008c70e9  8b7818               mov edi, dword ptr [eax + 0x18]
// 008c70ec  83ffff               cmp edi, -1
// 008c70ef  7503                 jne 0x8c70f4
// 008c70f1  8b7814               mov edi, dword ptr [eax + 0x14]
// 008c70f4  8b700c               mov esi, dword ptr [eax + 0xc]
// 008c70f7  83feff               cmp esi, -1
// 008c70fa  7503                 jne 0x8c70ff
// 008c70fc  8b7008               mov esi, dword ptr [eax + 8]
// 008c70ff  e8dce2f7ff           call 0x8453e0
// 008c7104  6a00                 push 0
// 008c7106  8bc8                 mov ecx, eax
// 008c7108  e863dcf7ff           call 0x844d70
// 008c710d  85c0                 test eax, eax
// 008c710f  7415                 je 0x8c7126
// 008c7111  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008c7115  56                   push esi
// 008c7116  8d442424             lea eax, [esp + 0x24]
// 008c711a  50                   push eax
// 008c711b  e8003df4ff           call 0x80ae20
// 008c7120  5f                   pop edi
// 008c7121  5e                   pop esi
// 008c7122  83c410               add esp, 0x10
// 008c7125  c3                   ret 
// 008c7126  8b442434             mov eax, dword ptr [esp + 0x34]
// 008c712a  85c0                 test eax, eax
// 008c712c  0f8475010000         je 0x8c72a7
// 008c7132  8b5020               mov edx, dword ptr [eax + 0x20]
// 008c7135  53                   push ebx
// 008c7136  8d4c240c             lea ecx, [esp + 0xc]
// 008c713a  51                   push ecx
// 008c713b  52                   push edx
// 008c713c  ff155c1ca400         call dword ptr [0xa41c5c]
// 008c7142  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008c7146  8d44240c             lea eax, [esp + 0xc]
// 008c714a  50                   push eax
// 008c714b  e8b63ef4ff           call 0x80b006
// 008c7150  837c244000           cmp dword ptr [esp + 0x40], 0
// 008c7155  0f84bf000000         je 0x8c721a
// 008c715b  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 008c715f  2b5c240c             sub ebx, dword ptr [esp + 0xc]
// 008c7163  55                   push ebp
// 008c7164  8b2de019a400         mov ebp, dword ptr [0xa419e0]
// 008c716a  6a10                 push 0x10
// 008c716c  ffd5                 call ebp
// 008c716e  99                   cdq 
// 008c716f  2bc2                 sub eax, edx
// 008c7171  d1f8                 sar eax, 1
// 008c7173  3bd8                 cmp ebx, eax
// 008c7175  7e0e                 jle 0x8c7185
// 008c7177  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008c717b  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 008c717f  894c2440             mov dword ptr [esp + 0x40], ecx
// 008c7183  eb0d                 jmp 0x8c7192
// 008c7185  6a10                 push 0x10
// 008c7187  ffd5                 call ebp
// 008c7189  99                   cdq 
// 008c718a  2bc2                 sub eax, edx
// 008c718c  d1f8                 sar eax, 1
// 008c718e  89442440             mov dword ptr [esp + 0x40], eax
// 008c7192  8b542428             mov edx, dword ptr [esp + 0x28]
// 008c7196  db442440             fild dword ptr [esp + 0x40]
// 008c719a  2b542410             sub edx, dword ptr [esp + 0x10]
// 008c719e  51                   push ecx
// 008c719f  d95c2444             fstp dword ptr [esp + 0x44]
// 008c71a3  89542440             mov dword ptr [esp + 0x40], edx
// 008c71a7  db442440             fild dword ptr [esp + 0x40]
// 008c71ab  d8742444             fdiv dword ptr [esp + 0x44]
// 008c71af  d95c2440             fstp dword ptr [esp + 0x40]
// 008c71b3  d9442440             fld dword ptr [esp + 0x40]
// 008c71b7  d91c24               fstp dword ptr [esp]
// 008c71ba  56                   push esi
// 008c71bb  57                   push edi
// 008c71bc  e8bf7bf9ff           call 0x85ed80
// 008c71c1  8bc8                 mov ecx, eax
// 008c71c3  e8a84cf9ff           call 0x85be70
// 008c71c8  8bd8                 mov ebx, eax
// 008c71ca  8b442430             mov eax, dword ptr [esp + 0x30]
// 008c71ce  2b442410             sub eax, dword ptr [esp + 0x10]
// 008c71d2  51                   push ecx
// 008c71d3  89442440             mov dword ptr [esp + 0x40], eax
// 008c71d7  db442440             fild dword ptr [esp + 0x40]
// 008c71db  d8742444             fdiv dword ptr [esp + 0x44]
// 008c71df  d95c2444             fstp dword ptr [esp + 0x44]
// 008c71e3  d9442444             fld dword ptr [esp + 0x44]
// 008c71e7  d91c24               fstp dword ptr [esp]
// 008c71ea  56                   push esi
// 008c71eb  57                   push edi
// 008c71ec  e88f7bf9ff           call 0x85ed80
// 008c71f1  8bc8                 mov ecx, eax
// 008c71f3  e8784cf9ff           call 0x85be70
// 008c71f8  8b542424             mov edx, dword ptr [esp + 0x24]
// 008c71fc  6a01                 push 1
// 008c71fe  50                   push eax
// 008c71ff  53                   push ebx
// 008c7200  8d4c2434             lea ecx, [esp + 0x34]
// 008c7204  51                   push ecx
// 008c7205  52                   push edx
// 008c7206  e8757bf9ff           call 0x85ed80
// 008c720b  8bc8                 mov ecx, eax
// 008c720d  e89e7bf9ff           call 0x85edb0
// 008c7212  5d                   pop ebp
// 008c7213  5b                   pop ebx
// 008c7214  5f                   pop edi
// 008c7215  5e                   pop esi
// 008c7216  83c410               add esp, 0x10
// 008c7219  c3                   ret 
// 008c721a  8b442410             mov eax, dword ptr [esp + 0x10]
// 008c721e  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008c7222  8b542428             mov edx, dword ptr [esp + 0x28]
// 008c7226  2bc8                 sub ecx, eax
// 008c7228  894c243c             mov dword ptr [esp + 0x3c], ecx
// 008c722c  db44243c             fild dword ptr [esp + 0x3c]
// 008c7230  2bd0                 sub edx, eax
// 008c7232  89542438             mov dword ptr [esp + 0x38], edx
// 008c7236  51                   push ecx
// 008c7237  d95c2440             fstp dword ptr [esp + 0x40]
// 008c723b  db44243c             fild dword ptr [esp + 0x3c]
// 008c723f  d8742440             fdiv dword ptr [esp + 0x40]
// 008c7243  d95c243c             fstp dword ptr [esp + 0x3c]
// 008c7247  d944243c             fld dword ptr [esp + 0x3c]
// 008c724b  d91c24               fstp dword ptr [esp]
// 008c724e  56                   push esi
// 008c724f  57                   push edi
// 008c7250  e82b7bf9ff           call 0x85ed80
// 008c7255  8bc8                 mov ecx, eax
// 008c7257  e8144cf9ff           call 0x85be70
// 008c725c  8bd8                 mov ebx, eax
// 008c725e  8b442430             mov eax, dword ptr [esp + 0x30]
// 008c7262  2b442410             sub eax, dword ptr [esp + 0x10]
// 008c7266  51                   push ecx
// 008c7267  8944243c             mov dword ptr [esp + 0x3c], eax
// 008c726b  db44243c             fild dword ptr [esp + 0x3c]
// 008c726f  d8742440             fdiv dword ptr [esp + 0x40]
// 008c7273  d95c2440             fstp dword ptr [esp + 0x40]
// 008c7277  d9442440             fld dword ptr [esp + 0x40]
// 008c727b  d91c24               fstp dword ptr [esp]
// 008c727e  56                   push esi
// 008c727f  57                   push edi
// 008c7280  e8fb7af9ff           call 0x85ed80
// 008c7285  8bc8                 mov ecx, eax
// 008c7287  e8e44bf9ff           call 0x85be70
// 008c728c  8b542420             mov edx, dword ptr [esp + 0x20]
// 008c7290  6a00                 push 0
// 008c7292  50                   push eax
// 008c7293  53                   push ebx
// 008c7294  8d4c2430             lea ecx, [esp + 0x30]
// 008c7298  51                   push ecx
// 008c7299  52                   push edx
// 008c729a  e8e17af9ff           call 0x85ed80
// 008c729f  8bc8                 mov ecx, eax
// 008c72a1  e80a7bf9ff           call 0x85edb0
// 008c72a6  5b                   pop ebx
// 008c72a7  5f                   pop edi
// 008c72a8  5e                   pop esi
// 008c72a9  83c410               add esp, 0x10
// 008c72ac  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?XTPFillFramePartRect@@YAXPAVCDC@@VCRect@@PAVCWnd@@2ABVCXTPPaintManagerColorGradient@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
