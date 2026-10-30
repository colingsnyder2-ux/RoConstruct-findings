// roc 2007-03 007221b0  unit: seg_00720000  size: 196 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007221b0
//
// 007221b0  83ec10               sub esp, 0x10
// 007221b3  53                   push ebx
// 007221b4  57                   push edi
// 007221b5  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 007221b9  85ff                 test edi, edi
// 007221bb  8bd9                 mov ebx, ecx
// 007221bd  0f84a9000000         je 0x72226c
// 007221c3  837b1400             cmp dword ptr [ebx + 0x14], 0
// 007221c7  0f849f000000         je 0x72226c
// 007221cd  56                   push esi
// 007221ce  8bcf                 mov ecx, edi
// 007221d0  e8cb3bfeff           call 0x705da0
// 007221d5  8bf0                 mov esi, eax
// 007221d7  85f6                 test esi, esi
// 007221d9  0f848c000000         je 0x72226b
// 007221df  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007221e3  8b542424             mov edx, dword ptr [esp + 0x24]
// 007221e7  8b03                 mov eax, dword ptr [ebx]
// 007221e9  55                   push ebp
// 007221ea  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 007221ee  57                   push edi
// 007221ef  6a00                 push 0
// 007221f1  51                   push ecx
// 007221f2  52                   push edx
// 007221f3  8b5050               mov edx, dword ptr [eax + 0x50]
// 007221f6  55                   push ebp
// 007221f7  8d4c2424             lea ecx, [esp + 0x24]
// 007221fb  51                   push ecx
// 007221fc  8bcb                 mov ecx, ebx
// 007221fe  ffd2                 call edx
// 00722200  8a442428             mov al, byte ptr [esp + 0x28]
// 00722204  a804                 test al, 4
// 00722206  8bcf                 mov ecx, edi
// 00722208  741c                 je 0x722226
// 0072220a  8d442418             lea eax, [esp + 0x18]
// 0072220e  50                   push eax
// 0072220f  e88c40feff           call 0x7062a0
// 00722214  8b4804               mov ecx, dword ptr [eax + 4]
// 00722217  8b10                 mov edx, dword ptr [eax]
// 00722219  51                   push ecx
// 0072221a  52                   push edx
// 0072221b  6a01                 push 1
// 0072221d  8bce                 mov ecx, esi
// 0072221f  e85c74f0ff           call 0x629680
// 00722224  eb31                 jmp 0x722257
// 00722226  a801                 test al, 1
// 00722228  8d542418             lea edx, [esp + 0x18]
// 0072222c  52                   push edx
// 0072222d  7415                 je 0x722244
// 0072222f  e86c40feff           call 0x7062a0
// 00722234  8b4804               mov ecx, dword ptr [eax + 4]
// 00722237  8b10                 mov edx, dword ptr [eax]
// 00722239  51                   push ecx
// 0072223a  52                   push edx
// 0072223b  8bce                 mov ecx, esi
// 0072223d  e88e2ef0ff           call 0x6250d0
// 00722242  eb13                 jmp 0x722257
// 00722244  e85740feff           call 0x7062a0
// 00722249  8b4804               mov ecx, dword ptr [eax + 4]
// 0072224c  8b10                 mov edx, dword ptr [eax]
// 0072224e  51                   push ecx
// 0072224f  52                   push edx
// 00722250  8bce                 mov ecx, esi
// 00722252  e8292ef0ff           call 0x625080
// 00722257  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0072225b  50                   push eax
// 0072225c  8b442420             mov eax, dword ptr [esp + 0x20]
// 00722260  50                   push eax
// 00722261  51                   push ecx
// 00722262  55                   push ebp
// 00722263  8bce                 mov ecx, esi
// 00722265  e8f674f0ff           call 0x629760
// 0072226a  5d                   pop ebp
// 0072226b  5e                   pop esi
// 0072226c  5f                   pop edi
// 0072226d  5b                   pop ebx
// 0072226e  83c410               add esp, 0x10
// 00722271  c21000               ret 0x10
// library xtp-11.2.2-vc8/Source\Controls\XTButtonTheme.cpp (function ?DrawButtonIcon@CXTButtonThemeOffice2003@@MAEXPAVCDC@@IAAVCRect@@PAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTButtonTheme.cpp
