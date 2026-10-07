// roc 2008-06 00770d30  unit: CXTPImageEditorPicture  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00770d30
//
// 00770d30  56                   push esi
// 00770d31  8bf1                 mov esi, ecx
// 00770d33  8b467c               mov eax, dword ptr [esi + 0x7c]
// 00770d36  6a0c                 push 0xc
// 00770d38  894678               mov dword ptr [esi + 0x78], eax
// 00770d3b  e8e0fbf2ff           call 0x6a0920
// 00770d40  33c9                 xor ecx, ecx
// 00770d42  83c404               add esp, 4
// 00770d45  3bc1                 cmp eax, ecx
// 00770d47  740e                 je 0x770d57
// 00770d49  894804               mov dword ptr [eax + 4], ecx
// 00770d4c  c70074758600         mov dword ptr [eax], 0x867574
// 00770d52  894808               mov dword ptr [eax + 8], ecx
// 00770d55  eb02                 jmp 0x770d59
// 00770d57  33c0                 xor eax, eax
// 00770d59  8b542408             mov edx, dword ptr [esp + 8]
// 00770d5d  51                   push ecx
// 00770d5e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00770d62  68fffeff00           push 0xfffeff
// 00770d67  68fffeff00           push 0xfffeff
// 00770d6c  51                   push ecx
// 00770d6d  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 00770d70  52                   push edx
// 00770d71  8b5654               mov edx, dword ptr [esi + 0x54]
// 00770d74  51                   push ecx
// 00770d75  8b4e78               mov ecx, dword ptr [esi + 0x78]
// 00770d78  52                   push edx
// 00770d79  51                   push ecx
// 00770d7a  50                   push eax
// 00770d7b  89467c               mov dword ptr [esi + 0x7c], eax
// 00770d7e  e84ddbffff           call 0x76e8d0
// 00770d83  83c424               add esp, 0x24
// 00770d86  8bce                 mov ecx, esi
// 00770d88  e893fbffff           call 0x770920
// 00770d8d  5e                   pop esi
// 00770d8e  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPImageEditor.cpp (function ?MovePicture@CXTPImageEditorPicture@@QAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPImageEditor.cpp
