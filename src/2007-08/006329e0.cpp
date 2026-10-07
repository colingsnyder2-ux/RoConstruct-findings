// roc 2007-08 006329e0  unit: CXTPCommandBarKeyboardTip  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006329e0
//
// 006329e0  8b442404             mov eax, dword ptr [esp + 4]
// 006329e4  56                   push esi
// 006329e5  8bf1                 mov esi, ecx
// 006329e7  57                   push edi
// 006329e8  8b7e58               mov edi, dword ptr [esi + 0x58]
// 006329eb  3bf8                 cmp edi, eax
// 006329ed  7432                 je 0x632a21
// 006329ef  85ff                 test edi, edi
// 006329f1  894658               mov dword ptr [esi + 0x58], eax
// 006329f4  7410                 je 0x632a06
// 006329f6  6a01                 push 1
// 006329f8  8bcf                 mov ecx, edi
// 006329fa  e8917c0000           call 0x63a690
// 006329ff  8bcf                 mov ecx, edi
// 00632a01  e8ded7ffff           call 0x6301e4
// 00632a06  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 00632a09  85c9                 test ecx, ecx
// 00632a0b  7414                 je 0x632a21
// 00632a0d  6a00                 push 0
// 00632a0f  e87c7c0000           call 0x63a690
// 00632a14  8b4658               mov eax, dword ptr [esi + 0x58]
// 00632a17  83c004               add eax, 4
// 00632a1a  50                   push eax
// 00632a1b  ff15ecd27700         call dword ptr [0x77d2ec]
// 00632a21  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 00632a24  8b4114               mov eax, dword ptr [ecx + 0x14]
// 00632a27  85c0                 test eax, eax
// 00632a29  7404                 je 0x632a2f
// 00632a2b  8bf0                 mov esi, eax
// 00632a2d  eb06                 jmp 0x632a35
// 00632a2f  8bb6a0000000         mov esi, dword ptr [esi + 0xa0]
// 00632a35  85f6                 test esi, esi
// 00632a37  7417                 je 0x632a50
// 00632a39  8b7620               mov esi, dword ptr [esi + 0x20]
// 00632a3c  85f6                 test esi, esi
// 00632a3e  7410                 je 0x632a50
// 00632a40  6a00                 push 0
// 00632a42  6a00                 push 0
// 00632a44  6857280000           push 0x2857
// 00632a49  56                   push esi
// 00632a4a  ff15d8ec7700         call dword ptr [0x77ecd8]
// 00632a50  5f                   pop edi
// 00632a51  5e                   pop esi
// 00632a52  c20400               ret 4
// library xtp-11.2.2-vc8/Source\CommandBars\XTPCommandBars.cpp (function ?SetDragControl@CXTPCommandBars@@QAEXPAVCXTPControl@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPCommandBars.cpp
