// roc 2010-06 00878180  unit: CXTPImageEditorPicture  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00878180
//
// 00878180  56                   push esi
// 00878181  8bf1                 mov esi, ecx
// 00878183  8b467c               mov eax, dword ptr [esi + 0x7c]
// 00878186  6a0c                 push 0xc
// 00878188  894678               mov dword ptr [esi + 0x78], eax
// 0087818b  e810f8f2ff           call 0x7a79a0
// 00878190  33c9                 xor ecx, ecx
// 00878192  83c404               add esp, 4
// 00878195  3bc1                 cmp eax, ecx
// 00878197  740e                 je 0x8781a7
// 00878199  894804               mov dword ptr [eax + 4], ecx
// 0087819c  c700fccca600         mov dword ptr [eax], 0xa6ccfc
// 008781a2  894808               mov dword ptr [eax + 8], ecx
// 008781a5  eb02                 jmp 0x8781a9
// 008781a7  33c0                 xor eax, eax
// 008781a9  8b542408             mov edx, dword ptr [esp + 8]
// 008781ad  51                   push ecx
// 008781ae  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008781b2  68fffeff00           push 0xfffeff
// 008781b7  68fffeff00           push 0xfffeff
// 008781bc  51                   push ecx
// 008781bd  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 008781c0  52                   push edx
// 008781c1  8b5654               mov edx, dword ptr [esi + 0x54]
// 008781c4  51                   push ecx
// 008781c5  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 008781c8  52                   push edx
// 008781c9  51                   push ecx
// 008781ca  50                   push eax
// 008781cb  89467c               mov dword ptr [esi + 0x7c], eax
// 008781ce  e8eddaffff           call 0x875cc0
// 008781d3  83c424               add esp, 0x24
// 008781d6  8bce                 mov ecx, esi
// 008781d8  e893fbffff           call 0x877d70
// 008781dd  5e                   pop esi
// 008781de  c20800               ret 8
// copied from an identical function in another client (function ?MovePicture@CXTPImageEditorPicture@@QAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/CommandBars/XTPImageEditor.cpp