// roc 2007-03 0054a390  unit: seg_00540000  size: 183 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0054a390
//
// 0054a390  6aff                 push -1
// 0054a392  681f317500           push 0x75311f
// 0054a397  64a100000000         mov eax, dword ptr fs:[0]
// 0054a39d  50                   push eax
// 0054a39e  64892500000000       mov dword ptr fs:[0], esp
// 0054a3a5  83ec0c               sub esp, 0xc
// 0054a3a8  53                   push ebx
// 0054a3a9  c744240400000000     mov dword ptr [esp + 4], 0
// 0054a3b1  56                   push esi
// 0054a3b2  b9c8be8b00           mov ecx, 0x8bbec8
// 0054a3b7  c744240cc8be8b00     mov dword ptr [esp + 0xc], 0x8bbec8
// 0054a3bf  e8bcc61d00           call 0x726a80
// 0054a3c4  bb01000000           mov ebx, 1
// 0054a3c9  885c2410             mov byte ptr [esp + 0x10], bl
// 0054a3cd  841dc0be8b00         test byte ptr [0x8bbec0], bl
// 0054a3d3  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0054a3d7  7522                 jne 0x54a3fb
// 0054a3d9  091dc0be8b00         or dword ptr [0x8bbec0], ebx
// 0054a3df  68b8be8b00           push 0x8bbeb8
// 0054a3e4  c644242002           mov byte ptr [esp + 0x20], 2
// 0054a3e9  e822ffffff           call 0x54a310
// 0054a3ee  6810997700           push 0x779910
// 0054a3f3  e8bb4d0d00           call 0x61f1b3
// 0054a3f8  83c408               add esp, 8
// 0054a3fb  a1b8be8b00           mov eax, dword ptr [0x8bbeb8]
// 0054a400  8b742424             mov esi, dword ptr [esp + 0x24]
// 0054a404  8906                 mov dword ptr [esi], eax
// 0054a406  8b0dbcbe8b00         mov ecx, dword ptr [0x8bbebc]
// 0054a40c  894e04               mov dword ptr [esi + 4], ecx
// 0054a40f  a1bcbe8b00           mov eax, dword ptr [0x8bbebc]
// 0054a414  85c0                 test eax, eax
// 0054a416  7409                 je 0x54a421
// 0054a418  83c004               add eax, 4
// 0054a41b  8bd3                 mov edx, ebx
// 0054a41d  f00fc110             lock xadd dword ptr [eax], edx
// 0054a421  b9c8be8b00           mov ecx, 0x8bbec8
// 0054a426  895c2408             mov dword ptr [esp + 8], ebx
// 0054a42a  c644241c00           mov byte ptr [esp + 0x1c], 0
// 0054a42f  e86cc61d00           call 0x726aa0
// 0054a434  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0054a438  8bc6                 mov eax, esi
// 0054a43a  5e                   pop esi
// 0054a43b  5b                   pop ebx
// 0054a43c  64890d00000000       mov dword ptr fs:[0], ecx
// 0054a443  83c418               add esp, 0x18
// 0054a446  c3                   ret 
// library rbxgs/v8datamodel\GlobalSettings.cpp (function ?singleton@GlobalSettings@RBX@@SA?AV?$shared_ptr@VGlobalSettings@RBX@@@boost@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/GlobalSettings.cpp
