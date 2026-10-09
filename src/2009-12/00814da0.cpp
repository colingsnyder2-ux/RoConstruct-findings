// roc 2009-12 00814da0  unit: CXTPCommandBarKeyboardTip  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00814da0
//
// 00814da0  8b442404             mov eax, dword ptr [esp + 4]
// 00814da4  56                   push esi
// 00814da5  8bf1                 mov esi, ecx
// 00814da7  57                   push edi
// 00814da8  8b7e58               mov edi, dword ptr [esi + 0x58]
// 00814dab  3bf8                 cmp edi, eax
// 00814dad  7432                 je 0x814de1
// 00814daf  894658               mov dword ptr [esi + 0x58], eax
// 00814db2  85ff                 test edi, edi
// 00814db4  7410                 je 0x814dc6
// 00814db6  6a01                 push 1
// 00814db8  8bcf                 mov ecx, edi
// 00814dba  e80119feff           call 0x7f66c0
// 00814dbf  8bcf                 mov ecx, edi
// 00814dc1  e816f0fdff           call 0x7f3ddc
// 00814dc6  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 00814dc9  85c9                 test ecx, ecx
// 00814dcb  7414                 je 0x814de1
// 00814dcd  6a00                 push 0
// 00814dcf  e8ec18feff           call 0x7f66c0
// 00814dd4  8b4658               mov eax, dword ptr [esi + 0x58]
// 00814dd7  83c004               add eax, 4
// 00814dda  50                   push eax
// 00814ddb  ff150cb29800         call dword ptr [0x98b20c]
// 00814de1  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 00814de4  8b4114               mov eax, dword ptr [ecx + 0x14]
// 00814de7  85c0                 test eax, eax
// 00814de9  7404                 je 0x814def
// 00814deb  8bf0                 mov esi, eax
// 00814ded  eb06                 jmp 0x814df5
// 00814def  8bb6a0000000         mov esi, dword ptr [esi + 0xa0]
// 00814df5  85f6                 test esi, esi
// 00814df7  7417                 je 0x814e10
// 00814df9  8b7620               mov esi, dword ptr [esi + 0x20]
// 00814dfc  85f6                 test esi, esi
// 00814dfe  7410                 je 0x814e10
// 00814e00  6a00                 push 0
// 00814e02  6a00                 push 0
// 00814e04  6857280000           push 0x2857
// 00814e09  56                   push esi
// 00814e0a  ff15c4cb9800         call dword ptr [0x98cbc4]
// 00814e10  5f                   pop edi
// 00814e11  5e                   pop esi
// 00814e12  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPCommandBars.cpp (function ?SetDragControl@CXTPCommandBars@@QAEXPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCommandBars.cpp
