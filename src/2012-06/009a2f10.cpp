// roc 2012-06 009a2f10  unit: CXTPCommandBarKeyboardTip  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009a2f10
//
// 009a2f10  8b442404             mov eax, dword ptr [esp + 4]
// 009a2f14  56                   push esi
// 009a2f15  8bf1                 mov esi, ecx
// 009a2f17  57                   push edi
// 009a2f18  8b7e58               mov edi, dword ptr [esi + 0x58]
// 009a2f1b  3bf8                 cmp edi, eax
// 009a2f1d  7432                 je 0x9a2f51
// 009a2f1f  894658               mov dword ptr [esi + 0x58], eax
// 009a2f22  85ff                 test edi, edi
// 009a2f24  7410                 je 0x9a2f36
// 009a2f26  6a01                 push 1
// 009a2f28  8bcf                 mov ecx, edi
// 009a2f2a  e80121feff           call 0x985030
// 009a2f2f  8bcf                 mov ecx, edi
// 009a2f31  e854f7fdff           call 0x98268a
// 009a2f36  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 009a2f39  85c9                 test ecx, ecx
// 009a2f3b  7414                 je 0x9a2f51
// 009a2f3d  6a00                 push 0
// 009a2f3f  e8ec20feff           call 0x985030
// 009a2f44  8b4658               mov eax, dword ptr [esi + 0x58]
// 009a2f47  83c004               add eax, 4
// 009a2f4a  50                   push eax
// 009a2f4b  ff159821b200         call dword ptr [0xb22198]
// 009a2f51  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 009a2f54  8b4114               mov eax, dword ptr [ecx + 0x14]
// 009a2f57  85c0                 test eax, eax
// 009a2f59  7404                 je 0x9a2f5f
// 009a2f5b  8bf0                 mov esi, eax
// 009a2f5d  eb06                 jmp 0x9a2f65
// 009a2f5f  8bb6a0000000         mov esi, dword ptr [esi + 0xa0]
// 009a2f65  85f6                 test esi, esi
// 009a2f67  7417                 je 0x9a2f80
// 009a2f69  8b7620               mov esi, dword ptr [esi + 0x20]
// 009a2f6c  85f6                 test esi, esi
// 009a2f6e  7410                 je 0x9a2f80
// 009a2f70  6a00                 push 0
// 009a2f72  6a00                 push 0
// 009a2f74  6857280000           push 0x2857
// 009a2f79  56                   push esi
// 009a2f7a  ff15043cb200         call dword ptr [0xb23c04]
// 009a2f80  5f                   pop edi
// 009a2f81  5e                   pop esi
// 009a2f82  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPCommandBars.cpp (function ?SetDragControl@CXTPCommandBars@@QAEXPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPCommandBars.cpp
