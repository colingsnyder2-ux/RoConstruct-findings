// roc 2009-12 008c1df0  unit: CXTPImageEditorDlg::CDlgToolBar  size: 274 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c1df0
//
// 008c1df0  6aff                 push -1
// 008c1df2  68483f9600           push 0x963f48
// 008c1df7  64a100000000         mov eax, dword ptr fs:[0]
// 008c1dfd  50                   push eax
// 008c1dfe  83ec10               sub esp, 0x10
// 008c1e01  56                   push esi
// 008c1e02  57                   push edi
// 008c1e03  a10052b600           mov eax, dword ptr [0xb65200]
// 008c1e08  33c4                 xor eax, esp
// 008c1e0a  50                   push eax
// 008c1e0b  8d44241c             lea eax, [esp + 0x1c]
// 008c1e0f  64a300000000         mov dword ptr fs:[0], eax
// 008c1e15  8bf1                 mov esi, ecx
// 008c1e17  8b4620               mov eax, dword ptr [esi + 0x20]
// 008c1e1a  50                   push eax
// 008c1e1b  ff1504cc9800         call dword ptr [0x98cc04]
// 008c1e21  85c0                 test eax, eax
// 008c1e23  0f84c7000000         je 0x8c1ef0
// 008c1e29  ff151ccc9800         call dword ptr [0x98cc1c]
// 008c1e2f  85c0                 test eax, eax
// 008c1e31  7518                 jne 0x8c1e4b
// 008c1e33  ff150ccc9800         call dword ptr [0x98cc0c]
// 008c1e39  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008c1e3d  64890d00000000       mov dword ptr fs:[0], ecx
// 008c1e44  59                   pop ecx
// 008c1e45  5f                   pop edi
// 008c1e46  5e                   pop esi
// 008c1e47  83c41c               add esp, 0x1c
// 008c1e4a  c3                   ret 
// 008c1e4b  33ff                 xor edi, edi
// 008c1e4d  897c2414             mov dword ptr [esp + 0x14], edi
// 008c1e51  c7442410148aa000     mov dword ptr [esp + 0x10], 0xa08a14
// 008c1e59  897c2418             mov dword ptr [esp + 0x18], edi
// 008c1e5d  897c2424             mov dword ptr [esp + 0x24], edi
// 008c1e61  e86adbf6ff           call 0x82f9d0
// 008c1e66  6a0f                 push 0xf
// 008c1e68  8bc8                 mov ecx, eax
// 008c1e6a  e891d2f6ff           call 0x82f100
// 008c1e6f  57                   push edi
// 008c1e70  50                   push eax
// 008c1e71  68fffeff00           push 0xfffeff
// 008c1e76  83ec08               sub esp, 8
// 008c1e79  8bc4                 mov eax, esp
// 008c1e7b  8938                 mov dword ptr [eax], edi
// 008c1e7d  897804               mov dword ptr [eax + 4], edi
// 008c1e80  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 008c1e83  8b5654               mov edx, dword ptr [esi + 0x54]
// 008c1e86  8b467c               mov eax, dword ptr [esi + 0x7c]
// 008c1e89  89642420             mov dword ptr [esp + 0x20], esp
// 008c1e8d  51                   push ecx
// 008c1e8e  52                   push edx
// 008c1e8f  50                   push eax
// 008c1e90  8d4c2430             lea ecx, [esp + 0x30]
// 008c1e94  51                   push ecx
// 008c1e95  e806fcffff           call 0x8c1aa0
// 008c1e9a  83c424               add esp, 0x24
// 008c1e9d  8d4c2410             lea ecx, [esp + 0x10]
// 008c1ea1  e8c8460600           call 0x92656e
// 008c1ea6  8b3518cc9800         mov esi, dword ptr [0x98cc18]
// 008c1eac  50                   push eax
// 008c1ead  6a02                 push 2
// 008c1eaf  ffd6                 call esi
// 008c1eb1  397c2418             cmp dword ptr [esp + 0x18], edi
// 008c1eb5  741a                 je 0x8c1ed1
// 008c1eb7  e8f4e5f4ff           call 0x8104b0
// 008c1ebc  6a01                 push 1
// 008c1ebe  6a02                 push 2
// 008c1ec0  ff15c8b19800         call dword ptr [0x98b1c8]
// 008c1ec6  0fb715b4adb900       movzx edx, word ptr [0xb9adb4]
// 008c1ecd  50                   push eax
// 008c1ece  52                   push edx
// 008c1ecf  ffd6                 call esi
// 008c1ed1  ff150ccc9800         call dword ptr [0x98cc0c]
// 008c1ed7  8d4c2410             lea ecx, [esp + 0x10]
// 008c1edb  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 008c1ee3  c744241018229a00     mov dword ptr [esp + 0x10], 0x9a2218
// 008c1eeb  e840d3b4ff           call 0x40f230
// 008c1ef0  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008c1ef4  64890d00000000       mov dword ptr fs:[0], ecx
// 008c1efb  59                   pop ecx
// 008c1efc  5f                   pop edi
// 008c1efd  5e                   pop esi
// 008c1efe  83c41c               add esp, 0x1c
// 008c1f01  c3                   ret 
// copied from an identical function in another client (function ?Copy@CXTPImageEditorPicture@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/CommandBars/XTPImageEditor.cpp