// roc 2009-06 0072a0f0  unit: CXTPCommandBarKeyboardTip  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0072a0f0
//
// 0072a0f0  8b442404             mov eax, dword ptr [esp + 4]
// 0072a0f4  56                   push esi
// 0072a0f5  8bf1                 mov esi, ecx
// 0072a0f7  57                   push edi
// 0072a0f8  8b7e58               mov edi, dword ptr [esi + 0x58]
// 0072a0fb  3bf8                 cmp edi, eax
// 0072a0fd  7432                 je 0x72a131
// 0072a0ff  894658               mov dword ptr [esi + 0x58], eax
// 0072a102  85ff                 test edi, edi
// 0072a104  7410                 je 0x72a116
// 0072a106  6a01                 push 1
// 0072a108  8bcf                 mov ecx, edi
// 0072a10a  e8a15effff           call 0x71ffb0
// 0072a10f  8bcf                 mov ecx, edi
// 0072a111  e892eefeff           call 0x718fa8
// 0072a116  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 0072a119  85c9                 test ecx, ecx
// 0072a11b  7414                 je 0x72a131
// 0072a11d  6a00                 push 0
// 0072a11f  e88c5effff           call 0x71ffb0
// 0072a124  8b4658               mov eax, dword ptr [esi + 0x58]
// 0072a127  83c004               add eax, 4
// 0072a12a  50                   push eax
// 0072a12b  ff15d0e18900         call dword ptr [0x89e1d0]
// 0072a131  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 0072a134  8b4114               mov eax, dword ptr [ecx + 0x14]
// 0072a137  85c0                 test eax, eax
// 0072a139  7404                 je 0x72a13f
// 0072a13b  8bf0                 mov esi, eax
// 0072a13d  eb06                 jmp 0x72a145
// 0072a13f  8bb6a0000000         mov esi, dword ptr [esi + 0xa0]
// 0072a145  85f6                 test esi, esi
// 0072a147  7417                 je 0x72a160
// 0072a149  8b7620               mov esi, dword ptr [esi + 0x20]
// 0072a14c  85f6                 test esi, esi
// 0072a14e  7410                 je 0x72a160
// 0072a150  6a00                 push 0
// 0072a152  6a00                 push 0
// 0072a154  6857280000           push 0x2857
// 0072a159  56                   push esi
// 0072a15a  ff1590ee8900         call dword ptr [0x89ee90]
// 0072a160  5f                   pop edi
// 0072a161  5e                   pop esi
// 0072a162  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPCommandBars.cpp (function ?SetDragControl@CXTPCommandBars@@QAEXPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCommandBars.cpp
