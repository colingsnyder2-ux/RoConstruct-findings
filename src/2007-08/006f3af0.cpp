// from server: 100% by auto
// roc 2007-08 006f3af0  unit: CXTPImageEditorPicture  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f3af0
//
// 006f3af0  56                   push esi
// 006f3af1  8bf1                 mov esi, ecx
// 006f3af3  8b467c               mov eax, dword ptr [esi + 0x7c]
// 006f3af6  6a0c                 push 0xc
// 006f3af8  894678               mov dword ptr [esi + 0x78], eax
// 006f3afb  e8f6c3f3ff           call 0x62fef6
// 006f3b00  33c9                 xor ecx, ecx
// 006f3b02  83c404               add esp, 4
// 006f3b05  3bc1                 cmp eax, ecx
// 006f3b07  740e                 je 0x6f3b17
// 006f3b09  894804               mov dword ptr [eax + 4], ecx
// 006f3b0c  c70074b27d00         mov dword ptr [eax], 0x7db274
// 006f3b12  894808               mov dword ptr [eax + 8], ecx
// 006f3b15  eb02                 jmp 0x6f3b19
// 006f3b17  33c0                 xor eax, eax
// 006f3b19  8b542408             mov edx, dword ptr [esp + 8]
// 006f3b1d  51                   push ecx
// 006f3b1e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006f3b22  68fffeff00           push 0xfffeff
// 006f3b27  68fffeff00           push 0xfffeff
// 006f3b2c  51                   push ecx
// 006f3b2d  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 006f3b30  52                   push edx
// 006f3b31  8b5654               mov edx, dword ptr [esi + 0x54]
// 006f3b34  51                   push ecx
// 006f3b35  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 006f3b38  52                   push edx
// 006f3b39  51                   push ecx
// 006f3b3a  50                   push eax
// 006f3b3b  89467c               mov dword ptr [esi + 0x7c], eax
// 006f3b3e  e84ddaffff           call 0x6f1590
// 006f3b43  83c424               add esp, 0x24
// 006f3b46  8bce                 mov ecx, esi
// 006f3b48  e8a3fbffff           call 0x6f36f0
// 006f3b4d  5e                   pop esi
// 006f3b4e  c20800               ret 8
// library xtp-11.2.2-vc8/Source\CommandBars\XTPImageEditor.cpp (function ?MovePicture@CXTPImageEditorPicture@@QAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPImageEditor.cpp
