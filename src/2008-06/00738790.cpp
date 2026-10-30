// from server: 100% by auto
// roc 2008-06 00738790  unit: CXTPOffice2007Theme  size: 133 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00738790
//
// 00738790  83ec10               sub esp, 0x10
// 00738793  8b442420             mov eax, dword ptr [esp + 0x20]
// 00738797  53                   push ebx
// 00738798  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0073879c  55                   push ebp
// 0073879d  bd03000000           mov ebp, 3
// 007387a2  56                   push esi
// 007387a3  83c0fd               add eax, -3
// 007387a6  83c3fd               add ebx, -3
// 007387a9  57                   push edi
// 007387aa  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 007387ae  894c2414             mov dword ptr [esp + 0x14], ecx
// 007387b2  89442418             mov dword ptr [esp + 0x18], eax
// 007387b6  896c2410             mov dword ptr [esp + 0x10], ebp
// 007387ba  85ed                 test ebp, ebp
// 007387bc  7e41                 jle 0x7387ff
// 007387be  8b742418             mov esi, dword ptr [esp + 0x18]
// 007387c2  68ffffff00           push 0xffffff
// 007387c7  6a02                 push 2
// 007387c9  6a02                 push 2
// 007387cb  8d4301               lea eax, [ebx + 1]
// 007387ce  50                   push eax
// 007387cf  8d4e01               lea ecx, [esi + 1]
// 007387d2  51                   push ecx
// 007387d3  8bcf                 mov ecx, edi
// 007387d5  e866380800           call 0x7bc040
// 007387da  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007387de  6a27                 push 0x27
// 007387e0  e88b58f7ff           call 0x6ae070
// 007387e5  50                   push eax
// 007387e6  6a02                 push 2
// 007387e8  6a02                 push 2
// 007387ea  53                   push ebx
// 007387eb  56                   push esi
// 007387ec  8bcf                 mov ecx, edi
// 007387ee  e84d380800           call 0x7bc040
// 007387f3  83ee04               sub esi, 4
// 007387f6  83ed01               sub ebp, 1
// 007387f9  75c7                 jne 0x7387c2
// 007387fb  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 007387ff  4d                   dec ebp
// 00738800  83eb04               sub ebx, 4
// 00738803  896c2410             mov dword ptr [esp + 0x10], ebp
// 00738807  85ed                 test ebp, ebp
// 00738809  7fb3                 jg 0x7387be
// 0073880b  5f                   pop edi
// 0073880c  5e                   pop esi
// 0073880d  5d                   pop ebp
// 0073880e  5b                   pop ebx
// 0073880f  83c410               add esp, 0x10
// 00738812  c21400               ret 0x14
// library xtp-11.2.2/Source\CommandBars\XTPOffice2007Theme.cpp (function ?DrawStatusBarGripper@CXTPOffice2007Theme@@MAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPOffice2007Theme.cpp
